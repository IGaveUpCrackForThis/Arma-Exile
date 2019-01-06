// VD_AllRecipes.hpp

/**
	I have combined the recipes from various souces so I can
	keep better track of them.
*/

/*
	name							= "";
	pictureItem						= "";
	category						= "";
	returnedItems[]					= {};
	requiresConcreteMixer			= 0;	// Concrete mixer is nearby
	requiresFire					= 0;	// Fire is nearby
	requiredInteractionModelGroup	= "";	// See CfgInteractionModels
	requiresOcean					= 0;	// isSurfaceWater test
	tools[]							= {};	// Required tools (matches, gas cooker, etc.)
	components[]					= {};	// Required components
*/

/*
	Categories:
		Buildings
		Consumables
		Electronics
		Explosives
		Floors
		Furniture
		Lights
		Misc
		Signs
		Storages
		Street Stuff
		Supply
		Targets
		Tents
		Trophy
		Walls
*/

///////////////
// Buildings //
///////////////
/** Airplane Hangar */
class AirplaneHangar: Exile_AbstractCraftingRecipe
{
	name							= "Airplane Hangar";
	pictureItem						= "Land_Hangar_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Hangar_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_DuctTape"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class AirplaneHangar: Exile_AbstractCraftingRecipe

/** Airport Control Tower APEX */
class AirportControltowerAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Airport Control Tower APEX";
	pictureItem						= "Land_Airport_01_controlTower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Airport_01_controlTower_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class AirportControltowerAPEX: Exile_AbstractCraftingRecipe

/** Airport Hangar APEX */
class Airport01hangarAPEX: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Airport Hangar APEX";
	pictureItem						= "Land_Airport_01_hangar_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Airport_01_hangar_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class Airport01hangarAPEX: Exile_AbstractCraftingRecipe

/** Airport Tower */
class AirportTower: Exile_AbstractCraftingRecipe
{
	name							= "Airport Tower";
	pictureItem						= "Land_Airport_Tower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Airport_Tower_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class AirportTower: Exile_AbstractCraftingRecipe

/** Bag Bunker (Large) */
class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name							= "Bag Bunker (Large)";
	pictureItem						= "Land_BagBunker_Large_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_MetalWire"},
		{5, "Exile_Item_Sand"},
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class BagBunkerBig: Exile_AbstractCraftingRecipe

/** Bag Bunker Green (Large) APEX */
class BagbunkergreenBig: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Bag Bunker Green (Large) APEX";
	pictureItem						= "Land_Bagbunker_01_large_green_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Bagbunker_01_large_green_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_Rope"}
	};
}; // end class BagbunkergreenBig: Exile_AbstractCraftingRecipe

/** Bag Bunker (Small) */
class BagBunkerSmall: Exile_AbstractCraftingRecipe
{
	name							= "Bag Bunker (Small)";
	pictureItem						= "Land_BagBunker_Small_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_BagBunker_Small_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class BagBunkerSmall: Exile_AbstractCraftingRecipe

/** Bag Bunker Tower */
class BagBunker: Exile_AbstractCraftingRecipe
{
	name							= "Bag Bunker Tower";
	pictureItem						= "Land_BagBunker_Tower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_MetalWire"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class BagBunker: Exile_AbstractCraftingRecipe

/** Barracks */
class Barracks: Exile_AbstractCraftingRecipe
{
	name							= "Barracks";
	pictureItem						= "Land_i_Barracks_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_Barracks_V1_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Barracks: Exile_AbstractCraftingRecipe

/** Barrierbunker Green (Large) APEX */
class BarrierbunkergreenBig: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Barrierbunker Green (Large) APEX";
	pictureItem						= "Land_HBarrier_01_big_tower_green_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_01_big_tower_green_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_Woodlog"}
	};
}; // end class BarrierbunkergreenBig: Exile_AbstractCraftingRecipe

/** Beach Booth */
class BeachBooth: Exile_AbstractCraftingRecipe
{
	name							= "Beach Booth";
	pictureItem						= "Land_BeachBooth_01_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_BeachBooth_01_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_Woodlog"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Rope"}
	};
}; // end class BeachBooth: Exile_AbstractCraftingRecipe

/** Big Bunker APEX */
class BigBunkerAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Big Bunker APEX";
	pictureItem						= "Land_PillboxBunker_01_big_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_PillboxBunker_01_big_F_Kit"},
		{2, "Exile_Item_FuelCanisterEmpty"},
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_Cement"},
		{5, "Exile_Item_Sand"},
		{2, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class BigBunkerAPEX: Exile_AbstractCraftingRecipe

/** Big Bunker (Hexagon) APEX */
class BigBunkerHexAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Big Bunker (Hexagon) APEX";
	pictureItem						= "Land_PillboxBunker_01_hex_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_PillboxBunker_01_hex_F_Kit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class BigBunkerHexAPEX: Exile_AbstractCraftingRecipe

/** Big Bunker (Rectangle) APEX */
class BigBunkerRectangleAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Big Bunker (Rectangle) APEX";
	pictureItem						= "Land_PillboxBunker_01_rectangle_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_PillboxBunker_01_rectangle_F_Kit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class BigBunkerRectangleAPEX: Exile_AbstractCraftingRecipe

/** Big Dome */
class BigDome: Exile_AbstractCraftingRecipe
{
	name							= "Big Dome";
	pictureItem						= "Land_Dome_Big_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Dome_Big_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class BigDome: Exile_AbstractCraftingRecipe

/** Bungalow */
class Bungalow: Exile_AbstractCraftingRecipe
{
	name							= "Bungalow";
	pictureItem						= "Land_i_House_Small_03_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_House_Small_03_V1_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Bungalow: Exile_AbstractCraftingRecipe

/** Bunker (Huge) */
class BunkerHuge: Exile_AbstractCraftingRecipe
{
	name							= "Bunker (Huge)";
	pictureItem						= "Land_Bunker_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Bunker_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Land_Cargo40_light_green_F_Kit"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class BunkerHuge: Exile_AbstractCraftingRecipe

/** Cargo Container Slum House */
class SlumContainer: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Container Slum House";
	pictureItem						= "Land_cargo_house_slum_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_cargo_house_slum_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class SlumContainer: Exile_AbstractCraftingRecipe

/** Cargo Patrol */
class LandCargoPatrol: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Patrol";
	pictureItem						= "Land_Cargo_Patrol_V2_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Cargo_Patrol_V2_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_JunkMetal"}
	};
}; // end class LandCargoPatrol: Exile_AbstractCraftingRecipe

/** Cargo Tower (Large) */
class CargoTowerBig: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Tower (Large)";
	pictureItem						= "Land_Cargo_Tower_V2_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Cargo_Tower_V2_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{1, "Land_Cargo_House_V2_F_Kit"},
	};
}; // end class CargoTowerBig: Exile_AbstractCraftingRecipe

/** Castle Tower */
class CastleTower: Exile_AbstractCraftingRecipe
{
	name							= "Castle Tower";
	pictureItem						= "Land_Castle_01_tower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Castle_01_tower_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CastleTower: Exile_AbstractCraftingRecipe

/** Fuel Station Shed */
class FuelstationShed: Exile_AbstractCraftingRecipe
{
	name							= "Fuel Station Shed";
	pictureItem						= "Land_FuelStation_Shed_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_FuelStation_Shed_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class FuelstationShed: Exile_AbstractCraftingRecipe

/** Garage */
class Garage: Exile_AbstractCraftingRecipe
{
	name							= "Garage";
	pictureItem						= "Land_i_Garage_V2_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_Garage_V2_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Garage: Exile_AbstractCraftingRecipe

/** Garage Shelter APEX */
class GarageShelterAPEX: Exile_AbstractCraftingRecipe	// v0.2.7
{
	name							= "Garage Shelter APEX";
	pictureItem						= "Land_GarageShelter_01_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_GarageShelter_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class GarageShelterAPEX: Exile_AbstractCraftingRecipe

/** Helipad */
class HeliPad: Exile_AbstractCraftingRecipe
{
	name							= "Helipad";
	pictureItem						= "Land_HelipadCivil_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_HelipadCivil_F_Kit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_DuctTape"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class HeliPad: Exile_AbstractCraftingRecipe

/** Helipad EBM */
class EBM_Helipad: Exile_AbstractCraftingRecipe
{
	name							= "Helipad EBM";
	pictureItem						= "EBM_Helipad_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "EBM_Helipad_Kit"},
		{3, "Exile_Item_FuelCanisterEmpty"},
		{3, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_FuelCanisterFull"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class EBM_Helipad: Exile_AbstractCraftingRecipe

/** House (Big) */
class HouseBig: Exile_AbstractCraftingRecipe
{
	name							= "House (Big)";
	pictureItem						= "Land_i_House_Big_01_V2_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_House_Big_01_V2_F_Kit"},
		{2, "Exile_Item_FuelCanisterEmpty"},
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class HouseBig: Exile_AbstractCraftingRecipe

/** Metal Shed */
class MetalShed: Exile_AbstractCraftingRecipe
{
	name							= "Metal Shed";
	pictureItem						= "Land_Metal_Shed_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Woodlog"}
	};
}; // end class MetalShed: Exile_AbstractCraftingRecipe

/** Military Cargo House */
class CargoHouse: Exile_AbstractCraftingRecipe
{
	name							= "Military Cargo House";
	pictureItem						= "Land_Cargo_House_V2_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_JunkMetal"}
	};
}; // end class CargoHouse: Exile_AbstractCraftingRecipe

/** Pier (Long) */
class Pier1: Exile_AbstractCraftingRecipe
{
	name							= "Pier (Long)";
	pictureItem						= "Land_nav_pier_m_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_nav_pier_m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Pier1: Exile_AbstractCraftingRecipe

/** Pier (Small) */
class Pier: Exile_AbstractCraftingRecipe
{
	name							= "Pier (Small)";
	pictureItem						= "Land_Pier_small_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Pier_small_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_Woodlog"},
		{5, "Exile_Item_MetalScrews"}
	};
}; // end class Pier: Exile_AbstractCraftingRecipe

/** Pier Box */
class Pierbox: Exile_AbstractCraftingRecipe
{
	name							= "Pier Box";
	pictureItem						= "Land_Pier_Box_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Pier_Box_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Pierbox: Exile_AbstractCraftingRecipe

/** Platform */
class Platform: Exile_AbstractCraftingRecipe
{
	name							= "Platform";
	pictureItem						= "Land_GH_Platform_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_GH_Platform_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Platform: Exile_AbstractCraftingRecipe

/** Radar (Small) */
class Radarsmall: Exile_AbstractCraftingRecipe
{
	name							= "Radar (Small)";
	pictureItem						= "Land_Radar_Small_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Radar_Small_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class Radarsmall: Exile_AbstractCraftingRecipe

/** Research Building (HQ) */
class ResearchBig: Exile_AbstractCraftingRecipe
{
	name							= "Research Building (HQ)";
	pictureItem						= "Land_Research_HQ_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Research_HQ_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class ResearchBig: Exile_AbstractCraftingRecipe

/** Research Building (Small) */
class ResearchSmall: Exile_AbstractCraftingRecipe
{
	name							= "Research Building (Small)";
	pictureItem						= "Land_Research_house_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Research_house_V1_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class ResearchSmall: Exile_AbstractCraftingRecipe

/** Sandbag Tower */
class SandbagTower: Exile_AbstractCraftingRecipe
{
	name							= "Sandbag Tower";
	pictureItem						= "Land_HBarrierTower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"}
	};
}; // end class SandbagTower: Exile_AbstractCraftingRecipe

/** Sandbag Tower (Green) APEX */
class SandbagtowerGreenAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Sandbag Tower (Green) APEX";
	pictureItem						= "Land_HBarrier_01_big_tower_green_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_01_big_tower_green_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_Sand"}
	};
}; // end class SandbagtowerGreenAPEX: Exile_AbstractCraftingRecipe

/** Shed (Big) */
class BigShed: Exile_AbstractCraftingRecipe
{
	name							= "Shed (Big)";
	pictureItem						= "Land_Shed_Big_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Shed_Big_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalPole"}
	};
}; // end class BigShed: Exile_AbstractCraftingRecipe

