class CfgPatches
{
	class rb_rksl_ace3_compat_scopes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"ace_scopes","RKSL_Attachments_core","RKSL_PMII","RKSL_PMII_525"};
		version = "1";
		projectName = "https://github.com/lexlaw2/rb_acescope_fixes";
		author = "lexlaw2@ya.ru";
	};
};
class CfgWeapons{
class ItemCore;
	class RKSL_optic_PMII_312: ItemCore{
		ACE_ScopeHeightAboveRail = 4.2098;
		ACE_ScopeAdjust_Vertical[] = {0, 27};
		ACE_ScopeAdjust_Horizontal[] = {-8, 8};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
	};
class RKSL_optic_PMII_525: ItemCore{
		ACE_ScopeHeightAboveRail = 4.2098;
		ACE_ScopeAdjust_Vertical[] = {0, 27};
		ACE_ScopeAdjust_Horizontal[] = {-8, 8};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
};
};
