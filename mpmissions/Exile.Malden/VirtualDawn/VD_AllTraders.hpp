// VD_AllTraders.hpp

/**
	I have combined the traders from various souces so I can
	keep better track of them.
*/

/*
BLUFOR				Anti-Air, APCs, Artillery, --------, Boats, Cars, Drones, --------, Helicopters, Motorcycles, Planes, Submersibles, Tanks, Turrets
Civilian			--------, ----, ---------, --------, Boats, Cars, Drones, Go-Carts, Helicopters  Motorcycles, Planes, ------------, -----, -------
Exile				--------, APCs, ---------, Bicycles, Boats  Cars, ------. Go-Carts, Helicopters, Motorcycles, Planes, Submersibles, -----, -------
Independent			Anti-Air, APCs, Artillery, --------, Boats, Cars, Drones, --------, Helicopters, Motorcycles, Planes, Submersibles, Tanks, Turrets
OPFOR				Anti-Air, APCs, Artillery, --------, Boats, Cars  Drones, --------, Helicopters, Motorcycles, Planes, Submersibles, Tanks, Turrets
*/

///////////////
// Airplanes //
///////////////
class AAF_Planes
{
	name	= "Altis Armed Forces Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Plane_Fighter_03_AA_F",							// Arma				A-143 Buzzard (AA)
		"I_Plane_Fighter_03_CAS_F",							// Arma				A-143 Buzzard (CAS)
		"I_Plane_Fighter_03_dynamicLoadout_F",				// Arma				A-143 Buzzard (CAS, Dynamic Loadout)
		"I_Plane_Fighter_03_Cluster_F",						// Arma				A-143 Buzzard (Cluster)
		"I_Plane_Fighter_04_F",								// Jets DLC			A-149 Gryphon
		"I_Plane_Fighter_04_Cluster_F"						// Jets DLC			A-149 Gryphon (Cluster)
	};
}; // end class AAF_Planes

class Civilian_Planes
{
	name	= "Civilian Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Plane_Civil_01_F",								// Apex DLC			Ceaser BTT
		"Exile_Plane_Ceasar",								// Exile Mod		Ceaser BTT
		"C_Plane_Civil_01_racing_F",						// Apex DLC			Caesar BTT (Racing)
		"Exile_Plane_Cessna"								// Exile Mod		Cessna
	};
}; // end class Civilian_Planes

class CSAT_Planes
{
	name	= "Canton Protocol Strategic Alliance Treaty Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_Plane_CAS_02_F",									// Arma				To-199 Neophron (CAS)
		"O_Plane_CAS_02_dynamicLoadout_F",					// Arma				To-199 Neophron (CAS, Dynamic Loadout)
		"O_Plane_CAS_02_Cluster_F",							// Arma				To-199 Neophron (Cluster)
		"O_Plane_Fighter_02_F",								// Jets DLC			To-201 Shikra
		"O_Plane_Fighter_02_Cluster_F",						// Jets DLC			To-201 Shikra (Cluster)
		"O_Plane_Fighter_02_Stealth_F"						// Jets DLC			To-201 Shikra (Stealth)
	};
}; // end class CSAT_Planes

class CSAT_Pacific_Planes
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_VTOL_02_infantry_F",							// Apex DLC			Y-32 Xi'an (Infantry Transport)
		"O_T_VTOL_02_infantry_dynamicLoadout_F",			// Apex DLC			Y-32 Xi'an (Infantry Transport, Dynamic Loadout)
		"O_T_VTOL_02_infantry_ghex_F",						// Apex DLC			Y-32 Xi'an (Infantry Transport, Green Hex)
		"O_T_VTOL_02_infantry_grey_F",						// Apex DLC			Y-32 Xi'an (Infantry Transport, Grey)
		"O_T_VTOL_02_infantry_hex_F",						// Apex DLC			Y-32 Xi'an (Infantry Transport, Hex)
		"O_T_VTOL_02_vehicle_F",							// Apex DLC			Y-32 Xi'an (Vehicle Transport)
		"O_T_VTOL_02_vehicle_dynamicLoadout_F",				// Apex DLC			Y-32 Xi'an (Vehicle Transport, Dynamic Loadout)
		"O_T_VTOL_02_vehicle_ghex_F",						// Apex DLC			Y-32 Xi'an (Vehicle Transport, Green Hex)
		"O_T_VTOL_02_vehicle_grey_F",						// Apex DLC			Y-32 Xi'an (Vehicle Transport, Grey)
		"O_T_VTOL_02_vehicle_hex_F"							// Apex DLC			Y-32 Xi'an (Vehicle Transport, Hex)
	};
}; // end class CSAT_Pacific_Planes

class Exile_Planes
{
	name	= "Exile Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Plane_AN2_Green",							// Exile Mod		Antonov AN-2 Annie (Green)
		"Exile_Plane_AN2_Stripe",							// Exile Mod		Antonov AN-2 Annie (Stripe)
		"Exile_Plane_AN2_White",							// Exile Mod		Antonov AN-2 Annie (White)
		"GNT_C185",											// Exile Mod		Cessna 185 Skywagon
		"GNT_C185F",										// Exile Mod		Cessna A.185F Skywagon
		"GNT_C185T"											// Exile Mod		Cessna A.185T Turbo Skywagon
	};
}; // end class Exile_Planes

class NATO_Planes
{
	name	= "North Atlantic Treaty Organization Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_Plane_CAS_01_F",									// Arma				A-164 Wipeout (CAS)
		"B_Plane_CAS_01_dynamicLoadout_F",					// Arma				A-164 Wipeout (CAS, Dynamic Loadout)
		"B_Plane_CAS_01_Cluster_F",							// Arma				A-164 Wipeout (Cluster)
		"B_Plane_Fighter_01_F",								// Jets DLC			F/A-181 Black Wasp II
		"B_Plane_Fighter_01_Cluster_F",						// Jets DLC			F/A-181 Black Wasp II (Cluster)
		"B_Plane_Fighter_01_Stealth_F"						// Jets DLC			F/A-181 Black Wasp II (Stealth)
	};
}; // end class NATO_Planes

class NATO_Pacific_Planes
{
	name	= "North Atlantic Treaty Organization (Pacific) Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_VTOL_01_armed_F",								// Apex DLC			V-44 X Blackfish (Armed)
		"B_T_VTOL_01_armed_blue_F",							// Apex DLC			V-44 X Blackfish (Armed, Blue)
		"B_T_VTOL_01_armed_olive_F",						// Apex DLC			V-44 X Blackfish (Armed, Olive)
		"B_T_VTOL_01_infantry_F",							// Apex DLC			V-44 X Blackfish (Infantry Transport)
		"Exile_Plane_BlackfishInfantry",					// Exile Mod		V-44 X Blackfish (Infantry Transport)
		"B_T_VTOL_01_infantry_blue_F",						// Apex DLC			V-44 X Blackfish (Infantry Transport, Blue)
		"B_T_VTOL_01_infantry_olive_F",						// Apex DLC			V-44 X Blackfish (Infantry Transport, Olive)
		"B_T_VTOL_01_vehicle_F",							// Apex DLC			V-44 X Blackfish (Vehicle Transport)
		"Exile_Plane_BlackfishVehicle",						// Exile Mod		V-44 X Blackfish (Vehicle Transport)
		"B_T_VTOL_01_vehicle_blue_F",						// Apex DLC			V-44 X Blackfish (Vehicle Transport, Blue)
		"B_T_VTOL_01_vehicle_olive_F"						// Apex DLC			V-44 X Blackfish (Vehicle Transport, Olive)
	};
}; // end class NATO_Pacific_Planes

class Syndikat_Planes
{
	name	= "Syndikat Airplanes";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_C_Plane_Civil_01_F"								// Apex DLC			Ceaser BTT
	};
}; // end class Syndikat_Planes


///////////////////
// Anti-Aircraft //
///////////////////
class AAF_Anti_Air
{
	name	= "Altis Armed Forces Anti-Aircraft";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_LT_01_AA_F"										// Tanks DLC		AWC 302 Nyx (AA)
	};
}; // end class Altis Armed Forces_Anti_Air

class CSAT_Anti_Air
{
	name	= "Canton Protocol Strategic Alliance Treaty Anti-Aircraft";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_APC_Tracked_02_AA_F"								// Arma				ZSU-39 Tigris
	};
}; // end class CSAT_Anti_Air

class CSAT_Pacific_Anti_Air
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Anti-Aircraft";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_APC_Tracked_02_AA_ghex_F"						// Apex DLC			ZSU-39 Tigris (Green Hex)
	};
}; // end class CSAT_Pacific_Anti_Air

class NATO_Anti_Air
{
	name	= "North Atlantic Treaty Organization Anti-Aircraft";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_APC_Tracked_01_AA_F"								// Arma				IFV-6a Cheetah
	};
}; // end class NATO_Anti_Air

class NATO_Pacific_Anti_Air
{
	name	= "North Atlantic Treaty Organization (Pacific) Anti-Aircraft";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_APC_Tracked_01_AA_F"							// Apex DLC			IFV-6a Cheetah
	};
}; // end class NATO_Pacific_Anti_Air


////////////////////////////////
// Armored Personnel Carriers //
////////////////////////////////
class AAF_APCs
{
	name	= "Altis Armed Forces Armorned Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_APC_Wheeled_03_cannon_F",						// Arma				AFV-4 Gorgon
		"I_APC_tracked_03_cannon_F"							// Arma				FV-720 Mora
	};
}; // end class AAF_APCs

