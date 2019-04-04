class CfgPatches{

	class rb_acescope_disable
	{
		units[]={};
		weapons[] = {};
		requiredVersion=1;
		requiredAddons[]={"ace_scopes","hlcweapons_m14"};
	};
	
	
};

class CfgWeapons
{
	class optic_dms;
	class hlc_optic_artel_m14: optic_dms {
			ACE_ScopeAdjust_Vertical[] = {0, 0};
	ACE_ScopeAdjust_Horizontal[] = {0, 0};
	};
};