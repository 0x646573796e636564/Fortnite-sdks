#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_PDW.BP_PDW_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_PDW_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BP_PDW_C", "AnimGraph");

	Params::UBP_PDW_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PDW_C::ExecuteUbergraph_BP_PDW(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_PDW_C", "ExecuteUbergraph_BP_PDW");

	Params::UBP_PDW_C_ExecuteUbergraph_BP_PDW_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