class CSAT_APCs
{
	name	= "Canton Protocol Strategic Alliance Treaty Armored Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_APC_Tracked_02_cannon_F",						// Arma				BTR-K Kamysh
		"O_APC_Wheeled_02_rcws_F",							// Arma				MSE-3 Marid
		"O_APC_Wheeled_02_rcws_v2_F"						// Arma				MSE-3 Marid (v2)
	};
}; // end class CSAT_APCs

class CSAT_Pacific_APCs
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Armored Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_APC_Tracked_02_cannon_ghex_F",					// Apex DLC			BTR-K Kamysh (Green Hex)
		"O_T_APC_Wheeled_02_rcws_ghex_F",					// Apex DLC			MSE-3 Marid (Green Hex)
		"O_T_APC_Wheeled_02_rcws_v2_ghex_F"					// Apex DLC			MSE-3 Marid (v2, Green Hex)
	};
}; // end class CSAT_Pacific_APCs

class Exile_APCs
{
	name	= "Exile Armored Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Car_BRDM2_HQ",								// Exile Mod		BRDM-2 (HQ)
		"Exile_Car_BTR40_Camo",								// Exile Mod		BTR-40 (Camo)
		"Exile_Car_BTR40_Green",							// Exile Mod		BTR-40 (Green)
		"Exile_Car_BTR40_MG_Camo",							// Exile Mod		BTR-40 (MG, Camo)
		"Exile_Car_BTR40_MG_Green"							// Exile Mod		BTR-40 (MG, Green)
	};
}; // end class Exile_APCs

class NATO_APCs
{
	name	= "North Atlantic Treaty Organization Armored Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_APC_Wheeled_03_cannon_F",						// Arma				AFV-4 Gorgon
		"B_APC_Wheeled_01_cannon_F",						// Arma				AMV-7 Marshall
		"B_APC_Tracked_01_CRV_F",							// Arma				CRV-6e Bobcat
		"B_APC_Tracked_01_rcws_F",							// Arma				IFV-6c Panther
		"B_AFV_Wheeled_01_cannon_F",						// Arma				Rhino MGS
		"B_AFV_Wheeled_01_up_cannon_F"						// Arma				Rhino MGS UP
	};
}; // end class NATO_APCs

class NATO_Pacific_APCs
{
	name	= "North Atlantic Treaty Organization (Pacific) Armored Personnel Carriers";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_APC_Wheeled_01_cannon_F",						// Apex DLC			AMV-7 Marshall
		"B_T_APC_Tracked_01_CRV_F",							// Apex DLC			CRV-6e Bobcat
		"B_T_APC_Tracked_01_rcws_F",						// Apex DLC			IFV-6c Panther
		"B_T_AFV_Wheeled_01_cannon_F",						// Tanks DLC		Rhino MGS
		"B_T_AFV_Wheeled_01_up_cannon_F"					// Tanks DLC		Rhino MGS UP
	};
}; // end class NATO_Pacific_APCs


///////////////
// Artillery //
///////////////
class AAF_Artillery
{
	name	= "Altis Armed Forces Artillery";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Truck_02_MRL_F"									// Tanks DLC		Zamak MRL
	};
}; // end class AAF_Artillery

class CSAT_Artillery
{
	name	= "Canton Protocol Strategic Alliance Treaty Artillery";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_MBT_02_arty_F"									// Arma				2S9 Nona
	};
}; // end class CSAT_Artillery

class CSAT_Pacific_Artillery
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Artillery";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_MBT_02_arty_ghex_F"							// Apex DLC			2S9 Nona (Green Hex)
	};
}; // end class CSAT_Pacific_Artillery

class NATO_Artillery
{
	name	= "North Atlantic Treaty Organization Artillery";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_MBT_01_arty_F",									// Arma				M4 Scorcher
		"B_MBT_01_mlrs_F"									// Arma				M5 Sandstorm MLRS
	};
}; // end class NATO_Artillery

class NATO_Pacific_Artillery
{
	name	= "North Atlantic Treaty Organization (Pacific) Artillery";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_MBT_01_arty_F",								// Apex DLC			M4 Scorcher
		"B_T_MBT_01_mlrs_F"									// Apex DLC			M5 Sandstorm MLRS
	};
}; // end class NATO_Pacific_Artillery


//////////////
// Bicycles //
//////////////
class Civilian_Bicycles
{
	name	= "Civilian Bicycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Bike_MountainBike",							// Exile Mod		Mountain Bike
		"Exile_Bike_OldBike"								// Exile Mod		Old Bike
	};
}; // end class Civilian_Bicycles


///////////
// Boats //
///////////
class AAF_Boats
{
	name	= "Altis Armed Forces Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Boat_Transport_01_F",							// Arma				Assault Boat
		"I_Boat_Armed_01_minigun_F"							// Arma				Speedboat Minigun
	};
}; // end class AAF_Boats

class Civilian_Boats
{
	name	= "Civilian Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Boat_Civil_01_F",								// Arma				Motor Boat
		"Exile_Boat_MotorBoat_White",						// Exile Mod		Motor Boat
		"C_Boat_Civil_01_police_F",							// Arma				Motorboat (Police)
		"Exile_Boat_MotorBoat_Police",						// Exile Mod		Motorboat (Police)
		"C_Boat_Civil_01_rescue_F",							// Arma				Motorboat (Rescue)
		"Exile_Boat_MotorBoat_Orange",						// Exile Mod		Motorboat (Rescue)
		"C_Rubberboat",										// Arma				Rescue Boat
		"C_Boat_Transport_02_F",							// Apex DLC			RHIB
		"C_Scooter_Transport_01_F",							// Apex DLC			Water Scooter
		"Exile_Boat_WaterScooter"							// Exile Mod		Water Scooter
	};
}; // class Civilian_Boats

class CSAT_Boats
{
	name	= "Canton Protocol Strategic Alliance Treaty Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_Boat_Transport_01_F",							// Arma				Assault Boat
		"O_Lifeboat",										// Arma				Rescue Boat
		"Exile_Boat_RubberDuck_CSAT",						// Exile Mod		Rubber Duck
		"O_Boat_Armed_01_hmg_F"								// Arma				Speedboat HMG
	};
}; // end class CSAT_Boats

class CSAT_Pacific_Boats
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_Boat_Transport_01_F",							// Apex DLC			Assault Boat
		"O_T_Lifeboat",										// Apex DLC			Rescue Boat
		"O_T_Boat_Armed_01_hmg_F"							// Apex DLC			Speedboat HMG
	};
}; // end class CSAT_Pacific_Boats

class Exile_Boats
{
	name	= "Exile Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Boat_RHIB",									// Exile Mod		RHIB
		"Exile_Boat_RubberDuck_Black",						// Exile Mod		Rubber Duck (Black)
		"Exile_Boat_RubberDuck_Blue",						// Exile Mod		Rubber Duck (Blue)
		"Exile_Boat_RubberDuck_Digital",					// Exile Mod		Rubber Duck (Digital)
		"Exile_Boat_RubberDuck_Orange"						// Exile Mod		Rubber Duck (Orange)
	};
}; // end class Exile_Boats

class FIA_East_Boats
{
	name	= "Freedom and Independence Army (East) Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_G_Boat_Transport_01_F",							// Arma				Assault Boat
		"O_G_Boat_Transport_02_F"							// Apex DLC			RHIB
	};
}; // end class FIA_East_Boats

class FIA_Independent_Boats
{
	name	= "Freedom and Independence Army (Independent) Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_G_Boat_Transport_01_F",							// Arma				Assault Boat
		"I_G_Boat_Transport_02_F"							// Apex DLC			RHIB
	};
}; // end class FIA_Independent_Boats

class FIA_West_Boats
{
	name	= "Freedom and Independence Army (West) Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_G_Boat_Transport_01_F",							// Arma				Assault Boat
		"B_G_Boat_Transport_02_F"							// Apex DLC			RHIB
	};
}; // end class FIA_West_Boats

class NATO_Boats
{
	name	= "North Atlantic Treaty Organization Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_Boat_Transport_01_F",							// Arma				Assault Boat
		"B_Lifeboat",										// Arma				Rescue Boat
		"B_Boat_Armed_01_minigun_F"							// Arma				Speedboat Minigun
	};
}; // end class NATO_Boats

class NATO_Pacific_Boats
{
	name	= "North Atlantic Treaty Organization (Pacific) Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_Boat_Transport_01_F",							// Apex DLC			Assault Boat
		"B_T_Lifeboat",										// Apex DLC			Rescue Boat
		"B_T_Boat_Armed_01_minigun_F"						// Apex DLC			Speedboat Minigun
	};
}; // end class NATO_Pacific_Boats

class Syndikat_Boats
{
	name	= "Syndikat Boats";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_C_Boat_Transport_01_F",							// Apex DLC			Assault Boat
		"I_C_Boat_Transport_02_F"							// Apex DLC			RHIB
	};
}; // end class Syndikat_Boats


//////////
// Cars //
//////////
class AAF_Cars
{
	name	= "Altis Armed Forces Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_MRAP_03_F",										// Arma				Strider
		"Exile_Car_Strider",								// Exile Mod		Strider
		"I_MRAP_03_gmg_F",									// Arma				Strider GMG
		"I_MRAP_03_hmg_F"									// Arma				Strider HMG
	};
}; // end class AAF_Cars

