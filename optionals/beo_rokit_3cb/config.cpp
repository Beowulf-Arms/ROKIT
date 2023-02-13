#define _ARMA_
//Class beo_arty : config.bin{
class CfgPatches
{
	class beo_rokit
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
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS";
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
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_ind: beo_arty_hilux_arty
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	class beo_arty_hilux_arty_he: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS (HE)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he"};
			};
		};	
	};
	
	class beo_arty_hilux_arty_he_opf: beo_arty_hilux_arty_he
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_he_ind: beo_arty_hilux_arty_he
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};





	class beo_arty_hilux_arty_cluster: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS (Cluster)";
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
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_cluster_ind: beo_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};
	
	
};