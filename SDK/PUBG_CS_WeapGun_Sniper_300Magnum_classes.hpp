#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Sniper_300Magnum_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_WeapGun_Sniper_300Magnum.CS_WeapGun_Sniper_300Magnum_C
// 0x0000 (0x0160 - 0x0160)
class UCS_WeapGun_Sniper_300Magnum_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0fac9609);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