class Civilian_Cars
{
	name	= "Civilian Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Van_01_fuel_F",									// Arma				Fuel Truck
		"Exile_Car_Van_Fuel_Black",							// Exile Mod		Fuel Truck
		"C_Van_01_fuel_red_v2_F",							// Arma				Fuel Truck (Red)
		"Exile_Car_Van_Fuel_Red",							// Exile Mod		Fuel Truck (Red)
		"C_Van_01_fuel_red_F",								// Arma				Fuel Truck (Red, White Tank)
		"C_Van_01_fuel_white_F",							// Arma				Fuel Truck (White)
		"Exile_Car_Van_Fuel_White",							// Exile Mod		Fuel Truck (White)
		"C_Van_01_fuel_white_v2_F",							// Arma				Fuel Truck (White, Red Tank)
		"Exile_Car_Golf_Black",								// Exile Mod		Golf (Black)
		"Exile_Car_Golf_Red",								// Exile Mod		Golf (Red)
		"C_Hatchback_01_F",									// Arma				Hatchback
		"Exile_Car_Hatchback_Beige",						// Exile Mod		Hatchback (Beige)
		"C_Hatchback_01_black_F",							// Arma				Hatchback (Black)
		"Exile_Car_Hatchback_Black",						// Exile Mod		Hatchback (Black)
		"C_Hatchback_01_blue_F",							// Arma				Hatchback (Blue)
		"Exile_Car_Hatchback_Blue",							// Exile Mod		Hatchback (Blue)
		"C_Hatchback_01_beigecustom_F",						// Arma				Hatchback (Custom Beige)
		"Exile_Car_Hatchback_BeigeCustom",					// Exile Mod		Hatchback (Custom Beige)
		"C_Hatchback_01_bluecustom_F",						// Arma				Hatchback (Custom Blue)
		"Exile_Car_Hatchback_BlueCustom",					// Exile Mod		Hatchback (Custom Blue)
		"C_Hatchback_01_dark_F",							// Arma				Hatchback (Dark)
		"Exile_Car_Hatchback_Dark",							// Exile Mod		Hatchback (Dark)
		"C_Hatchback_01_green_F",							// Arma				Hatchback (Green)
		"Exile_Car_Hatchback_Green",						// Exile Mod		Hatchback (Green)
		"C_Hatchback_01_grey_F",							// Arma				Hatchback (Grey)
		"Exile_Car_Hatchback_Grey",							// Exile Mod		Hatchback (Grey)
		"Exile_Car_Hatchback_Rusty1",						// Exile Mod		Hatchback (Rusty)
		"Exile_Car_Hatchback_Rusty2",						// Exile Mod		Hatchback (Rusty)
		"Exile_Car_Hatchback_Rusty3",						// Exile Mod		Hatchback (Rusty)
		"C_Hatchback_01_sport_F",							// Arma				Hatchback (Sport)
		"Exile_Car_Hatchback_Sport_Beige",					// Exile Mod		Hatchback (Sport)
		"C_Hatchback_01_sport_blue_F",						// Arma				Hatchback (Sport, Blue)
		"Exile_Car_Hatchback_Sport_Blue",					// Exile Mod		Hatchback (Sport, Blue)
		"C_Hatchback_01_sport_green_F",						// Arma				Hatchback (Sport, Green)
		"Exile_Car_Hatchback_Sport_Green",					// Exile Mod		Hatchback (Sport, Green)
		"C_Hatchback_01_sport_grey_F",						// Arma				Hatchback (Sport, Grey)
		"C_Hatchback_01_sport_orange_F",					// Arma				Hatchback (Sport, Orange)
		"Exile_Car_Hatchback_Sport_Orange",					// Exile Mod		Hatchback (Sport, Orange)
		"C_Hatchback_01_sport_red_F",						// Arma				Hatchback (Sport, Red)
		"Exile_Car_Hatchback_Sport_Red",					// Exile Mod		Hatchback (Sport, Red)
		"C_Hatchback_01_sport_white_F",						// Arma				Hatchback (Sport, White)
		"Exile_Car_Hatchback_Sport_White",					// Exile Mod		Hatchback (Sport, White)
		"C_Hatchback_01_white_F",							// Arma				Hatchback (White)
		"C_Hatchback_01_yellow_F",							// Arma				Hatchback (Yellow)
		"Exile_Car_Hatchback_Yellow",						// Exile Mod		Hatchback (Yellow)
		"Exile_Car_Lada_Green",								// Exile Mod		Lada (Green)
		"Exile_Car_Lada_Hipster",							// Exile Mod		Lada (Hipster)
		"Exile_Car_Lada_Red",								// Exile Mod		Lada (Red)
		"Exile_Car_Lada_Taxi",								// Exile Mod		Lada (Taxi)
		"Exile_Car_Lada_White",								// Exile Mod		Lada (White)
		"Exile_Car_LandRover_Red",							// Exile Mod		Land Rover (Red)
		"C_Offroad_02_unarmed_F",							// Apex DLC			MB 4WD
		"Exile_Car_MB4WD",									// Exile Mod		MB 4WD
		"C_Offroad_02_unarmed_black_F",						// Apex DLC			MB 4WD (Black)
		"C_Offroad_02_unarmed_blue_F",						// Apex DLC			MB 4WD (Blue)
		"C_Offroad_02_unarmed_green_F",						// Apex DLC			MB 4WD (Green)
		"Exile_Car_MB4WDOpen",								// Exile Mod		MB 4WD (Open)
		"C_Offroad_02_unarmed_orange_F",					// Apex DLC			MB 4WD (Orange)
		"C_Offroad_02_unarmed_red_F",						// Apex DLC			MB 4WD (Red)
		"C_Offroad_02_unarmed_white_F",						// Apex DLC			MB 4WD (White)
		"Exile_Car_Octavius_Black",							// Exile Mod		Octavius (Black)
		"Exile_Car_Octavius_White",							// Exile Mod		Octavius (White)
		"C_Offroad_01_F",									// Arma				Offroad
		"C_Offroad_default_F",								// Arma				Offroad
		"C_Offroad_01_sand_F",								// Arma				Offroad (Beige)
		"Exile_Car_Offroad_Beige",							// Exile Mod		Offroad (Beige)
		"C_Offroad_01_blue_F",								// Arma				Offroad (Blue)
		"Exile_Car_Offroad_Blue",							// Exile Mod		Offroad (Blue)
		"C_Offroad_01_bluecustom_F",						// Arma				Offroad (Custom Blue)
		"Exile_Car_Offroad_BlueCustom",						// Exile Mod		Offroad (Custom Blue)
		"C_Offroad_01_darkred_F",							// Arma				Offroad (Dark Red)
		"Exile_Car_Offroad_DarkRed",						// Exile Mod		Offroad (Dark Red)
		"C_Offroad_luxe_F",									// Arma				Offroad (Luxe)
		"C_Offroad_01_red_F",								// Arma				Offroad (Red)
		"Exile_Car_Offroad_Red",							// Exile Mod		Offroad (Red)
		"Exile_Car_Offroad_Rusty1",							// Exile Mod		Offroad (Rusty)
		"Exile_Car_Offroad_Rusty2",							// Exile Mod		Offroad (Rusty)
		"Exile_Car_Offroad_Rusty3",							// Exile Mod		Offroad (Rusty)
		"C_Offroad_01_repair_F",							// Arma				Offroad (Services)
		"Exile_Car_Offroad_Repair_Civillian",				// Exile Mod		Offroad (Services)
		"C_Offroad_stripped_F",								// Arma				Offroad (Stripped)
		"C_Offroad_01_white_F",								// Arma				Offroad (White)
		"Exile_Car_Offroad_White",							// Exile Mod		Offroad (White)
		"C_SUV_01_F",										// Arma				SUV
		"Exile_Car_SUVXL_Black",							// Exile Mod		SUV
		"SUV_01_base_black_F",								// Arma				SUV (Black)
		"Exile_Car_SUV_Black",								// Exile Mod		SUV (Black)
		"SUV_01_base_grey_F",								// Arma				SUV (Grey)
		"Exile_Car_SUV_Grey",								// Exile Mod		SUV (Grey)
		"SUV_01_base_orange_F",								// Arma				SUV (Orange)
		"Exile_Car_SUV_Orange",								// Exile Mod		SUV (Orange)
		"SUV_01_base_red_F",								// Arma				SUV (Red)
		"Exile_Car_SUV_Red",								// Exile Mod		SUV (Red)
		"Exile_Car_TowTractor_White",						// Exile Mod		Towing Tractor
		"Exile_Car_OldTractor_Red",							// Exile Mod		Tractor (Old)
		"Exile_Car_Tractor_Red",							// Exile Mod		Tractor (Red)
		"C_Van_01_transport_F",								// Arma				Truck
		"Exile_Car_Van_Black",								// Exile Mod		Truck
		"C_Van_01_transport_red_F",							// Arma				Truck (Red)
		"Exile_Car_Van_Red",								// Exile Mod		Truck (Red)
		"C_Van_01_transport_white_F",						// Arma				Truck (White)
		"Exile_Car_Van_White",								// Exile Mod		Truck (White)
		"C_Van_01_box_F",									// Arma				Truck Boxer
		"Exile_Car_Van_Box_Black",							// Exile Mod		Truck Boxer
		"C_Van_01_box_red_F",								// Arma				Truck Boxer (Red)
		"Exile_Car_Van_Box_Red",							// Exile Mod		Truck Boxer (Red)
		"C_Van_01_box_white_F",								// Arma				Truck Boxer (White)
		"Exile_Car_Van_Box_White",							// Exile Mod		Truck Boxer (White)
		"C_Van_02_medevac_F",								// Laws of War DLC	Van (Ambulance)
		"C_Van_02_vehicle_F",								// Laws of War DLC	Van (Cargo)
		"C_Van_02_service_F",								// Laws of War DLC	Van (Services)
		"C_Van_02_transport_F",								// Laws of War DLC	Van (Transport)
		"Exile_Car_Volha_Black",							// Exile Mod		Volha (Black)
		"Exile_Car_Volha_Blue",								// Exile Mod		Volha (Blue)
		"Exile_Car_Volha_White"								// Exile Mod		Volha (White)
	};
}; // end class Civilian_Cars

