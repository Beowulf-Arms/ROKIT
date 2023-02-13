#define _ARMA_
//Class beo_arty : config.bin{
class CfgPatches
{
	class beo_rokit
	{
		units[] = {
			"beo_arty_rokit",
			"beo_arty_rokit_opf",
			"beo_arty_rokit_ind",
			"beo_arty_rokit_he",
			"beo_arty_rokit_he_opf",
			"beo_arty_rokit_he_ind",
			"beo_arty_rokit_cluster",
			"beo_arty_rokit_cluster_opf",
			"beo_arty_rokit_cluster_ind"
			};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp"};
		version = "1";
		requiredVersion = "1";
		author = "Walker";
	};
};


class beo_artyRocket_black
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
	class beo_artyRocket_black
	{
		simulation = "particles";
		type = "beo_artyRocket_black";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 120;
	};
};


class cfgCloudlets
{
	class Missile5;
	class beo_artyRocket_black: Missile5
	{
		color[] = {{0.01,0.01,0.01,0.8},{0.05,0.05,0.05,0.4},{0.1,0.1,0.1,0}};
		colorVar[] = {0, 0, 0, 0};
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
	
// Rocket Arty
	class beo_arty_rokit: B_Mortar_01_F
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT Artillery";
		author = "Walker";
		side = 1;
		hiddenSelectionsTextures[] = {"\beo_rokit\data\rokit_mk6.paa"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	
	};	
	
	class beo_arty_rokit_opf: beo_arty_rokit
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
	};
	
	class beo_arty_rokit_ind: beo_arty_rokit
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
	};


	class beo_arty_rokit_he: beo_arty_rokit
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT Artillery (HE)";
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	
	};	
	
	class beo_arty_rokit_he_opf: beo_arty_rokit_he
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
	};
	
	class beo_arty_rokit_he_ind: beo_arty_rokit_he
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
	};

	class beo_arty_rokit_cluster: beo_arty_rokit_he
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT Artillery (Cluster)";
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster","beo_arty_mag12_122_cluster"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	
	};	
	
	class beo_arty_rokit_cluster_opf: beo_arty_rokit_cluster
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
	};
	
	class beo_arty_rokit_cluster_ind: beo_arty_rokit_cluster
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
	};
	
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons
{

	
// Rocket arty
	class RocketPods;
	class rockets_230mm_GAT: RocketPods
	{
		class Close;
		class Medium;
		class Far;
		class Full;
	};
	
	class beo_arty_rokit: rockets_230mm_GAT
	{
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 350;
			midrangeprobab = 1;
			midrange = 675;
			maxrangeprobab = 1;
			maxrange = 1000;
			artilleryDispersion = 5;
			//aiDispersionCoefX = 1.4;
			//aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			//artilleryCharge = 0.25;
			artilleryCharge = 0.25;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			//aiDispersionCoefX = 1.5;
			//aiDispersionCoefY = 1.5;
			minrangeprobab = 0.2;
			minrange = 1000;
			midrangeprobab = 0.2;
			midrange = 1230;
			maxrangeprobab = 0.2;
			maxrange = 1460;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.30;
		};
		class Far: Far
		{
			artilleryDispersion = 10;
			//aiDispersionCoefX = 1.5;
			//aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 1460;
			midrangeprobab = 0.1;
			midrange = 2030;
			maxrangeprobab = 0.1;
			maxrange = 2600;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.40;
		};
		class VeryFar: Far
		{
			displayName = "Very Far";
			artilleryDispersion = 15;
			//aiDispersionCoefX = 1.5;
			//aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 2600;
			midrangeprobab = 0.1;
			midrange = 3325;
			maxrangeprobab = 0.1;
			maxrange = 4050;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.50;
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
			maxrange = 360;
			artilleryDispersion = 5;
			//aiDispersionCoefX = 1.5;
			//aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		modes[] = {
			"TooClose",
			"Close",
			"Medium",
			"Far",
			"VeryFar"
		};
		magazines[] = {
			"beo_arty_mag12_122_he",
			"beo_arty_mag12_122_cluster"
		};
	};
	
	class beo_arty_rokit_mlrs: beo_arty_rokit
	{
		magazineReloadTime = 60;
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 350;
			midrangeprobab = 1;
			midrange = 675;
			maxrangeprobab = 1;
			maxrange = 1000;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.25;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.2;
			minrange = 1000;
			midrangeprobab = 0.2;
			midrange = 1230;
			maxrangeprobab = 0.2;
			maxrange = 1460;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.30;
		};
		class Far: Far
		{
			artilleryDispersion = 10;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 1460;
			midrangeprobab = 0.1;
			midrange = 2030;
			maxrangeprobab = 0.1;
			maxrange = 2600;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.40;
		};
		class VeryFar: Far
		{
			displayName = "Very Far";
			artilleryDispersion = 15;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 2600;
			midrangeprobab = 0.1;
			midrange = 3325;
			maxrangeprobab = 0.1;
			maxrange = 4050;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.50;
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
			maxrange = 360;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
		};
		modes[] = {
			"TooClose",
			"Close",
			"Medium",
			"Far",
			"VeryFar"
		};
		magazines[] = {
			"beo_arty_mag10_122_he",
			"beo_arty_mag10_122_cluster"
		};
	};
	
};

