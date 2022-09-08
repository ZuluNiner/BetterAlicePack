////////////////////////////////////////////////////////////////////
//DeRap: betterAlicePack\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 02 11:13:49 2022 : 'file' last modified on Wed Dec 31 16:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BetterAlicePack
	{
		units[] = {};
		weapons[] = {};
		name = "Better Alice Pack";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Backpacks"};
	};
};
class CfgMods
{
	class BetterAlicePack
	{
		type = "mod";
		dir = "betterAlicePack";
		name = "Better Alice Pack";
		author = "Z9";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"betterAlicePack/scripts/4_World"};
			};
		};
	};
};
class CfgSlots
{
	class Slot_shoulder2
	{
		name = "shoulder2";
		displayName = "Baseball Bat";
		ghostIcon = "set:dayz_inventory image:shoulderright";
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Inventory_Base;
	class Clothing: Clothing_Base{};
	class AliceBag_ColorBase: Clothing
	{
		attachments[] += {"shoulder2"};
		itemsCargoSize[]={10,10};
	};
	class TelescopicBaton: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class BrassKnuckles_ColorBase: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class PipeWrench: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class BarbedBaseballBat: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class NailedBaseballBat: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class BaseballBat: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class HockeyStick: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class NewHockeyStick: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
	class PoliceBaton: Inventory_Base
	{
		inventorySlot[] = {"shoulder2"};
	};
};
