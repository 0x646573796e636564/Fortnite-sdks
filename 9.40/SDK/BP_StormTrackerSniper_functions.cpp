#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_StormTrackerSniper.BP_StormTrackerSniper_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_StormTrackerSniper_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BP_StormTrackerSniper_C", "AnimGraph");

	Params::UBP_StormTrackerSniper_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function BP_StormTrackerSniper.BP_StormTrackerSniper_C.ExecuteUbergraph_BP_StormTrackerSniper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StormTrackerSniper_C::ExecuteUbergraph_BP_StormTrackerSniper(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_StormTrackerSniper_C", "ExecuteUbergraph_BP_StormTrackerSniper");

	Params::UBP_StormTrackerSniper_C_ExecuteUbergraph_BP_StormTrackerSniper_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
