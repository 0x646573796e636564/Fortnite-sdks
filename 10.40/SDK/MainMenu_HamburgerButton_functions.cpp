#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_HamburgerButton_C::Construct()
{
	static auto Func = Class->GetFunction("MainMenu_HamburgerButton_C", "Construct");

	Params::UMainMenu_HamburgerButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainMenu_HamburgerButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("MainMenu_HamburgerButton_C", "BP_OnHovered");

	Params::UMainMenu_HamburgerButton_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainMenu_HamburgerButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("MainMenu_HamburgerButton_C", "BP_OnUnhovered");

	Params::UMainMenu_HamburgerButton_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.ExecuteUbergraph_MainMenu_HamburgerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_HamburgerButton_C::ExecuteUbergraph_MainMenu_HamburgerButton(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_HamburgerButton_C", "ExecuteUbergraph_MainMenu_HamburgerButton");

	Params::UMainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
