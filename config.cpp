class CfgPatches
{
	class RB_Clothing_jinn
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Masks",
			"DZ_Characters_Vests",
			"DZ_Characters_Headgear",
			"DZ_Characters_Gloves",
			"DZ_Data",
			"DZ_Characters_Shoes",
			"DZ_Gear_Containers",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgVehicles
{
	class GhillieAtt_ColorBase;
	class GhillieHood_ColorBase;
	class GhillieSuit_ColorBase;
	class LC_Helm_K63_Base;
	class Haze_Jugg_Bag_ColorBase;
	class BalaclavaMask_ColorBase;
	class MilitaryBoots_Black;
	class TacticalGloves_Black;
	class TrackSuitPants_ColorBase;
	class TrackSuitJacket_ColorBase;
	class PITSTOP_AirForce_Base;
	class Haze_Jugg_Heavy;
	class IMP_Belt_BeltSystem_Large_ColorBase;
	class WeaponBag_ColorBase;
	class Weaponbag_Jinn: WeaponBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\Weaponbag.paa"
		};
	};
	class RB_GhillieSuit_Jinn: GhillieSuit_ColorBase
	{
		displayName="Ghillie Jinn";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa"
		};
	};
	class RB_GhillieHood_Jinn: GhillieHood_ColorBase
	{
		displayName="Ghillie Hood Jinn";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa"
		};
	};
	class RB_GhillieAtt_Jinn: GhillieAtt_ColorBase
	{
		displayName="GhillieAtt Jinn";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\ghillie_jinn.paa"
		};
	};
	class Haze_Jugg_Light;
	class RB_ClanClothing_Jinn_Haze_Jugg_Light: Haze_Jugg_Light
	{
		displayName="Light Juggernaut Vest Jinn";
		descriptionShort="Not really needed, but in case someone shoots back this vest protects every Jinn.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa"
		};
	};
	class IMP_Belt_BeltSystem_Large_Jinn: IMP_Belt_BeltSystem_Large_ColorBase
	{
		displayName="Belt Large (Jinn)";
		scope=2;
		hiddenSelections[]=
		{
			"camoflage",
			"camoflagepouch"
		};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_exact\data\Belt_eXact.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_exact\data\Pouches_eXact.paa"
		};
	};
	class Haze_Jugg_Medium;
	class RB_ClanClothing_Jinn_Haze_Jugg_Medium_Black: Haze_Jugg_Medium
	{
		displayName="Medium Juggernaut Vest Jinn";
		descriptionShort="Even better protection then the light variant.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa"
		};
	};
	class RB_ClanClothing_Jinn_Haze_Jugg_Heavy_Green: Haze_Jugg_Heavy
	{
		displayName="Heavy Juggernaut Vest Jinn";
		descriptionShort="";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\colete.paa"
		};
	};
	class RB_balaclava_Jinn: BalaclavaMask_ColorBase
	{
		displayName="Balaclava Jinn";
		descriptionShort="Stylish Balaclava, owned by Jinn.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\balaclava.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\balaclava.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\balaclava.paa"
		};
	};
	class RB_ClanClothing_jinn_TrackSuit_Jacket: TrackSuitJacket_ColorBase
	{
		displayName="Jacket Jinn";
		descriptionShort="";
		scope=2;
		heatIsolation=0.85000002;
		quickBarBonus=3;
		itemsCargoSize[]={7,6};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\jaqueta_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\jaqueta_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\jaqueta_jinn.paa"
		};
	};
	class RB_ClanClothing_jinn_TrackSuit_Pants: TrackSuitPants_ColorBase
	{
		displayName="Pants Jinn";
		descriptionShort="";
		scope=2;
		heatIsolation=0.85000002;
		quickBarBonus=3;
		itemsCargoSize[]={6,5};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\calca_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\calca_jinn.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\calca_jinn.paa"
		};
	};
	class RB_ClanClothing_Jinn_LC_Helm_K63_Base: LC_Helm_K63_Base
	{
		displayName="K6 Helmet - Jinn";
		scope=2;
		hiddenSelections[]=
		{
			"color"
		};
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\capacete.paa"
		};
	};
	class RB_ClanClothing_Jinn_Haze_Jugg_Bag_DigitalFlora: Haze_Jugg_Bag_ColorBase
	{
		displayName="Juggernaut Smersh Bag Jinn";
		descriptionShort="";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\buttpack.paa"
		};
	};
	class RB_TacticalGloves_Jinn: TacticalGloves_Black
	{
		displayName="Gloves Jinn";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\luvas.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\luvas.paa",
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\luvas.paa"
		};
	};
	class RB_sneakers_airforce_Jinn: PITSTOP_AirForce_Base
	{
		scope=2;
		displayName="Nike Air-Force Jinn";
		hiddenSelectionsTextures[]=
		{
			"RbZezeSkins\Cloths\RB_clanclothing_jinn\data\tenis.paa"
		};
	};
};