/** Shed (Broken) */
class Brokenshed: Exile_AbstractCraftingRecipe
{
	name							= "Shed (Broken)";
	pictureItem						= "Land_u_Addon_01_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_u_Addon_01_V1_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class Brokenshed: Exile_AbstractCraftingRecipe

/** Shed (Small) */
class SmallShed: Exile_AbstractCraftingRecipe
{
	name							= "Shed (Small)";
	pictureItem						= "Land_Shed_Small_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_Shed_Small_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class SmallShed: Exile_AbstractCraftingRecipe

/** Shooting Pos */
class ShootingPos: Exile_AbstractCraftingRecipe
{
	name							= "Shooting Pos";
	pictureItem						= "ShootingPos_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "ShootingPos_F_Kit"}
	};
	components[]					=
	{
		{4, "Exile_Item_Woodlog"}
	};
}; // end class ShootingPos: Exile_AbstractCraftingRecipe

/** Solar Tower */
class SolarTower: Exile_AbstractCraftingRecipe
{
	name							= "Solar Tower";
	pictureItem						= "Land_spp_Tower_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_spp_Tower_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class SolarTower: Exile_AbstractCraftingRecipe

/** Tavern */
class Tavern: Exile_AbstractCraftingRecipe
{
	name							= "Tavern";
	pictureItem						= "Land_i_Addon_03_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_Addon_03_V1_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class Tavern: Exile_AbstractCraftingRecipe

/** Tavern (Middle) */
class TavernMiddle: Exile_AbstractCraftingRecipe
{
	name							= "Tavern (Middle)";
	pictureItem						= "Land_i_Addon_03mid_V1_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_i_Addon_03mid_V1_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class TavernMiddle: Exile_AbstractCraftingRecipe

/** Tourist Shelter */
class TouristShelter: Exile_AbstractCraftingRecipe
{
	name							= "Tourist Shelter";
	pictureItem						= "Land_TouristShelter_01_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_TouristShelter_01_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class TouristShelter: Exile_AbstractCraftingRecipe

/** Trench (Forest) APEX */
class TrenchForestAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Trench (Forest) APEX";
	pictureItem						= "Land_trench_01_forest_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_trench_01_forest_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_Woodlog"},
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class TrenchForestAPEX: Exile_AbstractCraftingRecipe

/** Trench (Grass) APEX */
class TrenchGrassAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Trench (Grass) APEX";
	pictureItem						= "Land_trench_01_grass_F_Kit";
	category						= "Buildings";
	returnedItems[]					=
	{
		{1, "Land_trench_01_grass_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_Woodlog"},
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class TrenchGrassAPEX: Exile_AbstractCraftingRecipe


/////////////////
// Consumables //
/////////////////
/** Alsatian Steak */
class CookAlsatianSteak: Exile_AbstractCraftingRecipe
{
	name							= "Cook Alsatian Steak";
	pictureItem						= "Exile_Item_AlsatianSteak_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_AlsatianSteak_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_AlsatianSteak_Raw"}
	};
}; // end class CookAlsatianSteak: Exile_AbstractCraftingRecipe

/** BBQ Sandwich */
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name							= "Cook BBQ Sandwich";
	pictureItem						= "Exile_Item_BBQSandwich_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_BBQSandwich"}
	};
}; // end class CookBBQSandwich: Exile_AbstractCraftingRecipe

/** Cat Shark Filet */
class CookCatSharkFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Cat Shark Filet";
	pictureItem						= "Exile_Item_CatSharkFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_CatSharkFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_CatSharkFilet_Raw"}
	};
}; // end class CookCatSharkFilet: Exile_AbstractCraftingRecipe

/** Chicken Filet */
class CookChickenFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Chicken Filet";
	pictureItem						= "Exile_Item_ChickenFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_ChickenFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_ChickenFilet_Raw"}
	};
}; // end class CookChickenFilet: Exile_AbstractCraftingRecipe

/** Christmas Tinner */
class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name							= "Cook Christmas Tinner";
	pictureItem						= "Exile_Item_ChristmasTinner_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
}; // end class CookChristmasTinner: Exile_AbstractCraftingRecipe

/** Coffee */
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name							= "Brew Coffee";
	pictureItem						= "Exile_Item_PlasticBottleCoffee";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_InstantCoffee"},
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
}; // end class CookCoffee: Exile_AbstractCraftingRecipe

/** Fin Steak */
class CookFinSteak: Exile_AbstractCraftingRecipe
{
	name							= "Cook Fin Steak";
	pictureItem						= "Exile_Item_FinSteak_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_FinSteak_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_FinSteak_Raw"}
	};
}; // end class CookFinSteak: Exile_AbstractCraftingRecipe

/** Fresh Water */
class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name							= "Clean Dirty Water";
	pictureItem						= "Exile_Item_PlasticBottleFreshWater";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
}; // end class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name							= "Clean Salt Water";
	pictureItem						= "Exile_Item_PlasticBottleFreshWater";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
}; // end class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name							= "Fill Fresh Water";
	pictureItem						= "Exile_Item_PlasticBottleFreshWater";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	requiredInteractionModelGroup	= "CleanWaterSource";
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
}; // end class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe

/** Glorious Knakworst */
class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name							= "Cook Glorious Knakworst";
	pictureItem						= "Exile_Item_GloriousKnakworst_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
}; // end class CookGloriousKnakworst: Exile_AbstractCraftingRecipe

/** Goat Steak */
class CookGoatSteak: Exile_AbstractCraftingRecipe
{
	name							= "Cook Goat Steak";
	pictureItem						= "Exile_Item_GoatSteak_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_GoatSteak_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_GoatSteak_Raw"}
	};
}; // end class CookGoatSteak: Exile_AbstractCraftingRecipe

/** Macas Cheese */
class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name							= "Cook Macas Cheese";
	pictureItem						= "Exile_Item_MacasCheese_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_MacasCheese"}
	};
}; // end class CookMacasCheese: Exile_AbstractCraftingRecipe

/** Mackerel Filet */
class CookMackerelFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Mackerel Filet";
	pictureItem						= "Exile_Item_MackerelFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_MackerelFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_MackerelFilet_Raw"}
	};
}; // end class CookMackerelFilet: Exile_AbstractCraftingRecipe

/** Mullet Filet */
class CookMulletFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Mullet Filet";
	pictureItem						= "Exile_Item_MulletFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_MulletFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_MulletFilet_Raw"}
	};
}; // end class CookMulletFilet: Exile_AbstractCraftingRecipe

/** Ornate Filet */
class CookOrnateFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Ornate Filet";
	pictureItem						= "Exile_Item_OrnateFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_OrnateFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_OrnateFilet_Raw"}
	};
}; // end class CookOrnateFilet: Exile_AbstractCraftingRecipe

/** Rabbit Steak */
class CookRabbitSteak: Exile_AbstractCraftingRecipe
{
	name							= "Cook Rabbit Steak";
	pictureItem						= "Exile_Item_RabbitSteak_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_RabbitSteak_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_RabbitSteak_Raw"}
	};
}; // end class CookRabbitSteak: Exile_AbstractCraftingRecipe

/** Rooster Filet */
class CookRoosterFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Rooster Filet";
	pictureItem						= "Exile_Item_RoosterFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_RoosterFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_RoosterFilet_Raw"}
	};
}; // end class CookRoosterFilet: Exile_AbstractCraftingRecipe

/** Salema Filet */
class CookSalemaFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Salema Filet";
	pictureItem						= "Exile_Item_SalemaFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_SalemaFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_SalemaFilet_Raw"}
	};
}; // end class CookSalemaFilet: Exile_AbstractCraftingRecipe

/** Salt Water */
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name							= "Fill Salt Water";
	pictureItem						= "Exile_Item_PlasticBottleSaltWater";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	requiresOcean					= true;
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
}; // end class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe

/** Sausage Gravy */
class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name							= "Cook Sausage Gravy";
	pictureItem						= "Exile_Item_SausageGravy_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_SausageGravy"}
	};
}; // end class CookSausageGravy: Exile_AbstractCraftingRecipe

/** Sheep Steak */
class CookSheepSteak: Exile_AbstractCraftingRecipe
{
	name							= "Cook Sheep Steak";
	pictureItem						= "Exile_Item_SheepSteak_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_SheepSteak_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_SheepSteak_Raw"}
	};
}; // end class CookSheepSteak: Exile_AbstractCraftingRecipe

/** Snake Filet */
class CookSnakeFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Snake Filet";
	pictureItem						= "Exile_Item_SnakeFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_SnakeFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_SnakeFilet_Raw"}
	};
}; // end class CookSnakeFilet: Exile_AbstractCraftingRecipe

/** Surströmming */
class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name							= "Cook Surströmming";
	pictureItem						= "Exile_Item_Surstromming_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_Surstromming"}
	};
}; // end class CookSurstromming: Exile_AbstractCraftingRecipe

/** Tuna Filet */
class CookTunaFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Tuna Filet";
	pictureItem						= "Exile_Item_TunaFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_TunaFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_TunaFilet_Raw"}
	};
}; // end class CookTunaFilet: Exile_AbstractCraftingRecipe

/** Turtle Filet */
class CookTurtleFilet: Exile_AbstractCraftingRecipe
{
	name							= "Cook Turtle Filet";
	pictureItem						= "Exile_Item_TurtleFilet_Cooked";
	category						= "Consumables";
	returnedItems[]					=
	{
		{1, "Exile_Item_TurtleFilet_Cooked"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_CookingPot"
	};
	components[]					=
	{
		{1, "Exile_Item_TurtleFilet_Raw"}
	};
}; // end class CookTurtleFilet: Exile_AbstractCraftingRecipe


/////////////////
// Electronics //
/////////////////
/** ATM */
class ATM: Exile_AbstractCraftingRecipe
{
	name							= "ATM";
	pictureItem						= "Land_Atm_02_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_Atm_02_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"}
	};
}; // end class ATM: Exile_AbstractCraftingRecipe

/** ATM EBM */
class EBM_ATM: Exile_AbstractCraftingRecipe
{
	name							= "ATM EBM";
	pictureItem						= "EBM_ATM_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "EBM_ATM_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"}
	};
}; // end class EBM_ATM: Exile_AbstractCraftingRecipe

