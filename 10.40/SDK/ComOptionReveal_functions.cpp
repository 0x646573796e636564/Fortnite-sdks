#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ComOptionReveal.ComOptionReveal_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionReveal_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "BP_OnItemExpansionChanged");

	Params::UComOptionReveal_C_BP_OnItemExpansionChanged_Params Parms;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionReveal_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "BP_OnItemSelectionChanged");

	Params::UComOptionReveal_C_BP_OnItemSelectionChanged_Params Parms;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionReveal_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "OnListItemObjectSet");

	Params::UComOptionReveal_C_OnListItemObjectSet_Params Parms;
	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.StartRevealAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionReveal_C::StartRevealAnimation(float PlayRate)
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "StartRevealAnimation");

	Params::UComOptionReveal_C_StartRevealAnimation_Params Parms;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.RevealWinnerAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionReveal_C::RevealWinnerAnimation()
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "RevealWinnerAnimation");

	Params::UComOptionReveal_C_RevealWinnerAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionReveal_C::Construct()
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "Construct");

	Params::UComOptionReveal_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOptionReveal_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "BP_OnEntryReleased");

	Params::UComOptionReveal_C_BP_OnEntryReleased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionReveal_C::Destruct()
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "Destruct");

	Params::UComOptionReveal_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ComOptionReveal.ComOptionReveal_C.ExecuteUbergraph_ComOptionReveal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UComOptionReveal_C::ExecuteUbergraph_ComOptionReveal(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, float K2Node_Event_PlayRate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ComOptionReveal_C", "ExecuteUbergraph_ComOptionReveal");

	Params::UComOptionReveal_C_ExecuteUbergraph_ComOptionReveal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
