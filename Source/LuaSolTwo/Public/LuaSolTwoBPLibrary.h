#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "LuaSolTwoBPLibrary.generated.h"

UCLASS()
class ULuaSolTwoBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Lua")
    static FString ExecuteLuaScript(const FString& LuaCode);

	UFUNCTION(BlueprintCallable, Category = "Lua")
	static FString GetRandomErrorMessage();
};
