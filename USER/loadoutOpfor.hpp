class loadouts_opfor {
    class AllUnits {
        primaryWeapon = "rhs_weap_ak74mr";
        primaryWeaponMagazine = "hlc_30Rnd_545x39_EP_ak_Black";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics = "";
        primaryWeaponPointer = "acc_flashlight";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        handgunWeapon = "";
        uniform = "rhsgref_uniform_woodland_olive";
        vest = "V_TacVest_blk";
        backpack = "";
        headgear = "rhs_beanie_green";
        goggles = "";
        nvgoggles = "";
        radio = "TFAR_fadak";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
            LIST_2("ACE_morphine"),
            LIST_2("rhs_mag_rdg2_white"),
            LIST_2("ACE_Chemlight_HiWhite"),
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools"
        };
        addItemsToVest[] = {};
        addItemsToBackpack[] = {};
    };

    class Type {
        //rifleman
        class Soldier_F {
            addItemsToVest[] = {
                LIST_6("hlc_30Rnd_545x39_EP_ak_Black"),
                "rhs_mag_f1"
            };
        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            vest = "V_Chestrig_oli";
            headgear = "";
            goggles = "rhs_balaclava1_olive";
            primaryWeapon = "rhs_weap_pkm";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green";
            addItemsToVest[] = {
                "rhs_100Rnd_762x54mmR_green",
                "rhs_mag_f1"
            };
            backpack = "B_AssaultPack_blk";
            addItemsToBackpack[] = {
                "rhs_100Rnd_762x54mmR_green",
                "rhs_100Rnd_762x54mmR_green"
            };
        };

        //light AT
        class Soldier_LAT_F: Soldier_F {
            uniform = "rhsgref_uniform_woodland";
            vest = "V_TacVest_camo";
            headgear = "H_Booniehat_oli";
            goggles = "G_Bandanna_khk";
            secondaryWeapon = "rhs_weap_rpg26";
        };

        //ammo bearer
        class Soldier_A_F: Soldier_F {
            uniform = "rhsgref_uniform_flecktarn";
            vest = "V_TacVest_blk";
            headgear = "";
            goggles = "G_Balaclava_blk";
            backpack = "B_TacticalPack_oli";
            addItemsToBackpack[] = {
                LIST_2("rhs_100Rnd_762x54mmR_green"),
                "rhs_100Rnd_762x54mmR_green"
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            uniform = "rhsgref_uniform_flecktarn";
            vest = "V_TacVest_blk";
            headgear = "";
            goggles = "G_Balaclava_blk";
            backpack = "B_TacticalPack_oli";
            addItemsToBackpack[] = {
                LIST_2("rhs_100Rnd_762x54mmR_green"),
                "rhs_100Rnd_762x54mmR_green"
            };
        };

        //medic
        class Medic_F: Soldier_F {
            uniform = "rhsgref_uniform_woodland";
            vest = "V_TacVest_blk";
            headgear = "H_Booniehat_oli";
            goggles = "G_Bandanna_tan";
            backpack = "B_AssaultPack_rgr";
            addItemsToBackpack[] = {
                LIST_20("ACE_fieldDressing"),
                LIST_10("ACE_fieldDressing"),
                LIST_15("ACE_morphine"),
                LIST_15("ACE_epinephrine"),
                LIST_8("ACE_bloodIV_250")
            };
        };

        //team leader
        class Soldier_TL_F: Soldier_F {
            vest = "V_TacVest_oli";
            headgear = "H_Booniehat_khk";
            goggles = "G_Bandanna_khk";
            primaryWeapon = "rhs_weap_ak74mr_gp25";
            backpack = "B_AssaultPack_rgr";
            addItemsToBackpack[] = {
                LIST_2("hlc_GRD_White"),
                LIST_2("hlc_GRD_Red"),
                LIST_2("hlc_GRD_green"),
                LIST_2("rhs_VG40OP_green"),
                LIST_2("rhs_VG40OP_red"),
                LIST_2("rhs_VG40OP_white")
            };
        };

        //squad leader
        class Soldier_SL_F: Soldier_TL_F {
            uniform = "rhsgref_uniform_flecktarn";
            vest = "rhsgref_TacVest_ERDL";
            headgear = "H_Watchcap_blk";
            goggles = "rhs_scarf";
        };
    };

    class Rank {
        class LIEUTENANT {
            headgear = "rhs_beret_milp";
            goggles = "G_Aviator";
        };
    };
};