/** Flat TV */
class FlatTV: Exile_AbstractCraftingRecipe
{
	name							= "Flat TV";
	pictureItem						= "Land_FlatTV_01_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_FlatTV_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class FlatTV: Exile_AbstractCraftingRecipe

/** Microwave */
class Microwave: Exile_AbstractCraftingRecipe
{
	name							= "Microwave";
	pictureItem						= "Land_Microwave_01_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_Microwave_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class Microwave: Exile_AbstractCraftingRecipe

/** PC Case */
class PCCase: Exile_AbstractCraftingRecipe
{
	name							= "PC Case";
	pictureItem						= "Land_PCSet_01_case_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_PCSet_01_case_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{3, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class PCCase: Exile_AbstractCraftingRecipe

/** PC Keyboard */
class PCKeyboard: Exile_AbstractCraftingRecipe
{
	name							= "PC Keyboard";
	pictureItem						= "Land_PCSet_01_keyboard_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_PCSet_01_keyboard_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class PCKeyboard: Exile_AbstractCraftingRecipe

/** PC Mouse */
class PCMouse: Exile_AbstractCraftingRecipe
{
	name							= "PC Mouse";
	pictureItem						= "Land_PCSet_01_mouse_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_PCSet_01_mouse_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class PCMouse: Exile_AbstractCraftingRecipe

/** PC Screen */
class PCScreen: Exile_AbstractCraftingRecipe
{
	name							= "PC Screen";
	pictureItem						= "Land_PCSet_01_screen_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_PCSet_01_screen_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class PCScreen: Exile_AbstractCraftingRecipe

/** Printer */
class Printer: Exile_AbstractCraftingRecipe
{
	name							= "Printer";
	pictureItem						= "Land_Printer_01_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_Printer_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class Printer: Exile_AbstractCraftingRecipe

/** Projector */
class Projector: Exile_AbstractCraftingRecipe
{
	name							= "Projector";
	pictureItem						= "Land_Projector_01_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_Projector_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class Projector: Exile_AbstractCraftingRecipe

/** Satellite Antenna */
class SatelliteAntenna: Exile_AbstractCraftingRecipe
{
	name							= "Satellite Antenna";
	pictureItem						= "Land_SatelliteAntenna_01_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_SatelliteAntenna_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class SatelliteAntenna: Exile_AbstractCraftingRecipe

/** Solar Panel */
class SolarPanel: Exile_AbstractCraftingRecipe
{
	name							= "Solar Panel";
	pictureItem						= "Land_SolarPanel_2_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_SolarPanel_2_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class SolarPanel: Exile_AbstractCraftingRecipe

/** Solar Panel #2 */
class SolarPanel2: Exile_AbstractCraftingRecipe
{
	name							= "Solar Panel #2";
	pictureItem						= "Land_spp_Panel_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_spp_Panel_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class SolarPanel2: Exile_AbstractCraftingRecipe

/** Transmission Tower */
class TransmissionTower: Exile_AbstractCraftingRecipe
{
	name							= "Transmission Tower";
	pictureItem						= "Land_TTowerSmall_1_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_TTowerSmall_1_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox"
	};
	components[]					=
	{
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Rope"}
	};
}; // end class TransmissionTower: Exile_AbstractCraftingRecipe

/** Tripod Screen Large */
class Tripodscreen_large: Exile_AbstractCraftingRecipe
{
	name							= "Tripod Screen Large";
	pictureItem						= "Land_TripodScreen_01_large_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_TripodScreen_01_large_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Tripodscreen_large: Exile_AbstractCraftingRecipe

/** Tripod Screen Vertical #1 */
class Tripodscreen_v1: Exile_AbstractCraftingRecipe
{
	name							= "Tripod Screen Vertical #1";
	pictureItem						= "Land_TripodScreen_01_dual_v1_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_TripodScreen_01_dual_v1_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Tripodscreen_v1: Exile_AbstractCraftingRecipe

/** Tripod Screen Vertical #2 */
class Tripodscreen_v2: Exile_AbstractCraftingRecipe
{
	name							= "Tripod Screen Vertical #2";
	pictureItem						= "Land_TripodScreen_01_dual_v2_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_TripodScreen_01_dual_v2_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_LightBulb"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Tripodscreen_v2: Exile_AbstractCraftingRecipe

/** Zbox Camera */
class ZboxCamera: Exile_AbstractCraftingRecipe
{
	name							= "Zbox Camera";
	pictureItem						= "Land_GamingSet_01_camera_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_GamingSet_01_camera_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class ZboxCamera: Exile_AbstractCraftingRecipe

/** Zbox Console */
class ZboxConsole: Exile_AbstractCraftingRecipe
{
	name							= "Zbox Console";
	pictureItem						= "Land_GamingSet_01_console_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_GamingSet_01_console_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class ZboxConsole: Exile_AbstractCraftingRecipe

/** Zbox Controller */
class ZboxController: Exile_AbstractCraftingRecipe
{
	name							= "Zbox Controller";
	pictureItem						= "Land_GamingSet_01_controller_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_GamingSet_01_controller_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class ZboxController: Exile_AbstractCraftingRecipe

/** Zbox Power Supply */
class ZboxPSU: Exile_AbstractCraftingRecipe
{
	name							= "Zbox Power Supply";
	pictureItem						= "Land_GamingSet_01_powerSupply_F_Kit";
	category						= "Electronics";
	returnedItems[]					=
	{
		{1, "Land_GamingSet_01_powerSupply_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class ZboxPSU: Exile_AbstractCraftingRecipe


////////////////
// Explosives //
////////////////
/** Breaching Charge (Big Momma) */
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name							= "Breaching Charge (Big Momma)";
	pictureItem						= "Exile_Item_BreachingCharge_BigMomma";
	category						= "Explosives";
	returnedItems[]					=
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[]							=
	{
		"Exile_Item_Foolbox"
	};
	components[]					=
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_ZipTie"}
	};
}; // end class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe

/** Breaching Charge (Metal) */
class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name							= "Breaching Charge (Metal)";
	pictureItem						= "Exile_Item_BreachingCharge_Metal";
	category						= "Explosives";
	returnedItems[]					=
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[]							=
	{
		"Exile_Item_Foolbox"
	};
	components[]					=
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
}; // end class BreachingChargeMetal: Exile_AbstractCraftingRecipe

/** Breaching Charge (Wood) */
class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name							= "Breaching Charge (Wood)";
	pictureItem						= "Exile_Item_BreachingCharge_Wood";
	category						= "Explosives";
	returnedItems[]					=
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[]							=
	{
		"Exile_Item_Foolbox"
	};
	components[]					=
	{
		{1, "DemoCharge_Remote_Mag"},
		{1, "Exile_Item_DuctTape"}
	};
}; // end class BreachingChargeWood: Exile_AbstractCraftingRecipe


////////////
// Floors //
////////////
/** Brick Floor EBM */
class EBM_Brickwall_floor: Exile_AbstractCraftingRecipe
{
	name							= "Brick Floor EBM";
	pictureItem						= "EBM_Brickwall_floor_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_floor_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_floor: Exile_AbstractCraftingRecipe

/** Brick Floor Port EBM */
class EBM_Brickwall_floorport: Exile_AbstractCraftingRecipe
{
	name							= "Brick Floor Port EBM";
	pictureItem						= "EBM_Brickwall_floorport_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_floorport_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_floorport: Exile_AbstractCraftingRecipe

/** Brick Floor Port Door EBM */
class EBM_Brickwall_floorport_door: Exile_AbstractCraftingRecipe
{
	name							= "Brick Floor Port Door EBM";
	pictureItem						= "EBM_Brickwall_floorport_door_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_floorport_door_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_floorport_door: Exile_AbstractCraftingRecipe

/** Brick Stairs EBM */
class EBM_Brickwall_stairs: Exile_AbstractCraftingRecipe
{
	name							= "Brick Stairs EBM";
	pictureItem						= "EBM_Brickwall_stairs_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_stairs_Kit"},
		{2, "Exile_Item_FuelCanisterEmpty"},
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class EBM_Brickwall_stairs: Exile_AbstractCraftingRecipe

/** CNC Stairs */
class CNCStairs: Exile_AbstractCraftingRecipe
{
	name							= "CNC Stairs";
	pictureItem						= "Land_GH_Stairs_F_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Land_GH_Stairs_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CNCStairs: Exile_AbstractCraftingRecipe

/** Concrete Floor */
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Floor";
	pictureItem						= "Exile_Item_ConcreteFloorKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteFloor: Exile_AbstractCraftingRecipe

/** Concrete Floor Port */
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Floor Port";
	pictureItem						= "Exile_Item_ConcreteFloorPortKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Concrete Floor Port";
	pictureItem						= "Exile_Item_ConcreteFloorPortKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe

/** Concrete Floor Port (Small) */
class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Floor Port (Small)";
	pictureItem						= "Exile_Item_ConcreteFloorPortSmallKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteFloorPortSmallKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe

/** Concrete Ladder Hatch */
class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Ladder Hatch";
	pictureItem						= "Exile_Item_ConcreteLadderHatchKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteLadderHatchKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe

/** Concrete Stairs */
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Stairs";
	pictureItem						= "Exile_Item_ConcreteStairsKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CraftConcretStairs: Exile_AbstractCraftingRecipe

/** Metal Floor EBM */
class EBM_Metalwall_floor: Exile_AbstractCraftingRecipe
{
	name							= "Metal Floor EBM";
	pictureItem						= "EBM_Metalwall_floor_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_floor_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_floor: Exile_AbstractCraftingRecipe

/** Metal Floor Port EBM */
class EBM_Metalwall_floorport: Exile_AbstractCraftingRecipe
{
	name							= "Metal Floor Port EBM";
	pictureItem						= "EBM_Metalwall_floorport_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_floorport_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_floorport: Exile_AbstractCraftingRecipe

/** Metal Floor Port Door EBM */
class EBM_Metalwall_floorport_door: Exile_AbstractCraftingRecipe
{
	name							= "Metal Floor Port Door EBM";
	pictureItem						= "EBM_Metalwall_floorport_door_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_floorport_door_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_floorport_door: Exile_AbstractCraftingRecipe

/** Metal Ladder */
class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name							= "Metal Ladder";
	pictureItem						= "Exile_Item_MetalLadderKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_JunkMetal"}
	};
}; // end class CraftMetalLadder: Exile_AbstractCraftingRecipe

/** Metal Ladder (Double Tall) */
class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name							= "Metal Ladder (Double Tall)";
	pictureItem						= "Exile_Item_MetalLadderDoubleKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{2, "Exile_Item_MetalLadderKit"}
	};
}; // end class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe

/** Metal Stairs EBM */
class EBM_Metalwall_stairs: Exile_AbstractCraftingRecipe
{
	name							= "Metal Stairs EBM";
	pictureItem						= "EBM_Metalwall_stairs_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_stairs_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_stairs: Exile_AbstractCraftingRecipe

/** Pier Ladder */
class PierLadder: Exile_AbstractCraftingRecipe
{
	name							= "Pier Ladder";
	pictureItem						= "PierLadder_F_Kit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "PierLadder_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class PierLadder: Exile_AbstractCraftingRecipe

/** Wood Floor */
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name							= "Wood Floor";
	pictureItem						= "Exile_Item_WoodFloorKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodFloor: Exile_AbstractCraftingRecipe

/** Wood Floor Port */
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name							= "Wood Floor Port";
	pictureItem						= "Exile_Item_WoodFloorPortKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Floor Port";
	pictureItem						= "Exile_Item_WoodFloorPortKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
}; // end class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe

/** Wood Floor Port (Small) */
class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name							= "Wood Floor Port (Small)";
	pictureItem						= "Exile_Item_WoodFloorPortSmallKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe

/** Wood Ladder */
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name							= "Wood Ladder";
	pictureItem						= "Exile_Item_WoodLadderKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodLadder: Exile_AbstractCraftingRecipe

/** Wood Ladder Hatch */
class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name							= "Wood Ladder Hatch";
	pictureItem						= "Exile_Item_WoodLadderHatchKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
}; // end class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe

/** Wood Stairs */
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name							= "Wood Stairs";
	pictureItem						= "Exile_Item_WoodStairsKit";
	category						= "Floors";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodStairs: Exile_AbstractCraftingRecipe


///////////////
// Furniture //
///////////////
/** Camping Chair #1 */
class CampingChairV1: Exile_AbstractCraftingRecipe
{
	name							= "Camping Chair #1";
	pictureItem						= "Land_CampingChair_V1_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_CampingChair_V1_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class CampingChairV1: Exile_AbstractCraftingRecipe

/** Camping Chair #2 */
class CampingChairV2: Exile_AbstractCraftingRecipe
{
	name							= "Camping Chair #2";
	pictureItem						= "Land_CampingChair_V2_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_CampingChair_V2_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class CampingChairV2: Exile_AbstractCraftingRecipe

/** Camping Table */
class CampingTable: Exile_AbstractCraftingRecipe
{
	name							= "Camping Table";
	pictureItem						= "Land_CampingTable_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalPole"}
	};
}; // end class CampingTable: Exile_AbstractCraftingRecipe

/** Chair */
class Chair: Exile_AbstractCraftingRecipe
{
	name							= "Chair";
	pictureItem						= "Land_ChairWood_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Chair: Exile_AbstractCraftingRecipe

/** Office Cabinet */
class OfficeCabinet: Exile_AbstractCraftingRecipe
{
	name							= "Office Cabinet";
	pictureItem						= "Land_OfficeCabinet_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_OfficeCabinet_01_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"}
	};
}; // end class OfficeCabinet: Exile_AbstractCraftingRecipe

/** Office Chair */
class OfficeChair: Exile_AbstractCraftingRecipe
{
	name							= "Office Chair";
	pictureItem						= "Land_OfficeChair_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_OfficeChair_01_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"}
	};
}; // end class OfficeChair: Exile_AbstractCraftingRecipe

/** Office Table */
class OfficeTable: Exile_AbstractCraftingRecipe
{
	name							= "Office Table";
	pictureItem						= "OfficeTable_01_new_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "OfficeTable_01_new_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class OfficeTable: Exile_AbstractCraftingRecipe

/** Plastic Chair */
class PlasticChair: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Chair";
	pictureItem						= "Land_ChairPlastic_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_ChairPlastic_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class PlasticChair: Exile_AbstractCraftingRecipe

/** Plastic Table */
class TablePlastic: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Table";
	pictureItem						= "Land_TablePlastic_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_TablePlastic_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_Rope"}
	};
}; // end class TablePlastic: Exile_AbstractCraftingRecipe

/** Rattan Chair */
class RattanChair: Exile_AbstractCraftingRecipe
{
	name							= "Rattan Chair";
	pictureItem						= "Land_RattanChair_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_RattanChair_01_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class RattanChair: Exile_AbstractCraftingRecipe

/** Rattan Table */
class RattanTable: Exile_AbstractCraftingRecipe
{
	name							= "Rattan Table";
	pictureItem						= "Land_RattanTable_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_RattanTable_01_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{8, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class RattanTable: Exile_AbstractCraftingRecipe

/** Sunchair */
class Sunchair: Exile_AbstractCraftingRecipe
{
	name							= "Sunchair";
	pictureItem						= "Land_Sun_chair_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_Woodlog"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunchair: Exile_AbstractCraftingRecipe

/** Sunchair (Green) */
class Sunchairgreen: Exile_AbstractCraftingRecipe
{
	name							= "Sunchair (Green)";
	pictureItem						= "Land_Sun_chair_green_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sun_chair_green_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunchairgreen: Exile_AbstractCraftingRecipe

/** Sunshade */
class Sunshades: Exile_AbstractCraftingRecipe
{
	name							= "Sunshade";
	pictureItem						= "Land_Sunshade_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sunshade_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunshades: Exile_AbstractCraftingRecipe

/** Sunshade #1 */
class Sunshade_01: Exile_AbstractCraftingRecipe
{
	name							= "Sunshade #1";
	pictureItem						= "Land_Sunshade_01_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sunshade_01_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunshade_01: Exile_AbstractCraftingRecipe

/** Sunshade #2 */
class Sunshade_02: Exile_AbstractCraftingRecipe
{
	name							= "Sunshade #2";
	pictureItem						= "Land_Sunshade_02_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sunshade_02_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunshade_02: Exile_AbstractCraftingRecipe

/** Sunshade #3 */
class Sunshade_03: Exile_AbstractCraftingRecipe
{
	name							= "Sunshade #3";
	pictureItem						= "Land_Sunshade_03_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sunshade_03_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Sunshade_03: Exile_AbstractCraftingRecipe

/** Sunshade #4 */
class Sunshade_04: Exile_AbstractCraftingRecipe
{
	name							= "Sunshade #4";
	pictureItem						= "Land_Sunshade_04_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_Woodlog"}
	};
}; // end class Sunshade: Exile_AbstractCraftingRecipe

/** Table */
class Table: Exile_AbstractCraftingRecipe
{
	name							= "Table";
	pictureItem						= "Land_TableDesk_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Table: Exile_AbstractCraftingRecipe

/** Wooden Table (Large) */
class WoodenTableLarge: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Table (Large)";
	pictureItem						= "Land_WoodenTable_large_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_WoodenTable_large_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodLog"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WoodenTableLarge: Exile_AbstractCraftingRecipe

/** Wooden Table (Small) */
class WoodenTableSmall: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Table (Small)";
	pictureItem						= "Land_WoodenTable_small_F_Kit";
	category						= "Furniture";
	returnedItems[]					=
	{
		{1, "Land_WoodenTable_small_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WoodenTableSmall: Exile_AbstractCraftingRecipe


////////////
// Lights //
////////////
/** Airport Lamp */
class Airportlamp: Exile_AbstractCraftingRecipe
{
	name							= "Airport Lamp";
	pictureItem						= "Land_LampAirport_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_LampAirport_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class Airportlamp: Exile_AbstractCraftingRecipe

/** Camping Light */
class CampingLight: Exile_AbstractCraftingRecipe
{
	name							= "Camping Light";
	pictureItem						= "Land_Camping_Light_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_LightBulb"}
	};
}; // end class CampingLight: Exile_AbstractCraftingRecipe

/** Flood Light */
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name							= "Flood Light";
	pictureItem						= "Exile_Item_FloodLightKit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	requiresFire					= true;
	components[]					=
	{
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalPole"}
	};
}; // end class CraftFloodLight: Exile_AbstractCraftingRecipe

/** Flood Light (Double) */
class Floodlightdouble: Exile_AbstractCraftingRecipe
{
	name							= "Flood Light (Double)";
	pictureItem						= "Land_PortableLight_double_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_PortableLight_double_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_LightBulb"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Floodlightdouble: Exile_AbstractCraftingRecipe

/** Halogen Base Lamp */
class LampHalogen: Exile_AbstractCraftingRecipe
{
	name							= "Halogen Base Lamp";
	pictureItem						= "Land_LampHalogen_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_LampHalogen_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_LightBulb"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class LampHalogen: Exile_AbstractCraftingRecipe

/** Portable Heli Light */
class PortableHeliLight: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light";
	pictureItem						= "Land_PortableHelipadLight_01_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_PortableHelipadLight_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight: Exile_AbstractCraftingRecipe

/** Portable Heli Light (Blue) */
class PortableHeliLight_blue: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light (Blue)";
	pictureItem						= "PortableHelipadLight_01_blue_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "PortableHelipadLight_01_blue_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight_blue: Exile_AbstractCraftingRecipe

/** Portable Heli Light (Green) */
class PortableHeliLight_green: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light (Green)";
	pictureItem						= "PortableHelipadLight_01_green_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "PortableHelipadLight_01_green_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight_green: Exile_AbstractCraftingRecipe

/** Portable Heli Light (Red) */
class PortableHeliLight_red: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light (Red)";
	pictureItem						= "PortableHelipadLight_01_red_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "PortableHelipadLight_01_red_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight_red: Exile_AbstractCraftingRecipe

/** Portable Heli Light (White) */
class PortableHeliLight_white: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light (White)";
	pictureItem						= "PortableHelipadLight_01_white_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "PortableHelipadLight_01_white_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight_white: Exile_AbstractCraftingRecipe

/** Portable Heli Light (Yellow) */
class PortableHeliLight_Yellow: Exile_AbstractCraftingRecipe
{
	name							= "Portable Heli Light (Yellow)";
	pictureItem						= "PortableHelipadLight_01_yellow_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "PortableHelipadLight_01_yellow_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class PortableHeliLight_Yellow: Exile_AbstractCraftingRecipe

/** Shabby Lamp */
class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name							= "Shabby Lamp";
	pictureItem						= "Land_LampShabby_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{8, "Exile_Item_Woodlog"},
		{2, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Shabbylamp: Exile_AbstractCraftingRecipe

/** Street Lamp */
class StreetLamp: Exile_AbstractCraftingRecipe
{
	name							= "Street Lamp";
	pictureItem						= "Land_LampStreet_F_Kit";
	category						= "Lights";
	returnedItems[]					=
	{
		{1, "Land_LampStreet_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class StreetLamp: Exile_AbstractCraftingRecipe


//////////
// Misc //
//////////
/** Airhook EBM */
class EBM_Airhook: Exile_AbstractCraftingRecipe
{
	name							= "Airhook EBM";
	pictureItem						= "EBM_Airhook_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "EBM_Airhook_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"}
	};
}; // end class EBM_Airhook: Exile_AbstractCraftingRecipe

/** Bandage */
class CraftBandage: Exile_AbstractCraftingRecipe
{
	name							= "Craft Bandage";
	pictureItem						= "Exile_Item_Bandage";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Exile_Item_Bandage"}
	};
	components[]					=
	{
		{4, "Exile_Item_ToiletPaper"}
	};
}; // end class CraftBandage: Exile_AbstractCraftingRecipe

/** Burning Barrel */
class BurningBarrel: Exile_AbstractCraftingRecipe
{
	name							= "Burning Barrel";
	pictureItem						= "MetalBarrel_burning_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "MetalBarrel_burning_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"}
	};
}; // end class BurningBarrel: Exile_AbstractCraftingRecipe

/** Bush */
class Bush: Exile_AbstractCraftingRecipe
{
	name							= "Bush";
	pictureItem						= "Exile_Plant_GreenBush_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Exile_Plant_GreenBush_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_Woodlog"}
	};
}; // end class Bush: Exile_AbstractCraftingRecipe

/** Concrete Block */
class BlockConcrete: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Block";
	pictureItem						= "BlockConcrete_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "BlockConcrete_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class BlockConcrete: Exile_AbstractCraftingRecipe

/** Crows Feet EBM */
class EBM_crowsfeet: Exile_AbstractCraftingRecipe
{
	name							= "Crows Feet EBM";
	pictureItem						= "EBM_crowsfeet_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "EBM_crowsfeet_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_crowsfeet: Exile_AbstractCraftingRecipe

/** Gym Bench */
class GymBench: Exile_AbstractCraftingRecipe
{
	name							= "Gym Bench";
	pictureItem						= "Land_GymBench_01_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_GymBench_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class GymBench: Exile_AbstractCraftingRecipe

/** Gym Rack */
class GymRack: Exile_AbstractCraftingRecipe
{
	name							= "Gym Rack";
	pictureItem						= "Land_GymRack_03_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_GymRack_03_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class GymRack: Exile_AbstractCraftingRecipe

/** Mechanical Cover (Small) EBM */
class EBM_mechanical_cover_small: Exile_AbstractCraftingRecipe
{
	name							= "Mechanical Cover (Small) EBM";
	pictureItem						= "EBM_mechanical_cover_small_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "EBM_mechanical_cover_small_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_mechanical_cover_small: Exile_AbstractCraftingRecipe

/** Medikit EBM */
class EBM_Medikit: Exile_AbstractCraftingRecipe
{
	name							= "Medikit EBM";
	pictureItem						= "EBM_Medikit_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "EBM_Medikit_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_PlasticBottleEmpty"},
		{4, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_InstaDoc"}
	};
}; // end class EBM_Medikit: Exile_AbstractCraftingRecipe

/** Sea Wall */
class SeaWall: Exile_AbstractCraftingRecipe
{
	name							= "Sea Wall";
	pictureItem						= "Land_Sea_Wall_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_Sea_Wall_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class SeaWall: Exile_AbstractCraftingRecipe

/** Sharp Stone #1 */
class SharpStone1: Exile_AbstractCraftingRecipe
{
	name							= "Sharp Stone #1";
	pictureItem						= "Land_SharpStone_01_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_SharpStone_01_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class SharpStone1: Exile_AbstractCraftingRecipe

/** Sharp Stone #2 */
class SharpStone2: Exile_AbstractCraftingRecipe
{
	name							= "Sharp Stone #2";
	pictureItem						= "Land_SharpStone_02_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_SharpStone_02_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class SharpStone2: Exile_AbstractCraftingRecipe

/** Small Stone #2 */
class SmallStone2: Exile_AbstractCraftingRecipe
{
	name							= "Small Stone #2";
	pictureItem						= "Land_Small_Stone_02_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_Small_Stone_02_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class SmallStone2: Exile_AbstractCraftingRecipe

/** Toiletbox */
class Toiletbox: Exile_AbstractCraftingRecipe
{
	name							= "Toiletbox";
	pictureItem						= "Land_ToiletBox_F_Kit";
	category						= "Misc";
	returnedItems[]					=
	{
		{1, "Land_ToiletBox_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Toiletbox: Exile_AbstractCraftingRecipe


///////////
// Signs //
///////////
/** Altis Map */
class AltisMap: Exile_AbstractCraftingRecipe
{
	name							= "Altis Map";
	pictureItem						= "MapBoard_altis_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "MapBoard_altis_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Handsaw"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"}
	};
}; // end class AltisMap: Exile_AbstractCraftingRecipe

/** Flag (CSAT) */
class FlagCSAT: Exile_AbstractCraftingRecipe
{
	name							= "Flag (CSAT)";
	pictureItem						= "Flag_CSAT_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Flag_CSAT_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class FlagCSAT: Exile_AbstractCraftingRecipe

/** Land Mines Sign */
class MineSign: Exile_AbstractCraftingRecipe
{
	name							= "Land Mines Sign";
	pictureItem						= "Land_Sign_Mines_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Land_Sign_Mines_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalPole"}
	};
}; // end class MineSign: Exile_AbstractCraftingRecipe

/** Military Area Sign */
class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name							= "Military Area Sign";
	pictureItem						= "Land_Sign_WarningMilitaryArea_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_WoodPlank"}
	};
}; // end class MilitaryArea: Exile_AbstractCraftingRecipe

/** Military Area Sign (Small) */
class MilSignSmall: Exile_AbstractCraftingRecipe
{
	name							= "Military Area Sign (Small)";
	pictureItem						= "Land_Sign_WarningMilAreaSmall_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Land_Sign_WarningMilAreaSmall_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WoodPlank"}
	};
}; // end class MilSignSmall: Exile_AbstractCraftingRecipe

/** Military Vehicle Sign */
class MilitaryVehicle: Exile_AbstractCraftingRecipe
{
	name							= "Military Vehicle Sign";
	pictureItem						= "Land_Sign_WarningMilitaryVehicles_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Land_Sign_WarningMilitaryVehicles_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WoodPlank"}
	};
}; // end class MilitaryVehicle: Exile_AbstractCraftingRecipe

/** Parking Sign EBM */
class EBM_Parksign: Exile_AbstractCraftingRecipe
{
	name							= "Parking Sign EBM";
	pictureItem						= "EBM_Parksign_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "EBM_Parksign_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Parksign: Exile_AbstractCraftingRecipe

/** Tape Sign */
class TapeSign: Exile_AbstractCraftingRecipe
{
	name							= "Tape Sign";
	pictureItem						= "TapeSign_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "TapeSign_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalPole"}
	};
}; // end class TapeSign: Exile_AbstractCraftingRecipe

/** Unexploded Ammo Sign */
class SignUnexplodedAmmo: Exile_AbstractCraftingRecipe
{
	name							= "Unexploded Ammo Sign";
	pictureItem						= "Land_Sign_WarningUnexplodedAmmo_F_Kit";
	category						= "Signs";
	returnedItems[]					=
	{
		{1, "Land_Sign_WarningUnexplodedAmmo_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class SignUnexplodedAmmo: Exile_AbstractCraftingRecipe


//////////////
// Storages //
//////////////
/** Ammo Box */
class AmmoBoxsmall: Exile_AbstractCraftingRecipe
{
	name							= "Ammo Box";
	pictureItem						= "Land_Ammobox_rounds_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Ammobox_rounds_F_Kit"}
	};
	requiresFire					= true;
	components[]					=
	{
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class AmmoBoxsmall: Exile_AbstractCraftingRecipe

/** Ammo Pallet */
class Ammobox: Exile_AbstractCraftingRecipe
{
	name							= "Ammo Pallet";
	pictureItem						= "Land_Pallet_MilBoxes_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"}
	};
}; // end class Ammobox: Exile_AbstractCraftingRecipe

/** Cargo Container (Huge) */
class HugeContainer: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Container (Huge)";
	pictureItem						= "Land_Cargo40_light_green_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Cargo40_light_green_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
	};
}; // end class HugeContainer: Exile_AbstractCraftingRecipe

/** Cargo Container (Military) */
class LandContainer: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Container (Military)";
	pictureItem						= "Land_Cargo20_military_green_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Cargo20_military_green_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class LandContainer: Exile_AbstractCraftingRecipe

/** Cargo Container (Small) */
class CargoContainerSmall: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Container (Small)";
	pictureItem						= "Land_CargoBox_V1_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_CargoBox_V1_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class CargoContainerSmall: Exile_AbstractCraftingRecipe

/** Cargo Container Sand (Small) */
class CargoContainerSandSmall: Exile_AbstractCraftingRecipe
{
	name							= "Cargo Container Sand (Small)";
	pictureItem						= "Land_Cargo20_sand_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Cargo20_sand_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class CargoContainerSandSmall: Exile_AbstractCraftingRecipe

/** Fridge */
class Fridge: Exile_AbstractCraftingRecipe
{
	name							= "Fridge";
	pictureItem						= "Fridge_01_closed_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Fridge_01_closed_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class Fridge: Exile_AbstractCraftingRecipe

/** Garbage Container */
class GarbageContainer: Exile_AbstractCraftingRecipe
{
	name							= "Garbage Container";
	pictureItem						= "Land_GarbageContainer_closed_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_GarbageContainer_closed_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class GarbageContainer: Exile_AbstractCraftingRecipe

/** Icebox */
class Icebox: Exile_AbstractCraftingRecipe
{
	name							= "Icebox";
	pictureItem						= "Land_Icebox_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{10, "Exile_Item_PlasticBottleEmpty"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_DuctTape"}
	};
}; // end class Icebox: Exile_AbstractCraftingRecipe

/** Metal Case */
class MetalCase: Exile_AbstractCraftingRecipe
{
	name							= "Metal Case";
	pictureItem						= "Land_MetalCase_01_large_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_MetalCase_01_large_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class MetalCase: Exile_AbstractCraftingRecipe

/** Metal Rack (4 Shelf) */
class MetalRack4Layers: Exile_AbstractCraftingRecipe
{
	name							= "Metal Rack (4 Shelf)";
	pictureItem						= "Land_Metal_rack_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Metal_rack_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class MetalRack4Layers: Exile_AbstractCraftingRecipe

/** Metal Shelf */
class MetalShelf: Exile_AbstractCraftingRecipe
{
	name							= "Metal Shelf";
	pictureItem						= "Land_ShelvesMetal_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_MetalBoard"}
	};
}; // end class MetalShelf: Exile_AbstractCraftingRecipe

/** Metal Wooden Shelf */
class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wooden Shelf";
	pictureItem						= "Land_Metal_wooden_rack_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class MetalWoodenRack: Exile_AbstractCraftingRecipe

/** Old Chest */
class CraftOldChest: Exile_AbstractCraftingRecipe
{
	name							= "Old Chest";
	pictureItem						= "Exile_Item_OldChestKit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Exile_Item_OldChestKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WoodPlank"}
	};
}; // end class CraftOldChest: Exile_AbstractCraftingRecipe

/** Pallet Trolley */
class Pallettrolley: Exile_AbstractCraftingRecipe
{
	name							= "Pallet Trolley";
	pictureItem						= "Land_PalletTrolley_01_yellow_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_PalletTrolley_01_yellow_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Pallettrolley: Exile_AbstractCraftingRecipe

/** Plastic Case */
class PlasticCase: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Case";
	pictureItem						= "Land_PlasticCase_01_medium_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_PlasticCase_01_medium_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class PlasticCase: Exile_AbstractCraftingRecipe

/** Shelves */
class Rack: Exile_AbstractCraftingRecipe
{
	name							= "Shelves";
	pictureItem						= "Land_Rack_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Rack_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class Rack: Exile_AbstractCraftingRecipe

/** Storage Crate */
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name							= "Storage Crate";
	pictureItem						= "Exile_Item_StorageCrateKit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"}
	};
}; // end class CraftStorageCrate: Exile_AbstractCraftingRecipe

/** Suitcase */
class Suitcase: Exile_AbstractCraftingRecipe
{
	name							= "Suitcase";
	pictureItem						= "Land_Suitcase_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_Suitcase_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Suitcase: Exile_AbstractCraftingRecipe

/** Tool Trolley #1 */
class ToolTrolley1: Exile_AbstractCraftingRecipe
{
	name							= "Tool Trolley #1";
	pictureItem						= "Land_ToolTrolley_01_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ToolTrolley_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class ToolTrolley1: Exile_AbstractCraftingRecipe

/** Tool Trolley #2 */
class ToolTrolley2: Exile_AbstractCraftingRecipe
{
	name							= "Tool Trolley #2";
	pictureItem						= "Land_ToolTrolley_02_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ToolTrolley_02_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class ToolTrolley2: Exile_AbstractCraftingRecipe

/** Wooden Crate EBM */
class EBM_woodencrate: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Crate EBM";
	pictureItem						= "EBM_woodencrate_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "EBM_woodencrate_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_woodencrate: Exile_AbstractCraftingRecipe

/** Wooden Shelves */
class WoodenShelves: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Shelves";
	pictureItem						= "Land_ShelvesWooden_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ShelvesWooden_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WoodenShelves: Exile_AbstractCraftingRecipe

/** Wooden Shelves (Blue) */
class WoodenShelves_blue: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Shelves (Blue)";
	pictureItem						= "Land_ShelvesWooden_blue_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ShelvesWooden_blue_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WoodenShelves_blue: Exile_AbstractCraftingRecipe

/** Wooden Shelves (Khaki) */
class WoodenShelves_Khaki: Exile_AbstractCraftingRecipe
{
	name							= "Wooden Shelves (Khaki)";
	pictureItem						= "Land_ShelvesWooden_khaki_F_Kit";
	category						= "Storages";
	returnedItems[]					=
	{
		{1, "Land_ShelvesWooden_khaki_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WoodenShelves_Khaki: Exile_AbstractCraftingRecipe


//////////////////
// Street Stuff //
//////////////////
/** Arrows Left */
class ArrowDeskL: Exile_AbstractCraftingRecipe
{
	name							= "Arrows Left";
	pictureItem						= "ArrowDesk_L_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "ArrowDesk_L_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class ArrowDeskL: Exile_AbstractCraftingRecipe

/** Arrows Right */
class ArrowDeskR: Exile_AbstractCraftingRecipe
{
	name							= "Arrows Right";
	pictureItem						= "ArrowDesk_R_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "ArrowDesk_R_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class ArrowDeskR: Exile_AbstractCraftingRecipe

/** Bar Gate */
class Bargate: Exile_AbstractCraftingRecipe
{
	name							= "Bar Gate";
	pictureItem						= "Land_BarGate_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_BarGate_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"}
	};
}; // end class Bargate: Exile_AbstractCraftingRecipe

/** CNC Barrier (Medium) */
class cncbarriermedium: Exile_AbstractCraftingRecipe
{
	name							= "CNC Barrier (Medium)";
	pictureItem						= "Land_CncBarrierMedium_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_CncBarrierMedium_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class cncbarriermedium: Exile_AbstractCraftingRecipe

/** Concrete Barrier */
class CncBarrier: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Barrier";
	pictureItem						= "Land_CncBarrier_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_CncBarrier_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CncBarrier: Exile_AbstractCraftingRecipe

/** Concrete Ramp */
class ConcreteRamp: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Ramp";
	pictureItem						= "Land_RampConcrete_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_RampConcrete_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class ConcreteRamp: Exile_AbstractCraftingRecipe

/** Crash Barrier */
class Crashbarrier: Exile_AbstractCraftingRecipe
{
	name							= "Crash Barrier";
	pictureItem						= "Land_Crash_barrier_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Crash_barrier_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class Crashbarrier: Exile_AbstractCraftingRecipe

/** Obstacle Ramp */
class ObstacleRamp: Exile_AbstractCraftingRecipe
{
	name							= "Obstacle Ramp";
	pictureItem						= "Land_Obstacle_Ramp_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Obstacle_Ramp_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class ObstacleRamp: Exile_AbstractCraftingRecipe

/** Pavement Narrow */
class PavementNarrow: Exile_AbstractCraftingRecipe
{
	name							= "Pavement Narrow";
	pictureItem						= "Land_Pavement_narrow_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Pavement_narrow_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class PavementNarrow: Exile_AbstractCraftingRecipe

/** Pavement Narrow Corner */
class PavementNarrowCorner: Exile_AbstractCraftingRecipe
{
	name							= "Pavement Narrow Corner";
	pictureItem						= "Land_Pavement_narrow_corner_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Pavement_narrow_corner_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class PavementNarrowCorner: Exile_AbstractCraftingRecipe

/** Pavement Wide */
class PavementWide: Exile_AbstractCraftingRecipe
{
	name							= "Pavement Wide";
	pictureItem						= "Land_Pavement_wide_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Pavement_wide_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class PavementWide: Exile_AbstractCraftingRecipe

/** Pavement Wide Corner */
class PavementWideCorner: Exile_AbstractCraftingRecipe
{
	name							= "Pavement Wide Corner";
	pictureItem						= "Land_Pavement_wide_corner_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "Land_Pavement_wide_corner_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class PavementWideCorner: Exile_AbstractCraftingRecipe

/** Plastic Barrier (Blue) */
class PlasticBarrierBlue: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Barrier (Blue)";
	pictureItem						= "PlasticBarrier_03_blue_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "PlasticBarrier_03_blue_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_WaterCanisterEmpty"},
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class PlasticBarrierBlue: Exile_AbstractCraftingRecipe

/** Plastic Barrier (Grey) */
class PlasticBarrierGrey: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Barrier (Grey)";
	pictureItem						= "PlasticBarrier_02_grey_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "PlasticBarrier_02_grey_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_WaterCanisterEmpty"},
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class PlasticBarrierGrey: Exile_AbstractCraftingRecipe

/** Plastic Barrier (Orange) */
class PlasticBarrierOrange: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Barrier (Orange)";
	pictureItem						= "PlasticBarrier_03_orange_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "PlasticBarrier_03_orange_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_WaterCanisterEmpty"},
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class PlasticBarrierOrange: Exile_AbstractCraftingRecipe

/** Plastic Barrier (Yellow) */
class PlasticBarrierYellow: Exile_AbstractCraftingRecipe
{
	name							= "Plastic Barrier (Yellow)";
	pictureItem						= "PlasticBarrier_02_yellow_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "PlasticBarrier_02_yellow_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{5, "Exile_Item_WaterCanisterEmpty"},
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class PlasticBarrierYellow: Exile_AbstractCraftingRecipe

/** Pollard EBM */
class EBM_pollard: Exile_AbstractCraftingRecipe
{
	name							= "Pollard EBM";
	pictureItem						= "EBM_pollard_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "EBM_pollard_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class EBM_pollard: Exile_AbstractCraftingRecipe

/** Road Barrier #1 */
class RoadBarrier1: Exile_AbstractCraftingRecipe
{
	name							= "Road Barrier #1";
	pictureItem						= "RoadBarrier_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "RoadBarrier_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_WoodPlank"}
	};
}; // end class RoadBarrier1: Exile_AbstractCraftingRecipe

/** Road Barrier #2 */
class RoadBarrier2: Exile_AbstractCraftingRecipe
{
	name							= "Road Barrier #2";
	pictureItem						= "RoadBarrier_small_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "RoadBarrier_small_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Hammer"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_WoodPlank"}
	};
}; // end class RoadBarrier2: Exile_AbstractCraftingRecipe

/** Road Cone #1 */
class RoadCone1: Exile_AbstractCraftingRecipe
{
	name							= "Road Cone #1";
	pictureItem						= "RoadCone_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "RoadCone_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Hammer"
	};
	components[]					=
	{
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class RoadCone1: Exile_AbstractCraftingRecipe

/** Road Cone #2 */
class RoadCone2: Exile_AbstractCraftingRecipe
{
	name							= "Road Cone #2";
	pictureItem						= "RoadCone_L_F_Kit";
	category						= "Street Stuff";
	returnedItems[]					=
	{
		{1, "RoadCone_L_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Hammer"
	};
	components[]					=
	{
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class RoadCone2: Exile_AbstractCraftingRecipe


////////////
// Supply //
////////////
/** Concrete Mixer */
class ConcreteMixer: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Mixer";
	pictureItem						= "Exile_ConcreteMixer_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_ConcreteMixer_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"}
	};
}; // end class ConcreteMixer: Exile_AbstractCraftingRecipe

/** Concrete Repair Kit */
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Repair Kit";
	pictureItem						= "Exile_Item_Cement";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe

/** Diesel Groundpower Unit */
class DieselGroundpowerUnit: Exile_AbstractCraftingRecipe
{
	name							= "Diesel Groundpower Unit";
	pictureItem						= "Land_DieselGroundPowerUnit_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_DieselGroundPowerUnit_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class DieselGroundpowerUnit: Exile_AbstractCraftingRecipe

/** Dirty Water */
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name							= "Empty Dirty Water";
	pictureItem						= "Exile_Item_PlasticBottleEmpty";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
}; // end class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name							= "Fill Dirty Water";
	pictureItem						= "Exile_Item_PlasticBottleDirtyWater";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	requiredInteractionModelGroup	= "WaterSource";
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
}; // end class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name							= "Fill Dirty Water";
	pictureItem						= "Exile_Item_WaterCanisterDirtyWater";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	requiredInteractionModelGroup	= "WaterSource";
	components[]					=
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
}; // end class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe

/** Engine Crane */
class EngineCrane: Exile_AbstractCraftingRecipe
{
	name							= "Engine Crane";
	pictureItem						= "Land_EngineCrane_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_EngineCrane_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EngineCrane: Exile_AbstractCraftingRecipe

/** Fire Place */
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name							= "Fire Place";
	pictureItem						= "Exile_Item_CampFireKit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"}
	};
}; // end class CraftFirePlace: Exile_AbstractCraftingRecipe

/** Fortification Upgrade */
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name							= "Fortification Upgrade";
	pictureItem						= "Exile_Item_MetalBoard";	// << CHANGE IT
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe

/** Fuel Canister */
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name							= "Empty Fuel Canister";
	pictureItem						= "Exile_Item_FuelCanisterEmpty";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[]					=
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class EmptyFuelCanister: Exile_AbstractCraftingRecipe
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name							= "Fill Fuel Canister";
	pictureItem						= "Exile_Item_FuelCanisterFull";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	requiredInteractionModelGroup	= "FuelSource";
	components[]					=
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
}; // end class FillFuelCanister: Exile_AbstractCraftingRecipe

/** Generator */
class Generator: Exile_AbstractCraftingRecipe
{
	name							= "Generator";
	pictureItem						= "Land_PortableGenerator_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_PortableGenerator_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_MetalWire"},
		{3, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Generator: Exile_AbstractCraftingRecipe

/** Huron Ammo Slingload */
class HuronAmmo: Exile_AbstractCraftingRecipe
{
	name							= "Huron Ammo Slingload";
	pictureItem						= "B_Slingload_01_Ammo_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "B_Slingload_01_Ammo_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_StorageCrateKit"}
	};
}; // end class HuronAmmo: Exile_AbstractCraftingRecipe

/** Huron Fuel Slingload */
class HuronFuel: Exile_AbstractCraftingRecipe
{
	name							= "Huron Fuel Slingload";
	pictureItem						= "B_Slingload_01_fuel_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "B_Slingload_01_fuel_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_FuelCanisterFull"},
		{5, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"}
	};
}; // end class HuronFuel: Exile_AbstractCraftingRecipe

/** Metal Board */
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name							= "Metal Board";
	pictureItem						= "Exile_Item_MetalBoard";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_MetalBoard"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"}
	};
}; // end class CraftMetalBoard: Exile_AbstractCraftingRecipe

/** Metal Pole */
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name							= "Metal Pole";
	pictureItem						= "Exile_Item_MetalPole";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_MetalPole"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"}
	};
}; // end class CraftMetalPole: Exile_AbstractCraftingRecipe

/** Metal Repair Kit */
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name							= "Metal Repair Kit";
	pictureItem						= "Exile_Item_RepairKitMetal";
	category						= "Supply";
	returnedItems[] =
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"}
	};
}; // end class CraftRepairKitMetal: Exile_AbstractCraftingRecipe

/** Oven EBM */
class EBM_oven: Exile_AbstractCraftingRecipe
{
	name							= "Oven EBM";
	pictureItem						= "EBM_oven_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "EBM_oven_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"}
	};
}; // end class EBM_oven: Exile_AbstractCraftingRecipe

/** Portable Generator */
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name							= "Portable Generator";
	pictureItem						= "Exile_Item_PortableGeneratorKit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	requiresFire					= true;
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftPortableGenerator: Exile_AbstractCraftingRecipe

/** Pressure Washer */
class Pressurewasher: Exile_AbstractCraftingRecipe
{
	name							= "Pressure Washer";
	pictureItem						= "Land_PressureWasher_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_PressureWasher_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Pressurewasher: Exile_AbstractCraftingRecipe

/** Pump Station */
class Pumpstation: Exile_AbstractCraftingRecipe
{
	name							= "Pump Station";
	pictureItem						= "Land_FuelStation_Feed_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_FuelStation_Feed_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterBarrelKit"}
	};
}; // end class Pumpstation: Exile_AbstractCraftingRecipe

/** Rusty Tank */
class RustyTank: Exile_AbstractCraftingRecipe
{
	name							= "Rusty Tank";
	pictureItem						= "Land_Tank_rust_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_Tank_rust_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_WaterBarrelKit"}
	};
}; // end class RustyTank: Exile_AbstractCraftingRecipe

/** Salt Water */
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name							= "Empty Salt Water";
	pictureItem						= "Exile_Item_PlasticBottleEmpty";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[]					=
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
}; // end class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe

/** Water Barrel */
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name							= "Water Barrel";
	pictureItem						= "Exile_Item_WaterBarrelKit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
}; // end class CraftWaterBarrel: Exile_AbstractCraftingRecipe

/** Water Cooler */
class Watercooler: Exile_AbstractCraftingRecipe
{
	name							= "Water Cooler";
	pictureItem						= "Land_WaterCooler_01_new_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterBarrelKit"}
	};
}; // end class Watercooler: Exile_AbstractCraftingRecipe

/** Water Pump (Desert) */
class WaterpumpDesert: Exile_AbstractCraftingRecipe
{
	name							= "Water Pump (Desert)";
	pictureItem						= "WaterPump_01_sand_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "WaterPump_01_sand_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class WaterpumpDesert: Exile_AbstractCraftingRecipe

/** Water Pump (Forest) */
class WaterpumpForest: Exile_AbstractCraftingRecipe
{
	name							= "Water Pump (Forest)";
	pictureItem						= "WaterPump_01_forest_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "WaterPump_01_forest_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class WaterpumpForest: Exile_AbstractCraftingRecipe

/** Water Sink */
class WaterSink: Exile_AbstractCraftingRecipe
{
	name							= "Water Sink";
	pictureItem						= "Land_Sink_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_Sink_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class WaterSink: Exile_AbstractCraftingRecipe

/** Water Source */
class Watersource: Exile_AbstractCraftingRecipe
{
	name							= "Water Source";
	pictureItem						= "Land_Water_source_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_Water_source_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Watersource: Exile_AbstractCraftingRecipe

/** Welding Trolley */
class WeldingTrolley: Exile_AbstractCraftingRecipe
{
	name							= "Welding Trolley";
	pictureItem						= "Land_WeldingTrolley_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_WeldingTrolley_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class WeldingTrolley: Exile_AbstractCraftingRecipe

/** Wood Plank */
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name							= "Wood Plank";
	pictureItem						= "Exile_Item_WoodPlank";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodPlank"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Handsaw"
	};
	components[]					=
	{
		{2, "Exile_Item_WoodLog"}
	};
}; // end class CraftWoodPlank: Exile_AbstractCraftingRecipe

/** Wood Repair Kit */
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name							= "Wood Repair Kit";
	pictureItem						= "Exile_Item_RepairKitWood";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Foolbox"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class CraftRepairKitWood: Exile_AbstractCraftingRecipe

/** Work Bench */
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name							= "Work Bench";
	pictureItem						= "Exile_Item_WorkBenchKit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[]					=
	{
		{4, "Exile_Item_WoodLog"}
	};
}; // end class CraftWorkBench: Exile_AbstractCraftingRecipe

/** Work Bench 2.0 */
class Workbench_2_0: Exile_AbstractCraftingRecipe
{
	name							= "Work Bench 2.0";
	pictureItem						= "Land_Workbench_01_F_Kit";
	category						= "Supply";
	returnedItems[]					=
	{
		{1, "Land_Workbench_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Workbench_2_0: Exile_AbstractCraftingRecipe


/////////////
// Targets //
/////////////
/** Dueling Target */
class DuelingTarget: Exile_AbstractCraftingRecipe
{
	name							= "Dueling Target";
	pictureItem						= "Land_Target_Dueling_01_F_Kit";
	category						= "Targets";
	returnedItems[]					=
	{
		{1, "Land_Target_Dueling_01_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class DuelingTarget: Exile_AbstractCraftingRecipe

/** Human Target */
class HumanTarget: Exile_AbstractCraftingRecipe
{
	name							= "Human Target";
	pictureItem						= "TargetBootcampHuman_F_Kit";
	category						= "Targets";
	returnedItems[]					=
	{
		{1, "TargetBootcampHuman_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class HumanTarget: Exile_AbstractCraftingRecipe

/** Infantry Target */
class InfTarget: Exile_AbstractCraftingRecipe
{
	name							= "Infantry Target";
	pictureItem						= "TargetP_Inf_F_Kit";
	category						= "Targets";
	returnedItems[]					=
	{
		{1, "TargetP_Inf_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class InfTarget: Exile_AbstractCraftingRecipe

/** Infantry Accuracy Target */
class InfAccTarget: Exile_AbstractCraftingRecipe
{
	name							= "Infantry Accuracy Target";
	pictureItem						= "TargetP_Inf_Acc2_F_Kit";
	category						= "Targets";
	returnedItems[]					=
	{
		{1, "TargetP_Inf_Acc2_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class InfAccTarget: Exile_AbstractCraftingRecipe

/** Simple Target */
class SimpleTarget: Exile_AbstractCraftingRecipe
{
	name							= "Simple Target";
	pictureItem						= "Target_F_Kit";
	category						= "Targets";
	returnedItems[]					=
	{
		{1, "Target_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
}; // end class SimpleTarget: Exile_AbstractCraftingRecipe


///////////
// Tents //
///////////
/** CamoNet BLUFOR Open */
class CamoNetBLUFORopen: Exile_AbstractCraftingRecipe
{
	name							= "CamoNet BLUFOR Open";
	pictureItem						= "CamoNet_BLUFOR_open_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "CamoNet_BLUFOR_open_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class CamoNetBLUFORopen: Exile_AbstractCraftingRecipe

/** CamoNet IND Open */
class CamoNetINDPopen: Exile_AbstractCraftingRecipe
{
	name							= "CamoNet IND Open";
	pictureItem						= "CamoNet_INDP_open_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "CamoNet_INDP_open_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class CamoNetINDPopen: Exile_AbstractCraftingRecipe

/** CamoNet OPFOR Open */
class CamoNetOPFORopen: Exile_AbstractCraftingRecipe
{
	name							= "CamoNet OPFOR Open";
	pictureItem						= "CamoNet_OPFOR_open_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "CamoNet_OPFOR_open_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"}
	};
}; // end class CamoNetOPFORopen: Exile_AbstractCraftingRecipe

/** IR Tent #1 APEX */
class IRtent01: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "IR Tent #1 APEX";
	pictureItem						= "Land_IRMaskingCover_01_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_IRMaskingCover_01_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_Rope"}
	};
}; // end class IRtent01: Exile_AbstractCraftingRecipe

/** IR Tent #2 APEX */
class IRtent02: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "IR Tent #2 APEX";
	pictureItem						= "Land_IRMaskingCover_02_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_IRMaskingCover_02_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_Rope"}
	};
}; // end class IRtent02: Exile_AbstractCraftingRecipe

/** Sleeping Bag */
class SleepingBag: Exile_AbstractCraftingRecipe
{
	name							= "Sleeping Bag";
	pictureItem						= "Land_Sleeping_bag_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_Sleeping_bag_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_Rope"}
	};
}; // end class SleepingBag: Exile_AbstractCraftingRecipe

/** Sleeping Bag (Blue) */
class SleepingBag_blue: Exile_AbstractCraftingRecipe
{
	name							= "Sleeping Bag (Blue)";
	pictureItem						= "Land_Sleeping_bag_blue_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_Sleeping_bag_blue_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_Rope"}
	};
}; // end class SleepingBag_blue: Exile_AbstractCraftingRecipe

/** Sleeping Bag (Brown) */
class SleepingBag_brown: Exile_AbstractCraftingRecipe
{
	name							= "Sleeping Bag (Brown)";
	pictureItem						= "Land_Sleeping_bag_brown_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_Sleeping_bag_brown_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_Rope"}
	};
}; // end class SleepingBag_brown: Exile_AbstractCraftingRecipe

/** Slumplane */
class Slumplane: Exile_AbstractCraftingRecipe
{
	name							= "Slumplane";
	pictureItem						= "Land_Cargo_addon02_V2_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_Cargo_addon02_V2_F_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class Slumplane: Exile_AbstractCraftingRecipe

/** Tent Dome */
class TentDome: Exile_AbstractCraftingRecipe
{
	name							= "Tent Dome";
	pictureItem						= "Land_TentDome_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_TentDome_F_Kit"}
	};
	components[]					=
	{
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_Woodlog"},
		{1, "Exile_Item_DuctTape"}
	};
}; // end class TentDome: Exile_AbstractCraftingRecipe

/** Tent Hangar */
class TentHangar: Exile_AbstractCraftingRecipe
{
	name							= "Tent Hangar";
	pictureItem						= "Land_TentHangar_V1_F_Kit";
	category						= "Tents";
	returnedItems[]					=
	{
		{1, "Land_TentHangar_V1_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers",
		"Exile_Item_Handsaw",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{5, "Exile_Item_DuctTape"},
		{5, "Exile_Item_Woodlog"},
		{3, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class TentHangar: Exile_AbstractCraftingRecipe


////////////
// Trophy //
////////////
/** Trophy (Bronze) */
class trophy_bronze: Exile_AbstractCraftingRecipe
{
	name							= "Trophy (Bronze)";
	pictureItem						= "Land_Trophy_01_bronze_F_Kit";
	category						= "Trophy";
	returnedItems[]					=
	{
		{1, "Land_Trophy_01_bronze_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_Metalpole"}
	};
}; // end class trophy_bronze: Exile_AbstractCraftingRecipe

/** Trophy (Gold) */
class trophy_gold: Exile_AbstractCraftingRecipe
{
	name							= "Trophy (Gold)";
	pictureItem						= "Land_Trophy_01_gold_F_Kit";
	category						= "Trophy";
	returnedItems[]					=
	{
		{1, "Land_Trophy_01_gold_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_Metalpole"},
		{1, "Exile_Item_Metalboard"}
	};
}; // end class trophy_gold: Exile_AbstractCraftingRecipe

/** Trophy (Silver) */
class trophy_silver: Exile_AbstractCraftingRecipe
{
	name							= "Trophy (Silver)";
	pictureItem						= "Land_Trophy_01_silver_F_Kit";
	category						= "Trophy";
	returnedItems[]					=
	{
		{1, "Land_Trophy_01_silver_F_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_Metalpole"}
	};
}; // end class trophy_silver: Exile_AbstractCraftingRecipe


///////////
// Walls //
///////////
/** Basalt Gate APEX */
class BasaltwallGate: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Basalt Gate APEX";
	pictureItem						= "Land_BasaltWall_01_gate_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_BasaltWall_01_gate_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class BasaltwallGate: Exile_AbstractCraftingRecipe

/** Basalt Wall 4m APEX */
class Basaltwall4m: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Basalt Wall 4m APEX";
	pictureItem						= "Land_BasaltWall_01_4m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_BasaltWall_01_4m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Basaltwall4m: Exile_AbstractCraftingRecipe

/** Basalt Wall 8m APEX */
class Basaltwall8m: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Basalt Wall 8m APEX";
	pictureItem						= "Land_BasaltWall_01_8m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_BasaltWall_01_8m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Basaltwall8m: Exile_AbstractCraftingRecipe

/** Breakwater #1 APEX */
class Breakwater01: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Breakwater #1 APEX";
	pictureItem						= "Land_Breakwater_01_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Breakwater_01_F_Kit"},
		{2, "Exile_Item_FuelCanisterEmpty"},
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Breakwater01: Exile_AbstractCraftingRecipe

/** Breakwater #2 APEX */
class Breakwater02: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Breakwater #2 APEX";
	pictureItem						= "Land_Breakwater_02_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Breakwater_02_F_Kit"},
		{2, "Exile_Item_FuelCanisterEmpty"},
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_FuelCanisterFull"},
		{2, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Breakwater02: Exile_AbstractCraftingRecipe

/** Brick Wall EBM */
class EBM_Brickwall: Exile_AbstractCraftingRecipe
{
	name							= "Brick Wall EBM";
	pictureItem						= "EBM_Brickwall_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall: Exile_AbstractCraftingRecipe

/** Brick Wall Door EBM */
class EBM_Brickwall_door: Exile_AbstractCraftingRecipe
{
	name							= "Brick Wall Door EBM";
	pictureItem						= "EBM_Brickwall_door_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_door_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_door: Exile_AbstractCraftingRecipe

/** Brick Wall Hole EBM */
class EBM_Brickwall_hole: Exile_AbstractCraftingRecipe
{
	name							= "Brick Wall Hole EBM";
	pictureItem						= "EBM_Brickwall_hole_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_hole_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_hole: Exile_AbstractCraftingRecipe

/** Brick Wall Window EBM */
class EBM_Brickwall_window: Exile_AbstractCraftingRecipe
{
	name							= "Brick Wall Window EBM";
	pictureItem						= "EBM_Brickwall_window_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Brickwall_window_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{5, "Exile_Item_WoodPlank"},
		{2, "EBM_Item_Bricks"},
		{2, "EBM_Item_Bucket_Of_Mortar"}
	};
}; // end class EBM_Brickwall_window: Exile_AbstractCraftingRecipe

/** Bunker Wall 3m APEX */
class Bunkerwall3mAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Bunker Wall 3m APEX";
	pictureItem						= "Land_PillboxWall_01_3m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_PillboxWall_01_3m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Bunkerwall3mAPEX: Exile_AbstractCraftingRecipe

/** Bunker Wall 6m APEX */
class Bunkerwall6mAPEX: Exile_AbstractCraftingRecipe
{
	name							= "Bunker Wall 6m APEX";
	pictureItem						= "Land_PillboxWall_01_6m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_PillboxWall_01_6m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Bunkerwall6mAPEX: Exile_AbstractCraftingRecipe

/** City Gate */
class Citygate: Exile_AbstractCraftingRecipe
{
	name							= "City Gate";
	pictureItem						= "Land_City_Gate_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_City_Gate_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Citygate: Exile_AbstractCraftingRecipe

/** City Wall 4m */
class ConcreteWall4m: Exile_AbstractCraftingRecipe
{
	name							= "City Wall 4m";
	pictureItem						= "Land_City2_4m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_City2_4m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class ConcreteWall4m: Exile_AbstractCraftingRecipe

/** City Wall 8m */
class ConcreteWall8m: Exile_AbstractCraftingRecipe
{
	name							= "City Wall 8m";
	pictureItem						= "Land_City2_8m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_City2_8m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class ConcreteWall8m: Exile_AbstractCraftingRecipe

/** CNC Shelter */
class CNCShelter: Exile_AbstractCraftingRecipe
{
	name							= "CNC Shelter";
	pictureItem						= "Land_CncShelter_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_CncShelter_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CNCShelter: Exile_AbstractCraftingRecipe

/** CNC Wall #1 */
class cncbarrier1: Exile_AbstractCraftingRecipe
{
	name							= "CNC Wall #1";
	pictureItem						= "Land_CncWall1_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_CncWall1_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class cncbarrier1: Exile_AbstractCraftingRecipe

/** CNC Wall #2 */
class CNCWallType2: Exile_AbstractCraftingRecipe
{
	name							= "CNC Wall #2";
	pictureItem						= "Land_CncWall4_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_CncWall4_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CNCWallType2: Exile_AbstractCraftingRecipe

/** Concrete Door */
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Concrete Door";
	pictureItem						= "Exile_Item_ConcreteDoorKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe

/** Concrete Doorway */
class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Doorway";
	pictureItem						= "Exile_Item_ConcreteDoorwayKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteDoorway: Exile_AbstractCraftingRecipe

/** Concrete Drawbridge */
class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Drawbridge";
	pictureItem						= "Exile_Item_ConcreteDrawBridgeKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteDrawBridgeKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{3, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe

/** Concrete Gate */
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Gate";
	pictureItem						= "Exile_Item_ConcreteGateKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteGate: Exile_AbstractCraftingRecipe
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Concrete Gate";
	pictureItem						= "Exile_Item_ConcreteGateKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe

/** Concrete Support */
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Support";
	pictureItem						= "Exile_Item_ConcreteSupportKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CraftConcretSupport: Exile_AbstractCraftingRecipe

/** Concrete Wall */
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Wall";
	pictureItem						= "Exile_Item_ConcreteWallKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
}; // end class CraftConcreteWall: Exile_AbstractCraftingRecipe

/** Concrete Wall (Small) 4m */
class CncWallSmall4m: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Wall (Small) 4m";
	pictureItem						= "Land_Concrete_SmallWall_4m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Concrete_SmallWall_4m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CncWallSmall4m: Exile_AbstractCraftingRecipe

/** Concrete Wall (Small) 8m */
class CncWallSmall8m: Exile_AbstractCraftingRecipe
{
	name							= "Concrete Wall (Small) 8m";
	pictureItem						= "Land_Concrete_SmallWall_8m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Concrete_SmallWall_8m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CncWallSmall8m: Exile_AbstractCraftingRecipe

/** Concrete Window */
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Concrete Window";
	pictureItem						= "Exile_Item_ConcreteWindowKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
}; // end class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe

/** H-barrier 3 Blocks (Green) APEX */
class Barrier3greenAPEX: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier 3 Blocks (Green) APEX";
	pictureItem						= "Land_HBarrier_01_line_3_green_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_01_line_3_green_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_Sand"}
	};
}; // end class Barrier3greenAPEX: Exile_AbstractCraftingRecipe

/** H-barrier 5 Blocks */
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier 5 Blocks";
	pictureItem						= "Exile_Item_HBarrier5Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe

/** H-barrier 5 Blocks (Green) APEX */
class Barrier5greenAPEX: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier 5 Blocks (Green) APEX";
	pictureItem						= "Land_HBarrier_01_line_5_green_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_01_line_5_green_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Sand"}
	};
}; // end class Barrier5greenAPEX: Exile_AbstractCraftingRecipe

/** H-barrier Wall (Big) 4m */
class SandbagBarrierBig4m: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall (Big) 4m";
	pictureItem						= "Land_HBarrierWall4_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrierWall4_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_Sand"},	// Change
		{1, "Land_HBarrier_3_F_Kit"}
	};
}; // end class SandbagBarrierBig4m: Exile_AbstractCraftingRecipe

/** H-barrier Wall (Big) 6m */
class SandbagBarrierBig6m: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall (Big) 6m";
	pictureItem						= "Land_HBarrierWall6_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrierWall6_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_Sand"},	// Change
		{1, "Land_HBarrierWall4_F_Kit"}
	};
}; // end class SandbagBarrierBig6m: Exile_AbstractCraftingRecipe

/** H-barrier Wall #1 */
class Barrier1: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall #1";
	pictureItem						= "Land_HBarrier_1_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_1_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_Sand"}	// Change
	};
}; // end class Barrier1: Exile_AbstractCraftingRecipe

/** H-barrier Wall #3 */
class Barrier3: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall #3";
	pictureItem						= "Land_HBarrier_3_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_3_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{2, "Exile_Item_Sand"},	// Change
		{1, "Exile_Item_MetalWire"}
	};
}; // end class Barrier3: Exile_AbstractCraftingRecipe

/** H-barrier Wall #5 */
class Barrier5: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall #5";
	pictureItem						= "Land_HBarrier_5_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrier_5_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{3, "Exile_Item_Sand"},	// Change
		{1, "Exile_Item_MetalWire"}
	};
}; // end class Barrier5: Exile_AbstractCraftingRecipe

/** H-barrier Wall Corner */
class SandbagBarrierBigCorner: Exile_AbstractCraftingRecipe
{
	name							= "H-barrier Wall Corner";
	pictureItem						= "Land_HBarrierWall_corner_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_HBarrierWall_corner_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"}
	};
}; // end class SandbagBarrierBigCorner: Exile_AbstractCraftingRecipe

/** Industrial Fence 3m */
class Industryfence: Exile_AbstractCraftingRecipe
{
	name							= "Industrial Fence 3m";
	pictureItem						= "Land_IndFnc_3_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_IndFnc_3_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Industryfence: Exile_AbstractCraftingRecipe

/** Industrial Fence 9m */
class Industryfence3pts: Exile_AbstractCraftingRecipe
{
	name							= "Industrial Fence 9m";
	pictureItem						= "Land_IndFnc_9_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_IndFnc_9_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{3, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Industryfence3pts: Exile_AbstractCraftingRecipe

/** Industrial Wall #2 */
class CNCWall: Exile_AbstractCraftingRecipe
{
	name							= "Industrial Wall #2";
	pictureItem						= "Land_Wall_IndCnc_2deco_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Wall_IndCnc_2deco_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CNCWall: Exile_AbstractCraftingRecipe

/** Industrial Wall #4 */
class ConcreteWall1: Exile_AbstractCraftingRecipe
{
	name							= "Industrial Wall #4";
	pictureItem						= "Land_Wall_IndCnc_4_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Wall_IndCnc_4_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class ConcreteWall1: Exile_AbstractCraftingRecipe

/** Metal Hedgehog */
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name							= "Metal Hedgehog";
	pictureItem						= "Exile_Item_MetalHedgehogKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalPole"}
	};
}; // end class CraftMetalHedgehog: Exile_AbstractCraftingRecipe

/** Metal Wall EBM */
class EBM_Metalwall: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wall EBM";
	pictureItem						= "EBM_Metalwall_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall: Exile_AbstractCraftingRecipe

/** Metal Wall (Half) EBM */
class EBM_Metalwall_half: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wall (Half) EBM";
	pictureItem						= "EBM_Metalwall_half_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_half_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_half: Exile_AbstractCraftingRecipe

/** Metal Wall Door EBM */
class EBM_Metalwall_door: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wall Door EBM";
	pictureItem						= "EBM_Metalwall_door_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_door_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalPole"}
	};
}; // end class EBM_Metalwall_door: Exile_AbstractCraftingRecipe

/** Metal Wall Hole EBM */
class EBM_Metalwall_hole: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wall Hole EBM";
	pictureItem						= "EBM_Metalwall_hole_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_hole_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_hole: Exile_AbstractCraftingRecipe

/** Metal Wall Window EBM */
class EBM_Metalwall_window: Exile_AbstractCraftingRecipe
{
	name							= "Metal Wall Window EBM";
	pictureItem						= "EBM_Metalwall_window_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_Metalwall_window_Kit"}
	};
	requiresFire					= true;
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Metalpole"},
		{3, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_Metalwall_window: Exile_AbstractCraftingRecipe

/** Military Wall 4m */
class CncWallMil4M: Exile_AbstractCraftingRecipe
{
	name							= "Military Wall 4m";
	pictureItem						= "Land_Mil_WallBig_4m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Mil_WallBig_4m_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class CncWallMil4M: Exile_AbstractCraftingRecipe

/** Petroglyph Wall #1 APEX */
class Petroglyphwall01: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Petroglyph Wall #1 APEX";
	pictureItem						= "Land_PetroglyphWall_01_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_PetroglyphWall_01_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Petroglyphwall01: Exile_AbstractCraftingRecipe

/** Petroglyph Wall #2 APEX */
class Petroglyphwall02: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Petroglyph Wall #2 APEX";
	pictureItem						= "Land_PetroglyphWall_02_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_PetroglyphWall_02_F_Kit"},
		{1, "Exile_Item_FuelCanisterEmpty"},
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
}; // end class Petroglyphwall02: Exile_AbstractCraftingRecipe

/** Razor Wire */
class Razorwire: Exile_AbstractCraftingRecipe
{
	name							= "Razor Wire";
	pictureItem						= "Land_Razorwire_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Razorwire_F_Kit"}
	};
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	components[]					=
	{
		{6, "Exile_Item_MetalWire"},
		{2, "Exile_Item_JunkMetal"}
	};
};

/** Razor Wire (Long)*/
class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name							= "Razor Wire (Long)";
	pictureItem						= "Exile_Item_RazorWireKit_Long";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class CraftRazorWireKit: Exile_AbstractCraftingRecipe

/** Sandbag Fence (Corner) */
class SandbagCorner: Exile_AbstractCraftingRecipe
{
	name							= "Sandbag Fence (Corner)";
	pictureItem						= "Land_BagFence_Corner_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_BagFence_Corner_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Sand"}
	};
}; // end class SandbagCorner: Exile_AbstractCraftingRecipe

/** Sandbag Fence (Long) */
class SandbagsLong: Exile_AbstractCraftingRecipe
{
	name							= "Sandbag Fence (Long)";
	pictureItem						= "Land_BagFence_Long_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_BagFence_Long_F_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Sand"}
	};
}; // end class SandbagsLong: Exile_AbstractCraftingRecipe