class cfgMagazines
{

	class 12Rnd_230mm_rockets;
	class beo_arty_mag12_122_he: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_r_he";
		displayName = "[BEO AI] 12x 122mm HE Rocket";
		count = 12;
		initSpeed = 400;//850
	};	
	class beo_arty_mag10_122_he: beo_arty_mag12_122_he
	{
		scope = 2;
		displayName = "[BEO AI] 10x 122mm HE Rocket";
		count = 10;		
	};	

	
	class beo_arty_mag12_122_cluster: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_r_cluster";
		displayName = "[BEO AI] 12x 122mm Cluster Rocket";
		count = 12;
		initSpeed = 400;//850
	};	
	
	class beo_arty_mag10_122_cluster: beo_arty_mag12_122_cluster
	{
		scope = 2;
		displayName = "[BEO AI] 10x 122mm Cluster Rocket";
		count = 10;		
	};	
	
};

class cfgAmmo
{
	class R_230mm_HE;
	class R_230mm_fly;

// HE Rocket
	class beo_arty_ammo_122_r_he: R_230mm_HE
	{
		cost = 10;
		scope = 2;
		allowAgainstInfantry = 1;	
		ace_rearm_caliber = 80;
		aiAmmoUsageFlags = "64+ 128+ 512";
		hit = 50;
		indirectHit = 5;
		indirectHitRange = 15;	
		explosive = 0.8;	//1 	
		//submunitionAmmo = "beo_arty_ammo_122_r_fly";
		submunitionAmmo[] = {
			"beo_arty_ammo_122_r_fly",0.9,
			"beo_sub_dud_fly",0.1
			
			};
		effectsMissile = "beo_artyRocket_black";
		effectFly = "beo_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class beo_arty_ammo_122_r_fly: R_230mm_fly
	{	
		cost = 10;
		scope = 2;
		hit = 50; //1200
		indirectHit = 5; //800
		indirectHitRange = 15;	//30
		dangerRadiusHit = 30;
		effectsMissile = "beo_artyRocket_black";
		effectFly = "beo_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		
	};

// DUD configs
	// dud that detonates in air
	class beo_sub_dud_fly: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {
			"beo_sub_dud_air",0.5,
			"beo_sub_dud_deploy",0.5};
		submunitionConeType[] = {"poissondisc",1};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
	};

	class beo_sub_dud_air: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {};
		submunitionConeType[] = {"poissondisc",0};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		explosionTime = 0.0001;
	};


	// dud that deployes UXO
	class Mo_cluster_AP_UXO1_deployMine;
	class beo_sub_dud_deploy: Mo_cluster_AP_UXO1_deployMine
	{
		hit = 10;//35
		indirectHit = 4;//25
		indirectHitRange = 5;//8
		submunitionAmmo[] = {"beo_sub_dud_uxo",1};

	};
	class Mo_cluster_AP_UXO1_Ammo_F;
	class beo_sub_dud_uxo: Mo_cluster_AP_UXO1_Ammo_F
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		//model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		explosionEffects = "MK82_Explode";
		CraterEffects = "MK82_Smoke";
		SoundSetExplosion[] = {"jsrs_bomb_explosion_soundset","jsrs_rocket_explosion_stereo_soundset","jsrs_shell_explosion_reverb_soundset"};
	};





// Cluster Rockets
	class beo_arty_ammo_122_r_cluster: beo_arty_ammo_122_r_he
	{
		submunitionAmmo[] = {
			"beo_arty_ammo_122_r_cluster_fly",0.9,
			"beo_sub_dud_fly",0.1
		};
	};	
	class beo_arty_ammo_122_r_cluster_fly: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {
			"beo_sub_cluster_AP",0.6,
			"Mo_cluster_AP_UXO_deploy",0.4};
		submunitionConeType[] = {"poissondisc",10};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
	};
	class Mo_cluster_AP;
	class beo_sub_cluster_AP: Mo_cluster_AP
	{
		hit = 7;//35
		indirectHit = 4;//25
		indirectHitRange = 5;//8
	};

};