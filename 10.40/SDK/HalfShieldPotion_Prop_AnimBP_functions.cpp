#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHalfShieldPotion_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("HalfShieldPotion_Prop_AnimBP_C", "AnimGraph");

	Params::UHalfShieldPotion_Prop_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHalfShieldPotion_Prop_AnimBP_C::ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HalfShieldPotion_Prop_AnimBP_C", "ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP");

	Params::UHalfShieldPotion_Prop_AnimBP_C_ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
