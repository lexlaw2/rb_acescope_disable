# rb_acescope_fixes
отключение АСЕ_scope/ванильного зероинга для некоторых прицелов

hlc_optic_leupoldm3a_g3 +
hlc_optic_leupoldm3a +
hlc_optic_zf95_g3 +
hlc_optic_zf95_base  ---> hlc_optic_ZF95Base +
hlc_optic_vomz +
hlc_optic_vomz3d +
hlc_optic_lrt_m14 +
Скорее всего лежат в pbo hlc_core, но могут быть и в модах на оружие от hlc (он же NIArms в папке RMCMods)
там же можешь заглянуть в компаты hlc, может поможет, потому что некоторые прицелы работали нормально хз почему например hlc_optic_zfsg1 работает нормально
hlc_optic_vomz - глянул какието ползунки есть, надо уточнить задачу: ограничить ползунки какимито пределами, убрать ванильный зероиг или с прицелами неверная стрельба - надо разбираться с балистикой
configfile >> "CfgWeapons" >> "HLC_Optic_ZFSG1" >> "ItemInfo" >> "OpticsModes" >> "Snip" = {100};


Теперь касаемо БАФа, он дает зависимость к вот этому https://steamcommunity.com/sharedfiles/filedetails/?id=1661066023
и прицелы из этого мода
RKSL_optic_PMII_312_des
RKSL_optic_PMII_312_sunshade
RKSL_optic_PMII_312_sunshade_des
RKSL_optic_PMII_312_sunshade_wdl
RKSL_optic_PMII_312_wdl
RKSL_optic_PMII_525
RKSL_optic_PMII_525_des
RKSL_optic_PMII_525_wdl
не имеют маховиков вообще, надо будет прикрутить
