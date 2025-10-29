_QWORD *__fastcall sub_10B380(int a1, int a2, int a3)
{
  __int64 v3; // r0
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  __int64 v6; // kr10_8
  __int64 v7; // kr18_8
  unsigned __int64 v8; // r10
  __int64 v9; // r0
  __int64 v10; // kr20_8
  __int64 v11; // kr28_8
  __int64 v12; // kr30_8
  __int64 v13; // kr38_8
  __int64 v14; // r8
  __int64 v15; // r0
  __int64 v16; // kr40_8
  __int64 v17; // kr48_8
  __int64 v18; // kr50_8
  __int64 v19; // kr58_8
  __int64 v20; // r0
  __int64 v21; // kr60_8
  __int64 v22; // kr68_8
  __int64 v23; // kr70_8
  __int64 v24; // kr78_8
  __int64 v25; // r0
  __int64 v26; // kr80_8
  __int64 v27; // kr88_8
  __int64 v28; // kr90_8
  __int64 v29; // kr98_8
  __int64 v30; // r0
  __int64 v31; // krA0_8
  __int64 v32; // krA8_8
  __int64 v33; // krB0_8
  __int64 v34; // krB8_8
  unsigned __int64 v35; // krC0_8
  __int64 v36; // r0
  __int64 v37; // krD0_8
  __int64 v38; // krD8_8
  __int64 v39; // krE0_8
  __int64 v40; // krE8_8
  unsigned __int64 v41; // r8
  __int64 v42; // r0
  __int64 v43; // krF0_8
  __int64 v44; // krF8_8
  __int64 v45; // kr100_8
  __int64 v46; // kr108_8
  unsigned __int64 v47; // r8
  __int64 v48; // r0
  __int64 v49; // kr110_8
  __int64 v50; // kr118_8
  __int64 v51; // kr120_8
  __int64 v52; // kr128_8
  __int64 v53; // r0
  __int64 v54; // kr130_8
  __int64 v55; // kr138_8
  __int64 v56; // kr140_8
  __int64 v57; // kr148_8
  __int64 v58; // r0
  __int64 v59; // kr150_8
  __int64 v60; // kr158_8
  __int64 v61; // kr160_8
  __int64 v62; // kr168_8
  __int64 v63; // r0
  __int64 v64; // kr170_8
  __int64 v65; // kr178_8
  __int64 v66; // kr180_8
  __int64 v67; // kr188_8
  unsigned __int64 v68; // kr190_8
  __int64 v69; // r0
  unsigned int v70; // r5
  int v71; // r6
  unsigned __int64 v72; // kr1A0_8
  unsigned __int64 v73; // kr1A8_8
  unsigned __int64 v74; // kr1B0_8
  __int64 v75; // r0
  unsigned int v76; // r5
  int v77; // r6
  unsigned __int64 v78; // kr1B8_8
  unsigned __int64 v79; // kr1C0_8
  unsigned __int64 v80; // kr1C8_8
  __int64 v81; // r8
  __int64 v82; // r0
  unsigned int v83; // r5
  int v84; // r6
  unsigned __int64 v85; // kr1D0_8
  unsigned __int64 v86; // kr1D8_8
  unsigned __int64 v87; // kr1E0_8
  __int64 v88; // r0
  unsigned int v89; // r5
  int v90; // r6
  unsigned __int64 v91; // kr1E8_8
  unsigned __int64 v92; // kr1F0_8
  unsigned __int64 v93; // kr1F8_8
  __int64 v94; // r0
  unsigned int v95; // r5
  int v96; // r6
  unsigned __int64 v97; // kr200_8
  unsigned __int64 v98; // kr208_8
  unsigned __int64 v99; // kr210_8
  __int64 v100; // r0
  unsigned int v101; // r5
  int v102; // r6
  unsigned __int64 v103; // kr218_8
  unsigned __int64 v104; // kr220_8
  unsigned __int64 v105; // kr228_8
  unsigned __int64 v106; // kr230_8
  __int64 v107; // r0
  unsigned int v108; // r5
  int v109; // r6
  unsigned __int64 v110; // kr240_8
  unsigned __int64 v111; // kr248_8
  unsigned __int64 v112; // kr250_8
  __int64 v113; // r0
  unsigned int v114; // r5
  int v115; // r6
  unsigned __int64 v116; // kr258_8
  unsigned __int64 v117; // kr260_8
  unsigned __int64 v118; // kr268_8
  __int64 v119; // r0
  unsigned int v120; // r5
  int v121; // r6
  unsigned __int64 v122; // kr270_8
  unsigned __int64 v123; // kr278_8
  unsigned __int64 v124; // kr280_8
  __int64 v125; // r0
  unsigned int v126; // r5
  int v127; // r6
  unsigned __int64 v128; // kr288_8
  unsigned __int64 v129; // kr290_8
  unsigned __int64 v130; // kr298_8
  __int64 v131; // r0
  unsigned int v132; // r5
  int v133; // r6
  unsigned __int64 v134; // kr2A0_8
  unsigned __int64 v135; // kr2A8_8
  unsigned __int64 v136; // kr2B0_8
  __int64 v137; // r0
  unsigned int v138; // r5
  int v139; // r6
  unsigned __int64 v140; // kr2B8_8
  unsigned __int64 v141; // kr2C0_8
  unsigned __int64 v142; // kr2C8_8
  unsigned __int64 v143; // kr2D0_8
  __int64 v144; // r0
  __int64 v145; // kr2E0_8
  __int64 v146; // kr2E8_8
  __int64 v147; // kr2F0_8
  __int64 v148; // kr2F8_8
  unsigned __int64 v149; // r8
  __int64 v150; // r0
  __int64 v151; // kr300_8
  __int64 v152; // kr308_8
  __int64 v153; // kr310_8
  __int64 v154; // kr318_8
  __int64 v155; // r0
  __int64 v156; // kr328_8
  __int64 v157; // kr330_8
  __int64 v158; // kr338_8
  __int64 v159; // kr340_8
  unsigned __int64 v160; // r8
  __int64 v161; // r0
  __int64 v162; // kr348_8
  __int64 v163; // kr350_8
  __int64 v164; // kr358_8
  __int64 v165; // kr360_8
  unsigned __int64 v166; // r8
  __int64 v167; // r0
  __int64 v168; // kr368_8
  __int64 v169; // kr370_8
  __int64 v170; // kr378_8
  __int64 v171; // kr380_8
  __int64 v172; // r0
  __int64 v173; // kr388_8
  __int64 v174; // kr390_8
  __int64 v175; // kr398_8
  __int64 v176; // kr3A0_8
  __int64 v177; // r0
  __int64 v178; // kr3A8_8
  __int64 v179; // kr3B0_8
  __int64 v180; // kr3B8_8
  __int64 v181; // kr3C0_8
  __int64 v182; // r0
  __int64 v183; // kr3C8_8
  __int64 v184; // kr3D0_8
  __int64 v185; // kr3D8_8
  __int64 v186; // kr3E0_8
  unsigned __int64 v187; // kr3E8_8
  __int64 v188; // r0
  __int64 v189; // kr3F8_8
  __int64 v190; // kr400_8
  __int64 v191; // kr408_8
  __int64 v192; // kr410_8
  unsigned __int64 v193; // r8
  __int64 v194; // r0
  __int64 v195; // kr418_8
  __int64 v196; // kr420_8
  __int64 v197; // kr428_8
  __int64 v198; // kr430_8
  unsigned __int64 v199; // r8
  __int64 v200; // r0
  __int64 v201; // kr438_8
  __int64 v202; // kr440_8
  __int64 v203; // kr448_8
  __int64 v204; // kr450_8
  __int64 v205; // r0
  __int64 v206; // kr458_8
  __int64 v207; // kr460_8
  __int64 v208; // kr468_8
  __int64 v209; // kr470_8
  __int64 v210; // r0
  __int64 v211; // kr478_8
  __int64 v212; // kr480_8
  __int64 v213; // kr488_8
  __int64 v214; // kr490_8
  __int64 v215; // r0
  __int64 v216; // kr498_8
  __int64 v217; // kr4A0_8
  __int64 v218; // kr4A8_8
  __int64 v219; // kr4B0_8
  unsigned __int64 v220; // kr4B8_8
  __int64 v221; // r0
  __int64 v222; // kr4C8_8
  __int64 v223; // kr4D0_8
  __int64 v224; // kr4D8_8
  __int64 v225; // kr4E0_8
  __int64 v226; // r0
  __int64 v227; // kr4E8_8
  __int64 v228; // kr4F0_8
  __int64 v229; // kr4F8_8
  __int64 v230; // kr500_8
  __int64 v231; // r8
  __int64 v232; // r0
  __int64 v233; // kr508_8
  __int64 v234; // kr510_8
  __int64 v235; // kr518_8
  __int64 v236; // kr520_8
  __int64 v237; // r0
  __int64 v238; // kr528_8
  __int64 v239; // kr530_8
  __int64 v240; // kr538_8
  __int64 v241; // kr540_8
  __int64 v242; // r0
  __int64 v243; // kr548_8
  __int64 v244; // kr550_8
  __int64 v245; // kr558_8
  __int64 v246; // kr560_8
  __int64 v247; // r0
  __int64 v248; // kr568_8
  __int64 v249; // kr570_8
  __int64 v250; // kr578_8
  __int64 v251; // kr580_8
  unsigned __int64 v252; // kr588_8
  __int64 v253; // r0
  __int64 v254; // kr598_8
  __int64 v255; // kr5A0_8
  __int64 v256; // kr5A8_8
  __int64 v257; // kr5B0_8
  __int64 v258; // r0
  __int64 v259; // kr5B8_8
  __int64 v260; // kr5C0_8
  __int64 v261; // kr5C8_8
  __int64 v262; // kr5D0_8
  __int64 v263; // r0
  __int64 v264; // kr5D8_8
  __int64 v265; // kr5E0_8
  __int64 v266; // kr5E8_8
  __int64 v267; // kr5F0_8
  __int64 v268; // r0
  __int64 v269; // kr5F8_8
  __int64 v270; // kr600_8
  __int64 v271; // kr608_8
  __int64 v272; // kr610_8
  __int64 v273; // r0
  __int64 v274; // kr618_8
  __int64 v275; // kr620_8
  __int64 v276; // kr628_8
  __int64 v277; // kr630_8
  __int64 v278; // r0
  __int64 v279; // kr638_8
  __int64 v280; // kr640_8
  __int64 v281; // kr648_8
  __int64 v282; // kr650_8
  unsigned __int64 v283; // kr658_8
  __int64 v284; // r0
  unsigned int v285; // r5
  int v286; // r6
  unsigned __int64 v287; // kr668_8
  unsigned __int64 v288; // kr670_8
  unsigned __int64 v289; // kr678_8
  unsigned __int64 v290; // r8
  __int64 v291; // r0
  unsigned int v292; // r5
  int v293; // r6
  unsigned __int64 v294; // kr680_8
  unsigned __int64 v295; // kr688_8
  unsigned __int64 v296; // kr690_8
  __int64 v297; // r0
  __int64 v298; // kr6A0_8
  __int64 v299; // kr6A8_8
  __int64 v300; // kr6B0_8
  __int64 v301; // kr6B8_8
  unsigned __int64 v302; // r8
  __int64 v303; // r0
  __int64 v304; // kr6C0_8
  __int64 v305; // kr6C8_8
  __int64 v306; // kr6D0_8
  __int64 v307; // kr6D8_8
  unsigned __int64 v308; // r8
  __int64 v309; // r0
  __int64 v310; // kr6E0_8
  __int64 v311; // kr6E8_8
  __int64 v312; // kr6F0_8
  __int64 v313; // kr6F8_8
  __int64 v314; // r0
  __int64 v315; // kr700_8
  __int64 v316; // kr708_8
  __int64 v317; // kr710_8
  __int64 v318; // kr718_8
  __int64 v319; // r0
  __int64 v320; // kr720_8
  __int64 v321; // kr728_8
  __int64 v322; // kr730_8
  __int64 v323; // kr738_8
  __int64 v324; // r0
  __int64 v325; // kr740_8
  __int64 v326; // kr748_8
  __int64 v327; // kr750_8
  __int64 v328; // kr758_8
  unsigned __int64 v329; // kr760_8
  __int64 v330; // r0
  __int64 v331; // kr770_8
  __int64 v332; // kr778_8
  __int64 v333; // kr780_8
  __int64 v334; // kr788_8
  unsigned __int64 v335; // r8
  __int64 v336; // r0
  __int64 v337; // kr790_8
  __int64 v338; // kr798_8
  __int64 v339; // kr7A0_8
  __int64 v340; // kr7A8_8
  unsigned __int64 v341; // r8
  __int64 v342; // r0
  __int64 v343; // kr7B0_8
  __int64 v344; // kr7B8_8
  __int64 v345; // kr7C0_8
  __int64 v346; // kr7C8_8
  __int64 v347; // r0
  __int64 v348; // kr7D0_8
  __int64 v349; // kr7D8_8
  __int64 v350; // kr7E0_8
  __int64 v351; // kr7E8_8
  __int64 v352; // r0
  __int64 v353; // kr7F0_8
  __int64 v354; // kr7F8_8
  __int64 v355; // kr800_8
  __int64 v356; // kr808_8
  __int64 v357; // r0
  __int64 v358; // kr810_8
  __int64 v359; // kr818_8
  __int64 v360; // kr820_8
  __int64 v361; // kr828_8
  unsigned __int64 v362; // kr830_8
  __int64 v363; // r0
  __int64 v364; // kr840_8
  __int64 v365; // kr848_8
  __int64 v366; // kr850_8
  __int64 v367; // kr858_8
  __int64 v368; // r0
  __int64 v369; // kr860_8
  __int64 v370; // kr868_8
  __int64 v371; // kr870_8
  __int64 v372; // kr878_8
  __int64 v373; // r8
  __int64 v374; // r0
  __int64 v375; // kr880_8
  __int64 v376; // kr888_8
  __int64 v377; // kr890_8
  __int64 v378; // kr898_8
  __int64 v379; // r0
  __int64 v380; // kr8A0_8
  __int64 v381; // kr8A8_8
  __int64 v382; // kr8B0_8
  __int64 v383; // kr8B8_8
  __int64 v384; // r0
  __int64 v385; // kr8C0_8
  __int64 v386; // kr8C8_8
  __int64 v387; // kr8D0_8
  __int64 v388; // kr8D8_8
  __int64 v389; // r0
  __int64 v390; // kr8E0_8
  __int64 v391; // kr8E8_8
  __int64 v392; // kr8F0_8
  __int64 v393; // kr8F8_8
  unsigned __int64 v394; // kr900_8
  __int64 v395; // r0
  __int64 v396; // kr910_8
  __int64 v397; // kr918_8
  __int64 v398; // kr920_8
  __int64 v399; // kr928_8
  __int64 v400; // r0
  __int64 v401; // kr930_8
  __int64 v402; // kr938_8
  __int64 v403; // kr940_8
  __int64 v404; // kr948_8
  __int64 v405; // r0
  __int64 v406; // kr950_8
  __int64 v407; // kr958_8
  __int64 v408; // kr960_8
  __int64 v409; // kr968_8
  __int64 v410; // r0
  __int64 v411; // kr970_8
  __int64 v412; // kr978_8
  __int64 v413; // kr980_8
  __int64 v414; // kr988_8
  __int64 v415; // r0
  __int64 v416; // kr990_8
  __int64 v417; // kr998_8
  __int64 v418; // kr9A0_8
  __int64 v419; // kr9A8_8
  __int64 v420; // r0
  __int64 v421; // kr9B0_8
  __int64 v422; // kr9B8_8
  __int64 v423; // kr9C0_8
  __int64 v424; // kr9C8_8
  unsigned __int64 v425; // kr9D0_8
  __int64 v426; // r0
  __int64 v427; // kr9E0_8
  __int64 v428; // kr9E8_8
  __int64 v429; // kr9F0_8
  __int64 v430; // kr9F8_8
  unsigned __int64 v431; // r8
  __int64 v432; // r0
  __int64 v433; // krA00_8
  __int64 v434; // krA08_8
  __int64 v435; // krA10_8
  __int64 v436; // krA18_8
  __int64 v437; // r0
  __int64 v438; // krA28_8
  __int64 v439; // krA30_8
  __int64 v440; // krA38_8
  __int64 v441; // krA40_8
  unsigned __int64 v442; // r8
  __int64 v443; // r0
  __int64 v444; // krA48_8
  __int64 v445; // krA50_8
  __int64 v446; // krA58_8
  __int64 v447; // krA60_8
  unsigned __int64 v448; // r8
  __int64 v449; // r0
  __int64 v450; // krA68_8
  __int64 v451; // krA70_8
  __int64 v452; // krA78_8
  __int64 v453; // krA80_8
  __int64 v454; // r0
  __int64 v455; // krA88_8
  __int64 v456; // krA90_8
  __int64 v457; // krA98_8
  __int64 v458; // krAA0_8
  __int64 v459; // r0
  __int64 v460; // krAA8_8
  __int64 v461; // krAB0_8
  __int64 v462; // krAB8_8
  __int64 v463; // krAC0_8
  __int64 v464; // r0
  __int64 v465; // krAC8_8
  __int64 v466; // krAD0_8
  __int64 v467; // krAD8_8
  __int64 v468; // krAE0_8
  unsigned __int64 v469; // r8
  unsigned __int64 v470; // r0
  unsigned int v471; // r6
  unsigned int v472; // r5
  unsigned __int64 v473; // krAE8_8
  unsigned __int64 v474; // r8
  unsigned int v475; // r5
  unsigned __int64 v476; // krAF8_8
  unsigned int v477; // r5
  unsigned __int64 v478; // krB20_8
  __int64 v479; // r0
  unsigned int v480; // r5
  unsigned __int64 v481; // krB48_8
  unsigned int v482; // r5
  unsigned __int64 v483; // krB70_8
  unsigned int v484; // r5
  unsigned __int64 v485; // krB98_8
  unsigned int v486; // r5
  unsigned __int64 v487; // r8
  __int64 v488; // r0
  unsigned int v489; // r5
  unsigned __int64 v490; // krBE0_8
  unsigned int v491; // r5
  unsigned __int64 v492; // krC08_8
  unsigned int v493; // r5
  unsigned __int64 v494; // krC30_8
  unsigned int v495; // r5
  unsigned __int64 v496; // krC58_8
  unsigned int v497; // r5
  unsigned __int64 v498; // krC80_8
  unsigned int v499; // r5
  unsigned __int64 v500; // krCA8_8
  __int64 v501; // r8
  __int64 v502; // r0
  __int64 v503; // krCD0_8
  unsigned int v504; // r5
  unsigned __int64 v505; // krCF8_8
  unsigned int v506; // r5
  unsigned __int64 v507; // krD20_8
  __int64 v508; // r0
  __int64 v510; // [sp+0h] [bp+0h]
  __int64 v511; // [sp+8h] [bp+8h]
  __int64 v512; // [sp+10h] [bp+10h]
  __int64 v513; // [sp+18h] [bp+18h]
  __int64 v514; // [sp+20h] [bp+20h]
  __int64 v515; // [sp+28h] [bp+28h]
  __int64 v516; // [sp+30h] [bp+30h]
  __int64 v517; // [sp+38h] [bp+38h]
  __int64 v518; // [sp+58h] [bp+58h]
  __int64 v519; // [sp+60h] [bp+60h]
  __int64 v520; // [sp+68h] [bp+68h]
  __int64 v521; // [sp+78h] [bp+78h]
  __int64 v522; // [sp+A8h] [bp+A8h]
  __int64 v523; // [sp+B0h] [bp+B0h]
  __int64 v524; // [sp+B8h] [bp+B8h]
  __int64 v525; // [sp+C8h] [bp+C8h]
  __int64 v526; // [sp+F8h] [bp+F8h]
  __int64 v527; // [sp+100h] [bp+100h]
  __int64 v528; // [sp+108h] [bp+108h]
  __int64 v529; // [sp+118h] [bp+118h]
  __int64 v530; // [sp+148h] [bp+148h]
  __int64 v531; // [sp+150h] [bp+150h]
  __int64 v532; // [sp+158h] [bp+158h]
  __int64 v533; // [sp+168h] [bp+168h]
  __int64 v534; // [sp+198h] [bp+198h]
  __int64 v535; // [sp+1A0h] [bp+1A0h]
  __int64 v536; // [sp+1A8h] [bp+1A8h]
  __int64 v537; // [sp+1B8h] [bp+1B8h]
  __int64 v538; // [sp+1E8h] [bp+1E8h]
  __int64 v539; // [sp+1F0h] [bp+1F0h]
  __int64 v540; // [sp+1F8h] [bp+1F8h]
  __int64 v541; // [sp+238h] [bp+238h]
  __int64 v542; // [sp+240h] [bp+240h]
  __int64 v543; // [sp+248h] [bp+248h]
  __int64 v544; // [sp+260h] [bp+260h]
  __int64 v545; // [sp+268h] [bp+268h]
  __int64 v546; // [sp+288h] [bp+288h]
  __int64 v547; // [sp+290h] [bp+290h]
  __int64 v548; // [sp+298h] [bp+298h]
  __int64 v549; // [sp+2A8h] [bp+2A8h]
  __int64 v550; // [sp+2B0h] [bp+2B0h]
  __int64 v551; // [sp+2B8h] [bp+2B8h]
  __int64 v552; // [sp+2D8h] [bp+2D8h]
  __int64 v553; // [sp+2E0h] [bp+2E0h]
  __int64 v554; // [sp+2E8h] [bp+2E8h]
  __int64 v555; // [sp+2F8h] [bp+2F8h]
  __int64 v556; // [sp+300h] [bp+300h]
  __int64 v557; // [sp+328h] [bp+328h]
  __int64 v558; // [sp+330h] [bp+330h]
  __int64 v559; // [sp+338h] [bp+338h]
  __int64 v560; // [sp+360h] [bp+360h]
  __int64 v561; // [sp+378h] [bp+378h]
  __int64 v562; // [sp+380h] [bp+380h]
  __int64 v563; // [sp+388h] [bp+388h]
  __int64 v564; // [sp+3A8h] [bp+3A8h]
  __int64 v565; // [sp+3C8h] [bp+3C8h]
  __int64 v566; // [sp+3D0h] [bp+3D0h]
  __int64 v567; // [sp+3D8h] [bp+3D8h]
  __int64 v568; // [sp+3E8h] [bp+3E8h]
  __int64 v569; // [sp+3F0h] [bp+3F0h]
  __int64 v570; // [sp+3F8h] [bp+3F8h]
  __int64 v571; // [sp+418h] [bp+418h]
  __int64 v572; // [sp+420h] [bp+420h]
  __int64 v573; // [sp+438h] [bp+438h]
  __int64 v574; // [sp+440h] [bp+440h]
  __int64 v575; // [sp+468h] [bp+468h]
  __int64 v576; // [sp+470h] [bp+470h]
  __int64 v577; // [sp+4C8h] [bp+4C8h]
  __int64 v578; // [sp+4D0h] [bp+4D0h]
  __int64 v579; // [sp+4D8h] [bp+4D8h]
  __int64 v580; // [sp+4E0h] [bp+4E0h]
  int v581; // [sp+4ECh] [bp+4ECh]
  int v582; // [sp+4F0h] [bp+4F0h]
  int v583; // [sp+4F4h] [bp+4F4h]
  __int64 v584; // [sp+4F8h] [bp+4F8h]
  int v585; // [sp+500h] [bp+500h]
  int v586; // [sp+504h] [bp+504h]
  __int64 v587; // [sp+508h] [bp+508h]
  __int64 v588; // [sp+510h] [bp+510h]
  __int64 v589; // [sp+518h] [bp+518h]
  __int64 v590; // [sp+520h] [bp+520h]
  unsigned int v591; // [sp+528h] [bp+528h]
  int v592; // [sp+52Ch] [bp+52Ch]
  int v593; // [sp+530h] [bp+530h]
  int v594; // [sp+534h] [bp+534h]
  unsigned int v595; // [sp+538h] [bp+538h]
  unsigned int v596; // [sp+53Ch] [bp+53Ch]
  int v597; // [sp+540h] [bp+540h]
  int v598; // [sp+544h] [bp+544h]
  __int64 v599; // [sp+548h] [bp+548h]
  __int64 v600; // [sp+550h] [bp+550h]
  __int64 v601; // [sp+558h] [bp+558h]
  __int64 v602; // [sp+560h] [bp+560h]
  unsigned int v603; // [sp+568h] [bp+568h]
  int v604; // [sp+56Ch] [bp+56Ch]
  int v605; // [sp+570h] [bp+570h]
  int v606; // [sp+574h] [bp+574h]
  unsigned int v607; // [sp+578h] [bp+578h]
  unsigned int v608; // [sp+57Ch] [bp+57Ch]
  int v609; // [sp+580h] [bp+580h]
  int v610; // [sp+584h] [bp+584h]
  __int64 v611; // [sp+588h] [bp+588h]
  __int64 v612; // [sp+590h] [bp+590h]
  __int64 v613; // [sp+598h] [bp+598h]
  __int64 v614; // [sp+5A0h] [bp+5A0h]
  __int64 v615; // [sp+5E0h] [bp+5E0h]
  __int64 v616; // [sp+5E8h] [bp+5E8h]
  __int64 v617; // [sp+5F0h] [bp+5F0h]
  __int64 v618; // [sp+5F8h] [bp+5F8h]
  int v619; // [sp+604h] [bp+604h]
  int v620; // [sp+608h] [bp+608h]
  int v621; // [sp+60Ch] [bp+60Ch]
  __int64 v622; // [sp+610h] [bp+610h]
  int v623; // [sp+618h] [bp+618h]
  int v624; // [sp+61Ch] [bp+61Ch]
  __int64 v625; // [sp+620h] [bp+620h]
  __int64 v626; // [sp+628h] [bp+628h]
  __int64 v627; // [sp+630h] [bp+630h]
  __int64 v628; // [sp+638h] [bp+638h]
  unsigned int v629; // [sp+640h] [bp+640h]
  int v630; // [sp+644h] [bp+644h]
  int v631; // [sp+648h] [bp+648h]
  int v632; // [sp+64Ch] [bp+64Ch]
  unsigned int v633; // [sp+650h] [bp+650h]
  unsigned int v634; // [sp+654h] [bp+654h]
  int v635; // [sp+658h] [bp+658h]
  int v636; // [sp+65Ch] [bp+65Ch]
  __int64 v637; // [sp+660h] [bp+660h]
  __int64 v638; // [sp+668h] [bp+668h]
  __int64 v639; // [sp+670h] [bp+670h]
  __int64 v640; // [sp+678h] [bp+678h]
  int v641; // [sp+680h] [bp+680h]
  int v642; // [sp+684h] [bp+684h]
  int v643; // [sp+688h] [bp+688h]
  int v644; // [sp+68Ch] [bp+68Ch]
  unsigned int v645; // [sp+690h] [bp+690h]
  unsigned int v646; // [sp+694h] [bp+694h]
  int v647; // [sp+698h] [bp+698h]
  int v648; // [sp+69Ch] [bp+69Ch]
  __int64 v649; // [sp+6A0h] [bp+6A0h]
  __int64 v650; // [sp+6A8h] [bp+6A8h]
  __int64 v651; // [sp+6B0h] [bp+6B0h]
  __int64 v652; // [sp+6B8h] [bp+6B8h]
  __int64 v653; // [sp+6D0h] [bp+6D0h]
  unsigned int v654; // [sp+6E4h] [bp+6E4h]
  unsigned int v655; // [sp+6F4h] [bp+6F4h]
  unsigned int v656; // [sp+704h] [bp+704h]
  unsigned int v657; // [sp+714h] [bp+714h]
  unsigned int v658; // [sp+724h] [bp+724h]
  unsigned int v659; // [sp+734h] [bp+734h]
  unsigned int v660; // [sp+744h] [bp+744h]
  unsigned int v661; // [sp+754h] [bp+754h]
  unsigned int v662; // [sp+764h] [bp+764h]
  unsigned int v663; // [sp+774h] [bp+774h]
  unsigned int v664; // [sp+784h] [bp+784h]
  unsigned int v665; // [sp+794h] [bp+794h]
  _QWORD v666[22]; // [sp+7A0h] [bp+7A0h] BYREF
  __int64 v667; // [sp+850h] [bp+850h]
  __int64 v668; // [sp+858h] [bp+858h]
  __int64 v669; // [sp+860h] [bp+860h]
  unsigned __int64 v670; // [sp+868h] [bp+868h]
  __int64 v671; // [sp+870h] [bp+870h]
  __int64 v672; // [sp+878h] [bp+878h]
  __int64 v673; // [sp+880h] [bp+880h]
  unsigned __int64 v674; // [sp+888h] [bp+888h]
  __int64 v675; // [sp+890h] [bp+890h]
  __int64 v676; // [sp+898h] [bp+898h]
  unsigned __int64 v677; // [sp+8A0h] [bp+8A0h]
  __int64 v678; // [sp+8A8h] [bp+8A8h]
  __int64 v679; // [sp+8B0h] [bp+8B0h]
  __int64 v680; // [sp+8B8h] [bp+8B8h]
  unsigned __int64 v681; // [sp+8C0h] [bp+8C0h]
  __int64 v682; // [sp+8C8h] [bp+8C8h]
  __int64 v683; // [sp+8D0h] [bp+8D0h]
  __int64 v684; // [sp+8D8h] [bp+8D8h]
  unsigned __int64 v685; // [sp+8E0h] [bp+8E0h]
  __int64 v686; // [sp+8E8h] [bp+8E8h]
  __int64 v687; // [sp+8F0h] [bp+8F0h]
  __int64 v688; // [sp+8F8h] [bp+8F8h]
  unsigned __int64 v689; // [sp+900h] [bp+900h]
  __int64 v690; // [sp+908h] [bp+908h]
  __int64 v691; // [sp+910h] [bp+910h]
  __int64 v692; // [sp+918h] [bp+918h]
  unsigned __int64 v693; // [sp+920h] [bp+920h]
  __int64 v694; // [sp+928h] [bp+928h]
  __int64 v695; // [sp+930h] [bp+930h]
  __int64 v696; // [sp+938h] [bp+938h]
  unsigned __int64 v697; // [sp+940h] [bp+940h]
  __int64 v698; // [sp+948h] [bp+948h]
  __int64 v699; // [sp+950h] [bp+950h]
  __int64 v700; // [sp+958h] [bp+958h]
  unsigned __int64 v701; // [sp+960h] [bp+960h]
  __int64 v702; // [sp+968h] [bp+968h]
  __int64 v703; // [sp+970h] [bp+970h]
  unsigned __int64 v704; // [sp+978h] [bp+978h]
  __int64 v705; // [sp+980h] [bp+980h]
  __int64 v706; // [sp+988h] [bp+988h]
  __int64 v707; // [sp+990h] [bp+990h]
  unsigned __int64 v708; // [sp+998h] [bp+998h]
  __int64 v709; // [sp+9A0h] [bp+9A0h]
  __int64 v710; // [sp+9A8h] [bp+9A8h]
  __int64 v711; // [sp+9B0h] [bp+9B0h]
  unsigned __int64 v712; // [sp+9B8h] [bp+9B8h]
  __int64 v713; // [sp+9C0h] [bp+9C0h]
  __int64 v714; // [sp+9C8h] [bp+9C8h]
  __int64 v715; // [sp+9D0h] [bp+9D0h]
  unsigned __int64 v716; // [sp+9D8h] [bp+9D8h]
  __int64 v717; // [sp+9E0h] [bp+9E0h]
  __int64 v718; // [sp+9E8h] [bp+9E8h]
  __int64 v719; // [sp+9F0h] [bp+9F0h]
  unsigned __int64 v720; // [sp+9F8h] [bp+9F8h]
  __int64 v721; // [sp+A00h] [bp+A00h]
  __int64 v722; // [sp+A08h] [bp+A08h]
  __int64 v723; // [sp+A10h] [bp+A10h]
  __int64 v724; // [sp+A18h] [bp+A18h]
  __int64 v725; // [sp+A20h] [bp+A20h]
  unsigned __int64 v726; // [sp+A28h] [bp+A28h]
  unsigned __int64 v727; // [sp+A30h] [bp+A30h]
  __int64 v728; // [sp+A38h] [bp+A38h]
  __int64 v729; // [sp+A40h] [bp+A40h]
  __int64 v730; // [sp+A48h] [bp+A48h]
  unsigned __int64 v731; // [sp+A50h] [bp+A50h]
  unsigned __int64 v732; // [sp+A58h] [bp+A58h]
  __int64 v733; // [sp+A60h] [bp+A60h]
  __int64 v734; // [sp+A68h] [bp+A68h]
  __int64 v735; // [sp+A70h] [bp+A70h]
  unsigned __int64 v736; // [sp+A78h] [bp+A78h]
  unsigned __int64 v737; // [sp+A80h] [bp+A80h]
  __int64 v738; // [sp+A88h] [bp+A88h]
  __int64 v739; // [sp+A90h] [bp+A90h]
  __int64 v740; // [sp+A98h] [bp+A98h]
  unsigned __int64 v741; // [sp+AA0h] [bp+AA0h]
  unsigned __int64 v742; // [sp+AA8h] [bp+AA8h]
  __int64 v743; // [sp+AB0h] [bp+AB0h]
  __int64 v744; // [sp+AB8h] [bp+AB8h]
  __int64 v745; // [sp+AC0h] [bp+AC0h]
  __int64 v746; // [sp+AC8h] [bp+AC8h]
  __int64 v747; // [sp+AD0h] [bp+AD0h]
  unsigned __int64 v748; // [sp+AD8h] [bp+AD8h]
  unsigned __int64 v749; // [sp+AE0h] [bp+AE0h]
  __int64 v750; // [sp+AE8h] [bp+AE8h]
  __int64 v751; // [sp+AF0h] [bp+AF0h]
  __int64 v752; // [sp+AF8h] [bp+AF8h]
  unsigned __int64 v753; // [sp+B00h] [bp+B00h]
  unsigned __int64 v754; // [sp+B08h] [bp+B08h]
  __int64 v755; // [sp+B10h] [bp+B10h]
  __int64 v756; // [sp+B18h] [bp+B18h]
  __int64 v757; // [sp+B20h] [bp+B20h]
  unsigned __int64 v758; // [sp+B28h] [bp+B28h]
  unsigned __int64 v759; // [sp+B30h] [bp+B30h]
  __int64 v760; // [sp+B38h] [bp+B38h]
  __int64 v761; // [sp+B40h] [bp+B40h]
  __int64 v762; // [sp+B48h] [bp+B48h]
  unsigned __int64 v763; // [sp+B50h] [bp+B50h]
  unsigned __int64 v764; // [sp+B58h] [bp+B58h]
  __int64 v765; // [sp+B60h] [bp+B60h]
  unsigned __int64 v766; // [sp+B68h] [bp+B68h]
  __int64 v767; // [sp+B70h] [bp+B70h]
  __int64 v768; // [sp+B78h] [bp+B78h]
  unsigned __int64 v769; // [sp+B80h] [bp+B80h]
  __int64 v770; // [sp+B88h] [bp+B88h]
  __int64 v771; // [sp+B90h] [bp+B90h]
  unsigned __int64 v772; // [sp+B98h] [bp+B98h]
  unsigned __int64 v773; // [sp+BA0h] [bp+BA0h]
  __int64 v774; // [sp+BA8h] [bp+BA8h]
  unsigned __int64 v775; // [sp+BB0h] [bp+BB0h]
  unsigned __int64 v776; // [sp+BB8h] [bp+BB8h]
  __int64 v777; // [sp+BC0h] [bp+BC0h]
  __int64 v778; // [sp+BC8h] [bp+BC8h]
  unsigned __int64 v779; // [sp+BD0h] [bp+BD0h]
  __int64 v780; // [sp+BD8h] [bp+BD8h]
  __int64 v781; // [sp+BE0h] [bp+BE0h]
  unsigned __int64 v782; // [sp+BE8h] [bp+BE8h]
  __int64 v783; // [sp+BF0h] [bp+BF0h]
  __int64 v784; // [sp+BF8h] [bp+BF8h]
  unsigned __int64 v785; // [sp+C00h] [bp+C00h]
  unsigned __int64 v786; // [sp+C08h] [bp+C08h]
  __int64 v787; // [sp+C10h] [bp+C10h]
  unsigned __int64 v788; // [sp+C18h] [bp+C18h]
  unsigned __int64 v789; // [sp+C20h] [bp+C20h]
  __int64 v790; // [sp+C28h] [bp+C28h]
  __int64 v791; // [sp+C30h] [bp+C30h]
  unsigned __int64 v792; // [sp+C38h] [bp+C38h]
  __int64 v793; // [sp+C40h] [bp+C40h]
  __int64 v794; // [sp+C48h] [bp+C48h]
  unsigned __int64 v795; // [sp+C50h] [bp+C50h]
  __int64 v796; // [sp+C58h] [bp+C58h]
  __int64 v797; // [sp+C60h] [bp+C60h]
  unsigned __int64 v798; // [sp+C68h] [bp+C68h]
  unsigned __int64 v799; // [sp+C70h] [bp+C70h]
  __int64 v800; // [sp+C78h] [bp+C78h]
  unsigned __int64 v801; // [sp+C80h] [bp+C80h]
  unsigned __int64 v802; // [sp+C88h] [bp+C88h]
  __int64 v803; // [sp+C90h] [bp+C90h]
  __int64 v804; // [sp+C98h] [bp+C98h]
  unsigned __int64 v805; // [sp+CA0h] [bp+CA0h]
  __int64 v806; // [sp+CA8h] [bp+CA8h]
  int v807; // [sp+CB4h] [bp+CB4h]
  int v808; // [sp+CB8h] [bp+CB8h]
  int v809; // [sp+CBCh] [bp+CBCh]
  signed __int64 v810; // [sp+CC0h] [bp+CC0h]
  signed __int64 v811; // [sp+CC8h] [bp+CC8h]
  signed __int64 v812; // [sp+CD0h] [bp+CD0h]
  signed __int64 v813; // [sp+CD8h] [bp+CD8h]
  __int64 v814; // [sp+CE0h] [bp+CE0h]
  signed __int64 v815; // [sp+CE8h] [bp+CE8h]
  signed __int64 v816; // [sp+CF0h] [bp+CF0h]
  signed __int64 v817; // [sp+CF8h] [bp+CF8h]
  signed __int64 v818; // [sp+D00h] [bp+D00h]
  __int64 v819; // [sp+D08h] [bp+D08h]
  signed __int64 v820; // [sp+D10h] [bp+D10h]
  signed __int64 v821; // [sp+D18h] [bp+D18h]
  signed __int64 v822; // [sp+D20h] [bp+D20h]
  signed __int64 v823; // [sp+D28h] [bp+D28h]
  __int64 v824; // [sp+D30h] [bp+D30h]
  __int64 v825; // [sp+D38h] [bp+D38h]
  signed __int64 v826; // [sp+D40h] [bp+D40h]
  signed __int64 v827; // [sp+D48h] [bp+D48h]
  signed __int64 v828; // [sp+D50h] [bp+D50h]
  signed __int64 v829; // [sp+D58h] [bp+D58h]
  signed __int64 v830; // [sp+D60h] [bp+D60h]
  signed __int64 v831; // [sp+D68h] [bp+D68h]
  signed __int64 v832; // [sp+D70h] [bp+D70h]
  signed __int64 v833; // [sp+D78h] [bp+D78h]
  signed __int64 v834; // [sp+D80h] [bp+D80h]
  signed __int64 v835; // [sp+D88h] [bp+D88h]
  signed __int64 v836; // [sp+D90h] [bp+D90h]
  signed __int64 v837; // [sp+D98h] [bp+D98h]
  signed __int64 v838; // [sp+DA0h] [bp+DA0h]
  unsigned __int64 v839; // [sp+DA8h] [bp+DA8h]
  unsigned __int64 v840; // [sp+DB0h] [bp+DB0h]
  unsigned __int64 v841; // [sp+DB8h] [bp+DB8h]
  unsigned __int64 v842; // [sp+DC0h] [bp+DC0h]
  unsigned __int64 v843; // [sp+DC8h] [bp+DC8h]

  v809 = a1;
  v808 = a2;
  v807 = a3;
  v3 = sub_10B364(a1 + 40);
  v4 = *(_QWORD *)(v808 + 40);
  v5 = (v3 ^ v4) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v6 = v5 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v7 = v6 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v8 = ((*(_QWORD *)(v808 + 112) ^ (unsigned __int64)sub_10B364(v809 + 112)) + v7) >> 1;
  v9 = sub_10B364(v809 + 40);
  v10 = *(_QWORD *)(v808 + 40);
  v11 = (v9 ^ v10) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v12 = v11 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v13 = v12 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v14 = (8 * ((*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v13)) ^ v8;
  v15 = sub_10B364(v809 + 40);
  v16 = *(_QWORD *)(v808 + 40);
  v17 = (v15 ^ v16) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v18 = v17 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v19 = v18 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v806 = 16 * ((*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v19);
  v20 = sub_10B364(v809 + 40);
  v21 = *(_QWORD *)(v808 + 40);
  v22 = (v20 ^ v21) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v23 = v22 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v24 = v23 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  LODWORD(v14) = v14
               ^ (v806
                | ((unsigned int)(((*(_QWORD *)(v808 + 112) ^ (unsigned __int64)sub_10B364(v809 + 112)) + v24) >> 32) >> 28));
  v25 = sub_10B364(v809 + 40);
  v26 = *(_QWORD *)(v808 + 40);
  v27 = (v25 ^ v26) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v28 = v27 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v29 = v28 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v665 = 32 * ((*(_DWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v29);
  v30 = sub_10B364(v809 + 40);
  v31 = *(_QWORD *)(v808 + 40);
  v32 = (v30 ^ v31) - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v33 = v32 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v34 = v33 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v35 = (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v34;
  v805 = v35 >> 27;
  v810 = __PAIR64__(
           HIDWORD(v14) ^ HIDWORD(v806) ^ (v665 | (HIDWORD(v35) >> 27)),
           (unsigned int)v14 ^ (unsigned int)(v35 >> 27))
       + *(_QWORD *)(v808 + 8);
  v36 = sub_10B364(v809 + 48);
  v37 = *(_QWORD *)(v808 + 48);
  v38 = (v36 ^ v37) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v39 = v38 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v40 = v39 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v41 = (v40 - (*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120))) >> 1;
  v42 = sub_10B364(v809 + 48);
  v43 = *(_QWORD *)(v808 + 48);
  v44 = (v42 ^ v43) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v45 = v44 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v46 = v45 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v804 = 4 * (v46 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)));
  v47 = v804 ^ v41;
  v48 = sub_10B364(v809 + 48);
  v49 = *(_QWORD *)(v808 + 48);
  v50 = (v48 ^ v49) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v51 = v50 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v52 = v51 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v803 = (v52 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120))) << 13;
  v53 = sub_10B364(v809 + 48);
  v54 = *(_QWORD *)(v808 + 48);
  v55 = (v53 ^ v54) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v56 = v55 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v57 = v56 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  LODWORD(v47) = v47
               ^ (v803
                | ((unsigned int)((v57 - (*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120))) >> 32) >> 19));
  v58 = sub_10B364(v809 + 48);
  v59 = *(_QWORD *)(v808 + 48);
  v60 = (v58 ^ v59) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v61 = v60 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v62 = v61 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v664 = ((_DWORD)v62 - (*(_DWORD *)(v808 + 120) ^ (unsigned int)sub_10B364(v809 + 120))) << 11;
  v63 = sub_10B364(v809 + 48);
  v64 = *(_QWORD *)(v808 + 48);
  v65 = (v63 ^ v64) - (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v66 = v65 + (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v67 = v66 + (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v68 = v67 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120));
  v802 = v68 >> 21;
  v811 = __PAIR64__(
           HIDWORD(v47) ^ HIDWORD(v803) ^ (v664 | (HIDWORD(v68) >> 21)),
           (unsigned int)v47 ^ (unsigned int)(v68 >> 21))
       + *(_QWORD *)(v808 + 16);
  v69 = sub_10B364(v809);
  v70 = v69 ^ *(_DWORD *)v808;
  v71 = HIDWORD(v69) ^ *(_DWORD *)(v808 + 4);
  v72 = __PAIR64__(v71, v70) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v73 = v72 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v74 = v73 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v801 = ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v74) >> 2;
  v75 = sub_10B364(v809);
  v76 = v75 ^ *(_DWORD *)v808;
  v77 = HIDWORD(v75) ^ *(_DWORD *)(v808 + 4);
  v78 = __PAIR64__(v77, v76) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v79 = v78 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v80 = v79 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v81 = v801 ^ (2 * ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v80));
  v82 = sub_10B364(v809);
  v83 = v82 ^ *(_DWORD *)v808;
  v84 = HIDWORD(v82) ^ *(_DWORD *)(v808 + 4);
  v85 = __PAIR64__(v84, v83) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v86 = v85 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v87 = v86 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v800 = ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v87) << 19;
  v88 = sub_10B364(v809);
  v89 = v88 ^ *(_DWORD *)v808;
  v90 = HIDWORD(v88) ^ *(_DWORD *)(v808 + 4);
  v91 = __PAIR64__(v90, v89) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v92 = v91 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v93 = v92 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  LODWORD(v81) = v81 ^ (v800 | ((unsigned int)(((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v93) >> 32) >> 13));
  v94 = sub_10B364(v809);
  v95 = v94 ^ *(_DWORD *)v808;
  v96 = HIDWORD(v94) ^ *(_DWORD *)(v808 + 4);
  v97 = __PAIR64__(v96, v95) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v98 = v97 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v99 = v98 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v663 = ((*(_DWORD *)(v808 + 120) ^ (unsigned int)sub_10B364(v809 + 120)) + (_DWORD)v99) << 21;
  v100 = sub_10B364(v809);
  v101 = v100 ^ *(_DWORD *)v808;
  v102 = HIDWORD(v100) ^ *(_DWORD *)(v808 + 4);
  v103 = __PAIR64__(v102, v101) + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v104 = v103 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v105 = v104 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v106 = (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v105;
  v799 = v106 >> 11;
  v812 = __PAIR64__(
           HIDWORD(v81) ^ HIDWORD(v800) ^ (v663 | (HIDWORD(v106) >> 11)),
           (unsigned int)v81 ^ (unsigned int)(v106 >> 11))
       + *(_QWORD *)(v808 + 24);
  v107 = sub_10B364(v809);
  v108 = v107 ^ *(_DWORD *)v808;
  v109 = HIDWORD(v107) ^ *(_DWORD *)(v808 + 4);
  v110 = __PAIR64__(v109, v108) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v111 = v110 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v112 = v111 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v798 = ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v112) >> 2;
  v113 = sub_10B364(v809);
  v114 = v113 ^ *(_DWORD *)v808;
  v115 = HIDWORD(v113) ^ *(_DWORD *)(v808 + 4);
  v116 = __PAIR64__(v115, v114) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v117 = v116 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v118 = v117 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v797 = 4 * ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v118);
  v119 = sub_10B364(v809);
  v120 = v119 ^ *(_DWORD *)v808;
  v121 = HIDWORD(v119) ^ *(_DWORD *)(v808 + 4);
  v122 = __PAIR64__(v121, v120) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v123 = v122 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v124 = v123 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v796 = ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v124) << 28;
  v125 = sub_10B364(v809);
  v126 = v125 ^ *(_DWORD *)v808;
  v127 = HIDWORD(v125) ^ *(_DWORD *)(v808 + 4);
  v128 = __PAIR64__(v127, v126) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v129 = v128 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v130 = v129 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  LODWORD(v81) = v798
               ^ v797
               ^ (v796 | ((unsigned int)(((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v130) >> 32) >> 4));
  v131 = sub_10B364(v809);
  v132 = v131 ^ *(_DWORD *)v808;
  v133 = HIDWORD(v131) ^ *(_DWORD *)(v808 + 4);
  v134 = __PAIR64__(v133, v132) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v135 = v134 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v136 = v135 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v662 = ((*(_DWORD *)(v808 + 104) ^ (unsigned int)sub_10B364(v809 + 104)) + (_DWORD)v136) << 27;
  v137 = sub_10B364(v809);
  v138 = v137 ^ *(_DWORD *)v808;
  v139 = HIDWORD(v137) ^ *(_DWORD *)(v808 + 4);
  v140 = __PAIR64__(v139, v138) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v141 = v140 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v142 = v141 - (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v143 = (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v142;
  v795 = v143 >> 5;
  v813 = __PAIR64__(
           ((v798 ^ v797) >> 32) ^ HIDWORD(v796) ^ (v662 | (HIDWORD(v143) >> 5)),
           (unsigned int)v81 ^ (unsigned int)(v143 >> 5))
       + *(_QWORD *)(v808 + 32);
  v144 = sub_10B364(v809 + 8);
  v145 = *(_QWORD *)(v808 + 8);
  v146 = (v144 ^ v145) + (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v147 = v146 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v148 = v147 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v149 = (v148 - (*(_QWORD *)(v808 + 112) ^ (unsigned __int64)sub_10B364(v809 + 112))) >> 1;
  v150 = sub_10B364(v809 + 8);
  v151 = *(_QWORD *)(v808 + 8);
  v152 = (v150 ^ v151) + (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v153 = v152 + (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v154 = v153 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v814 = (v149 ^ (v154 - (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)))) + *(_QWORD *)(v808 + 40);
  v155 = sub_10B364(v809 + 24);
  v156 = *(_QWORD *)(v808 + 24);
  v157 = (v155 ^ v156) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v158 = v157 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v159 = v158 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v160 = ((*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120)) + v159) >> 1;
  v161 = sub_10B364(v809 + 24);
  v162 = *(_QWORD *)(v808 + 24);
  v163 = (v161 ^ v162) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v164 = v163 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v165 = v164 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v794 = 8 * ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v165);
  v166 = v794 ^ v160;
  v167 = sub_10B364(v809 + 24);
  v168 = *(_QWORD *)(v808 + 24);
  v169 = (v167 ^ v168) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v170 = v169 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v171 = v170 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v793 = 16 * ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v171);
  v172 = sub_10B364(v809 + 24);
  v173 = *(_QWORD *)(v808 + 24);
  v174 = (v172 ^ v173) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v175 = v174 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v176 = v175 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  LODWORD(v166) = v166
                ^ (v793
                 | ((unsigned int)(((*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120)) + v176) >> 32) >> 28));
  v177 = sub_10B364(v809 + 24);
  v178 = *(_QWORD *)(v808 + 24);
  v179 = (v177 ^ v178) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v180 = v179 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v181 = v180 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v661 = 32 * ((*(_DWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v181);
  v182 = sub_10B364(v809 + 24);
  v183 = *(_QWORD *)(v808 + 24);
  v184 = (v182 ^ v183) - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v185 = v184 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v186 = v185 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v187 = (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v186;
  v792 = v187 >> 27;
  v815 = __PAIR64__(
           HIDWORD(v166) ^ HIDWORD(v793) ^ (v661 | (HIDWORD(v187) >> 27)),
           (unsigned int)v166 ^ (unsigned int)(v187 >> 27))
       + *(_QWORD *)(v808 + 48);
  v188 = sub_10B364(v809 + 32);
  v189 = *(_QWORD *)(v808 + 32);
  v190 = (v188 ^ v189) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v191 = v190 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v192 = v191 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v193 = ((*(_QWORD *)(v808 + 104) ^ (unsigned __int64)sub_10B364(v809 + 104)) + v192) >> 1;
  v194 = sub_10B364(v809 + 32);
  v195 = *(_QWORD *)(v808 + 32);
  v196 = (v194 ^ v195) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v197 = v196 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v198 = v197 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v791 = 4 * ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v198);
  v199 = v791 ^ v193;
  v200 = sub_10B364(v809 + 32);
  v201 = *(_QWORD *)(v808 + 32);
  v202 = (v200 ^ v201) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v203 = v202 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v204 = v203 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v790 = ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v204) << 13;
  v205 = sub_10B364(v809 + 32);
  v206 = *(_QWORD *)(v808 + 32);
  v207 = (v205 ^ v206) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v208 = v207 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v209 = v208 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  LODWORD(v199) = v199
                ^ (v790
                 | ((unsigned int)(((*(_QWORD *)(v808 + 104) ^ (unsigned __int64)sub_10B364(v809 + 104)) + v209) >> 32) >> 19));
  v210 = sub_10B364(v809 + 32);
  v211 = *(_QWORD *)(v808 + 32);
  v212 = (v210 ^ v211) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v213 = v212 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v214 = v213 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v660 = ((*(_DWORD *)(v808 + 104) ^ (unsigned int)sub_10B364(v809 + 104)) + (_DWORD)v214) << 11;
  v215 = sub_10B364(v809 + 32);
  v216 = *(_QWORD *)(v808 + 32);
  v217 = (v215 ^ v216) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v218 = v217 - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v219 = v218 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v220 = (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v219;
  v789 = v220 >> 21;
  v816 = __PAIR64__(
           HIDWORD(v199) ^ HIDWORD(v790) ^ (v660 | (HIDWORD(v220) >> 21)),
           (unsigned int)v199 ^ (unsigned int)(v220 >> 21))
       + *(_QWORD *)(v808 + 56);
  v221 = sub_10B364(v809 + 8);
  v222 = *(_QWORD *)(v808 + 8);
  v223 = (v221 ^ v222) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v224 = v223 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v225 = v224 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v788 = (v225 - (*(_QWORD *)(v808 + 112) ^ (unsigned __int64)sub_10B364(v809 + 112))) >> 2;
  v226 = sub_10B364(v809 + 8);
  v227 = *(_QWORD *)(v808 + 8);
  v228 = (v226 ^ v227) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v229 = v228 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v230 = v229 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v231 = v788 ^ (2 * (v230 - (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112))));
  v232 = sub_10B364(v809 + 8);
  v233 = *(_QWORD *)(v808 + 8);
  v234 = (v232 ^ v233) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v235 = v234 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v236 = v235 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v787 = (v236 - (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112))) << 19;
  v237 = sub_10B364(v809 + 8);
  v238 = *(_QWORD *)(v808 + 8);
  v239 = (v237 ^ v238) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v240 = v239 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v241 = v240 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  LODWORD(v231) = v231
                ^ (v787
                 | ((unsigned int)((v241 - (*(_QWORD *)(v808 + 112) ^ (unsigned __int64)sub_10B364(v809 + 112))) >> 32) >> 13));
  v242 = sub_10B364(v809 + 8);
  v243 = *(_QWORD *)(v808 + 8);
  v244 = (v242 ^ v243) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v245 = v244 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v246 = v245 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v659 = ((_DWORD)v246 - (*(_DWORD *)(v808 + 112) ^ (unsigned int)sub_10B364(v809 + 112))) << 21;
  v247 = sub_10B364(v809 + 8);
  v248 = *(_QWORD *)(v808 + 8);
  v249 = (v247 ^ v248) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v250 = v249 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v251 = v250 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96));
  v252 = v251 - (*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112));
  v786 = v252 >> 11;
  v817 = __PAIR64__(
           HIDWORD(v231) ^ HIDWORD(v787) ^ (v659 | (HIDWORD(v252) >> 11)),
           (unsigned int)v231 ^ (unsigned int)(v252 >> 11))
       + *(_QWORD *)(v808 + 64);
  v253 = sub_10B364(v809 + 16);
  v254 = *(_QWORD *)(v808 + 16);
  v255 = (v253 ^ v254) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v256 = v255 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v257 = v256 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v785 = (v257 - (*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120))) >> 2;
  v258 = sub_10B364(v809 + 16);
  v259 = *(_QWORD *)(v808 + 16);
  v260 = (v258 ^ v259) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v261 = v260 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v262 = v261 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v784 = 4 * (v262 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)));
  v263 = sub_10B364(v809 + 16);
  v264 = *(_QWORD *)(v808 + 16);
  v265 = (v263 ^ v264) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v266 = v265 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v267 = v266 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v783 = (v267 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120))) << 28;
  v268 = sub_10B364(v809 + 16);
  v269 = *(_QWORD *)(v808 + 16);
  v270 = (v268 ^ v269) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v271 = v270 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v272 = v271 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  LODWORD(v231) = v785
                ^ v784
                ^ (v783
                 | ((unsigned int)((v272 - (*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120))) >> 32) >> 4));
  v273 = sub_10B364(v809 + 16);
  v274 = *(_QWORD *)(v808 + 16);
  v275 = (v273 ^ v274) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v276 = v275 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v277 = v276 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v658 = ((_DWORD)v277 - (*(_DWORD *)(v808 + 120) ^ (unsigned int)sub_10B364(v809 + 120))) << 27;
  v278 = sub_10B364(v809 + 16);
  v279 = *(_QWORD *)(v808 + 16);
  v280 = (v278 ^ v279) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v281 = v280 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v282 = v281 + (*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104));
  v283 = v282 - (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120));
  v782 = v283 >> 5;
  v818 = __PAIR64__(
           ((v785 ^ v784) >> 32) ^ HIDWORD(v783) ^ (v658 | (HIDWORD(v283) >> 5)),
           (unsigned int)v231 ^ (unsigned int)(v283 >> 5))
       + *(_QWORD *)(v808 + 72);
  v284 = sub_10B364(v809);
  v285 = v284 ^ *(_DWORD *)v808;
  v286 = HIDWORD(v284) ^ *(_DWORD *)(v808 + 4);
  v287 = __PAIR64__(v286, v285) - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v288 = v287 + (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v289 = v288 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v290 = ((*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v289) >> 1;
  v291 = sub_10B364(v809);
  v292 = v291 ^ *(_DWORD *)v808;
  v293 = HIDWORD(v291) ^ *(_DWORD *)(v808 + 4);
  v294 = __PAIR64__(v293, v292) - (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v295 = v294 + (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v296 = v295 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v819 = (v290 ^ ((*(_QWORD *)(v808 + 112) ^ sub_10B364(v809 + 112)) + v296)) + *(_QWORD *)(v808 + 80);
  v297 = sub_10B364(v809 + 64);
  v298 = *(_QWORD *)(v808 + 64);
  v299 = (v297 ^ v298) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v300 = v299 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v301 = v300 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v302 = ((*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120)) + v301) >> 1;
  v303 = sub_10B364(v809 + 64);
  v304 = *(_QWORD *)(v808 + 64);
  v305 = (v303 ^ v304) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v306 = v305 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v307 = v306 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v781 = 8 * ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v307);
  v308 = v781 ^ v302;
  v309 = sub_10B364(v809 + 64);
  v310 = *(_QWORD *)(v808 + 64);
  v311 = (v309 ^ v310) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v312 = v311 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v313 = v312 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v780 = 16 * ((*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v313);
  v314 = sub_10B364(v809 + 64);
  v315 = *(_QWORD *)(v808 + 64);
  v316 = (v314 ^ v315) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v317 = v316 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v318 = v317 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  LODWORD(v308) = v308
                ^ (v780
                 | ((unsigned int)(((*(_QWORD *)(v808 + 120) ^ (unsigned __int64)sub_10B364(v809 + 120)) + v318) >> 32) >> 28));
  v319 = sub_10B364(v809 + 64);
  v320 = *(_QWORD *)(v808 + 64);
  v321 = (v319 ^ v320) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v322 = v321 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v323 = v322 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v657 = 32 * ((*(_DWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v323);
  v324 = sub_10B364(v809 + 64);
  v325 = *(_QWORD *)(v808 + 64);
  v326 = (v324 ^ v325) - (*(_QWORD *)(v808 + 8) ^ sub_10B364(v809 + 8));
  v327 = v326 - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v328 = v327 - (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v329 = (*(_QWORD *)(v808 + 120) ^ sub_10B364(v809 + 120)) + v328;
  v779 = v329 >> 27;
  v820 = __PAIR64__(
           HIDWORD(v308) ^ HIDWORD(v780) ^ (v657 | (HIDWORD(v329) >> 27)),
           (unsigned int)v308 ^ (unsigned int)(v329 >> 27))
       + *(_QWORD *)(v808 + 88);
  v330 = sub_10B364(v809 + 64);
  v331 = *(_QWORD *)(v808 + 64);
  v332 = (v330 ^ v331) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v333 = v332 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v334 = v333 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v335 = ((*(_QWORD *)(v808 + 72) ^ (unsigned __int64)sub_10B364(v809 + 72)) + v334) >> 1;
  v336 = sub_10B364(v809 + 64);
  v337 = *(_QWORD *)(v808 + 64);
  v338 = (v336 ^ v337) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v339 = v338 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v340 = v339 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v778 = 4 * ((*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72)) + v340);
  v341 = v778 ^ v335;
  v342 = sub_10B364(v809 + 64);
  v343 = *(_QWORD *)(v808 + 64);
  v344 = (v342 ^ v343) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v345 = v344 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v346 = v345 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v777 = ((*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72)) + v346) << 13;
  v347 = sub_10B364(v809 + 64);
  v348 = *(_QWORD *)(v808 + 64);
  v349 = (v347 ^ v348) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v350 = v349 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v351 = v350 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  LODWORD(v341) = v341
                ^ (v777
                 | ((unsigned int)(((*(_QWORD *)(v808 + 72) ^ (unsigned __int64)sub_10B364(v809 + 72)) + v351) >> 32) >> 19));
  v352 = sub_10B364(v809 + 64);
  v353 = *(_QWORD *)(v808 + 64);
  v354 = (v352 ^ v353) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v355 = v354 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v356 = v355 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v656 = ((*(_DWORD *)(v808 + 72) ^ (unsigned int)sub_10B364(v809 + 72)) + (_DWORD)v356) << 11;
  v357 = sub_10B364(v809 + 64);
  v358 = *(_QWORD *)(v808 + 64);
  v359 = (v357 ^ v358) - (*(_QWORD *)v808 ^ sub_10B364(v809));
  v360 = v359 - (*(_QWORD *)(v808 + 16) ^ sub_10B364(v809 + 16));
  v361 = v360 - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v362 = (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72)) + v361;
  v776 = v362 >> 21;
  v821 = __PAIR64__(
           HIDWORD(v341) ^ HIDWORD(v777) ^ (v656 | (HIDWORD(v362) >> 21)),
           (unsigned int)v341 ^ (unsigned int)(v362 >> 21))
       + *(_QWORD *)(v808 + 96);
  v363 = sub_10B364(v809 + 8);
  v364 = *(_QWORD *)(v808 + 8);
  v365 = (v363 ^ v364) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v366 = v365 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v367 = v366 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v775 = ((*(_QWORD *)(v808 + 80) ^ (unsigned __int64)sub_10B364(v809 + 80)) + v367) >> 2;
  v368 = sub_10B364(v809 + 8);
  v369 = *(_QWORD *)(v808 + 8);
  v370 = (v368 ^ v369) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v371 = v370 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v372 = v371 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v373 = v775 ^ (2 * ((*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80)) + v372));
  v374 = sub_10B364(v809 + 8);
  v375 = *(_QWORD *)(v808 + 8);
  v376 = (v374 ^ v375) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v377 = v376 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v378 = v377 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v774 = ((*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80)) + v378) << 19;
  v379 = sub_10B364(v809 + 8);
  v380 = *(_QWORD *)(v808 + 8);
  v381 = (v379 ^ v380) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v382 = v381 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v383 = v382 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  LODWORD(v373) = v373
                ^ (v774
                 | ((unsigned int)(((*(_QWORD *)(v808 + 80) ^ (unsigned __int64)sub_10B364(v809 + 80)) + v383) >> 32) >> 13));
  v384 = sub_10B364(v809 + 8);
  v385 = *(_QWORD *)(v808 + 8);
  v386 = (v384 ^ v385) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v387 = v386 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v388 = v387 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v655 = ((*(_DWORD *)(v808 + 80) ^ (unsigned int)sub_10B364(v809 + 80)) + (_DWORD)v388) << 21;
  v389 = sub_10B364(v809 + 8);
  v390 = *(_QWORD *)(v808 + 8);
  v391 = (v389 ^ v390) + (*(_QWORD *)(v808 + 24) ^ sub_10B364(v809 + 24));
  v392 = v391 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v393 = v392 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v394 = (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80)) + v393;
  v773 = v394 >> 11;
  v822 = __PAIR64__(
           HIDWORD(v373) ^ HIDWORD(v774) ^ (v655 | (HIDWORD(v394) >> 11)),
           (unsigned int)v373 ^ (unsigned int)(v394 >> 11))
       + *(_QWORD *)(v808 + 104);
  v395 = sub_10B364(v809 + 16);
  v396 = *(_QWORD *)(v808 + 16);
  v397 = (v395 ^ v396) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v398 = v397 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v399 = v398 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v772 = ((*(_QWORD *)(v808 + 88) ^ (unsigned __int64)sub_10B364(v809 + 88)) + v399) >> 2;
  v400 = sub_10B364(v809 + 16);
  v401 = *(_QWORD *)(v808 + 16);
  v402 = (v400 ^ v401) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v403 = v402 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v404 = v403 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v771 = 4 * ((*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88)) + v404);
  v405 = sub_10B364(v809 + 16);
  v406 = *(_QWORD *)(v808 + 16);
  v407 = (v405 ^ v406) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v408 = v407 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v409 = v408 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v770 = ((*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88)) + v409) << 28;
  v410 = sub_10B364(v809 + 16);
  v411 = *(_QWORD *)(v808 + 16);
  v412 = (v410 ^ v411) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v413 = v412 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v414 = v413 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  LODWORD(v373) = v772
                ^ v771
                ^ (v770
                 | ((unsigned int)(((*(_QWORD *)(v808 + 88) ^ (unsigned __int64)sub_10B364(v809 + 88)) + v414) >> 32) >> 4));
  v415 = sub_10B364(v809 + 16);
  v416 = *(_QWORD *)(v808 + 16);
  v417 = (v415 ^ v416) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v418 = v417 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v419 = v418 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v654 = ((*(_DWORD *)(v808 + 88) ^ (unsigned int)sub_10B364(v809 + 88)) + (_DWORD)v419) << 27;
  v420 = sub_10B364(v809 + 16);
  v421 = *(_QWORD *)(v808 + 16);
  v422 = (v420 ^ v421) + (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v423 = v422 + (*(_QWORD *)(v808 + 56) ^ sub_10B364(v809 + 56));
  v424 = v423 + (*(_QWORD *)(v808 + 80) ^ sub_10B364(v809 + 80));
  v425 = (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88)) + v424;
  v769 = v425 >> 5;
  v823 = __PAIR64__(
           ((v772 ^ v771) >> 32) ^ HIDWORD(v770) ^ (v654 | (HIDWORD(v425) >> 5)),
           (unsigned int)v373 ^ (unsigned int)(v425 >> 5))
       + *(_QWORD *)(v808 + 112);
  v426 = sub_10B364(v809 + 24);
  v427 = *(_QWORD *)(v808 + 24);
  v428 = (v426 ^ v427) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v429 = v428 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v430 = v429 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v431 = (v430 - (*(_QWORD *)(v808 + 96) ^ (unsigned __int64)sub_10B364(v809 + 96))) >> 1;
  v432 = sub_10B364(v809 + 24);
  v433 = *(_QWORD *)(v808 + 24);
  v434 = (v432 ^ v433) - (*(_QWORD *)(v808 + 40) ^ sub_10B364(v809 + 40));
  v435 = v434 + (*(_QWORD *)(v808 + 64) ^ sub_10B364(v809 + 64));
  v436 = v435 - (*(_QWORD *)(v808 + 88) ^ sub_10B364(v809 + 88));
  v824 = (v431 ^ (v436 - (*(_QWORD *)(v808 + 96) ^ sub_10B364(v809 + 96)))) + *(_QWORD *)(v808 + 120);
  v437 = sub_10B364(v809 + 96);
  v438 = *(_QWORD *)(v808 + 96);
  v439 = (v437 ^ v438) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v440 = v439 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v441 = v440 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v442 = ((*(_QWORD *)(v808 + 104) ^ (unsigned __int64)sub_10B364(v809 + 104)) + v441) >> 1;
  v443 = sub_10B364(v809 + 96);
  v444 = *(_QWORD *)(v808 + 96);
  v445 = (v443 ^ v444) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v446 = v445 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v447 = v446 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v768 = 8 * ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v447);
  v448 = v768 ^ v442;
  v449 = sub_10B364(v809 + 96);
  v450 = *(_QWORD *)(v808 + 96);
  v451 = (v449 ^ v450) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v452 = v451 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v453 = v452 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v767 = 16 * ((*(_QWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v453);
  v454 = sub_10B364(v809 + 96);
  v455 = *(_QWORD *)(v808 + 96);
  v456 = (v454 ^ v455) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v457 = v456 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v458 = v457 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  LODWORD(v448) = v448
                ^ (v767
                 | ((unsigned int)(((*(_QWORD *)(v808 + 104) ^ (unsigned __int64)sub_10B364(v809 + 104)) + v458) >> 32) >> 28));
  HIDWORD(v448) ^= HIDWORD(v767);
  v459 = sub_10B364(v809 + 96);
  v460 = *(_QWORD *)(v808 + 96);
  v461 = (v459 ^ v460) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v462 = v461 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v463 = v462 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  HIDWORD(v653) = 32 * ((*(_DWORD *)(v808 + 104) ^ sub_10B364(v809 + 104)) + v463);
  LODWORD(v653) = 0;
  v464 = sub_10B364(v809 + 96);
  v465 = *(_QWORD *)(v808 + 96);
  v466 = (v464 ^ v465) - (*(_QWORD *)(v808 + 32) ^ sub_10B364(v809 + 32));
  v467 = v466 - (*(_QWORD *)(v808 + 48) ^ sub_10B364(v809 + 48));
  v468 = v467 - (*(_QWORD *)(v808 + 72) ^ sub_10B364(v809 + 72));
  v766 = ((*(_QWORD *)(v808 + 104) ^ (unsigned __int64)sub_10B364(v809 + 104)) + v468) >> 27;
  v825 = (v448 ^ (v653 | v766)) + *(_QWORD *)v808;
  v765 = 4 * v810;
  LODWORD(v448) = (v810 >> 21) ^ (((_DWORD)v810 << 13) | (HIDWORD(v810) >> 19)) ^ (4 * v810) ^ (v810 >> 1);
  HIDWORD(v448) = ((HIDWORD(v810) >> 21) | ((_DWORD)v810 << 11))
                ^ (v810 >> 19)
                ^ ((unsigned __int64)v810 >> 30)
                ^ (HIDWORD(v810) >> 1);
  v764 = (unsigned __int64)v811 >> 2;
  HIDWORD(v652) = v811 >> 13;
  LODWORD(v652) = ((_DWORD)v811 << 19) | (HIDWORD(v811) >> 13);
  LODWORD(v651) = v811 >> 11;
  HIDWORD(v651) = (HIDWORD(v811) >> 11) | ((_DWORD)v811 << 21);
  v763 = (unsigned __int64)v812 >> 2;
  v762 = 4 * v812;
  HIDWORD(v650) = v812 >> 4;
  LODWORD(v650) = ((_DWORD)v812 << 28) | (HIDWORD(v812) >> 4);
  LODWORD(v649) = v812 >> 5;
  HIDWORD(v649) = (HIDWORD(v812) >> 5) | ((_DWORD)v812 << 27);
  v761 = 8 * v813;
  v648 = v813 >> 28;
  v647 = (16 * v813) | (HIDWORD(v813) >> 28);
  v645 = v813 >> 27;
  v646 = (HIDWORD(v813) >> 27) | (32 * v813);
  v760 = 4 * v814;
  v644 = v814 >> 19;
  v643 = ((_DWORD)v814 << 13) | (HIDWORD(v814) >> 19);
  v641 = v814 >> 21;
  v642 = (HIDWORD(v814) >> 21) | ((_DWORD)v814 << 11);
  v759 = (unsigned __int64)v815 >> 2;
  HIDWORD(v640) = v815 >> 13;
  LODWORD(v640) = ((_DWORD)v815 << 19) | (HIDWORD(v815) >> 13);
  LODWORD(v639) = v815 >> 11;
  HIDWORD(v639) = (HIDWORD(v815) >> 11) | ((_DWORD)v815 << 21);
  v758 = (unsigned __int64)v816 >> 2;
  v757 = 4 * v816;
  HIDWORD(v638) = v816 >> 4;
  LODWORD(v638) = ((_DWORD)v816 << 28) | (HIDWORD(v816) >> 4);
  LODWORD(v637) = v816 >> 5;
  HIDWORD(v637) = (HIDWORD(v816) >> 5) | ((_DWORD)v816 << 27);
  v756 = 8 * v817;
  v636 = v817 >> 28;
  v635 = (16 * v817) | (HIDWORD(v817) >> 28);
  v633 = v817 >> 27;
  v634 = (HIDWORD(v817) >> 27) | (32 * v817);
  v755 = 4 * v818;
  v632 = v818 >> 19;
  v631 = ((_DWORD)v818 << 13) | (HIDWORD(v818) >> 19);
  v629 = v818 >> 21;
  v630 = (HIDWORD(v818) >> 21) | ((_DWORD)v818 << 11);
  v754 = (unsigned __int64)v819 >> 2;
  HIDWORD(v628) = v819 >> 13;
  LODWORD(v628) = ((_DWORD)v819 << 19) | (HIDWORD(v819) >> 13);
  LODWORD(v627) = v819 >> 11;
  HIDWORD(v627) = (HIDWORD(v819) >> 11) | ((_DWORD)v819 << 21);
  v753 = (unsigned __int64)v820 >> 2;
  v752 = 4 * v820;
  HIDWORD(v626) = v820 >> 4;
  LODWORD(v626) = ((_DWORD)v820 << 28) | (HIDWORD(v820) >> 4);
  LODWORD(v625) = v820 >> 5;
  HIDWORD(v625) = (HIDWORD(v820) >> 5) | ((_DWORD)v820 << 27);
  v751 = 8 * v821;
  v624 = v821 >> 28;
  v623 = (16 * v821) | (HIDWORD(v821) >> 28);
  LODWORD(v622) = v821 >> 27;
  HIDWORD(v622) = (HIDWORD(v821) >> 27) | (32 * v821);
  v750 = 4 * v822;
  v621 = v822 >> 19;
  v620 = ((_DWORD)v822 << 13) | (HIDWORD(v822) >> 19);
  v619 = (HIDWORD(v822) >> 21) | ((_DWORD)v822 << 11);
  v749 = (unsigned __int64)v823 >> 2;
  HIDWORD(v618) = v823 >> 13;
  LODWORD(v618) = ((_DWORD)v823 << 19) | (HIDWORD(v823) >> 13);
  LODWORD(v617) = v823 >> 11;
  HIDWORD(v617) = (HIDWORD(v823) >> 11) | ((_DWORD)v823 << 21);
  v748 = (unsigned __int64)v824 >> 2;
  v747 = 4 * v824;
  HIDWORD(v616) = v824 >> 4;
  LODWORD(v616) = ((_DWORD)v824 << 28) | (HIDWORD(v824) >> 4);
  LODWORD(v615) = v824 >> 5;
  HIDWORD(v615) = (HIDWORD(v824) >> 5) | ((_DWORD)v824 << 27);
  v469 = v448
       + (v651 ^ v652 ^ ((unsigned __int64)v811 >> 2) ^ (2 * v811))
       + (v649 ^ v650 ^ ((unsigned __int64)v812 >> 2) ^ (4 * v812))
       + __PAIR64__(
           v646 ^ v648 ^ ((unsigned __int64)v813 >> 29) ^ (HIDWORD(v813) >> 1),
           v645 ^ v647 ^ (8 * v813) ^ (v813 >> 1))
       + __PAIR64__(
           v642 ^ v644 ^ (unsigned int)((unsigned __int64)v814 >> 30) ^ (HIDWORD(v814) >> 1),
           v641 ^ v643 ^ (4 * v814) ^ (v814 >> 1))
       + (v639 ^ v640 ^ ((unsigned __int64)v815 >> 2) ^ (2 * v815))
       + (v637 ^ v638 ^ ((unsigned __int64)v816 >> 2) ^ (4 * v816))
       + __PAIR64__(
           v634 ^ v636 ^ ((unsigned __int64)v817 >> 29) ^ (HIDWORD(v817) >> 1),
           v633 ^ v635 ^ (8 * v817) ^ (v817 >> 1))
       + __PAIR64__(
           v630 ^ v632 ^ (unsigned int)((unsigned __int64)v818 >> 30) ^ (HIDWORD(v818) >> 1),
           v629 ^ v631 ^ (4 * v818) ^ (v818 >> 1))
       + (v627 ^ v628 ^ ((unsigned __int64)v819 >> 2) ^ (2 * v819))
       + (v625 ^ v626 ^ ((unsigned __int64)v820 >> 2) ^ (4 * v820))
       + __PAIR64__(
           HIDWORD(v622) ^ v624 ^ (unsigned int)((unsigned __int64)v821 >> 29) ^ (HIDWORD(v821) >> 1),
           v622 ^ v623 ^ (8 * v821) ^ (v821 >> 1))
       + __PAIR64__(
           v619 ^ v621 ^ (unsigned int)((unsigned __int64)v822 >> 30) ^ (HIDWORD(v822) >> 1),
           (v822 >> 21) ^ v620 ^ (4 * v822) ^ (v822 >> 1))
       + (v617 ^ v618 ^ ((unsigned __int64)v823 >> 2) ^ (2 * v823))
       + (v615 ^ v616 ^ ((unsigned __int64)v824 >> 2) ^ (4 * v824));
  v746 = 8 * v825;
  v470 = sub_10B364(v809);
  v471 = v470 >> 31;
  v472 = ((unsigned int)((unsigned __int64)sub_10B364(v809) >> 32) >> 31) | (2 * v470);
  v745 = 16 * sub_10B364(v809 + 24);
  v473 = __PAIR64__(v471, v472) + (v745 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 24) >> 32) >> 28));
  v744 = sub_10B364(v809 + 80) << 11;
  v826 = v469
       + __PAIR64__(
           ((HIDWORD(v825) >> 27) | (32 * v825)) ^ (v825 >> 28) ^ ((unsigned __int64)v825 >> 29) ^ (HIDWORD(v825) >> 1),
           (v825 >> 27) ^ ((16 * v825) | (HIDWORD(v825) >> 28)) ^ (8 * v825) ^ (v825 >> 1))
       + (*(_QWORD *)(v808 + 56)
        ^ (v473 - (v744 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 80) >> 32) >> 21)) + 0x5555555555555550LL));
  v743 = 4 * v811;
  LODWORD(v469) = (v811 >> 21) ^ (((_DWORD)v811 << 13) | (HIDWORD(v811) >> 19)) ^ (4 * v811) ^ (v811 >> 1);
  HIDWORD(v469) = ((HIDWORD(v811) >> 21) | ((_DWORD)v811 << 11))
                ^ (v811 >> 19)
                ^ ((unsigned __int64)v811 >> 30)
                ^ (HIDWORD(v811) >> 1);
  v742 = (unsigned __int64)v812 >> 2;
  HIDWORD(v614) = v812 >> 13;
  LODWORD(v614) = ((_DWORD)v812 << 19) | (HIDWORD(v812) >> 13);
  LODWORD(v613) = v812 >> 11;
  HIDWORD(v613) = (HIDWORD(v812) >> 11) | ((_DWORD)v812 << 21);
  v741 = (unsigned __int64)v813 >> 2;
  v740 = 4 * v813;
  HIDWORD(v612) = v813 >> 4;
  LODWORD(v612) = ((_DWORD)v813 << 28) | (HIDWORD(v813) >> 4);
  LODWORD(v611) = v813 >> 5;
  HIDWORD(v611) = (HIDWORD(v813) >> 5) | ((_DWORD)v813 << 27);
  v739 = 8 * v814;
  v610 = v814 >> 28;
  v609 = (16 * v814) | (HIDWORD(v814) >> 28);
  v607 = v814 >> 27;
  v608 = (HIDWORD(v814) >> 27) | (32 * v814);
  v738 = 4 * v815;
  v606 = v815 >> 19;
  v605 = ((_DWORD)v815 << 13) | (HIDWORD(v815) >> 19);
  v603 = v815 >> 21;
  v604 = (HIDWORD(v815) >> 21) | ((_DWORD)v815 << 11);
  v737 = (unsigned __int64)v816 >> 2;
  HIDWORD(v602) = v816 >> 13;
  LODWORD(v602) = ((_DWORD)v816 << 19) | (HIDWORD(v816) >> 13);
  LODWORD(v601) = v816 >> 11;
  HIDWORD(v601) = (HIDWORD(v816) >> 11) | ((_DWORD)v816 << 21);
  v736 = (unsigned __int64)v817 >> 2;
  v735 = 4 * v817;
  HIDWORD(v600) = v817 >> 4;
  LODWORD(v600) = ((_DWORD)v817 << 28) | (HIDWORD(v817) >> 4);
  LODWORD(v599) = v817 >> 5;
  HIDWORD(v599) = (HIDWORD(v817) >> 5) | ((_DWORD)v817 << 27);
  v734 = 8 * v818;
  v598 = v818 >> 28;
  v597 = (16 * v818) | (HIDWORD(v818) >> 28);
  v595 = v818 >> 27;
  v596 = (HIDWORD(v818) >> 27) | (32 * v818);
  v733 = 4 * v819;
  v594 = v819 >> 19;
  v593 = ((_DWORD)v819 << 13) | (HIDWORD(v819) >> 19);
  v591 = v819 >> 21;
  v592 = (HIDWORD(v819) >> 21) | ((_DWORD)v819 << 11);
  v732 = (unsigned __int64)v820 >> 2;
  HIDWORD(v590) = v820 >> 13;
  LODWORD(v590) = ((_DWORD)v820 << 19) | (HIDWORD(v820) >> 13);
  LODWORD(v589) = v820 >> 11;
  HIDWORD(v589) = (HIDWORD(v820) >> 11) | ((_DWORD)v820 << 21);
  v731 = (unsigned __int64)v821 >> 2;
  v730 = 4 * v821;
  HIDWORD(v588) = v821 >> 4;
  LODWORD(v588) = ((_DWORD)v821 << 28) | (HIDWORD(v821) >> 4);
  LODWORD(v587) = v821 >> 5;
  HIDWORD(v587) = (HIDWORD(v821) >> 5) | ((_DWORD)v821 << 27);
  v729 = 8 * v822;
  v586 = v822 >> 28;
  v585 = (16 * v822) | (HIDWORD(v822) >> 28);
  LODWORD(v584) = v822 >> 27;
  HIDWORD(v584) = (HIDWORD(v822) >> 27) | (32 * v822);
  v728 = 4 * v823;
  v583 = v823 >> 19;
  v582 = ((_DWORD)v823 << 13) | (HIDWORD(v823) >> 19);
  v581 = (HIDWORD(v823) >> 21) | ((_DWORD)v823 << 11);
  v727 = (unsigned __int64)v824 >> 2;
  HIDWORD(v580) = v824 >> 13;
  LODWORD(v580) = ((_DWORD)v824 << 19) | (HIDWORD(v824) >> 13);
  LODWORD(v579) = v824 >> 11;
  HIDWORD(v579) = (HIDWORD(v824) >> 11) | ((_DWORD)v824 << 21);
  v726 = (unsigned __int64)v825 >> 2;
  v725 = 4 * v825;
  HIDWORD(v578) = v825 >> 4;
  LODWORD(v578) = ((_DWORD)v825 << 28) | (HIDWORD(v825) >> 4);
  LODWORD(v577) = v825 >> 5;
  HIDWORD(v577) = (HIDWORD(v825) >> 5) | ((_DWORD)v825 << 27);
  v474 = v469
       + (v613 ^ v614 ^ ((unsigned __int64)v812 >> 2) ^ (2 * v812))
       + (v611 ^ v612 ^ ((unsigned __int64)v813 >> 2) ^ (4 * v813))
       + __PAIR64__(
           v608 ^ v610 ^ ((unsigned __int64)v814 >> 29) ^ (HIDWORD(v814) >> 1),
           v607 ^ v609 ^ (8 * v814) ^ (v814 >> 1))
       + __PAIR64__(
           v604 ^ v606 ^ (unsigned int)((unsigned __int64)v815 >> 30) ^ (HIDWORD(v815) >> 1),
           v603 ^ v605 ^ (4 * v815) ^ (v815 >> 1))
       + (v601 ^ v602 ^ ((unsigned __int64)v816 >> 2) ^ (2 * v816))
       + (v599 ^ v600 ^ ((unsigned __int64)v817 >> 2) ^ (4 * v817))
       + __PAIR64__(
           v596 ^ v598 ^ ((unsigned __int64)v818 >> 29) ^ (HIDWORD(v818) >> 1),
           v595 ^ v597 ^ (8 * v818) ^ (v818 >> 1))
       + __PAIR64__(
           v592 ^ v594 ^ (unsigned int)((unsigned __int64)v819 >> 30) ^ (HIDWORD(v819) >> 1),
           v591 ^ v593 ^ (4 * v819) ^ (v819 >> 1))
       + (v589 ^ v590 ^ ((unsigned __int64)v820 >> 2) ^ (2 * v820))
       + (v587 ^ v588 ^ ((unsigned __int64)v821 >> 2) ^ (4 * v821))
       + __PAIR64__(
           HIDWORD(v584) ^ v586 ^ (unsigned int)((unsigned __int64)v822 >> 29) ^ (HIDWORD(v822) >> 1),
           v584 ^ v585 ^ (8 * v822) ^ (v822 >> 1))
       + __PAIR64__(
           v581 ^ v583 ^ (unsigned int)((unsigned __int64)v823 >> 30) ^ (HIDWORD(v823) >> 1),
           (v823 >> 21) ^ v582 ^ (4 * v823) ^ (v823 >> 1))
       + (v579 ^ v580 ^ ((unsigned __int64)v824 >> 2) ^ (2 * v824))
       + (v577 ^ v578 ^ ((unsigned __int64)v825 >> 2) ^ (4 * v825));
  v724 = 8 * v826;
  v723 = 4 * sub_10B364(v809 + 8);
  v475 = v723 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 8) >> 32) >> 30);
  v722 = 32 * sub_10B364(v809 + 32);
  v476 = __PAIR64__(HIDWORD(v723), v475)
       + (v722 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 32) >> 32) >> 27));
  v721 = sub_10B364(v809 + 88) << 12;
  v827 = v474
       + __PAIR64__(
           ((HIDWORD(v826) >> 27) | (32 * v826)) ^ (v826 >> 28) ^ ((unsigned __int64)v826 >> 29) ^ (HIDWORD(v826) >> 1),
           (v826 >> 27) ^ ((16 * v826) | (HIDWORD(v826) >> 28)) ^ (8 * v826) ^ (v826 >> 1))
       + (*(_QWORD *)(v808 + 64)
        ^ (loc_112928 + v476 - (v721 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 88) >> 32) >> 20))));
  LODWORD(v576) = v823 >> 21;
  HIDWORD(v576) = v581;
  LODWORD(v575) = v825 >> 11;
  HIDWORD(v575) = (HIDWORD(v825) >> 11) | ((_DWORD)v825 << 21);
  v720 = (unsigned __int64)v827 >> 2;
  v719 = 8 * sub_10B364(v809 + 16);
  v477 = v719 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 16) >> 32) >> 29);
  v718 = sub_10B364(v809 + 40) << 6;
  v478 = __PAIR64__(HIDWORD(v719), v477)
       + (v718 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 40) >> 32) >> 26));
  v717 = sub_10B364(v809 + 96) << 13;
  v479 = sub_10B364(v809 + 96);
  v828 = v575
       + v576
       + v622
       + __PAIR64__(v819, HIDWORD(v819))
       + __PAIR64__(v599, HIDWORD(v599))
       + __PAIR64__(v603, v604)
       + __PAIR64__(v645, v646)
       + v812
       + v814
       + v816
       + v818
       + v820
       + v822
       + v824
       + __PAIR64__(HIDWORD(v826) ^ (HIDWORD(v826) >> 1), (unsigned int)v826 ^ (unsigned int)(v826 >> 1))
       + (((unsigned __int64)v827 >> 2) ^ v827)
       + __PAIR64__(
           *(_DWORD *)(v808 + 76)
         ^ (unsigned int)(((v478 - (v717 | (HIDWORD(v479) >> 19))) >> 32)
                        - (((unsigned int)v478 - ((unsigned int)v717 | (HIDWORD(v479) >> 19)) < 6)
                         - 1610612736)),
           *(_DWORD *)(v808 + 72) ^ (v478 - (v717 | (HIDWORD(v479) >> 19)) - 6));
  HIDWORD(v574) = v816 >> 21;
  LODWORD(v574) = ((_DWORD)v816 << 11) | (HIDWORD(v816) >> 21);
  HIDWORD(v573) = v818 >> 5;
  LODWORD(v573) = ((_DWORD)v818 << 27) | (HIDWORD(v818) >> 5);
  LODWORD(v572) = v824 >> 21;
  HIDWORD(v572) = (HIDWORD(v824) >> 21) | ((_DWORD)v824 << 11);
  LODWORD(v571) = v826 >> 11;
  HIDWORD(v571) = (HIDWORD(v826) >> 11) | ((_DWORD)v826 << 21);
  v716 = (unsigned __int64)v828 >> 2;
  v715 = 16 * sub_10B364(v809 + 24);
  v480 = v715 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 24) >> 32) >> 28);
  v714 = sub_10B364(v809 + 48) << 7;
  v481 = __PAIR64__(HIDWORD(v715), v480)
       + (v714 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 48) >> 32) >> 25));
  v713 = sub_10B364(v809 + 104) << 14;
  v829 = v571
       + v572
       + v584
       + __PAIR64__(v820, HIDWORD(v820))
       + v573
       + v574
       + __PAIR64__(v607, v608)
       + v813
       + v815
       + v817
       + v819
       + v821
       + v823
       + v825
       + __PAIR64__(HIDWORD(v827) ^ (HIDWORD(v827) >> 1), (unsigned int)v827 ^ (unsigned int)(v827 >> 1))
       + (((unsigned __int64)v828 >> 2) ^ v828)
       + (*(_QWORD *)(v808 + 80)
        ^ (loc_112930 + v481 - (v713 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 104) >> 32) >> 18))));
  HIDWORD(v570) = v815 >> 27;
  LODWORD(v570) = (32 * v815) | (HIDWORD(v815) >> 27);
  HIDWORD(v569) = v817 >> 21;
  LODWORD(v569) = ((_DWORD)v817 << 11) | (HIDWORD(v817) >> 21);
  HIDWORD(v568) = v819 >> 5;
  LODWORD(v568) = ((_DWORD)v819 << 27) | (HIDWORD(v819) >> 5);
  LODWORD(v567) = v823 >> 27;
  HIDWORD(v567) = (HIDWORD(v823) >> 27) | (32 * v823);
  LODWORD(v566) = v825 >> 21;
  HIDWORD(v566) = (HIDWORD(v825) >> 21) | ((_DWORD)v825 << 11);
  LODWORD(v565) = v827 >> 11;
  HIDWORD(v565) = (HIDWORD(v827) >> 11) | ((_DWORD)v827 << 21);
  v712 = (unsigned __int64)v829 >> 2;
  v711 = 32 * sub_10B364(v809 + 32);
  v482 = v711 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 32) >> 32) >> 27);
  v710 = sub_10B364(v809 + 56) << 8;
  v483 = __PAIR64__(HIDWORD(v711), v482)
       + (v710 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 56) >> 32) >> 24));
  v709 = sub_10B364(v809 + 112) << 15;
  v830 = v565
       + v566
       + v567
       + __PAIR64__(v821, HIDWORD(v821))
       + v568
       + v569
       + v570
       + v814
       + v816
       + v818
       + v820
       + v822
       + v824
       + v826
       + __PAIR64__(HIDWORD(v828) ^ (HIDWORD(v828) >> 1), (unsigned int)v828 ^ (unsigned int)(v828 >> 1))
       + (((unsigned __int64)v829 >> 2) ^ v829)
       + (*(_QWORD *)(v808 + 88)
        ^ (loc_112938 + v483 - (v709 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 112) >> 32) >> 17))));
  HIDWORD(v564) = v816 >> 27;
  LODWORD(v564) = (32 * v816) | (HIDWORD(v816) >> 27);
  LODWORD(v563) = v824 >> 27;
  HIDWORD(v563) = (HIDWORD(v824) >> 27) | (32 * v824);
  LODWORD(v562) = v826 >> 21;
  HIDWORD(v562) = (HIDWORD(v826) >> 21) | ((_DWORD)v826 << 11);
  LODWORD(v561) = v828 >> 11;
  HIDWORD(v561) = (HIDWORD(v828) >> 11) | ((_DWORD)v828 << 21);
  v708 = (unsigned __int64)v830 >> 2;
  v707 = sub_10B364(v809 + 40) << 6;
  v484 = v707 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 40) >> 32) >> 26);
  v706 = sub_10B364(v809 + 64) << 9;
  v485 = __PAIR64__(HIDWORD(v707), v484)
       + (v706 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 64) >> 32) >> 23));
  v705 = sub_10B364(v809 + 120) << 16;
  v560 = (unsigned int)((unsigned __int64)sub_10B364(v809 + 120) >> 32) >> 16;
  v831 = v561
       + v562
       + v563
       + __PAIR64__(v822, HIDWORD(v822))
       + __PAIR64__(v625, HIDWORD(v625))
       + __PAIR64__(v629, v630)
       + v564
       + v815
       + v817
       + v819
       + v821
       + v823
       + v825
       + v827
       + __PAIR64__(HIDWORD(v829) ^ (HIDWORD(v829) >> 1), (unsigned int)v829 ^ (unsigned int)(v829 >> 1))
       + (((unsigned __int64)v830 >> 2) ^ v830)
       + __PAIR64__(
           *(_DWORD *)(v808 + 100)
         ^ (unsigned int)(((v485 - (v705 | v560)) >> 32)
                        - (((unsigned int)v485 - ((unsigned int)v705 | (unsigned int)v560) < 7)
                         - 1879048192)),
           *(_DWORD *)(v808 + 96) ^ (v485 - (v705 | v560) - 7));
  LODWORD(v559) = v825 >> 27;
  HIDWORD(v559) = (HIDWORD(v825) >> 27) | (32 * v825);
  LODWORD(v558) = v827 >> 21;
  HIDWORD(v558) = (HIDWORD(v827) >> 21) | ((_DWORD)v827 << 11);
  LODWORD(v557) = v829 >> 11;
  HIDWORD(v557) = (HIDWORD(v829) >> 11) | ((_DWORD)v829 << 21);
  v704 = (unsigned __int64)v831 >> 2;
  v703 = sub_10B364(v809 + 48) << 7;
  v486 = v703 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 48) >> 32) >> 25);
  v702 = sub_10B364(v809 + 72) << 10;
  v487 = __PAIR64__(HIDWORD(v703), v486)
       + (v702 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 72) >> 32) >> 22));
  v488 = sub_10B364(v809);
  v832 = v557
       + v558
       + v559
       + __PAIR64__(v823, HIDWORD(v823))
       + __PAIR64__(v587, HIDWORD(v587))
       + __PAIR64__(v591, v592)
       + __PAIR64__(v633, v634)
       + v816
       + v818
       + v820
       + v822
       + v824
       + v826
       + v828
       + __PAIR64__(HIDWORD(v830) ^ (HIDWORD(v830) >> 1), (unsigned int)v830 ^ (unsigned int)(v830 >> 1))
       + (((unsigned __int64)v831 >> 2) ^ v831)
       + (*(_QWORD *)(v808 + 104)
        ^ (loc_113968 + v487 - ((2 * v488) | ((unsigned int)((unsigned __int64)sub_10B364(v809) >> 32) >> 31))));
  HIDWORD(v556) = v820 >> 21;
  LODWORD(v556) = ((_DWORD)v820 << 11) | (HIDWORD(v820) >> 21);
  HIDWORD(v555) = v822 >> 5;
  LODWORD(v555) = ((_DWORD)v822 << 27) | (HIDWORD(v822) >> 5);
  LODWORD(v554) = v826 >> 27;
  HIDWORD(v554) = (HIDWORD(v826) >> 27) | (32 * v826);
  LODWORD(v553) = v828 >> 21;
  HIDWORD(v553) = (HIDWORD(v828) >> 21) | ((_DWORD)v828 << 11);
  LODWORD(v552) = v830 >> 11;
  HIDWORD(v552) = (HIDWORD(v830) >> 11) | ((_DWORD)v830 << 21);
  v701 = (unsigned __int64)v832 >> 2;
  v700 = sub_10B364(v809 + 56) << 8;
  v489 = v700 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 56) >> 32) >> 24);
  v699 = sub_10B364(v809 + 80) << 11;
  v490 = __PAIR64__(HIDWORD(v700), v489)
       + (v699 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 80) >> 32) >> 21));
  v698 = 4 * sub_10B364(v809 + 8);
  v833 = v552
       + v553
       + v554
       + __PAIR64__(v824, HIDWORD(v824))
       + v555
       + v556
       + __PAIR64__(v595, v596)
       + v817
       + v819
       + v821
       + v823
       + v825
       + v827
       + v829
       + __PAIR64__(HIDWORD(v831) ^ (HIDWORD(v831) >> 1), (unsigned int)v831 ^ (unsigned int)(v831 >> 1))
       + (((unsigned __int64)v832 >> 2) ^ v832)
       + (*(_QWORD *)(v808 + 112)
        ^ (loc_113970 + v490 - (v698 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 8) >> 32) >> 30))));
  HIDWORD(v551) = v819 >> 27;
  LODWORD(v551) = (32 * v819) | (HIDWORD(v819) >> 27);
  HIDWORD(v550) = v821 >> 21;
  LODWORD(v550) = ((_DWORD)v821 << 11) | (HIDWORD(v821) >> 21);
  HIDWORD(v549) = v823 >> 5;
  LODWORD(v549) = ((_DWORD)v823 << 27) | (HIDWORD(v823) >> 5);
  LODWORD(v548) = v827 >> 27;
  HIDWORD(v548) = (HIDWORD(v827) >> 27) | (32 * v827);
  LODWORD(v547) = v829 >> 21;
  HIDWORD(v547) = (HIDWORD(v829) >> 21) | ((_DWORD)v829 << 11);
  LODWORD(v546) = v831 >> 11;
  HIDWORD(v546) = (HIDWORD(v831) >> 11) | ((_DWORD)v831 << 21);
  v697 = (unsigned __int64)v833 >> 2;
  v696 = sub_10B364(v809 + 64) << 9;
  v491 = v696 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 64) >> 32) >> 23);
  v695 = sub_10B364(v809 + 88) << 12;
  v492 = __PAIR64__(HIDWORD(v696), v491)
       + (v695 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 88) >> 32) >> 20));
  v694 = 8 * sub_10B364(v809 + 16);
  v834 = v546
       + v547
       + v548
       + __PAIR64__(v825, HIDWORD(v825))
       + v549
       + v550
       + v551
       + v818
       + v820
       + v822
       + v824
       + v826
       + v828
       + v830
       + __PAIR64__(HIDWORD(v832) ^ (HIDWORD(v832) >> 1), (unsigned int)v832 ^ (unsigned int)(v832 >> 1))
       + (((unsigned __int64)v833 >> 2) ^ v833)
       + (*(_QWORD *)(v808 + 120)
        ^ (v492 - (v694 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 16) >> 32) >> 29)) + 0x7FFFFFFFFFFFFFF8LL));
  HIDWORD(v545) = v820 >> 27;
  LODWORD(v545) = (32 * v820) | (HIDWORD(v820) >> 27);
  HIDWORD(v544) = v822 >> 21;
  LODWORD(v544) = v619;
  LODWORD(v543) = v828 >> 27;
  HIDWORD(v543) = (HIDWORD(v828) >> 27) | (32 * v828);
  LODWORD(v542) = v830 >> 21;
  HIDWORD(v542) = (HIDWORD(v830) >> 21) | ((_DWORD)v830 << 11);
  LODWORD(v541) = v832 >> 11;
  HIDWORD(v541) = (HIDWORD(v832) >> 11) | ((_DWORD)v832 << 21);
  v693 = (unsigned __int64)v834 >> 2;
  v692 = sub_10B364(v809 + 72) << 10;
  v493 = v692 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 72) >> 32) >> 22);
  v691 = sub_10B364(v809 + 96) << 13;
  v494 = __PAIR64__(HIDWORD(v692), v493)
       + (v691 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 96) >> 32) >> 19));
  v690 = 16 * sub_10B364(v809 + 24);
  v835 = v541
       + v542
       + v543
       + __PAIR64__(v826, HIDWORD(v826))
       + __PAIR64__(v615, HIDWORD(v615))
       + v544
       + v545
       + v819
       + v821
       + v823
       + v825
       + v827
       + v829
       + v831
       + __PAIR64__(HIDWORD(v833) ^ (HIDWORD(v833) >> 1), (unsigned int)v833 ^ (unsigned int)(v833 >> 1))
       + (((unsigned __int64)v834 >> 2) ^ v834)
       + (*(_QWORD *)v808
        ^ (loc_113978 + v494 - (v690 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 24) >> 32) >> 28))));
  LODWORD(v540) = v829 >> 27;
  HIDWORD(v540) = (HIDWORD(v829) >> 27) | (32 * v829);
  LODWORD(v539) = v831 >> 21;
  HIDWORD(v539) = (HIDWORD(v831) >> 21) | ((_DWORD)v831 << 11);
  LODWORD(v538) = v833 >> 11;
  HIDWORD(v538) = (HIDWORD(v833) >> 11) | ((_DWORD)v833 << 21);
  v689 = (unsigned __int64)v835 >> 2;
  v688 = sub_10B364(v809 + 80) << 11;
  v495 = v688 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 80) >> 32) >> 21);
  v687 = sub_10B364(v809 + 104) << 14;
  v496 = __PAIR64__(HIDWORD(v688), v495)
       + (v687 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 104) >> 32) >> 18));
  v686 = 32 * sub_10B364(v809 + 32);
  v836 = v538
       + v539
       + v540
       + __PAIR64__(v827, HIDWORD(v827))
       + __PAIR64__(v577, HIDWORD(v577))
       + __PAIR64__(v576, v581)
       + __PAIR64__(v622, HIDWORD(v622))
       + v820
       + v822
       + v824
       + v826
       + v828
       + v830
       + v832
       + __PAIR64__(HIDWORD(v834) ^ (HIDWORD(v834) >> 1), (unsigned int)v834 ^ (unsigned int)(v834 >> 1))
       + (((unsigned __int64)v835 >> 2) ^ v835)
       + (*(_QWORD *)(v808 + 8)
        ^ (loc_114688 + v496 - (v686 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 32) >> 32) >> 27))));
  HIDWORD(v537) = v826 >> 5;
  LODWORD(v537) = ((_DWORD)v826 << 27) | (HIDWORD(v826) >> 5);
  LODWORD(v536) = v830 >> 27;
  HIDWORD(v536) = (HIDWORD(v830) >> 27) | (32 * v830);
  LODWORD(v535) = v832 >> 21;
  HIDWORD(v535) = (HIDWORD(v832) >> 21) | ((_DWORD)v832 << 11);
  LODWORD(v534) = v834 >> 11;
  HIDWORD(v534) = (HIDWORD(v834) >> 11) | ((_DWORD)v834 << 21);
  v685 = (unsigned __int64)v836 >> 2;
  v684 = sub_10B364(v809 + 88) << 12;
  v497 = v684 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 88) >> 32) >> 20);
  v683 = sub_10B364(v809 + 112) << 15;
  v498 = __PAIR64__(HIDWORD(v684), v497)
       + (v683 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 112) >> 32) >> 17));
  v682 = sub_10B364(v809 + 40) << 6;
  v837 = v534
       + v535
       + v536
       + __PAIR64__(v828, HIDWORD(v828))
       + v537
       + __PAIR64__(v572, HIDWORD(v572))
       + __PAIR64__(v584, HIDWORD(v584))
       + v821
       + v823
       + v825
       + v827
       + v829
       + v831
       + v833
       + __PAIR64__(HIDWORD(v835) ^ (HIDWORD(v835) >> 1), (unsigned int)v835 ^ (unsigned int)(v835 >> 1))
       + (((unsigned __int64)v836 >> 2) ^ v836)
       + (*(_QWORD *)(v808 + 16)
        ^ (v498 - (v682 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 40) >> 32) >> 26)) - 0x7000000000000009LL));
  HIDWORD(v533) = v827 >> 5;
  LODWORD(v533) = ((_DWORD)v827 << 27) | (HIDWORD(v827) >> 5);
  LODWORD(v532) = v831 >> 27;
  HIDWORD(v532) = (HIDWORD(v831) >> 27) | (32 * v831);
  LODWORD(v531) = v833 >> 21;
  HIDWORD(v531) = (HIDWORD(v833) >> 21) | ((_DWORD)v833 << 11);
  LODWORD(v530) = v835 >> 11;
  HIDWORD(v530) = (HIDWORD(v835) >> 11) | ((_DWORD)v835 << 21);
  v681 = (unsigned __int64)v837 >> 2;
  v680 = sub_10B364(v809 + 96) << 13;
  v499 = v680 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 96) >> 32) >> 19);
  v679 = sub_10B364(v809 + 120) << 16;
  v500 = __PAIR64__(HIDWORD(v680), v499)
       + (v679 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 120) >> 32) >> 16));
  v678 = sub_10B364(v809 + 48) << 7;
  v838 = v530
       + v531
       + v532
       + __PAIR64__(v829, HIDWORD(v829))
       + v533
       + __PAIR64__(v566, HIDWORD(v566))
       + __PAIR64__(v567, HIDWORD(v567))
       + v822
       + v824
       + v826
       + v828
       + v830
       + v832
       + v834
       + __PAIR64__(HIDWORD(v836) ^ (HIDWORD(v836) >> 1), (unsigned int)v836 ^ (unsigned int)(v836 >> 1))
       + (((unsigned __int64)v837 >> 2) ^ v837)
       + (*(_QWORD *)(v808 + 24)
        ^ (loc_114690 + v500 - (v678 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 48) >> 32) >> 25))));
  HIDWORD(v529) = v828 >> 5;
  LODWORD(v529) = ((_DWORD)v828 << 27) | (HIDWORD(v828) >> 5);
  LODWORD(v528) = v832 >> 27;
  HIDWORD(v528) = (HIDWORD(v832) >> 27) | (32 * v832);
  LODWORD(v527) = v834 >> 21;
  HIDWORD(v527) = (HIDWORD(v834) >> 21) | ((_DWORD)v834 << 11);
  LODWORD(v526) = v836 >> 11;
  HIDWORD(v526) = (HIDWORD(v836) >> 11) | ((_DWORD)v836 << 21);
  v677 = (unsigned __int64)v838 >> 2;
  v676 = sub_10B364(v809 + 104) << 14;
  v501 = v676 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 104) >> 32) >> 18);
  v502 = sub_10B364(v809);
  v503 = v501 + ((2 * v502) | ((unsigned int)((unsigned __int64)sub_10B364(v809) >> 32) >> 31));
  v675 = sub_10B364(v809 + 56) << 8;
  v839 = v526
       + v527
       + v528
       + __PAIR64__(v830, HIDWORD(v830))
       + v529
       + __PAIR64__(v562, HIDWORD(v562))
       + __PAIR64__(v563, HIDWORD(v563))
       + v823
       + v825
       + v827
       + v829
       + v831
       + v833
       + v835
       + __PAIR64__(HIDWORD(v837) ^ (HIDWORD(v837) >> 1), (unsigned int)v837 ^ (unsigned int)(v837 >> 1))
       + (((unsigned __int64)v838 >> 2) ^ v838)
       + (*(_QWORD *)(v808 + 32)
        ^ (loc_114698 + v503 - (v675 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 56) >> 32) >> 24))));
  HIDWORD(v525) = v829 >> 5;
  LODWORD(v525) = ((_DWORD)v829 << 27) | (HIDWORD(v829) >> 5);
  LODWORD(v524) = v833 >> 27;
  HIDWORD(v524) = (HIDWORD(v833) >> 27) | (32 * v833);
  LODWORD(v523) = v835 >> 21;
  HIDWORD(v523) = (HIDWORD(v835) >> 21) | ((_DWORD)v835 << 11);
  LODWORD(v522) = v837 >> 11;
  HIDWORD(v522) = (HIDWORD(v837) >> 11) | ((_DWORD)v837 << 21);
  v674 = v839 >> 2;
  v673 = sub_10B364(v809 + 112) << 15;
  v504 = v673 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 112) >> 32) >> 17);
  v672 = 4 * sub_10B364(v809 + 8);
  v505 = __PAIR64__(HIDWORD(v673), v504) + (v672 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 8) >> 32) >> 30));
  v671 = sub_10B364(v809 + 64) << 9;
  v840 = v522
       + v523
       + v524
       + __PAIR64__(v831, HIDWORD(v831))
       + v525
       + __PAIR64__(v558, HIDWORD(v558))
       + __PAIR64__(v559, HIDWORD(v559))
       + v824
       + v826
       + v828
       + v830
       + v832
       + v834
       + v836
       + __PAIR64__(HIDWORD(v838) ^ (HIDWORD(v838) >> 1), (unsigned int)v838 ^ (unsigned int)(v838 >> 1))
       + ((v839 >> 2) ^ v839)
       + (*(_QWORD *)(v808 + 40)
        ^ (v505 - (v671 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 64) >> 32) >> 23)) - 0x600000000000000ALL));
  HIDWORD(v521) = v830 >> 5;
  LODWORD(v521) = ((_DWORD)v830 << 27) | (HIDWORD(v830) >> 5);
  LODWORD(v520) = v834 >> 27;
  HIDWORD(v520) = (HIDWORD(v834) >> 27) | (32 * v834);
  LODWORD(v519) = v836 >> 21;
  HIDWORD(v519) = (HIDWORD(v836) >> 21) | ((_DWORD)v836 << 11);
  LODWORD(v518) = v838 >> 11;
  HIDWORD(v518) = (HIDWORD(v838) >> 11) | ((_DWORD)v838 << 21);
  v670 = v840 >> 2;
  v669 = sub_10B364(v809 + 120) << 16;
  v506 = v669 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 120) >> 32) >> 16);
  v668 = 8 * sub_10B364(v809 + 16);
  v507 = __PAIR64__(HIDWORD(v669), v506)
       + (v668 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 16) >> 32) >> 29));
  v667 = sub_10B364(v809 + 72) << 10;
  v841 = v518
       + v519
       + v520
       + __PAIR64__(v832, HIDWORD(v832))
       + v521
       + __PAIR64__(v553, HIDWORD(v553))
       + __PAIR64__(v554, HIDWORD(v554))
       + v825
       + v827
       + v829
       + v831
       + v833
       + v835
       + v837
       + __PAIR64__(HIDWORD(v839) ^ (HIDWORD(v839) >> 1), (unsigned int)v839 ^ (unsigned int)((__int64)v839 >> 1))
       + ((v840 >> 2) ^ v840)
       + (*(_QWORD *)(v808 + 48)
        ^ (v507 - (v667 | ((unsigned int)((unsigned __int64)sub_10B364(v809 + 72) >> 32) >> 22)) - 0x5AAAAAAAAAAAAAB5LL));
  v843 = v833 ^ v826 ^ v827 ^ v828 ^ v829 ^ v830 ^ v831 ^ v832;
  v842 = v841 ^ v834 ^ v843 ^ v835 ^ v836 ^ v837 ^ v838 ^ v839 ^ v840;
  v666[21] = 32 * v842;
  v666[20] = (unsigned __int64)v826 >> 5;
  *(_QWORD *)v807 = ((32 * v842) ^ ((unsigned __int64)v826 >> 5) ^ sub_10B364(v809)) + (v810 ^ v834 ^ v843);
  v666[19] = v842 >> 7;
  v666[18] = v827 << 8;
  *(_QWORD *)(v807 + 8) = (v811 ^ v835 ^ v843) + ((v842 >> 7) ^ (v827 << 8) ^ sub_10B364(v809 + 8));
  v666[17] = v842 >> 5;
  v666[16] = 32 * v828;
  *(_QWORD *)(v807 + 16) = (v812 ^ v836 ^ v843) + ((v842 >> 5) ^ (32 * v828) ^ sub_10B364(v809 + 16));
  v666[15] = 32 * v829;
  v508 = sub_10B364(v809 + 24);
  *(_QWORD *)(v807 + 24) = (v813 ^ v837 ^ v843)
                         + __PAIR64__(
                             (unsigned int)((unsigned __int64)v829 >> 27) ^ (HIDWORD(v842) >> 1) ^ HIDWORD(v508),
                             (32 * v829) ^ ((__int64)v842 >> 1) ^ v508);
  v666[14] = v842 >> 3;
  *(_QWORD *)(v807 + 32) = (v814 ^ v838 ^ v843) + ((v842 >> 3) ^ v830 ^ sub_10B364(v809 + 32));
  v666[13] = v842 << 6;
  v666[12] = (unsigned __int64)v831 >> 6;
  *(_QWORD *)(v807 + 40) = (v815 ^ v839 ^ v843) + ((v842 << 6) ^ ((unsigned __int64)v831 >> 6) ^ sub_10B364(v809 + 40));
  v666[11] = v842 >> 4;
  v666[10] = v832 << 6;
  *(_QWORD *)(v807 + 48) = (v816 ^ v840 ^ v843) + ((v842 >> 4) ^ (v832 << 6) ^ sub_10B364(v809 + 48));
  v666[9] = v842 >> 11;
  v666[8] = 4 * v833;
  *(_QWORD *)(v807 + 56) = (v817 ^ v841 ^ v843) + ((v842 >> 11) ^ (4 * v833) ^ sub_10B364(v809 + 56));
  HIDWORD(v517) = *(__int64 *)(v807 + 32) >> 23;
  LODWORD(v517) = __SPAIR64__(*(_DWORD *)(v807 + 32), *(_DWORD *)(v807 + 36)) >> 23;
  v666[7] = v843 << 8;
  *(_QWORD *)(v807 + 64) = (v818 ^ (v843 << 8) ^ v833) + v517 + (sub_10B364(v809 + 64) ^ v834 ^ v842);
  HIDWORD(v516) = *(__int64 *)(v807 + 40) >> 22;
  LODWORD(v516) = __SPAIR64__(*(_DWORD *)(v807 + 40), *(_DWORD *)(v807 + 44)) >> 22;
  v666[6] = v843 >> 6;
  *(_QWORD *)(v807 + 72) = (v819 ^ (v843 >> 6) ^ v826) + v516 + (sub_10B364(v809 + 72) ^ v835 ^ v842);
  HIDWORD(v515) = *(__int64 *)(v807 + 48) >> 21;
  LODWORD(v515) = __SPAIR64__(*(_DWORD *)(v807 + 48), *(_DWORD *)(v807 + 52)) >> 21;
  v666[5] = v843 << 6;
  *(_QWORD *)(v807 + 80) = (v820 ^ (v843 << 6) ^ v827) + v515 + (sub_10B364(v809 + 80) ^ v836 ^ v842);
  HIDWORD(v514) = *(__int64 *)(v807 + 56) >> 20;
  LODWORD(v514) = __SPAIR64__(*(_DWORD *)(v807 + 56), *(_DWORD *)(v807 + 60)) >> 20;
  v666[4] = 16 * v843;
  *(_QWORD *)(v807 + 88) = (v821 ^ (16 * v843) ^ v828) + v514 + (sub_10B364(v809 + 88) ^ v837 ^ v842);
  HIDWORD(v513) = *(__int64 *)v807 >> 19;
  LODWORD(v513) = (*(_DWORD *)v807 << 13) | (*(_DWORD *)(v807 + 4) >> 19);
  v666[3] = v843 >> 3;
  *(_QWORD *)(v807 + 96) = (v822 ^ (v843 >> 3) ^ v829) + v513 + (sub_10B364(v809 + 96) ^ v838 ^ v842);
  HIDWORD(v512) = *(__int64 *)(v807 + 8) >> 18;
  LODWORD(v512) = __SPAIR64__(*(_DWORD *)(v807 + 8), *(_DWORD *)(v807 + 12)) >> 18;
  v666[2] = v843 >> 4;
  *(_QWORD *)(v807 + 104) = (v823 ^ (v843 >> 4) ^ v830) + v512 + (sub_10B364(v809 + 104) ^ v839 ^ v842);
  HIDWORD(v511) = *(__int64 *)(v807 + 16) >> 17;
  LODWORD(v511) = __SPAIR64__(*(_DWORD *)(v807 + 16), *(_DWORD *)(v807 + 20)) >> 17;
  v666[1] = v843 >> 7;
  *(_QWORD *)(v807 + 112) = (v824 ^ (v843 >> 7) ^ v831) + v511 + (sub_10B364(v809 + 112) ^ v840 ^ v842);
  HIDWORD(v510) = *(__int64 *)(v807 + 24) >> 16;
  LODWORD(v510) = __SPAIR64__(*(_DWORD *)(v807 + 24), *(_DWORD *)(v807 + 28)) >> 16;
  v666[0] = v843 >> 2;
  *(_QWORD *)(v807 + 120) = (v825 ^ (v843 >> 2) ^ v832) + v510 + (v841 ^ v842 ^ sub_10B364(v809 + 120));
  return v666;
}