class CSAT_Cars
{
	name	= "Canton Protocol Strategic Alliance Treaty Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_MRAP_02_F",										// Arma				Ifrit
		"O_MRAP_02_gmg_F",									// Arma				Ifrit GMG
		"O_MRAP_02_hmg_F",									// Arma				Ifrit HMG
		"O_LSV_02_AT_F",									// Tanks DLC		Qilin (AT)
		"O_LSV_02_armed_F",									// Apex DLC			Qilin (Minigun)
		"O_LSV_02_armed_arid_F",							// Apex DLC			Qilin (Minigun, Arid)
		"O_LSV_02_armed_black_F",							// Apex DLC			Qilin (Minigun, Black)
		"O_LSV_02_armed_ghex_F",							// Apex DLC			Qilin (Minigun, Green Hex)
		"O_LSV_02_armed_viper_F",							// Apex DLC			Qilin (Minigun, Viper)
		"O_LSV_02_unarmed_F",								// Apex DLC			Qilin (Unarmed)
		"O_LSV_02_unarmed_arid_F",							// Apex DLC			Qilin (Unarmed, Arid)
		"O_LSV_02_unarmed_black_F",							// Apex DLC			Qilin (Unarmed, Black)
		"O_LSV_02_unarmed_ghex_F",							// Apex DLC			Qilin (Unarmed, Green Hex)
		"O_LSV_02_unarmed_viper_F"							// Apex DLC			Qilin (Unarmed, Viper)
	};
}; // end class CSAT_Cars

class CSAT_Pacific_Cars
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_MRAP_02_ghex_F",								// Apex DLC			Ifrit (Green Hex)
		"O_T_MRAP_02_gmg_ghex_F",							// Apex DLC			Ifrit GMG (Green Hex)
		"O_T_MRAP_02_hmg_ghex_F",							// Apex DLC			Ifrit HMG (Green Hex)
		"O_T_LSV_02_AT_F",									// Tanks DLC		Qilin (AT)
		"O_T_LSV_02_armed_F",								// Apex DLC			Qilin (Minigun)
		"O_T_LSV_02_armed_arid_F",							// Apex DLC			Qilin (Minigun, Arid)
		"O_T_LSV_02_armed_black_F",							// Apex DLC			Qilin (Minigun, Black)
		"O_T_LSV_02_armed_ghex_F",							// Apex DLC			Qilin (Minigun, Green Hex)
		"O_T_LSV_02_armed_viper_F",							// Apex DLC			Qilin (Minigun, Viper)
		"O_T_LSV_02_unarmed_F",								// Apex DLC			Qilin (Unarmed)
		"O_T_LSV_02_unarmed_arid_F",						// Apex DLC			Qilin (Unarmed, Arid)
		"O_T_LSV_02_unarmed_black_F",						// Apex DLC			Qilin (Unarmed, Black)
		"O_T_LSV_02_unarmed_ghex_F",						// Apex DLC			Qilin (Unarmed, Green Hex)
		"O_T_LSV_02_unarmed_viper_F"						// Apex DLC			Qilin (Unarmed, Viper)
	};
}; // end class CSAT_Pacific_Cars

class CTRG_Cars
{
	name	= "Combat Technology Research Group Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_LSV_01_armed_CTRG_F",							// Apex DLC			Prowler (HMG)
		"B_CTRG_LSV_01_light_F",							// Apex DLC			Prowler (Light)
		"B_T_LSV_01_unarmed_CTRG_F"							// Apex DLC			Prowler (Unarmed)
	};
}; // end class CTRG_Cars

class Exile_Cars
{
	name	= "Exile Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Car_Van_Fuel_Guerilla01",					// Exile Mod		Fuel Truck (Guerilla)
		"Exile_Car_Van_Fuel_Guerilla02",					// Exile Mod		Fuel Truck (Guerilla)
		"Exile_Car_Van_Fuel_Guerilla03",					// Exile Mod		Fuel Truck (Guerilla)
		"Exile_Car_HMMWV_M134_Desert",						// Exile Mod		HMMWV (M134, Desert)
		"Exile_Car_HMMWV_M134_Green",						// Exile Mod		HMMWV (M134, Green)
		"Exile_Car_HMMWV_UNA_Desert",						// Exile Mod		HMMWV (Unarmed, Desert)
		"Exile_Car_HMMWV_UNA_Green",						// Exile Mod		HMMWV (Unarmed, Green)
		"Exile_Car_HMMWV_MEV_Desert",						// Exile Mod		HMMWV (Ambulance, Desert)
		"Exile_Car_HMMWV_MEV_Green",						// Exile Mod		HMMWV (Ambulance, Green)
		"Exile_Car_HMMWV_M2_Desert",						// Exile Mod		HMMWV (M2, Desert)
		"Exile_Car_HMMWV_M2_Green",							// Exile Mod		HMMWV (M2, Green)
		"Exile_Car_Hunter",									// Exile Mod		Hunter
		"Exile_Car_Ifrit",									// Exile Mod		Ifrit
		"Exile_Car_LandRover_Desert",						// Exile Mod		Land Rover (Desert)
		"Exile_Car_LandRover_Green",						// Exile Mod		Land Rover (Green)
		"Exile_Car_LandRover_Sand",							// Exile Mod		Land Rover (Sand)
		"Exile_Car_LandRover_Urban",						// Exile Mod		Land Rover (Urban)
		"Exile_Car_LandRover_Ambulance_Desert",				// Exile Mod		Land Rover (Ambulance, Desert)
		"Exile_Car_LandRover_Ambulance_Green",				// Exile Mod		Land Rover (Ambulance, Green)
		"Exile_Car_LandRover_Ambulance_Sand",				// Exile Mod		Land Rover (Ambulance, Sand)
		"Exile_Car_Offroad_Guerilla01",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla02",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla03",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla04",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla05",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla06",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla07",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla08",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla09",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla10",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla11",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Guerilla12",						// Exile Mod		Offroad (Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla01",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla02",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla03",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla04",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla05",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla06",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla07",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla08",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla09",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla10",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla11",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Armed_Guerilla12",				// Exile Mod		Offroad (Armed, Guerilla)
		"Exile_Car_Offroad_Repair_Beige",					// Exile Mod		Offroad (Repair, Beige)
		"Exile_Car_Offroad_Repair_Blue",					// Exile Mod		Offroad (Repair, Blue)
		"Exile_Car_Offroad_Repair_BlueCustom",				// Exile Mod		Offroad (Repair, Custom Blue)
		"Exile_Car_Offroad_Repair_DarkRed",					// Exile Mod		Offroad (Repair, Dark Red)
		"Exile_Car_Offroad_Repair_Guerilla01",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla02",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla03",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla04",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla05",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla06",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla07",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla08",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla09",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla10",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla11",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Guerilla12",				// Exile Mod		Offroad (Repair, Guerilla)
		"Exile_Car_Offroad_Repair_Red",						// Exile Mod		Offroad (Repair, Red)
		"Exile_Car_Offroad_Repair_White",					// Exile Mod		Offroad (Repair, White)
		"Exile_Car_ProwlerLight",							// Exile Mod		Prowler (Light)
		"Exile_Car_ProwlerUnarmed",							// Exile Mod		Prowler (Unarmed)
		"Exile_Car_QilinUnarmed",							// Exile Mod		Qilin (Unarmed)
		"Exile_Car_SUV_Armed_Black",						// Exile Mod		SUV (Armed)
		"Exile_Car_UAZ_Green",								// Exile Mod		UAZ (Green)
		"Exile_Car_UAZ_Open_Green",							// Exile Mod		UAZ (Open, Green)
		"Exile_Car_Van_Guerilla01",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla02",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla03",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla04",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla05",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla06",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla07",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Guerilla08",							// Exile Mod		Truck (Guerilla)
		"Exile_Car_Van_Box_Guerilla01",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla02",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla03",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla04",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla05",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla06",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla07",						// Exile Mod		Truck Boxer (Guerilla)
		"Exile_Car_Van_Box_Guerilla08"						// Exile Mod		Truck Boxer (Guerilla)
	};
}; // end class Exile_Cars

class FIA_East_Cars
{
	name	= "Freedom and Independence Army (East) Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_G_Van_01_fuel_F",								// Arma				Fuel Truck
		"O_G_Offroad_01_AT_F",								// Tanks DLC		Offroad (AT)
		"O_G_Offroad_01_F",									// Arma				Offroad (Green Hex)
		"O_G_Offroad_01_armed_F",							// Arma				Offroad (HMG, Green Hex)
		"O_G_Offroad_01_repair_F",							// Arma				Offroad (Repair)
		"O_G_Van_01_transport_F",							// Arma				Truck (Green Hex)
		"O_G_Van_02_vehicle_F",								// Laws of War DLC	Van (Cargo)
		"O_G_Van_02_transport_F"							// Laws of War DLC	Van (Transport)
	};
}; // end class FIA_East_Cars

class FIA_Independent_Cars
{
	name	= "Freedom and Independence Army (Independent) Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_G_Van_01_fuel_F",								// Arma				Fuel Truck
		"I_G_Offroad_01_F",									// Arma				Offroad
		"I_G_Offroad_01_AT_F",								// Tanks DLC		Offroad (AT)
		"I_G_Offroad_01_armed_F",							// Arma				Offroad (HMG)
		"I_G_Offroad_01_repair_F",							// Arma				Offroad (Repair)
		"I_G_Van_01_transport_F",							// Arma				Truck
		"I_G_Van_02_vehicle_F",								// Laws of War DLC	Van (Cargo)
		"I_G_Van_02_transport_F"							// Laws of War DLC	Van (Transport)
	};
}; // end class FIA_Independent_Cars

class FIA_West_Cars
{
	name	= "Freedom and Independence Army (West) Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_G_Van_01_fuel_F",								// Arma				Fuel Truck
		"B_G_Offroad_01_F",									// Arma				Offroad
		"B_G_Offroad_01_AT_F",								// Tanks DLC		Offroad (AT)
		"B_G_Offroad_01_armed_F",							// Arma				Offroad (HMG)
		"B_G_Offroad_01_repair_F",							// Arma				Offroad (Repair)
		"B_G_Van_01_transport_F",							// Arma				Truck
		"B_G_Van_02_vehicle_F",								// Laws of War DLC	Van (Cargo)
		"B_G_Van_02_transport_F"							// Laws of War DLC	Van (Transport)
	};
}; // end class FIA_Cars

class GEN_Cars
{
	name	= "Gendarmerie Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_GEN_Offroad_01_gen_F",							// Apex DLC			Offroad
		"B_GEN_Van_02_vehicle_F",							// Laws of War DLC	Van (Cargo)
		"B_GEN_Van_02_transport_F"							// Laws of War DLC	Van (Transport)
	};
}; // end class GEN_Cars

class IDAP_Cars
{
	name	= "International Development & Aid Project Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_IDAP_Offroad_02_unarmed_F",						// Laws of War DLC	MB 4WD
		"C_IDAP_Offroad_01_F"								// Laws of War DLC	Offroad
	};
}; // end class IDAP_Cars

class NATO_Cars
{
	name	= "North Atlantic Treaty Organization Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_MRAP_01_F",										// Arma				Hunter
		"B_MRAP_01_gmg_F",									// Arma				Hunter GMG
		"B_MRAP_01_hmg_F",									// Arma				Hunter HMG
		"B_LSV_01_AT_F",									// Tanks DLC		Prowler (AT)
		"B_LSV_01_armed_F",									// Apex DLC			Prowler (HMG)
		"B_LSV_01_armed_black_F",							// Apex DLC			Prowler (HMG, Black)
		"B_LSV_01_armed_olive_F",							// Apex DLC			Prowler (HMG, Olive)
		"B_LSV_01_armed_sand_F",							// Apex DLC			Prowler (HMG, Sand)
		"B_LSV_01_unarmed_F",								// Apex DLC			Prowler (Unarmed)
		"B_LSV_01_unarmed_black_F",							// Apex DLC			Prowler (Unarmed, Black)
		"B_LSV_01_unarmed_olive_F",							// Apex DLC			Prowler (Unarmed, Olive)
		"B_LSV_01_unarmed_sand_F"							// Apex DLC			Prowler (Unarmed, Sand)
	};
}; // end class NATO_Cars

class NATO_Pacific_Cars
{
	name	= "North Atlantic Treaty Organization (Pacific) Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_MRAP_01_F",									// Apex DLC			Hunter
		"B_T_MRAP_01_gmg_F",								// Apex DLC			Hunter GMG
		"B_T_MRAP_01_hmg_F",								// Apex DLC			Hunter HMG
		"B_T_LSV_01_AT_F",									// Tanks DLC		Prowler (AT)
		"B_T_LSV_01_armed_F",								// Apex DLC			Prowler (HMG)
		"B_T_LSV_01_armed_black_F",							// Apex DLC			Prowler (HMG, Black)
		"B_T_LSV_01_armed_olive_F",							// Apex DLC			Prowler (HMG, Olive)
		"B_T_LSV_01_armed_sand_F",							// Apex DLC			Prowler (HMG, Sand)
		"B_T_LSV_01_unarmed_F",								// Apex DLC			Prowler (Unarmed)
		"B_T_LSV_01_unarmed_black_F",						// Apex DLC			Prowler (Unarmed, Black)
		"B_T_LSV_01_unarmed_olive_F",						// Apex DLC			Prowler (Unarmed, Olive)
		"B_T_LSV_01_unarmed_sand_F"							// Apex DLC			Prowler (Unarmed, Sand)
	};
}; // end class NATO_Pacific_Cars

class Syndikat_Cars
{
	name	= "Syndikat Cars";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_C_Offroad_02_unarmed_F",							// Apex DLC			MB 4WD
		"I_C_Offroad_02_AT_F",								// Tanks DLC		MB 4WD (AT)
		"I_C_Offroad_02_unarmed_brown_F",					// Apex DLC			MB 4WD (Brown)
		"I_C_Offroad_02_LMG_F",								// Tanks DLC		MB 4WD (LMG)
		"I_C_Offroad_02_unarmed_olive_F",					// Apex DLC			MB 4WD (Olive)
		"I_C_Van_01_transport_F",							// Apex DLC			Truck
		"I_C_Van_02_vehicle_F",								// Laws of War DLC	Van (Cargo)
		"I_C_Van_02_transport_F",							// Laws of War DLC	Van (Transport)
		"I_C_Van_01_transport_brown_F",						// Apex DLC			Van (Transport, Brown)
		"I_C_Van_01_transport_olive_F"						// Apex DLC			Van (Transport, Olive)
	};
}; // end class Syndikat_Cars


//////////////
// Go-Carts //
//////////////
class Civilian_Go_Carts
{
	name	= "Civilian Go-Carts";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Kart_01_F",										// Karts DLC		Kart
		"Exile_Car_Kart_Blue",								// Exile Mod		Kart
		"C_Kart_01_black_F",								// Karts DLC		Kart (Black)
		"Exile_Car_Kart_Black",								// Exile Mod		Kart (Black)
		"C_Kart_01_Blu_F",									// Karts DLC		Kart (Bluking)
		"Exile_Car_Kart_BluKing",							// Exile Mod		Kart (Bluking)
		"C_Kart_01_Fuel_F",									// Karts DLC		Kart (Fuel)
		"C_Kart_01_green_F",								// Karts DLC		Kart (Green)
		"Exile_Car_Kart_Green",								// Exile Mod		Kart (Green)
		"C_Kart_01_orange_F",								// Karts DLC		Kart (Orange)
		"Exile_Car_Kart_Orange",							// Exile Mod		Kart (Orange)
		"C_Kart_01_Red_F",									// Karts DLC		Kart (Redstone)
		"Exile_Car_Kart_RedStone",							// Exile Mod		Kart (Redstone)
		"C_Kart_01_white_F",								// Karts DLC		Kart (White)
		"Exile_Car_Kart_White",								// Exile Mod		Kart (White)
		"C_Kart_01_yellow_F",								// Karts DLC		Kart (Yellow)
		"Exile_Car_Kart_Yellow"								// Exile Mod		Kart (Yellow)
	};
}; // end class Civilian_Go_Carts

class Vrana_Go_Carts
{
	name	= "Vrana Corp Industries Go-Carts";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Kart_01_Vrana_F",								// Karts DLC		Kart (Vrana)
		"Exile_Car_Kart_Vrana"								// Exile Mod		Kart (Vrana)
	};
}; // end class Vrana_Go_Carts


/////////////////
// Helicopters //
/////////////////
class AAF_Helicopters
{
	name	= "Altis Armed Forces Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Heli_Transport_02_F",							// Arma				CH-49 Mohawk
		"I_Heli_light_03_F",								// Arma				WY-55 Hellcat
		"I_Heli_light_03_dynamicLoadout_F",					// Arma				WY-55 Hellcat (Dynamic Loadout)
		"Exile_Chopper_Hellcat_Green",						// Exile Mod		WY-55 Hellcat (Green)
		"I_Heli_light_03_unarmed_F"							// Arma				WY-55 Hellcat (Unarmed)
	};
}; // end class AAF_Helicopters

