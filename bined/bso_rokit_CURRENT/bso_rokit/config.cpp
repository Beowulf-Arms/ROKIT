////////////////////////////////////////////////////////////////////
//DeRap: bso_rokit\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Mar 25 23:25:05 2022 : 'file' last modified on Sun Jan 30 13:47:29 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bso_rokit
	{
		units[] = {"bso_arty_rokit","bso_arty_rokit_opf","bso_arty_rokit_ind","bso_arty_rokit_he","bso_arty_rokit_he_opf","bso_arty_rokit_he_ind","bso_arty_rokit_cluster","bso_arty_rokit_cluster_opf","bso_arty_rokit_cluster_ind","bso_arty_hilux_arty","bso_arty_hilux_arty_opf","bso_arty_hilux_arty_ind","bso_arty_hilux_arty_he","bso_arty_hilux_arty_he_opf","bso_arty_hilux_arty_he_ind","bso_arty_hilux_arty_cluster","bso_arty_hilux_arty_cluster_opf","bso_arty_hilux_arty_cluster_ind"};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","bso_wps","bso_ai"};
		version = "1.0";
		requiredVersion = "1.0";
		author = "BSO Walker";
		magazines[] = {"bso_arty_mag12_122_he","bso_arty_mag10_122_he","bso_arty_mag12_122_cluster","bso_arty_mag10_122_cluster"};
		ammo[] = {"bso_arty_ammo_122_r_he","bso_arty_ammo_122_r_fly","bso_sub_dud_fly","bso_sub_dud_air","bso_sub_dud_deploy","bso_sub_dud_uxo","bso_arty_ammo_122_r_cluster","bso_arty_ammo_122_r_cluster_fly","bso_sub_cluster_AP"};
	};
};
class bso_artyRocket_black
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
	class bso_artyRocket_black
	{
		simulation = "particles";
		type = "bso_artyRocket_black";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 120;
	};
};
class cfgCloudlets
{
	class Missile5;
	class bso_artyRocket_black: Missile5
	{
		color[] = {{0.01,0.01,0.01,0.8},{0.05,0.05,0.05,0.4},{0.1,0.1,0.1,0}};
		colorVar[] = {0,0,0,0};
	};
};
class CfgVehicles
{
	class StaticMortar;
	class Mortar_01_base_F;
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets;
		class MainTurret;
	};
	class bso_arty_rokit: B_Mortar_01_F
	{
		scope = 2;
		displayname = "[BSO AI] ROKIT Artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "BSO Walker";
		side = 1;
		faction = "bso_ai_blu";
		crew = "bso_ai_crew";
		typicalCargo[] = {"bso_ai_crew"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster"};
				weapons[] = {"bso_arty_rokit"};
			};
		};
	};
	class bso_arty_rokit_opf: bso_arty_rokit
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_rokit_ind: bso_arty_rokit
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
	class bso_arty_rokit_he: bso_arty_rokit
	{
		scope = 2;
		displayname = "[BSO AI] ROKIT Artillery (HE)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he","bso_arty_mag12_122_he"};
				weapons[] = {"bso_arty_rokit"};
			};
		};
	};
	class bso_arty_rokit_he_opf: bso_arty_rokit_he
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_rokit_he_ind: bso_arty_rokit_he
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
	class bso_arty_rokit_cluster: bso_arty_rokit_he
	{
		scope = 2;
		displayname = "[BSO AI] ROKIT Artillery (Cluster)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster","bso_arty_mag12_122_cluster"};
				weapons[] = {"bso_arty_rokit"};
			};
		};
	};
	class bso_arty_rokit_cluster_opf: bso_arty_rokit_cluster
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_rokit_cluster_ind: bso_arty_rokit_cluster
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
	class UK3CB_I_G_Hilux_Rocket_Arty;
	class UK3CB_TKM_I_Hilux_Rocket_Arty: UK3CB_I_G_Hilux_Rocket_Arty
	{
		class Turrets;
		class MainTurret;
	};
	class bso_arty_hilux_arty: UK3CB_TKM_I_Hilux_Rocket_Arty
	{
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction = "bso_ai_blu";
		crew = "bso_ai_crew";
		typicalCargo[] = {"bso_ai_crew"};
		displayName = "[BSO AI] Hilux ROKIT MLRS";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 3;
				weapons[] = {"bso_arty_rokit_mlrs"};
				magazines[] = {"bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster"};
			};
		};
	};
	class bso_arty_hilux_arty_opf: bso_arty_hilux_arty
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_hilux_arty_ind: bso_arty_hilux_arty
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
	class bso_arty_hilux_arty_he: UK3CB_TKM_I_Hilux_Rocket_Arty
	{
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction = "bso_ai_blu";
		crew = "bso_ai_crew";
		typicalCargo[] = {"bso_ai_crew"};
		displayName = "[BSO AI] Hilux ROKIT MLRS (HE)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 3;
				weapons[] = {"bso_arty_rokit_mlrs"};
				magazines[] = {"bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he","bso_arty_mag10_122_he"};
			};
		};
	};
	class bso_arty_hilux_arty_he_opf: bso_arty_hilux_arty_he
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_hilux_arty_he_ind: bso_arty_hilux_arty_he
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
	class bso_arty_hilux_arty_cluster: UK3CB_TKM_I_Hilux_Rocket_Arty
	{
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction = "bso_ai_blu";
		crew = "bso_ai_crew";
		typicalCargo[] = {"bso_ai_crew"};
		displayName = "[BSO AI] Hilux ROKIT MLRS (Cluster)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 3;
				weapons[] = {"bso_arty_rokit_mlrs"};
				magazines[] = {"bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster","bso_arty_mag10_122_cluster"};
			};
		};
	};
	class bso_arty_hilux_arty_cluster_opf: bso_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 0;
		faction = "bso_ai_opf";
		crew = "bso_ai_crew_opf";
		typicalCargo[] = {"bso_ai_crew_opf"};
	};
	class bso_arty_hilux_arty_cluster_ind: bso_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 2;
		faction = "bso_ai_ind";
		crew = "bso_ai_crew_ind";
		typicalCargo[] = {"bso_ai_crew_ind"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class RocketPods;
	class rockets_230mm_GAT: RocketPods
	{
		class Close;
		class Medium;
		class Far;
		class Full;
	};
	class bso_arty_rokit: rockets_230mm_GAT
	{
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 150;
			midrangeprobab = 1;
			midrange = 300;
			maxrangeprobab = 1;
			maxrange = 950;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.2;
			minrange = 300;
			midrangeprobab = 0.2;
			midrange = 1500;
			maxrangeprobab = 0.2;
			maxrange = 3400;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		class Far: Far
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 500;
			midrangeprobab = 0.1;
			midrange = 3000;
			maxrangeprobab = 0.1;
			maxrange = 6500;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		class TooClose: Close
		{
			displayName = "Too Close";
			artilleryCharge = 0.15;
			minrangeprobab = 1;
			minrange = 100;
			midrangeprobab = 1;
			midrange = 200;
			maxrangeprobab = 1;
			maxrange = 350;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		modes[] = {"TooClose","Close","Medium","Far"};
		magazines[] = {"bso_arty_mag12_122_he","bso_arty_mag12_122_cluster"};
	};
	class bso_arty_rokit_mlrs: bso_arty_rokit
	{
		magazineReloadTime = 60;
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 150;
			midrangeprobab = 1;
			midrange = 300;
			maxrangeprobab = 1;
			maxrange = 950;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.2;
			minrange = 300;
			midrangeprobab = 0.2;
			midrange = 1500;
			maxrangeprobab = 0.2;
			maxrange = 3400;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
		};
		class Far: Far
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 500;
			midrangeprobab = 0.1;
			midrange = 3000;
			maxrangeprobab = 0.1;
			maxrange = 6500;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
		};
		class TooClose: Close
		{
			displayName = "Too Close";
			artilleryCharge = 0.15;
			minrangeprobab = 1;
			minrange = 100;
			midrangeprobab = 1;
			midrange = 200;
			maxrangeprobab = 1;
			maxrange = 350;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		modes[] = {"TooClose","Close","Medium","Far"};
		magazines[] = {"bso_arty_mag10_122_he","bso_arty_mag10_122_cluster"};
	};
};
class cfgMagazines
{
	class 12Rnd_230mm_rockets;
	class bso_arty_mag12_122_he: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "bso_arty_ammo_122_r_he";
		displayName = "[BSO AI] 12x 122mm HE Rocket";
		count = 12;
		initSpeed = 400;
	};
	class bso_arty_mag10_122_he: bso_arty_mag12_122_he
	{
		scope = 2;
		displayName = "[BSO AI] 10x 122mm HE Rocket";
		count = 10;
	};
	class bso_arty_mag12_122_cluster: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "bso_arty_ammo_122_r_cluster";
		displayName = "[BSO AI] 12x 122mm Cluster Rocket";
		count = 12;
		initSpeed = 400;
	};
	class bso_arty_mag10_122_cluster: bso_arty_mag12_122_cluster
	{
		scope = 2;
		displayName = "[BSO AI] 10x 122mm Cluster Rocket";
		count = 10;
	};
};
class cfgAmmo
{
	class R_230mm_HE;
	class R_230mm_fly;
	class bso_arty_ammo_122_r_he: R_230mm_HE
	{
		cost = 10;
		scope = 2;
		allowAgainstInfantry = 1;
		ace_rearm_caliber = 80;
		aiAmmoUsageFlags = "64+ 128+ 512";
		hit = 30;
		indirectHit = 3;
		indirectHitRange = 15;
		explosive = 0.8;
		submunitionAmmo[] = {"bso_arty_ammo_122_r_fly",0.8,"bso_sub_dud_fly",0.2};
		effectsMissile = "bso_artyRocket_black";
		effectFly = "bso_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class bso_arty_ammo_122_r_fly: R_230mm_fly
	{
		cost = 10;
		scope = 2;
		hit = 30;
		indirectHit = 3;
		indirectHitRange = 15;
		dangerRadiusHit = 30;
		effectsMissile = "bso_artyRocket_black";
		effectFly = "bso_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class bso_sub_dud_fly: bso_arty_ammo_122_r_fly
	{
		submunitionAmmo[] = {"bso_sub_dud_air",0.5,"bso_sub_dud_deploy",0.5};
		submunitionConeType[] = {"poissondisc",1};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 19;
	};
	class bso_sub_dud_air: bso_arty_ammo_122_r_fly
	{
		submunitionAmmo[] = {};
		submunitionConeType[] = {"poissondisc",0};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 19;
		explosionTime = 0.0001;
	};
	class Mo_cluster_AP_UXO1_deployMine;
	class bso_sub_dud_deploy: Mo_cluster_AP_UXO1_deployMine
	{
		hit = 4;
		indirectHit = 2;
		indirectHitRange = 5;
		submunitionAmmo[] = {"bso_sub_dud_uxo",1};
	};
	class Mo_cluster_AP_UXO1_Ammo_F;
	class bso_sub_dud_uxo: Mo_cluster_AP_UXO1_Ammo_F
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		explosionEffects = "MK82_Explode";
		CraterEffects = "MK82_Smoke";
		SoundSetExplosion[] = {"jsrs_bomb_explosion_soundset","jsrs_rocket_explosion_stereo_soundset","jsrs_shell_explosion_reverb_soundset"};
	};
	class bso_arty_ammo_122_r_cluster: bso_arty_ammo_122_r_he
	{
		submunitionAmmo[] = {"bso_arty_ammo_122_r_cluster_fly",0.8,"bso_sub_dud_fly",0.2};
	};
	class bso_arty_ammo_122_r_cluster_fly: bso_arty_ammo_122_r_fly
	{
		submunitionAmmo[] = {"bso_sub_cluster_AP",0.6,"Mo_cluster_AP_UXO_deploy",0.4};
		submunitionConeType[] = {"poissondisc",10};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 19;
	};
	class Mo_cluster_AP;
	class bso_sub_cluster_AP: Mo_cluster_AP
	{
		hit = 4;
		indirectHit = 2;
		indirectHitRange = 5;
	};
};
