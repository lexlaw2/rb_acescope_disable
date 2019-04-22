class CfgPatches{
//убираю ванильный зерониг с hlc_optic_leupoldm3a_g3
//убираю АСЕ маховики с hlc_optic_artel_m14
	class rb_hlc_ace_compat_M14
	{
		units[]={};
		weapons[] = {};
		requiredVersion=1;
		requiredAddons[]={"ace_scopes","hlcweapons_m14","hlcweapons_core","A3_Weapons_F_Items"};
		projectName = "https://github.com/lexlaw2/rb_acescope_fixes";
		author = "lexlaw2@ya.ru";
	};
	
	
};

class CfgWeapons{
	 class ItemCore;

	class optic_LRPS: ItemCore{
		class ItemInfo;
	};
		
	class hlc_optic_LeupoldM3A: optic_LRPS{
		class ItemInfo:ItemInfo{
			class OpticsModes{
			class Snip;
			};
		};
	};

	class hlc_optic_LRT_m14: hlc_optic_LeupoldM3A{
		class ItemInfo:ItemInfo{
		
			class OpticsModes:OpticsModes{
				
				class Snip:Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
				
			};
		};
	};
	class optic_DMS;
	class hlc_optic_artel_m14:optic_DMS {
		ACE_ScopeAdjust_Vertical[] = {0, 0};
		ACE_ScopeAdjust_Horizontal[] = {0, 0};
	};
};