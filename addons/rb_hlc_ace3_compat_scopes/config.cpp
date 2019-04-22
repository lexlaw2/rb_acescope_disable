class CfgPatches
{
	class rb_hlc_ace3_compat_scopes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"ace_scopes","hlcweapons_core"};
		version = "1";
		projectName = "https://github.com/lexlaw2/rb_acescope_fixes";
		author = "lexlaw2@ya.ru";
	};
};
class CfgWeapons{
class ItemCore;

	class optic_LRPS: ItemCore{
	class ItemInfo;
	};

class hlc_optic_LeupoldM3A : optic_lrps {
			
			class ItemInfo: ItemInfo{
			class OpticsModes{
				class Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
				};
				
			};
		};
	};
	class hlc_optic_ZF95Base : optic_lrps {
		class ItemInfo: ItemInfo{
			class OpticsModes{
				class Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
				};
			};
		};
	};
	class hlc_optic_VOMZ : optic_lrps{
		class ItemInfo: ItemInfo{
			class OpticsModes{
				class Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
				};
			};
		};
	};
	class hlc_optic_VOMZ3d: hlc_optic_VOMZ {
		class ItemInfo: ItemInfo{
			class OpticsModes{
				class Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
				};
			};
		};
	};
	
};
