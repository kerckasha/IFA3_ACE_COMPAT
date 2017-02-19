class CfgWeapons
{
	class ACE_RangeTable_82mm;
	class ACE_RangeTable_BM37: ACE_RangeTable_82mm
	{
		displayName = "$STR_ace_ifa3mortar_rangetable_name_3";
		descriptionShort = "$STR_ace_ifa3mortar_rangetable_description_3";
	};
	class ACE_RangeTable_GrWr34: ACE_RangeTable_82mm
	{
		displayName = "$STR_ace_ifa3mortar_rangetable_name_6";
		descriptionShort = "$STR_ace_ifa3mortar_rangetable_description_6";
	};

	class CannonCore;
    class mortar_82mm: CannonCore {
        class Single1;
    };
	class LIB_BM37_ACE: mortar_82mm {
		displayname = "$STR_LIB_DN_BM37";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};

	class LIB_GrWr34_ACE: LIB_BM37_ACE {
		displayname = "$STR_LIB_DN_GRWR34";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};
};