/** Sandbag Fence Green (Long) APEX */
class SandbaglongGreen: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Sandbag Fence Green (Long) APEX";
	pictureItem						= "Land_Bagfence_01_long_green_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Bagfence_01_long_green_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{2, "Exile_Item_Sand"}
	};
}; // end class SandbaglongGreen: Exile_AbstractCraftingRecipe

/** Sandbag Fence Green (Short) APEX */
class SandbagshortGreen: Exile_AbstractCraftingRecipe	// v0.2.8
{
	name							= "Sandbag Fence Green (Short) APEX";
	pictureItem						= "Land_Bagfence_01_short_green_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Bagfence_01_short_green_F_Kit"}
	};
	requiresConcreteMixer			= true;
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Sand"}
	};
}; // end class SandbagshortGreen: Exile_AbstractCraftingRecipe

/** Sandbags (Corner) */
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name							= "Sandbags (Corner)";
	pictureItem						= "Exile_Item_SandBagsKit_Corner";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{3, "Exile_Item_Sand"}
	};
}; // end class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe

/** Sandbags (Long) */
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name							= "Sandbags (Long)";
	pictureItem						= "Exile_Item_SandBagsKit_Long";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_Sand"}
	};
}; // end class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe

/** Steel Fence */
class Steelfence: Exile_AbstractCraftingRecipe
{
	name							= "Steel Fence";
	pictureItem						= "Land_Wall_Tin_4_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder"
	};
	components[]					=
	{
		{2, "Exile_Item_MetalBoard"}
	};
}; // end class Steelfence: Exile_AbstractCraftingRecipe

