class CfgPatches{
//убираю ванильный зерониг с hlc_optic_leupoldm3a_g3

	class rb_acescope_disable
	{
		units[]={};
		weapons[] = {};
		requiredVersion=1;
		requiredAddons[]={"ace_scopes","hlcweapons_m14","hlcweapons_core"};
		projectName = "https://github.com/lexlaw2/rb_acescope_fixes";
		author = "lexlaw2@ya.ru";
	};
	
	
};

class CfgWeapons
{
	class itemCore;
	class optic_LRPS : ItemCore {
		class ItemInfo;
};
	class hlc_optic_LeupoldM3A : optic_lrps	{
		class ItemInfo: ItemInfo{};
	};
class hlc_optic_LeupoldM3A_G3: hlc_optic_LeupoldM3A
	{
		
		class ItemInfo: ItemInfo
		{
		
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
				};
				
			};
		};
	};
	
};