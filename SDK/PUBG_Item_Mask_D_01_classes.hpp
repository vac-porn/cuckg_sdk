#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Mask_D_01_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Mask_D_01.Item_Mask_D_01_C
// 0x0000 (0x0278 - 0x0278)
class UItem_Mask_D_01_C : public UEquipableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2e2380bf);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif