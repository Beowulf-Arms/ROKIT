#define _ARMA_
class CfgPatches
{
	class beo_rokit_3cb
	{
		units[] = {
			"beo_arty_hilux_arty",
			"beo_arty_hilux_arty_opf",
			"beo_arty_hilux_arty_ind",
			"beo_arty_hilux_arty_he",
			"beo_arty_hilux_arty_he_opf",
			"beo_arty_hilux_arty_he_ind",
			"beo_arty_hilux_arty_cluster",
			"beo_arty_hilux_arty_cluster_opf",
			"beo_arty_hilux_arty_cluster_ind"
			};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","beo_rokit","uk3cb_factions_vehicles_hilux"};
		version = "1";
		requiredVersion = "1";
		author = "Walker";
	};
};


class CfgVehicles
{

	class UK3CB_I_G_Hilux_Rocket_Arty;
	class UK3CB_TKM_I_Hilux_Rocket_Arty: UK3CB_I_G_Hilux_Rocket_Arty
	{
		class Turrets;
		class MainTurret;			
	};
	class beo_arty_hilux_arty: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction = "BLU_F";
		crew = "B_Soldier_F";
		displayName = "Hilux ROKIT MLRS";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster"};
			};
		};	
	};
	
	class beo_arty_hilux_arty_opf: beo_arty_hilux_arty
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
	};
	
	class beo_arty_hilux_arty_ind: beo_arty_hilux_arty
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
	};


	class beo_arty_hilux_arty_cluster: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction = "BLU_F";
		crew = "B_Soldier_F";
		displayName = "Hilux ROKIT MLRS (Cluster)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster"};
			};
		};	
	};
	
	
	class beo_arty_hilux_arty_cluster_opf: beo_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
	};
	
	class beo_arty_hilux_arty_cluster_ind: beo_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
	};
	
	
};