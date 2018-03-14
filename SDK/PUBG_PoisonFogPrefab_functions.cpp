// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PoisonFogPrefab_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonFogPrefab.PoisonFogPrefab_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APoisonFogPrefab_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90320);

	APoisonFogPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.Unknown3129
// (BlueprintEvent)

void APoisonFogPrefab_C::Unknown6056()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90321);

	APoisonFogPrefab_C_Unknown6056_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.Unknown1059
// (BlueprintEvent)

void APoisonFogPrefab_C::Unknown4773()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90322);

	APoisonFogPrefab_C_Unknown4773_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APoisonFogPrefab_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90323);

	APoisonFogPrefab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APoisonFogPrefab_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90325);

	APoisonFogPrefab_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.SetRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void APoisonFogPrefab_C::SetRadius(float* Radius)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90327);

	APoisonFogPrefab_C_SetRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.SetCenter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Center                         (Parm, IsPlainOldData)

void APoisonFogPrefab_C::SetCenter(struct FVector* Center)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90329);

	APoisonFogPrefab_C_SetCenter_Params params;
	params.Center = Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonFogPrefab.PoisonFogPrefab_C.ExecuteUbergraph_PoisonFogPrefab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonFogPrefab_C::ExecuteUbergraph_PoisonFogPrefab(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(90357);

	APoisonFogPrefab_C_ExecuteUbergraph_PoisonFogPrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
