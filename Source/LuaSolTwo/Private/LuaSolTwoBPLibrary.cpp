#include "LuaSolTwoBPLibrary.h"
#include "sol.hpp"
#include "LuaSolTwo.h"
#include "Async/Async.h"
#include "Misc/ScopedSlowTask.h"
#include <sstream>
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"


static TUniquePtr<sol::state> LuaState;
static FString LuaSaveDirectory;

FString ULuaSolTwoBPLibrary::GetRandomErrorMessage()
{
    static const TArray<FString> ErrorMessages = {
        TEXT("Oh, something's broken! Maybe the cosmic ray is to blame?"),
        TEXT("Your code tried to escape... But we caught him!"),
        TEXT("It seems like there should be a smart comment here, but there isn't one."),
        TEXT("It's not a bug, it's your creativity!"),
        TEXT("Error? No, just an unexpected feature!"),
        TEXT("The programmer is tired. Try again after the coffee!"),
        TEXT("Hey, take your time! Let's take it one step at a time..."),
        TEXT ("The code said 'no' and went for a walk."),
        TEXT("Apparently, this place is afraid of the dark. Highlight it with the correct code!"),
        TEXT("Let's make a deal: you write the code, and I pretend to understand."),
        TEXT("Hmm... What if we wait for it to fix itself?"),
        TEXT("Error 404: Joke not found."),
        TEXT ("Your code is so unique that even I didn't understand it."),
        TEXT("It seems that the magic comment // abracadabra is needed here."),
        TEXT("It's not a failure, it's a workout!"),
        TEXT("The code is on vacation. Try again later."),
        TEXT("While you were writing this, I already had a coffee. Try again!"),
        TEXT("Seriously? Is this mistake happening again?"),
        TEXT("Even I, the plugin, did not expect such a turn..."),
        TEXT("Nice try! But no."),
        TEXT("Could it be a magnetic storm? Or is it just a typo?"),
        TEXT("The code has decided to become an artist. Abstractionism is his style."),
        TEXT("Hey, don't be sad! Mistakes are the steps to success!"),
        TEXT ("I would help, but my hands are code."),
        TEXT("Are you sure it's not a secret cipher?"),
        TEXT("Sometimes it's better to restart... But I've already tried."),
        TEXT ("The code is too creative for my understanding."),
        TEXT("Next time it will work! Well, or the next one after the next..."),
        TEXT("Error: too much awesome in the code."),
        TEXT ("My inner voice says that something is wrong here...")
    };

    if(ErrorMessages.Num() == 0)
    {
        return TEXT("IDK");
    }

    return ErrorMessages[FMath::RandRange(0, ErrorMessages.Num() - 1)];
}

ULuaSolTwoBPLibrary::ULuaSolTwoBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    if (!LuaState.IsValid())
    {
        LuaState = MakeUnique<sol::state>();
        LuaState->open_libraries(sol::lib::base, sol::lib::math, sol::lib::bit32, sol::lib::coroutine, sol::lib::count,
            sol::lib::debug, sol::lib::io, sol::lib::jit, sol::lib::os, sol::lib::package,
            sol::lib::string, sol::lib::table, sol::lib::utf8);
        
        const FString ProjectDir = FPaths::ProjectDir();
        LuaSaveDirectory = FPaths::Combine(ProjectDir, TEXT("LuaGeneratedFiles"));
        
        IFileManager::Get().MakeDirectory(*LuaSaveDirectory, true);
        
        if (IFileManager::Get().DirectoryExists(*LuaSaveDirectory))
        {
            UE_LOG(LogTemp, Log, TEXT("Lua save directory: %s"), *LuaSaveDirectory);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create Lua save directory!"));
        }
    }
}

FString ULuaSolTwoBPLibrary::ExecuteLuaScript(const FString& LuaCode)
{
    FString Result;

    try
    {
        std::string LuaCodeStr = TCHAR_TO_UTF8(*LuaCode);

        sol::load_result Script = LuaState->load(LuaCodeStr);

        if (!Script.valid())
        {
            sol::error err = Script;
            Result = GetRandomErrorMessage();
            UE_LOG(LogTemp, Error, TEXT("Lua Compile Error: %s"), UTF8_TO_TCHAR(err.what()));
        }
        else
        {
            std::ostringstream OutputCapture;

            LuaState->set_function("print", [&OutputCapture](sol::variadic_args args) {
                for (auto it = args.begin(); it != args.end(); ++it)
                {
                    OutputCapture << (*it).get<std::string>() << " ";
                }
                });

            sol::protected_function_result Res = Script();

            if (!Res.valid())
            {
                sol::error err = Res;
                Result = GetRandomErrorMessage();
                UE_LOG(LogTemp, Error, TEXT("Lua Runtime Error: %s"), UTF8_TO_TCHAR(err.what()));
            }
            else
            {
                Result = UTF8_TO_TCHAR(OutputCapture.str().c_str());

                if (Res.return_count() > 0)
                {
                    sol::object ReturnValue = Res.get<sol::object>(0);

                    if (ReturnValue.is<int>())
                    {
                        Result += FString::Printf(TEXT("%d"), ReturnValue.as<int>());
                    }
                    else if (ReturnValue.is<double>())
                    {
                        Result += FString::Printf(TEXT("%f"), ReturnValue.as<double>());
                    }
                    else if (ReturnValue.is<std::string>())
                    {
                        Result += UTF8_TO_TCHAR(ReturnValue.as<std::string>().c_str());
                    }
                    else if (ReturnValue.is<sol::lua_nil_t>())
                    {
                        Result += TEXT("nil");
                    }
                    else
                    {
                        Result += TEXT("Unknown return type");
                    }
                }

                if (Result.IsEmpty())
                {
                    Result = TEXT("Lua script executed successfully, but no output or return value.");
                }

                UE_LOG(LogTemp, Log, TEXT("Lua script executed successfully: %s"), *Result);
            }
        }
    }
    catch (const sol::error& e)
    {
        Result = GetRandomErrorMessage();
        UE_LOG(LogTemp, Error, TEXT("Lua Error: %s"), UTF8_TO_TCHAR(e.what()));
    }

    return Result;
}