class Civilian_Helicopters
{
	name	= "Civilian Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Heli_Light_01_civil_F",							// Helicopters DLC	M-900
		"C_Heli_light_01_blue_F",							// Helicopters DLC	M-900 (Blue)
		"C_Heli_light_01_blueLine_F",						// Helicopters DLC	M-900 (BlueLine)
		"C_Heli_light_01_digital_F",						// Helicopters DLC	M-900 (Digital)
		"C_Heli_light_01_elliptical_F",						// Helicopters DLC	M-900 (Elliptical)
		"C_Heli_light_01_furious_F",						// Helicopters DLC	M-900 (Furious)
		"C_Heli_light_01_graywatcher_F",					// Helicopters DLC	M-900 (GrayWatcher)
		"C_Heli_light_01_jeans_F",							// Helicopters DLC	M-900 (Jeans)
		"C_Heli_light_01_light_F",							// Helicopters DLC	M-900 (Light)
		"C_Heli_light_01_luxe_F",							// Helicopters DLC	M-900 (Luxe)
		"C_Heli_light_01_red_F",							// Helicopters DLC	M-900 (Red)
		"C_Heli_light_01_shadow_F",							// Helicopters DLC	M-900 (Shadow)
		"C_Heli_light_01_sheriff_F",						// Helicopters DLC	M-900 (Sheriff)
		"C_Heli_light_01_speedy_F",							// Helicopters DLC	M-900 (Speedy)
		"C_Heli_light_01_stripped_F",						// Helicopters DLC	M-900 (Stripped)
		"C_Heli_light_01_sunset_F",							// Helicopters DLC	M-900 (Sunset)
		"C_Heli_light_01_wasp_F",							// Helicopters DLC	M-900 (Wasp)
		"C_Heli_light_01_wave_F",							// Helicopters DLC	M-900 (Wave)
		"Exile_Chopper_Hummingbird_Civillian_Blue",			// Exile Mod		MH-9 Hummingbird (Blue)
		"Exile_Chopper_Hummingbird_Civillian_BlueLine",		// Exile Mod		MH-9 Hummingbird (BlueLine)
		"Exile_Chopper_Hummingbird_Civillian_Digital",		// Exile Mod		MH-9 Hummingbird (Digital)
		"Exile_Chopper_Hummingbird_Civillian_Elliptical",	// Exile Mod		MH-9 Hummingbird (Elliptical)
		"Exile_Chopper_Hummingbird_Civillian_Furious",		// Exile Mod		MH-9 Hummingbird (Furious)
		"Exile_Chopper_Hummingbird_Civillian_GrayWatcher",	// Exile Mod		MH-9 Hummingbird (GrayWatcher)
		"Exile_Chopper_Hummingbird_Civillian_Jeans",		// Exile Mod		MH-9 Hummingbird (Jeans)
		"Exile_Chopper_Hummingbird_Civillian_Light",		// Exile Mod		MH-9 Hummingbird (Light)
		"Exile_Chopper_Hummingbird_Civillian_Red",			// Exile Mod		MH-9 Hummingbird (Red)
		"Exile_Chopper_Hummingbird_Civillian_Shadow",		// Exile Mod		MH-9 Hummingbird (Shadow)
		"Exile_Chopper_Hummingbird_Civillian_Sheriff",		// Exile Mod		MH-9 Hummingbird (Sheriff)
		"Exile_Chopper_Hummingbird_Civillian_Speedy",		// Exile Mod		MH-9 Hummingbird (Speedy)
		"Exile_Chopper_Hummingbird_Civillian_Sunset",		// Exile Mod		MH-9 Hummingbird (Sunset)
		"Exile_Chopper_Hummingbird_Civillian_Wasp",			// Exile Mod		MH-9 Hummingbird (Wasp)
		"Exile_Chopper_Hummingbird_Civillian_Wave"			// Exile Mod		MH-9 Hummingbird (Wave)
	};
}; // end class Civilian_Helicopters

class CSAT_Helicopters
{
	name	= "Canton Protocol Strategic Alliance Treaty Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Chopper_Orca_CSAT",							// Exile Mod		Kamov Ka-60 Killer Whale
		"Exile_Chopper_Orca_Black",							// Exile Mod		Kamov Ka-60 Killer Whale (Black)
		"Exile_Chopper_Orca_BlackCustom",					// Exile Mod		Kamov Ka-60 Killer Whale (Black & White)
		"O_Heli_Attack_02_F",								// Arma				Mi-48 Kajman
		"O_Heli_Attack_02_black_F",							// Arma				Mi-48 Kajman (Black)
		"O_Heli_Attack_02_dynamicLoadout_F",				// Arma				Mi-48 Kajman (Dynamic Loadout)
		"O_Heli_Attack_02_dynamicLoadout_black_F",			// Arma				Mi-48 Kajman (Dynamic Loadout, Black)
		"O_Heli_Transport_04_F",							// Helicopters DLC	Mi-290 Taru
		"Exile_Chopper_Taru_CSAT",							// Exile Mod		Mi-290 Taru
		"O_Heli_Transport_04_black_F",						// Helicopters DLC	Mi-290 Taru (Black)
		"Exile_Chopper_Taru_Black",							// Exile Mod		Mi-280 Taru (Black)
		"O_Heli_Transport_04_ammo_F",						// Helicopters DLC	Mi-290 Taru (Ammo)
		"O_Heli_Transport_04_ammo_black_F",					// Helicopters DLC	Mi-290 Taru (Ammo, Black)
		"O_Heli_Transport_04_bench_F",						// Helicopters DLC	Mi-290 Taru (Bench)
		"O_Heli_Transport_04_bench_black_F",				// Helicopters DLC	Mi-290 Taru (Bench, Black)
		"O_Heli_Transport_04_box_F",						// Helicopters DLC	Mi-290 Taru (Cargo)
		"Exile_Chopper_Taru_Transport_CSAT",				// Exile Mod		Mi-290 Taru (Cargo)
		"O_Heli_Transport_04_box_black_F",					// Helicopters DLC	Mi-290 Taru (Cargo, Black)
		"Exile_Chopper_Taru_Transport_Black",				// Exile Mod		Mi-280 Taru (Cargo, Black)
		"O_Heli_Transport_04_fuel_F",						// Helicopters DLC	Mi-290 Taru (Fuel)
		"O_Heli_Transport_04_fuel_black_F",					// Helicopters DLC	Mi-290 Taru (Fuel, Black)
		"O_Heli_Transport_04_medevac_F",					// Helicopters DLC	Mi-290 Taru (Medical)
		"O_Heli_Transport_04_medevac_black_F",				// Helicopters DLC	Mi-290 Taru (Medical, Black)
		"O_Heli_Transport_04_repair_F",						// Helicopters DLC	Mi-290 Taru (Repair)
		"O_Heli_Transport_04_repair_black_F",				// Helicopters DLC	Mi-290 Taru (Repair, Black)
		"O_Heli_Transport_04_covered_F",					// Helicopters DLC	Mi-290 Taru (Transport)
		"O_Heli_Transport_04_covered_black_F",				// Helicopters DLC	Mi-290 Taru (Transport, Black)
		"Exile_Chopper_Taru_Covered_Black",					// Exile Mod		Mi-280 Taru (Transport, Black)
		"O_Heli_Light_02_F",								// Arma				PO-30 Orca
		"O_Heli_Light_02_v2_F",								// Arma				PO-30 Orca (Black & White)
		"O_Heli_Light_02_dynamicLoadout_F",					// Arma				PO-30 Orca (Dynamic Loadout)
		"O_Heli_Light_02_unarmed_F"							// Arma				PO-30 Orca (Unarmed)
	};
}; // end class CSAT_Helicopters

class CTRG_Helicopters
{
	name	= "Combat Technology Research Group Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_CTRG_Heli_Transport_01_sand_F",					// Apex DLC			UH-80 Ghost Hawk (Sand)
		"B_CTRG_Heli_Transport_01_tropic_F"					// Apex DLC			UH-80 Ghost Hawk (Tropic)
	};
}; // end class CTRG_Helicopters

class Exile_Helicopters
{
	name	= "Exile Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Chopper_Huey_Armed_Desert",					// Exile Mod		UH-1 Iroquois (Armed, Desert)
		"Exile_Chopper_Huey_Armed_Green",					// Exile Mod		UH-1 Iroquois (Armed, Green)
		"Exile_Chopper_Huey_Desert",						// Exile Mod		UH-1 Iroquois (Desert)
		"Exile_Chopper_Huey_Green"							// Exile Mod		UH-1 Iroquois (Green)
	};
}; // end class Exile_Helicopters

class FIA_Independent_Helicopters
{
	name	= "Freedom and Independence Army (Independent) Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Chopper_Mohawk_FIA",							// Exile Mod		CH-49 Mohawk
		"Exile_Chopper_Hellcat_FIA"							// Exile Mod		WY-55 Hellcat
	};
}; // end class FIA_Independent_Helicopters

class ION_Helicopters
{
	name	= "ION Services, Incorporated Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Heli_light_01_ion_F",							// Helicopters DLC	M-900 (ION)
		"Exile_Chopper_Hummingbird_Civillian_ION"			// Exile Mod		MH-9 Hummingbird (ION)
	};
}; // end class ION_Helicopters

