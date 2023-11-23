class CfgPatches
{
	class acre_radio_damage
	{
		name="ACRE Radio Damage";
		units[]={};
		weapons[]={};
		version=1;
		requiredAddons[]={};
		author="Mighty";
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACRE_PRC343_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\prc343_icon.paa";
		displayName="AN/PRC-343 (Destroyed)";
		descriptionShort="AN/PRC-343 PRR Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
	class ACRE_PRC148_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\prc148_icon.paa";
		displayName="AN/PRC-148 (Destroyed)";
		descriptionShort="AN/PRC-148 Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
	class ACRE_PRC152_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\PRC152c_ico.paa";
		displayName="AN/PRC-152 (Destroyed)";
		descriptionShort="AN/PRC-152 VHF/UHF Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
	class ACRE_PRC117F_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\PRC117F_ico.paa";
		displayName="AN/PRC-117F (Destroyed)";
		descriptionShort="AN/PRC-117F Manpack Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=120;
			allowedSlots[]={901};
		};
	};
	class ACRE_PRC77_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\prc77_icon.paa";
		displayName="AN/PRC-77 (Destroyed)";
		descriptionShort="AN/PRC-77 Manpack Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=120;
			allowedSlots[]={901};
		};
	};
	class ACRE_SEM52SL_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\sem52sl_icon.paa";
		displayName="SEM 52 SL (Destroyed)";
		descriptionShort="Sender/Empfänger, mobil SEM 52 SL";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
	class ACRE_SEM70_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\sem70_icon.paa";
		displayName="SEM 70 (Destroyed)";
		descriptionShort="Sender/Empfänger, mobil SEM 70";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=120;
			allowedSlots[]={901};
		};
	};
	class ACRE_BF888S_DAMAGED: ACE_ItemCore
	{
		scope=1;
		author="Mighty";
		picture="\acre_radio_damage\img\bf888s_icon.paa";
		displayName="Beofeng 888S (Destroyed)";
		descriptionShort="Beofeng BF-888S UHF Radio";
		descriptionUse="";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class acre_radiodamage
	{
		init="call compile preProcessFileLineNumbers '\acre_radio_damage\cba.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acre_radiodamage_prc152
	{
		init="execVM 'acre_radio_damage\functions\anprc152.sqf';";
	};
	class acre_radiodamage_prc148
	{
		init="execVM 'acre_radio_damage\functions\anprc148.sqf';";
	};
	class acre_radiodamage_prc117
	{
		init="execVM 'acre_radio_damage\functions\anprc117.sqf';";
	};
	class acre_radiodamage_prc77
	{
		init="execVM 'acre_radio_damage\functions\anprc77.sqf';";
	};
	class acre_radiodamage_prc343
	{
		init="execVM 'acre_radio_damage\functions\anprc343.sqf';";
	};
	class acre_radiodamage_sem52
	{
		init="execVM 'acre_radio_damage\functions\sem52.sqf';";
	};
	class acre_radiodamage_sem70
	{
		init="execVM 'acre_radio_damage\functions\sem70.sqf';";
	};
	class acre_radiodamage_bf888
	{
		init="execVM 'acre_radio_damage\functions\bf888.sqf';";
	};
};
