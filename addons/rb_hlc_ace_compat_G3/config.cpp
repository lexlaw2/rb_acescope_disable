class CfgPatches{
// убираю ванильный зероинг hlc_optic_ZF95_g3
// убираю АСЕ маховики hlc_optic_artel_m14

	class rb_acescope_disable
	{
		units[]={};
		weapons[] = {};
		requiredVersion=1;
		requiredAddons[]={"ace_scopes","hlcweapons_g3"};
		projectName = "https://github.com/lexlaw2/rb_acescope_fixes";
		author = "lexlaw2@ya.ru";
	};
	
	
};

class CfgWeapons
{
	class optic_dms;
	class hlc_optic_artel_m14: optic_dms {
			ACE_ScopeAdjust_Vertical[] = {0, 0};
	ACE_ScopeAdjust_Horizontal[] = {0, 0};
	};
	class hlc_optic_ZF95Base;
	class hlc_optic_ZF95_g3: hlc_optic_ZF95Base{
		class ItemInfo{
		
			class OpticsModes{
				class Snip{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
					
				};
				
			};
		};
		
	};
};