class NATO_Helicopters
{
	name	= "North Atlantic Treaty Organization Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_Heli_Light_01_armed_F",							// Arma				AH.9 Lynx
		"B_Heli_Light_01_dynamicLoadout_F",					// Arma				AH.9 Lynx (Dynamic Loadout)
		"B_Heli_Attack_01_F",								// Arma				AH-99 Blackfoot
		"B_Heli_Attack_01_dynamicLoadout_F",				// Arma				AH-99 Blackfoot (Dynamic Loadout)
		"B_Heli_Transport_03_F",							// Helicopters DLC	CH-67 Huron
		"B_Heli_Transport_03_black_F",						// Helicopters DLC	CH-67 Huron (Black)
		"Exile_Chopper_Huron_Black",						// Exile Mod		CH-67 Huron (Black)
		"Exile_Chopper_Huron_Green",						// Exile Mod		CH-67 Huron (Green)
		"B_Heli_Transport_03_unarmed_F",					// Helicopters DLC	CH-67 Huron (Unarmed)
		"B_Heli_Transport_03_unarmed_green_F",				// Helicopters DLC	CH-67 Huron (Unarmed, Green)
		"B_Heli_Light_01_F",								// Arma				MH-9 Hummingbird
		"Exile_Chopper_Hummingbird_Green",					// Exile Mod		MH-9 Hummingbird (Green)
		"B_Heli_Light_01_stripped_F",						// Arma				MH-9 Hummingbird (Stripped)
		"B_Heli_Transport_01_F",							// Arma				UH-80 Ghost Hawk
		"B_Heli_Transport_01_camo_F"						// Arma				UH-80 Ghost Hawk (Camo)
	};
}; // end class NATO_Helicopters

class Syndikat_Helicopters
{
	name	= "Syndikat Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_C_Heli_Light_01_civil_F"							// Apex DLC			M-900
	};
}; // end class Syndikat_Helicopters

class Vrana_Helicopters
{
	name	= "Vrana Corp Industries Helicopters";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Heli_light_01_vrana_F",							// Helicopters DLC	M-900 (Vrana)
		"Exile_Chopper_Hummingbird_Civillian_Vrana"			// Exile Mod		MH-9 Hummingbird (Vrana)
	};
}; // end class Vrana_Helicopters


/////////////////
// Motorcycles //
/////////////////
class AAF_Motorcycles
{
	name	= "Altis Armed Forces Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Quadbike_01_F"									// Arma				Quad Bike
	};
}; // end class AAF_Motorcycles

class Civilian_Motorcycles
{
	name	= "Civilian Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_Quadbike_01_F",									// Arma				Quad Bike
		"C_Quadbike_01_black_F",							// Arma				Quad Bike (Black)
		"Exile_Bike_QuadBike_Black",						// Exile Mod		Quad Bike (Black)
		"C_Quadbike_01_blue_F",								// Arma				Quad Bike (Blue)
		"Exile_Bike_QuadBike_Blue",							// Exile Mod		Quad Bike (Blue)
		"C_Quadbike_01_red_F",								// Arma				Quad Bike (Red)
		"Exile_Bike_QuadBike_Red",							// Exile Mod		Quad Bike (Red)
		"C_Quadbike_01_white_F",							// Arma				Quad Bike (White)
		"Exile_Bike_QuadBike_White"							// Exile Mod		Quad Bike (White)
	};
}; // end class Civilian_Motorcycles

class CSAT_Motorcycles
{
	name	= "Canton Protocol Strategic Alliance Treaty Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_Quadbike_01_F",									// Arma				Quad Bike
		"Exile_Bike_QuadBike_CSAT"							// Exile Mod		Quad Bike
	};
}; // end class CSAT_Motorcycles

class CSAT_Pacific_Motorcycles
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_Quadbike_01_ghex_F"							// Apex DLC			Quad Bike (Green Hex)
	};
}; // end class CSAT_Pacific_Motorcycles

class Exile_Motorcycles
{
	name	= "Exile Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Bike_QuadBike_Guerilla01",					// Exile Mod		Quad Bike (Guerilla)
		"Exile_Bike_QuadBike_Guerilla02"					// Exile Mod		Quad Bike (Guerilla)
	};
}; // end class Exile_Motorcycles

class FIA_East_Motorcycles
{
	name	= "Freedom and Independence Army (East) Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_G_Quadbike_01_F"									// Arma				Quad Bike (Green Hex)
	};
}; // end class FIA_East_Motorcycles

class FIA_Independent_Motorcycles
{
	name	= "Freedom and Independence Army (Independent) Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_G_Quadbike_01_F"									// Arma				Quad Bike
	};
}; // end  class FIA_Independent_Motorcycles

class FIA_West_Motorcycles
{
	name	= "Freedom and Independence Army (West) Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_G_Quadbike_01_F",								// Arma				Quad Bike
		"Exile_Bike_QuadBike_FIA"							// Exile Mod		Quad Bike
	};
}; // end class FIA_West_Motorcycles

class NATO_Motorcycles
{
	name	= "North Atlantic Treaty Organization Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_Quadbike_01_F",									// Arma				Quad Bike
		"Exile_Bike_QuadBike_NATO"							// Exile Mod		Quad Bike
	};
}; // end class NATO_Motorcycles

class NATO_Pacific_Motorcycles
{
	name	= "North Atlantic Treaty Organization (Pacific) Motorcycles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_Quadbike_01_F"									// Apex DLC			Quad Bike
	};
}; // end class NATO_Pacific_Motorcycles


//////////////////
// Submersibles //
//////////////////
class AAF_Submersibles
{
	name	= "Altis Armed Forces Submersibles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_SDV_01_F"										// Arma				SDV
	};
}; // end class AAF_Submersibles

class CSAT_Submersibles
{
	name	= "Canton Protocol Strategic Alliance Treaty Submersibles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_SDV_01_F",										// Arma				SDV
		"Exile_Boat_SDV_CSAT"								// Exile Mod		SDV
	};
}; // end class CSAT_Submersibles

class Exile_Submersibles
{
	name	= "Exile Submersibles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Boat_SDV_Digital",							// Exile Mod		SDV
		"Exile_Boat_SDV_Grey"								// Exile Mod		SDV
	};
}; // end class Exile_Submersibles
class NATO_Submersibles
{
	name	= "North Atlantic Treaty Organization Submersibles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_SDV_01_F"										// Arma				SDV
	};
}; // end class NATO_Submersibles


///////////
// Tanks //
///////////
class AAF_Tanks
{
	name	= "Altis Armed Forces Tanks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_LT_01_AT_F",										// Arma				AWC 301 Nyx (AT)
		"I_LT_01_scout_F",									// Arma				AWC 303 Nyx (Recon)
		"I_LT_01_cannon_F",									// Arma				AWC 304 Nyx (Autocannon)
		"I_MBT_03_cannon_F"									// Arma				MBT-52 Kuma
	};
}; // end class AAF_Tanks

class CSAT_Tanks
{
	name	= "Canton Protocol Strategic Alliance Treaty Tanks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_MBT_02_cannon_F",								// Arma				T-100 Varsuk
		"O_MBT_04_cannon_F",								// Tanks DLC		T-140 Angara
		"O_MBT_04_command_F"								// Tanks DLC		T-140K Angara
	};
}; // end class CSAT_Tanks

class CSAT_Pacific_Tanks
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Tanks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_MBT_02_cannon_ghex_F",							// Apex DLC			T-100 Varsuk (Green Hex)
		"O_T_MBT_04_cannon_F",								// Tanks DLC		T-140 Angara
		"O_T_MBT_04_command_F"								// Tanks DLC		T-140K Angara
	};
}; // end class CSAT_Pacific_Tanks

class NATO_Tanks
{
	name	= "North Atlantic Treaty Organization Tanks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_MBT_01_cannon_F",								// Arma				M2A1 Slammer
		"B_MBT_01_TUSK_F"									// Arma				M2A4 Slammer UP
	};
}; // end class NATO_Tanks

class NATO_Pacific_Tanks
{
	name	= "North Atlantic Treaty Organization (Pacific) Tanks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_MBT_01_cannon_F",								// Apex DLC			M2A1 Slammer
		"B_T_MBT_01_TUSK_F"									// Apex DLC			M2A4 Slammer UP
	};
}; // end class NATO_Pacific_Tanks


////////////
// Trucks //
////////////
class AAF_Trucks
{
	name	= "Altis Armed Forces Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_Truck_02_ammo_F",								// Arma				Zamak Ammo
		"I_Truck_02_fuel_F",								// Arma				Zamak Fuel
		"I_Truck_02_medical_F",								// Arma				Zamak Medical
		"I_Truck_02_box_F",									// Arma				Zamak Repair
		"I_Truck_02_transport_F",							// Arma				Zamak Transport
		"I_Truck_02_covered_F"								// Arma				Zamak Transport (Covered)
	};
}; // end class AAF_Trucks

class CDF_Trucks
{
	name	= "Chernarussian Defence Forces Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Car_Ural_Covered_Military",					// Exile Mod		Ural (Covered)
		"Exile_Car_Ural_Open_Military"						// Exile Mod		Ural (Open)
	};
}; // end class CDF_Trucks

class Civilian_Trucks
{
	name	= "Civilian Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Car_Ikarus_Blue",							// Exile Mod		Ikarus (Blue)
		"Exile_Car_Ikarus_Party",							// Exile Mod		Ikarus (Party)
		"Exile_Car_Ikarus_Red",								// Exile Mod		Ikarus (Red)
		"Exile_Car_Ural_Covered_Blue",						// Exile Mod		Ural (Covered, Blue)
		"Exile_Car_Ural_Covered_Worker",					// Exile Mod		Ural (Covered, Worker)
		"Exile_Car_Ural_Covered_Yellow",					// Exile Mod		Ural (Covered, Yellow)
		"Exile_Car_Ural_Open_Blue",							// Exile Mod		Ural (Open, Blue)
		"Exile_Car_Ural_Open_Worker",						// Exile Mod		Ural (Open, Worker)
		"Exile_Car_Ural_Open_Yellow",						// Exile Mod		Ural (Open, Yellow)
		"C_Truck_02_fuel_F",								// Arma				Zamak Fuel
		"C_Truck_02_box_F",									// Arma				Zamak Repair
		"C_Truck_02_transport_F",							// Arma				Zamak Transport
		"C_Truck_02_covered_F"								// Arma				Zamak Transport (Covered)
	};
}; // end class Civilian_Trucks