/** Stone Gate */
class Stonegate: Exile_AbstractCraftingRecipe
{
	name							= "Stone Gate";
	pictureItem						= "Land_Stone_Gate_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Stone_Gate_F_Kit"}
	};
	requiresConcreteMixer			= true;
	requiresFire					= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Sand"}
	};
}; // end class Stonegate: Exile_AbstractCraftingRecipe

/** Stone Wall */
class Stonewall: Exile_AbstractCraftingRecipe
{
	name							= "Stone Wall";
	pictureItem						= "Land_Stone_4m_F_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Land_Stone_4m_F_Kit"}
	};
	requiresConcreteMixer			= true;
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Shovel"
	};
	components[]					=
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"}
	};
}; // end class Stonewall: Exile_AbstractCraftingRecipe

/** Wire Fence */
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name							= "Wire Fence Kit";
	pictureItem						= "Exile_Item_WireFenceKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{6, "Exile_Item_MetalWire"},
		{4, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class CraftWireFenceKit: Exile_AbstractCraftingRecipe

/** Wood Door */
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Door";
	pictureItem						= "Exile_Item_WoodDoorKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
}; // end class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe

/** Wood Door Frame EBM */
class EBM_door_frame: Exile_AbstractCraftingRecipe
{
	name							= "Wood Door Frame EBM";
	pictureItem						= "EBM_door_frame_Kit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "EBM_door_frame_Kit"}
	};
	tools[]							=
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	components[]					=
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class EBM_door_frame: Exile_AbstractCraftingRecipe

