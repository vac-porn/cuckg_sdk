#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Weapon_SmokeBomb_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Weapon_SmokeBomb.Item_Weapon_SmokeBomb_C
// 0x0000 (0x02A0 - 0x02A0)
class UItem_Weapon_SmokeBomb_C : public UThrowableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4b6b0135);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