class CSAT_Trucks
{
	name	= "Canton Protocol Strategic Alliance Treaty Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_Truck_03_ammo_F",								// Arma				Tempest Ammo
		"O_Truck_03_fuel_F",								// Arma				Tempest Fuel
		"O_Truck_03_medical_F",								// Arma				Tempest Medical
		"O_Truck_03_repair_F",								// Arma				Tempest Repair
		"O_Truck_03_transport_F",							// Arma				Tempest Transport
		"O_Truck_03_covered_F",								// Arma				Tempest Transport (Covered)
		"O_Truck_03_device_F",								// Arma				Tempest (Device)
		"O_Truck_02_Ammo_F",								// Arma				Zamak Ammo
		"O_Truck_02_fuel_F",								// Arma				Zamak Fuel
		"O_Truck_02_medical_F",								// Arma				Zamak Medical
		"O_Truck_02_box_F",									// Arma				Zamak Repair
		"O_Truck_02_transport_F",							// Arma				Zamak Transport
		"O_Truck_02_covered_F"								// Arma				Zamak Transport (Covered)
	};
}; // end class CSAT_Trucks

class CSAT_Pacific_Trucks
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_Truck_03_ammo_ghex_F",							// Apex DLC			Tempest Ammo (Green Hex)
		"O_T_Truck_03_fuel_ghex_F",							// Apex DLC			Tempest Fuel (Green Hex)
		"O_T_Truck_03_medical_ghex_F",						// Apex DLC			Tempest Medical (Green Hex)
		"O_T_Truck_03_repair_ghex_F",						// Apex DLC			Tempest Repair (Green Hex)
		"O_T_Truck_03_transport_ghex_F",					// Apex DLC			Tempest Transport (Green Hex)
		"O_T_Truck_03_covered_ghex_F",						// Apex DLC			Tempest Transport (Covered, Green Hex)
		"O_T_Truck_03_device_ghex_F"						// Apex DLC			Tempest (Device, Green Hex)
	};
}; // end class CSAT_Pacific_Trucks

class Exile_Trucks
{
	name	= "Exile Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"Exile_Car_HEMMT",									// Exile Mod		HEMMT
		"Exile_Car_V3S_Covered",							// Exile Mod		Praga V3S (Covered)
		"Exile_Car_V3S_Open",								// Exile Mod		Praga V3S (Open)
		"Exile_Car_Tempest",								// Exile Mod		Tempest
		"Exile_Car_Zamak"									// Exile Mod		Zamak
	};
}; // end class Exile_Trucks

class IDAP_Trucks
{
	name	= "International Development & Aid Project Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_IDAP_Truck_02_F",								// Laws of War DLC	Zamak
		"C_IDAP_Truck_02_transport_F",						// Laws of War DLC	Zamak Transport
		"C_IDAP_Truck_02_water_F"							// Laws of War DLC	Zamak Water
	};
}; // end class IDAP_Trucks

class NATO_Trucks
{
	name	= "North Atlantic Treaty Organization Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_Truck_01_mover_F",								// Arma				HEMMT
		"B_Truck_01_ammo_F",								// Arma				HEMTT Ammo
		"B_Truck_01_box_F",									// Arma				HEMTT Box
		"B_Truck_01_fuel_F",								// Arma				HEMTT Fuel
		"B_Truck_01_medical_F",								// Arma				HEMTT Medical
		"B_Truck_01_Repair_F",								// Arma				HEMTT Repair
		"B_Truck_01_transport_F",							// Arma				HEMTT Transport
		"B_Truck_01_covered_F"								// Arma				HEMTT Transport (Covered)
	};
}; // end class NATO_Trucks

class NATO_Pacific_Trucks
{
	name	= "North Atlantic Treaty Organization (Pacific) Trucks";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_Truck_01_mover_F",								// Apex DLC			HEMMT
		"B_T_Truck_01_ammo_F",								// Apex DLC			HEMTT Ammo
		"B_T_Truck_01_box_F",								// Apex DLC			HEMTT Box
		"B_T_Truck_01_fuel_F",								// Apex DLC			HEMTT Fuel
		"B_T_Truck_01_medical_F",							// Apex DLC			HEMTT Medical
		"B_T_Truck_01_Repair_F",							// Apex DLC			HEMTT Repair
		"B_T_Truck_01_transport_F",							// Apex DLC			HEMTT Transport
		"B_T_Truck_01_covered_F"							// Apex DLC			HEMTT Transport (Covered)
	};
}; // end class NATO_Pacific_Trucks


//////////////////////////////
// Unmanned Aerial Vehicles //
//////////////////////////////
class AAF_Drones_Aerial
{
	name	= "Altis Armed Forces Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_UAV_06_F",										// Laws of War DLC	AL-6 Pelican
		"I_UAV_06_medical_F",								// Laws of War DLC	AL-6 Pelican (Medical)
		"I_UAV_01_F",										// Arma				AR-2 Darter
		"I_UAV_02_F",										// Arma				K40 Ababil-3
		"I_UAV_02_CAS_F",									// Arma				K40 Ababil-3 (CAS)
		"I_UAV_02_dynamicLoadout_F"							// Arma				K40 Ababil-3 (Dynamic Loadout)
	};
}; // end class AAF_Drones_Aerial

class Civilian_Drones_Aerial
{
	name	= "Civilian Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"C_UAV_06_F",										// Laws of War DLC	Utility Drone
		"C_UAV_06_medical_F"								// Laws of War DLC	Utility Drone (Medical)
	};
}; // end class Civilian_Drones_Aerial

class CSAT_Drones_Aerial
{
	name	= "Canton Protocol Strategic Alliance Treaty Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_UAV_06_F",										// Laws of War DLC	AL-6 Jinaah
		"O_UAV_06_medical_F",								// Laws of War DLC	AL-6 Jinaah (Medical)
		"O_UAV_01_F",										// Arma				AR-2 Tayran
		"O_UAV_02_F",										// Arma				K40 Ababil-3
		"O_UAV_02_CAS_F",									// Arma				K40 Ababil-3 (CAS)
		"O_UAV_02_dynamicLoadout_F"							// Arma				K40 Ababil-3 (Dynamic Loadout)
	};
}; // end class CSAT_Drones_Aerial

class CSAT_Pacific_Drones_Aerial
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_UAV_04_CAS_F"									// Apex DLC			KH-3A Fenghuang (CAS)
	};
}; // end class CSAT_Pacific_Drones_Aerial

class NATO_Drones_Aerial
{
	name	= "North Atlantic Treaty Organization Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_UAV_06_F",										// Laws of War DLC	AL-6 Pelican
		"B_UAV_06_medical_F",								// Laws of War DLC	AL-6 Pelican (Medical)
		"B_UAV_01_F",										// Arma				AR-2 Darter
		"B_UAV_02_F",										// Arma				MQ-4A Greyhawk
		"B_UAV_02_CAS_F",									// Arma				MQ-4A Greyhawk (CAS)
		"B_UAV_02_dynamicLoadout_F",						// Arma				MQ-4A Greyhawk (Dynamic Loadout)
		"B_UAV_05_F"										// Jets DLC			UCAV Sentinel
	};
}; // end class NATO_Drones_Aerial

class NATO_Pacific_Drones_Aerial
{
	name	= "North Atlantic Treaty Organization (Pacific) Unmanned Aerial Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_T_UAV_03_F",										// Apex DLC			MQ-12 Falcon
		"B_T_UAV_03_dynamicLoadout_F"						// Apex DLC			MQ-12 Falcon (Dynamic Loadout)
	};
}; // end class NATO_Pacific_Drones_Aerial


//////////////////////////////
// Unmanned Ground Vehicles //
//////////////////////////////
class AAF_Drones_Land
{
	name	= "Altis Armed Forces Unmanned Ground Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"I_UGV_01_F",										// Arma				UGV Stomper
		"I_UGV_01_rcws_F"									// Arma				UGV Stomper RCWS
	};
}; // end class AAF_Drones_Land

class CSAT_Drones_Land
{
	name	= "Canton Protocol Strategic Alliance Treaty Unmanned Ground Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_UGV_01_F",										// Arma				UGV Saif
		"O_UGV_01_rcws_F"									// Arma				UGV Saif RCWS
	};
}; // end class CSAT_Drones_Land

class CSAT_Pacific_Drones_Land
{
	name	= "Canton Protocol Strategic Alliance Treaty (Pacific) Unmanned Ground Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"O_T_UGV_01_ghex_F",								// Apex DLC			UGV Saif (Green Hex)
		"O_T_UGV_01_rcws_ghex_F"							// Apex DLC			UGV Saif RCWS (Green Hex)
	};
}; // end class CSAT_Pacific_Drones_Land

class NATO_Drones_Land
{
	name	= "North Atlantic Treaty Organization Unmanned Ground Vehicles";
	icon	= "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[]	=
	{
		"B_UGV_01_F",										// Arma				UGV Stomper
		"B_UGV_01_rcws_F"									// Arma				UGV Stomper RCWS
	};
}; // end class NATO_Drones_Land
