////////////////////////////////////////////////////////////////////
//DeRap: hlc_ace3_compat_G3\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Apr 04 12:25:31 2019 : 'file' last modified on Sat Nov 19 20:20:08 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
	// class hlc_optic_VOMZ3d {
		// class ItemInfo{
			// class OpticsModes{
				// class Snip{
					// discreteDistance[] = {100};
					// discreteDistanceInitIndex = 0;
					
				// };
			// };
		// };
	// };
	
};