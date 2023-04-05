#define _ARMA_
class CfgPatches
{
	class beo_rokit_ace
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","ace_csw","beo_rokit"};
		version = "1";
		requiredVersion = "1";
		author = "Walker";
	};
};

class CfgMagazines
{

    class beo_arty_mag_122_he;
    class beo_arty_mag_122_he_csw_mag: beo_arty_mag_122_he 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 122mm HE ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=50;
    };
	class beo_arty_mag_122_cluster;
    class beo_arty_mag_122_cluster_csw_mag: beo_arty_mag_122_cluster 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 122mm Cluster ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=50;
    };

 
	class beo_arty_mag10_122_he;
    class beo_arty_mag10_122_csw_mag: beo_arty_mag10_122_he 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 10x 122mm HE ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=100;
    };


	class beo_arty_mag10_122_cluster;
    class beo_arty_mag10_122_cluster_csw_mag: beo_arty_mag10_122_cluster 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 10x 122mm Cluster ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=100;
    };       

	
	
};

class ACE_CSW_Groups 
{

    class beo_arty_mag_122_he_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag_122_he = 1;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag_122_cluster_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag_122_cluster = 1;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag10_122_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag10_122_he = 10;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag10_122_cluster_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag10_122_cluster = 10;    // Vehicle magazine that will be loaded when loading this magazine
    };
    
};

class CfgWeapons
{

    class beo_arty_rokit;
    class beo_arty_rokit_proxy: beo_arty_rokit 
	{
        magazineReloadTime = 6;
    };

    class beo_arty_rokit_mlrs;
    class beo_arty_rokit_mlrs_proxy: beo_arty_rokit_mlrs 
	{
        magazineReloadTime = 12;
    };


   	class Launcher;
    class Launcher_Base_F: Launcher 
	{
        class WeaponSlotsInfo;
    };

    class beo_arty_rokit_carry: Launcher_Base_F 
	{
        // displayName, author, model and picture are omitted and up to you
		displayName = "[CSW] ROKIT Launcher"
		author = "Walker";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		modes[]={};
		picture="\z\ace\addons\csw\UI\StaticMortarTube_Icon.paa";
        scope = 2;
        modes[] = {};

        class ACE_CSW 
		{
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 10;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 10;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "beo_arty_rokit";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot 
			{
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 150; // 84 lb / 38 kg
        };
    };	

    class beo_arty_rokit_mlrs_carry: Launcher_Base_F 
	{
        // displayName, author, model and picture are omitted and up to you
		displayName = "[CSW] ROKIT MLRS"
		author = "Walker";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		modes[]={};
		picture="\z\ace\addons\csw\UI\StaticMortarTube_Icon.paa";
        scope = 2;
        modes[] = {};

        class ACE_CSW 
		{
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 15;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 15;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "beo_arty_rokit_mlrs";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot 
			{
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 200; // 84 lb / 38 kg
        };
    };	

/*
    class prefix_tripod_carry: Launcher_Base_F 
	{
        class ACE_CSW {
            type = "mount"; // Use "mount" for tripods
            deployTime = 4; // How long it takes to deploy the tripod
            pickupTime = 4; // How long it takes to disassemble the tripod
            deploy = "prefix_tripod"; // what vehicle will spawn when the tripod is deployed
        };
    };	
*/	
};

class CfgVehicles
{

	class B_Mortar_01_F;
	class beo_arty_rokit: B_Mortar_01_F 
	{
		class ACE_CSW 
		{
			enabled = 1; // Enables ACE CSW for this weapon              
			proxyWeapon = "beo_arty_rokit_proxy"; // The proxy weapon created above
			magazineLocation="_target selectionPosition 'usti hlavne'"; // Ammo handling interaction point location
			disassembleWeapon = "beo_arty_rokit_carry";  // Carryable weapon created above
			disassembleTurret = "ace_csw_mortarBaseplate";  // Which static tripod will appear when weapon is disassembled
			ammoLoadTime = 7;   // How long it takes in seconds to load ammo into the weapon           
			ammoUnloadTime = 5; // How long it takes in seconds to unload ammo from the weapon
			desiredAmmo = 1;  // When the weapon is reloaded it will try and reload to this ammo capacity
			// Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
			disassembleFunc = "prefix_fnc_handleDisassembly";
		};
	};

	class beo_arty_rokit_mlrs: B_Mortar_01_F 
	{
		class ACE_CSW 
		{
			enabled = 1; // Enables ACE CSW for this weapon              
			proxyWeapon = "beo_arty_rokit_mlrs_proxy"; // The proxy weapon created above
			magazineLocation="_target selectionPosition 'usti hlavne'"; // Ammo handling interaction point location
			disassembleWeapon = "beo_arty_rokit_mlrs_carry";  // Carryable weapon created above
			disassembleTurret = "ace_csw_mortarBaseplate";  // Which static tripod will appear when weapon is disassembled
			ammoLoadTime = 12;   // How long it takes in seconds to load ammo into the weapon           
			ammoUnloadTime = 10; // How long it takes in seconds to unload ammo from the weapon
			desiredAmmo = 10;  // When the weapon is reloaded it will try and reload to this ammo capacity
			// Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
			disassembleFunc = "prefix_fnc_handleDisassembly";
		};
	};
	
	/*
    class ace_csw_baseTripod;
    class prefix_tripod: ace_csw_baseTripod {
        class ACE_CSW {
            disassembleTo = "prefix_tripod_carry";
        };
    };
	*/
	
};