/** Wood Doorway */
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name							= "Wood Doorway";
	pictureItem						= "Exile_Item_WoodDoorwayKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodDoorWay: Exile_AbstractCraftingRecipe

/** Wood Drawbridge */
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name							= "Wood Drawbridge";
	pictureItem						= "Exile_Item_WoodDrawBridgeKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Drawbridge";
	pictureItem						= "Exile_Item_WoodDrawBridgeKit";
	category						= "Walls";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_WoodGateKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
}; // end class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe

/** Wood Gate */
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name							= "Wood Gate";
	pictureItem						= "Exile_Item_WoodGateKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{8, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodGate: Exile_AbstractCraftingRecipe
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Gate";
	pictureItem						= "Exile_Item_WoodGateKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class UpgradeToWoodGate: Exile_AbstractCraftingRecipe

/** Wood Support */
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name							= "Wood Support";
	pictureItem						= "Exile_Item_WoodSupportKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodSupport: Exile_AbstractCraftingRecipe

/** Wood Wall */
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name							= "Wood Wall";
	pictureItem						= "Exile_Item_WoodWallKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{4, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodWall: Exile_AbstractCraftingRecipe
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Wall";
	pictureItem						= "Exile_Item_WoodWallKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
}; // end class UpgradeToWoodWall: Exile_AbstractCraftingRecipe

/** Wood Wall (Half) */
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name							= "Wood Wall (Half)";
	pictureItem						= "Exile_Item_WoodWallHalfKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{2, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodWallHalf: Exile_AbstractCraftingRecipe

/** Wood Window */
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name							= "Wood Window";
	pictureItem						= "Exile_Item_WoodWindowKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{6, "Exile_Item_WoodPlank"}
	};
}; // end class CraftWoodWindow: Exile_AbstractCraftingRecipe
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name							= "Upgrade to Wood Window";
	pictureItem						= "Exile_Item_WoodWindowKit";
	category						= "Walls";
	returnedItems[]					=
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	requiredInteractionModelGroup	= "WorkBench";
	components[]					=
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
}; // end class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
