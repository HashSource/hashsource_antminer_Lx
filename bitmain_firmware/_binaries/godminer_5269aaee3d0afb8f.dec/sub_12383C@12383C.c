int __fastcall sub_12383C(int a1, int a2)
{
  int *v4; // r3
  _DWORD *v5; // r5
  int v6; // r9
  int v7; // r7
  int v8; // r2
  _DWORD *v9; // r12
  int v10; // r0
  int v11; // r11
  int v12; // r11
  int v13; // r10
  int v14; // r10
  int v15; // r2
  int v16; // r1
  int v17; // r0
  int v18; // r7
  int v19; // r6
  int v20; // r8
  int *v21; // r3
  int v22; // r0
  int v23; // r7
  int v24; // r6
  int v25; // r10
  int v26; // r2
  int v27; // r11
  int v28; // r2
  int v29; // r0
  int v30; // r6
  int v31; // r1
  int v32; // r2
  int v33; // r6
  int v34; // r7
  int v35; // lr
  int *v36; // r3
  _DWORD *v37; // r12
  int v38; // r8
  int v39; // r0
  int v40; // r7
  int v41; // r6
  int v42; // r11
  int v43; // r11
  int v44; // r10
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r6
  int v49; // r7
  int v50; // r5
  int *v51; // r1
  unsigned __int16 *v52; // r0
  int j; // r2
  int v54; // t1
  int v55; // t1
  int v56; // r2
  int v57; // r3
  int v58; // r1
  int v59; // r4
  int v60; // r2
  int v61; // r0
  int v62; // r9
  int v63; // r7
  int v64; // r12
  int v65; // r0
  int v66; // r10
  int v67; // r2
  int v68; // lr
  int v69; // r8
  int v70; // r6
  int v71; // r4
  int v72; // r7
  int v73; // r5
  int v74; // r10
  int v75; // r2
  int v76; // r7
  int v77; // r4
  int v78; // r12
  int v79; // r0
  int v80; // r6
  int v81; // r2
  int v82; // r1
  int v83; // r7
  int v84; // r5
  int v85; // r8
  int v86; // r6
  int v87; // r12
  int v88; // r4
  int v89; // r8
  int v90; // r2
  int v91; // r5
  int v92; // r4
  int v93; // lr
  int v94; // r1
  int v95; // r2
  int v96; // r4
  int v97; // r5
  int v98; // r0
  int v99; // r1
  int v100; // r2
  int v101; // r4
  int v102; // r10
  int v103; // r8
  int v104; // r6
  int v105; // r5
  int v106; // lr
  int v107; // r7
  int v108; // r2
  int v109; // r2
  int v110; // r10
  int v111; // r12
  int v112; // r0
  int v113; // r1
  int v114; // r8
  int v115; // r0
  int v116; // r12
  int v117; // r7
  int v118; // r6
  int v119; // r9
  int v120; // r6
  int v121; // r10
  int v122; // r0
  int v123; // r12
  int v124; // r4
  int v125; // r9
  int v126; // r2
  int v127; // r8
  int v128; // r10
  int v129; // lr
  int v130; // r12
  int v131; // r0
  int v132; // r1
  int v133; // r4
  int v134; // lr
  int v135; // r4
  int v136; // r0
  int v137; // r5
  int v138; // r6
  int v139; // r2
  int v140; // r8
  int v141; // lr
  int v142; // r0
  int v143; // lr
  int v144; // r12
  int v145; // r8
  int v146; // r5
  int v147; // r9
  int v148; // r10
  int v149; // r0
  int v150; // lr
  int v151; // r6
  int v152; // r9
  int v153; // r7
  int v154; // r2
  int v155; // r1
  int v156; // r8
  int v157; // r5
  int v158; // r4
  int v159; // lr
  int v160; // r12
  int v161; // r7
  int v162; // r2
  int v163; // lr
  int v164; // r2
  int v165; // r10
  int v166; // r7
  int v167; // r1
  int v168; // r4
  int v169; // lr
  int v170; // r1
  int v171; // r12
  int v172; // r9
  int v173; // r6
  int v174; // r1
  int v175; // r7
  int v176; // r6
  int v177; // r2
  int v178; // r7
  int v179; // r10
  int v180; // r7
  int v181; // r4
  int v182; // r1
  int v183; // r5
  int v184; // t2
  int v185; // r7
  int v186; // r2
  int v187; // r5
  int v188; // r8
  int v189; // r7
  int v190; // r8
  int v191; // r2
  int v192; // r0
  int v193; // r4
  int v194; // r12
  int v195; // r12
  int v196; // r8
  int v197; // r9
  int v198; // r1
  int v199; // r5
  int v200; // r3
  int v201; // r4
  int v202; // r2
  int v203; // lr
  int v204; // r7
  int v205; // r6
  int v206; // r12
  int v207; // lr
  int v208; // r2
  int v209; // r1
  int v210; // r7
  int v211; // r10
  int v212; // r9
  int v213; // lr
  int v214; // r3
  int v215; // r2
  int v216; // r7
  int v217; // r12
  int v218; // r0
  int v219; // r3
  int v220; // r4
  int v221; // r6
  int v222; // r5
  int v223; // r1
  int v224; // lr
  int v225; // r2
  int v226; // lr
  int v227; // r0
  int v228; // r3
  int v229; // r6
  int v230; // r0
  int v231; // r12
  int v232; // r3
  int v233; // r4
  int v234; // r8
  int v235; // r9
  int v236; // lr
  int v237; // r0
  int v238; // r7
  int v239; // r10
  int v240; // r5
  int v241; // r3
  int v242; // r4
  int v243; // r10
  int v244; // r9
  int v245; // r1
  int v246; // r5
  int v247; // r3
  int v248; // r2
  int v249; // r0
  int v250; // r12
  int v251; // r6
  int v252; // r1
  int v253; // r2
  int v254; // r10
  int v255; // r2
  int v256; // r9
  int v257; // r3
  int v258; // lr
  int v259; // r12
  int v260; // r4
  int v261; // r12
  int v262; // r1
  int v263; // r9
  int v264; // r7
  int v265; // r8
  int v266; // r12
  int v267; // r10
  int v268; // r4
  int v269; // r5
  int v270; // r0
  int v271; // lr
  int v272; // r1
  int v273; // r3
  int v274; // r4
  int v275; // r2
  int v276; // r10
  int v277; // lr
  int v278; // r7
  int v279; // r9
  int v280; // r12
  int v281; // r3
  int v282; // r0
  int v283; // r1
  int v284; // r7
  int v285; // r3
  int v286; // lr
  int v287; // r1
  int v288; // r8
  int v289; // r2
  int v290; // r7
  int v291; // r10
  int v292; // r3
  int v293; // r0
  int v294; // r7
  int v295; // r3
  int v296; // r6
  int v297; // r10
  int v298; // r12
  int v299; // r0
  int v300; // r3
  int v301; // lr
  int v302; // r12
  int v303; // r3
  int v304; // r0
  int v305; // r4
  int v306; // r9
  int v307; // r5
  int v308; // r7
  int v309; // r12
  int v310; // r8
  int v311; // r0
  int v312; // r4
  int v313; // r3
  int v314; // r1
  int v315; // r10
  int v316; // r5
  int v317; // r11
  int v318; // r12
  int v319; // r2
  int v320; // r4
  int v321; // r10
  int v322; // r12
  int v323; // r2
  int v324; // r1
  int v325; // lr
  int v326; // r9
  int v327; // r5
  int v328; // r12
  int v329; // r0
  int v330; // r8
  int v331; // r7
  int v332; // r6
  int v333; // r11
  int v334; // r3
  int v335; // lr
  int v336; // r9
  int v337; // r0
  int v338; // r3
  int v339; // r6
  int v340; // r7
  int v341; // r5
  int v342; // r1
  int v343; // r3
  int v344; // r2
  int v345; // r12
  int v346; // r2
  int v347; // r3
  int v348; // r4
  int v349; // lr
  int v350; // r6
  int v351; // r10
  int v352; // r12
  int v353; // r1
  int v354; // r2
  int v355; // r2
  int v356; // r0
  int v357; // r12
  int v358; // lr
  int v359; // r5
  int v360; // r3
  int v361; // r7
  int v362; // r8
  int v363; // r9
  int result; // r0
  unsigned __int16 *v365; // r0
  int *v366; // r1
  int i; // r2
  int v368; // t1
  int v369; // t1
  int v370; // r2
  int v371; // r3
  int v372; // [sp+0h] [bp-59Ch]
  int v373; // [sp+0h] [bp-59Ch]
  int v374; // [sp+0h] [bp-59Ch]
  int v375; // [sp+0h] [bp-59Ch]
  int v376; // [sp+0h] [bp-59Ch]
  int v377; // [sp+0h] [bp-59Ch]
  int v378; // [sp+0h] [bp-59Ch]
  int v379; // [sp+0h] [bp-59Ch]
  int v380; // [sp+0h] [bp-59Ch]
  int v381; // [sp+0h] [bp-59Ch]
  int v382; // [sp+0h] [bp-59Ch]
  int v383; // [sp+0h] [bp-59Ch]
  int v384; // [sp+0h] [bp-59Ch]
  int v385; // [sp+0h] [bp-59Ch]
  int v386; // [sp+0h] [bp-59Ch]
  int v387; // [sp+4h] [bp-598h]
  int v388; // [sp+4h] [bp-598h]
  int v389; // [sp+4h] [bp-598h]
  int v390; // [sp+4h] [bp-598h]
  int v391; // [sp+4h] [bp-598h]
  int v392; // [sp+4h] [bp-598h]
  int v393; // [sp+4h] [bp-598h]
  int v394; // [sp+4h] [bp-598h]
  int v395; // [sp+4h] [bp-598h]
  int v396; // [sp+4h] [bp-598h]
  int v397; // [sp+4h] [bp-598h]
  int v398; // [sp+4h] [bp-598h]
  int v399; // [sp+4h] [bp-598h]
  int v400; // [sp+4h] [bp-598h]
  int v401; // [sp+8h] [bp-594h]
  int v402; // [sp+8h] [bp-594h]
  int v403; // [sp+8h] [bp-594h]
  int v404; // [sp+8h] [bp-594h]
  int v405; // [sp+8h] [bp-594h]
  int v406; // [sp+8h] [bp-594h]
  int v407; // [sp+8h] [bp-594h]
  int v408; // [sp+8h] [bp-594h]
  int v409; // [sp+8h] [bp-594h]
  int v410; // [sp+8h] [bp-594h]
  int v411; // [sp+8h] [bp-594h]
  int v412; // [sp+8h] [bp-594h]
  int v413; // [sp+8h] [bp-594h]
  int v414; // [sp+8h] [bp-594h]
  int v415; // [sp+8h] [bp-594h]
  int v416; // [sp+Ch] [bp-590h]
  int v417; // [sp+Ch] [bp-590h]
  int v418; // [sp+Ch] [bp-590h]
  int v419; // [sp+Ch] [bp-590h]
  int v420; // [sp+Ch] [bp-590h]
  int v421; // [sp+Ch] [bp-590h]
  int v422; // [sp+Ch] [bp-590h]
  int v423; // [sp+Ch] [bp-590h]
  int v424; // [sp+Ch] [bp-590h]
  int v425; // [sp+Ch] [bp-590h]
  int v426; // [sp+Ch] [bp-590h]
  int v427; // [sp+Ch] [bp-590h]
  int v428; // [sp+Ch] [bp-590h]
  int v429; // [sp+10h] [bp-58Ch]
  int v430; // [sp+10h] [bp-58Ch]
  int v431; // [sp+10h] [bp-58Ch]
  int v432; // [sp+10h] [bp-58Ch]
  int v433; // [sp+10h] [bp-58Ch]
  int v434; // [sp+10h] [bp-58Ch]
  int v435; // [sp+10h] [bp-58Ch]
  int v436; // [sp+10h] [bp-58Ch]
  int v437; // [sp+10h] [bp-58Ch]
  int v438; // [sp+10h] [bp-58Ch]
  int v439; // [sp+10h] [bp-58Ch]
  int v440; // [sp+10h] [bp-58Ch]
  int v441; // [sp+14h] [bp-588h]
  int v442; // [sp+14h] [bp-588h]
  int v443; // [sp+14h] [bp-588h]
  int v444; // [sp+14h] [bp-588h]
  int v445; // [sp+14h] [bp-588h]
  int v446; // [sp+14h] [bp-588h]
  int v447; // [sp+14h] [bp-588h]
  int v448; // [sp+14h] [bp-588h]
  int v449; // [sp+14h] [bp-588h]
  int v450; // [sp+14h] [bp-588h]
  int v451; // [sp+14h] [bp-588h]
  int v452; // [sp+14h] [bp-588h]
  int v453; // [sp+18h] [bp-584h]
  int v454; // [sp+18h] [bp-584h]
  int v455; // [sp+18h] [bp-584h]
  int v456; // [sp+18h] [bp-584h]
  int v457; // [sp+18h] [bp-584h]
  int v458; // [sp+18h] [bp-584h]
  int v459; // [sp+18h] [bp-584h]
  int v460; // [sp+18h] [bp-584h]
  int v461; // [sp+18h] [bp-584h]
  int v462; // [sp+18h] [bp-584h]
  int v463; // [sp+18h] [bp-584h]
  int v464; // [sp+1Ch] [bp-580h]
  int v465; // [sp+1Ch] [bp-580h]
  int v466; // [sp+1Ch] [bp-580h]
  int v467; // [sp+1Ch] [bp-580h]
  int v468; // [sp+1Ch] [bp-580h]
  int v469; // [sp+1Ch] [bp-580h]
  int v470; // [sp+1Ch] [bp-580h]
  int v471; // [sp+1Ch] [bp-580h]
  int v472; // [sp+1Ch] [bp-580h]
  int v473; // [sp+1Ch] [bp-580h]
  int v474; // [sp+1Ch] [bp-580h]
  int v475; // [sp+1Ch] [bp-580h]
  int v476; // [sp+1Ch] [bp-580h]
  int v477; // [sp+20h] [bp-57Ch]
  int v478; // [sp+20h] [bp-57Ch]
  int v479; // [sp+20h] [bp-57Ch]
  int v480; // [sp+20h] [bp-57Ch]
  int v481; // [sp+20h] [bp-57Ch]
  int v482; // [sp+20h] [bp-57Ch]
  int v483; // [sp+20h] [bp-57Ch]
  int v484; // [sp+20h] [bp-57Ch]
  int v485; // [sp+20h] [bp-57Ch]
  int v486; // [sp+20h] [bp-57Ch]
  int v487; // [sp+20h] [bp-57Ch]
  int v488; // [sp+24h] [bp-578h]
  int v489; // [sp+24h] [bp-578h]
  int v490; // [sp+24h] [bp-578h]
  int v491; // [sp+24h] [bp-578h]
  int v492; // [sp+24h] [bp-578h]
  int v493; // [sp+24h] [bp-578h]
  int v494; // [sp+24h] [bp-578h]
  int v495; // [sp+24h] [bp-578h]
  int v496; // [sp+24h] [bp-578h]
  int v497; // [sp+24h] [bp-578h]
  int v498; // [sp+24h] [bp-578h]
  int v499; // [sp+28h] [bp-574h]
  int v500; // [sp+28h] [bp-574h]
  int v501; // [sp+28h] [bp-574h]
  int v502; // [sp+28h] [bp-574h]
  int v503; // [sp+28h] [bp-574h]
  int v504; // [sp+28h] [bp-574h]
  int v505; // [sp+28h] [bp-574h]
  int v506; // [sp+28h] [bp-574h]
  int v507; // [sp+28h] [bp-574h]
  int v508; // [sp+28h] [bp-574h]
  int v509; // [sp+28h] [bp-574h]
  int v510; // [sp+2Ch] [bp-570h]
  int v511; // [sp+2Ch] [bp-570h]
  int v512; // [sp+2Ch] [bp-570h]
  int v513; // [sp+2Ch] [bp-570h]
  int v514; // [sp+2Ch] [bp-570h]
  int v515; // [sp+2Ch] [bp-570h]
  int v516; // [sp+2Ch] [bp-570h]
  int v517; // [sp+2Ch] [bp-570h]
  int v518; // [sp+2Ch] [bp-570h]
  int v519; // [sp+2Ch] [bp-570h]
  int v520; // [sp+2Ch] [bp-570h]
  int v521; // [sp+2Ch] [bp-570h]
  int v522; // [sp+2Ch] [bp-570h]
  int v523; // [sp+30h] [bp-56Ch]
  int v524; // [sp+30h] [bp-56Ch]
  int v525; // [sp+30h] [bp-56Ch]
  int v526; // [sp+30h] [bp-56Ch]
  int v527; // [sp+30h] [bp-56Ch]
  int v528; // [sp+30h] [bp-56Ch]
  int v529; // [sp+30h] [bp-56Ch]
  int v530; // [sp+30h] [bp-56Ch]
  int v531; // [sp+30h] [bp-56Ch]
  int v532; // [sp+30h] [bp-56Ch]
  int v533; // [sp+30h] [bp-56Ch]
  int v534; // [sp+30h] [bp-56Ch]
  int v535; // [sp+30h] [bp-56Ch]
  int v536; // [sp+34h] [bp-568h]
  int v537; // [sp+34h] [bp-568h]
  int v538; // [sp+34h] [bp-568h]
  int v539; // [sp+34h] [bp-568h]
  int v540; // [sp+34h] [bp-568h]
  int v541; // [sp+34h] [bp-568h]
  int v542; // [sp+34h] [bp-568h]
  int v543; // [sp+34h] [bp-568h]
  int v544; // [sp+34h] [bp-568h]
  int v545; // [sp+34h] [bp-568h]
  int v546; // [sp+38h] [bp-564h]
  int v547; // [sp+38h] [bp-564h]
  int v548; // [sp+38h] [bp-564h]
  int v549; // [sp+38h] [bp-564h]
  int v550; // [sp+38h] [bp-564h]
  int v551; // [sp+38h] [bp-564h]
  int v552; // [sp+38h] [bp-564h]
  int v553; // [sp+38h] [bp-564h]
  int v554; // [sp+38h] [bp-564h]
  int v555; // [sp+3Ch] [bp-560h]
  int v556; // [sp+3Ch] [bp-560h]
  int v557; // [sp+3Ch] [bp-560h]
  int v558; // [sp+3Ch] [bp-560h]
  int v559; // [sp+3Ch] [bp-560h]
  int v560; // [sp+3Ch] [bp-560h]
  int v561; // [sp+3Ch] [bp-560h]
  int v562; // [sp+3Ch] [bp-560h]
  int v563; // [sp+3Ch] [bp-560h]
  int v564; // [sp+3Ch] [bp-560h]
  int v565; // [sp+3Ch] [bp-560h]
  int v566; // [sp+40h] [bp-55Ch]
  int v567; // [sp+40h] [bp-55Ch]
  int v568; // [sp+40h] [bp-55Ch]
  int v569; // [sp+40h] [bp-55Ch]
  int v570; // [sp+40h] [bp-55Ch]
  int v571; // [sp+40h] [bp-55Ch]
  int v572; // [sp+40h] [bp-55Ch]
  int v573; // [sp+40h] [bp-55Ch]
  int v574; // [sp+40h] [bp-55Ch]
  int v575; // [sp+40h] [bp-55Ch]
  int v576; // [sp+40h] [bp-55Ch]
  int v577; // [sp+44h] [bp-558h]
  int v578; // [sp+44h] [bp-558h]
  int v579; // [sp+44h] [bp-558h]
  int v580; // [sp+44h] [bp-558h]
  int v581; // [sp+44h] [bp-558h]
  int v582; // [sp+44h] [bp-558h]
  int v583; // [sp+44h] [bp-558h]
  int v584; // [sp+44h] [bp-558h]
  int v585; // [sp+44h] [bp-558h]
  int v586; // [sp+44h] [bp-558h]
  int v587; // [sp+44h] [bp-558h]
  int v588; // [sp+48h] [bp-554h]
  int v589; // [sp+48h] [bp-554h]
  int v590; // [sp+48h] [bp-554h]
  int v591; // [sp+48h] [bp-554h]
  int v592; // [sp+48h] [bp-554h]
  int v593; // [sp+48h] [bp-554h]
  int v594; // [sp+48h] [bp-554h]
  int v595; // [sp+48h] [bp-554h]
  int v596; // [sp+48h] [bp-554h]
  int v597; // [sp+48h] [bp-554h]
  int v598; // [sp+48h] [bp-554h]
  int v599; // [sp+4Ch] [bp-550h]
  int v600; // [sp+4Ch] [bp-550h]
  int v601; // [sp+4Ch] [bp-550h]
  int v602; // [sp+4Ch] [bp-550h]
  int v603; // [sp+4Ch] [bp-550h]
  int v604; // [sp+4Ch] [bp-550h]
  int v605; // [sp+4Ch] [bp-550h]
  int v606; // [sp+4Ch] [bp-550h]
  int v607; // [sp+4Ch] [bp-550h]
  int v608; // [sp+4Ch] [bp-550h]
  int v609; // [sp+4Ch] [bp-550h]
  int v610; // [sp+4Ch] [bp-550h]
  int v611; // [sp+50h] [bp-54Ch]
  int v612; // [sp+50h] [bp-54Ch]
  int v613; // [sp+50h] [bp-54Ch]
  int v614; // [sp+50h] [bp-54Ch]
  int v615; // [sp+50h] [bp-54Ch]
  int v616; // [sp+50h] [bp-54Ch]
  int v617; // [sp+50h] [bp-54Ch]
  int v618; // [sp+50h] [bp-54Ch]
  int v619; // [sp+50h] [bp-54Ch]
  int v620; // [sp+50h] [bp-54Ch]
  int v621; // [sp+50h] [bp-54Ch]
  int v622; // [sp+50h] [bp-54Ch]
  int v623; // [sp+50h] [bp-54Ch]
  int v624; // [sp+50h] [bp-54Ch]
  int v625; // [sp+54h] [bp-548h]
  int v626; // [sp+54h] [bp-548h]
  int v627; // [sp+54h] [bp-548h]
  int v628; // [sp+54h] [bp-548h]
  int v629; // [sp+54h] [bp-548h]
  int v630; // [sp+54h] [bp-548h]
  int v631; // [sp+54h] [bp-548h]
  int v632; // [sp+54h] [bp-548h]
  int v633; // [sp+54h] [bp-548h]
  int v634; // [sp+54h] [bp-548h]
  int v635; // [sp+54h] [bp-548h]
  int v636; // [sp+54h] [bp-548h]
  int v637; // [sp+54h] [bp-548h]
  int v638; // [sp+54h] [bp-548h]
  int v639; // [sp+54h] [bp-548h]
  int v640; // [sp+58h] [bp-544h]
  int v641; // [sp+58h] [bp-544h]
  int v642; // [sp+58h] [bp-544h]
  int v643; // [sp+58h] [bp-544h]
  int v644; // [sp+58h] [bp-544h]
  int v645; // [sp+58h] [bp-544h]
  int v646; // [sp+58h] [bp-544h]
  int v647; // [sp+58h] [bp-544h]
  int v648; // [sp+58h] [bp-544h]
  int v649; // [sp+58h] [bp-544h]
  int v650; // [sp+58h] [bp-544h]
  int v651; // [sp+58h] [bp-544h]
  int v652; // [sp+5Ch] [bp-540h]
  int v653; // [sp+5Ch] [bp-540h]
  int v654; // [sp+5Ch] [bp-540h]
  int v655; // [sp+5Ch] [bp-540h]
  int v656; // [sp+5Ch] [bp-540h]
  int v657; // [sp+5Ch] [bp-540h]
  int v658; // [sp+5Ch] [bp-540h]
  int v659; // [sp+5Ch] [bp-540h]
  int v660; // [sp+5Ch] [bp-540h]
  int v661; // [sp+5Ch] [bp-540h]
  int v662; // [sp+5Ch] [bp-540h]
  int v663; // [sp+5Ch] [bp-540h]
  int v664; // [sp+60h] [bp-53Ch]
  int v665; // [sp+60h] [bp-53Ch]
  int v666; // [sp+60h] [bp-53Ch]
  int v667; // [sp+60h] [bp-53Ch]
  int v668; // [sp+60h] [bp-53Ch]
  int v669; // [sp+60h] [bp-53Ch]
  int v670; // [sp+60h] [bp-53Ch]
  int v671; // [sp+60h] [bp-53Ch]
  int v672; // [sp+60h] [bp-53Ch]
  int v673; // [sp+60h] [bp-53Ch]
  int v674; // [sp+60h] [bp-53Ch]
  int v675; // [sp+60h] [bp-53Ch]
  int v676; // [sp+60h] [bp-53Ch]
  int v677; // [sp+60h] [bp-53Ch]
  int v678; // [sp+64h] [bp-538h]
  int v679; // [sp+64h] [bp-538h]
  int v680; // [sp+64h] [bp-538h]
  int v681; // [sp+64h] [bp-538h]
  int v682; // [sp+64h] [bp-538h]
  int v683; // [sp+64h] [bp-538h]
  int v684; // [sp+64h] [bp-538h]
  int v685; // [sp+64h] [bp-538h]
  int v686; // [sp+64h] [bp-538h]
  int v687; // [sp+64h] [bp-538h]
  int v688; // [sp+64h] [bp-538h]
  int v689; // [sp+64h] [bp-538h]
  int v690; // [sp+68h] [bp-534h]
  int v691; // [sp+68h] [bp-534h]
  int v692; // [sp+68h] [bp-534h]
  int v693; // [sp+68h] [bp-534h]
  int v694; // [sp+68h] [bp-534h]
  int v695; // [sp+68h] [bp-534h]
  int v696; // [sp+68h] [bp-534h]
  int v697; // [sp+68h] [bp-534h]
  int v698; // [sp+68h] [bp-534h]
  int v699; // [sp+68h] [bp-534h]
  int v700; // [sp+68h] [bp-534h]
  int v701; // [sp+68h] [bp-534h]
  int v702; // [sp+68h] [bp-534h]
  int v703; // [sp+6Ch] [bp-530h]
  int v704; // [sp+6Ch] [bp-530h]
  int v705; // [sp+6Ch] [bp-530h]
  int v706; // [sp+6Ch] [bp-530h]
  int v707; // [sp+6Ch] [bp-530h]
  int v708; // [sp+6Ch] [bp-530h]
  int v709; // [sp+6Ch] [bp-530h]
  int v710; // [sp+6Ch] [bp-530h]
  int v711; // [sp+6Ch] [bp-530h]
  int v712; // [sp+6Ch] [bp-530h]
  int v713; // [sp+6Ch] [bp-530h]
  int v714; // [sp+70h] [bp-52Ch]
  int v715; // [sp+70h] [bp-52Ch]
  int v716; // [sp+70h] [bp-52Ch]
  int v717; // [sp+70h] [bp-52Ch]
  int v718; // [sp+70h] [bp-52Ch]
  int v719; // [sp+70h] [bp-52Ch]
  int v720; // [sp+70h] [bp-52Ch]
  int v721; // [sp+70h] [bp-52Ch]
  int v722; // [sp+70h] [bp-52Ch]
  int v723; // [sp+70h] [bp-52Ch]
  int v724; // [sp+70h] [bp-52Ch]
  int v725; // [sp+70h] [bp-52Ch]
  int v726; // [sp+74h] [bp-528h]
  int v727; // [sp+74h] [bp-528h]
  int v728; // [sp+74h] [bp-528h]
  int v729; // [sp+74h] [bp-528h]
  int v730; // [sp+74h] [bp-528h]
  int v731; // [sp+74h] [bp-528h]
  int v732; // [sp+74h] [bp-528h]
  int v733; // [sp+74h] [bp-528h]
  int v734; // [sp+74h] [bp-528h]
  int v735; // [sp+74h] [bp-528h]
  int v736; // [sp+74h] [bp-528h]
  int v737; // [sp+78h] [bp-524h]
  int v738; // [sp+78h] [bp-524h]
  int v739; // [sp+78h] [bp-524h]
  int v740; // [sp+78h] [bp-524h]
  int v741; // [sp+78h] [bp-524h]
  int v742; // [sp+78h] [bp-524h]
  int v743; // [sp+78h] [bp-524h]
  int v744; // [sp+78h] [bp-524h]
  int v745; // [sp+78h] [bp-524h]
  int v746; // [sp+78h] [bp-524h]
  int v747; // [sp+78h] [bp-524h]
  int v748; // [sp+78h] [bp-524h]
  int v749; // [sp+7Ch] [bp-520h]
  int v750; // [sp+7Ch] [bp-520h]
  int v751; // [sp+7Ch] [bp-520h]
  int v752; // [sp+7Ch] [bp-520h]
  int v753; // [sp+7Ch] [bp-520h]
  int v754; // [sp+7Ch] [bp-520h]
  int v755; // [sp+7Ch] [bp-520h]
  int v756; // [sp+7Ch] [bp-520h]
  int v757; // [sp+7Ch] [bp-520h]
  int v758; // [sp+7Ch] [bp-520h]
  int v759; // [sp+80h] [bp-51Ch]
  int v760; // [sp+80h] [bp-51Ch]
  int v761; // [sp+80h] [bp-51Ch]
  int v762; // [sp+80h] [bp-51Ch]
  int v763; // [sp+80h] [bp-51Ch]
  int v764; // [sp+80h] [bp-51Ch]
  int v765; // [sp+80h] [bp-51Ch]
  int v766; // [sp+80h] [bp-51Ch]
  int v767; // [sp+80h] [bp-51Ch]
  int v768; // [sp+80h] [bp-51Ch]
  int v769; // [sp+80h] [bp-51Ch]
  int v770; // [sp+80h] [bp-51Ch]
  int v771; // [sp+80h] [bp-51Ch]
  int v772; // [sp+80h] [bp-51Ch]
  int v773; // [sp+84h] [bp-518h]
  int v774; // [sp+84h] [bp-518h]
  int v775; // [sp+84h] [bp-518h]
  int v776; // [sp+84h] [bp-518h]
  int v777; // [sp+84h] [bp-518h]
  int v778; // [sp+84h] [bp-518h]
  int v779; // [sp+84h] [bp-518h]
  int v780; // [sp+84h] [bp-518h]
  int v781; // [sp+84h] [bp-518h]
  int v782; // [sp+84h] [bp-518h]
  int v783; // [sp+88h] [bp-514h]
  int v784; // [sp+88h] [bp-514h]
  int v785; // [sp+88h] [bp-514h]
  int v786; // [sp+88h] [bp-514h]
  int v787; // [sp+88h] [bp-514h]
  int v788; // [sp+88h] [bp-514h]
  int v789; // [sp+88h] [bp-514h]
  int v790; // [sp+88h] [bp-514h]
  int v791; // [sp+8Ch] [bp-510h]
  int v792; // [sp+8Ch] [bp-510h]
  int v793; // [sp+8Ch] [bp-510h]
  int v794; // [sp+8Ch] [bp-510h]
  int v795; // [sp+8Ch] [bp-510h]
  int v796; // [sp+8Ch] [bp-510h]
  int v797; // [sp+90h] [bp-50Ch]
  int v798; // [sp+90h] [bp-50Ch]
  int v799; // [sp+90h] [bp-50Ch]
  int v800; // [sp+90h] [bp-50Ch]
  int v801; // [sp+90h] [bp-50Ch]
  int v802; // [sp+94h] [bp-508h]
  int v803; // [sp+94h] [bp-508h]
  int v804; // [sp+94h] [bp-508h]
  int v805; // [sp+94h] [bp-508h]
  int v806; // [sp+98h] [bp-504h]
  int v807; // [sp+98h] [bp-504h]
  int v808; // [sp+98h] [bp-504h]
  int v809; // [sp+98h] [bp-504h]
  int v810; // [sp+9Ch] [bp-500h]
  int v811; // [sp+9Ch] [bp-500h]
  int v812; // [sp+9Ch] [bp-500h]
  int v813; // [sp+9Ch] [bp-500h]
  int v815; // [sp+A4h] [bp-4F8h]
  int v816; // [sp+A8h] [bp-4F4h]
  int v817; // [sp+ACh] [bp-4F0h]
  int v818; // [sp+B0h] [bp-4ECh]
  int v819; // [sp+B4h] [bp-4E8h]
  int v820; // [sp+B8h] [bp-4E4h]
  int v821; // [sp+BCh] [bp-4E0h]
  int v822; // [sp+C0h] [bp-4DCh]
  int v823; // [sp+C4h] [bp-4D8h]
  int v824; // [sp+C8h] [bp-4D4h]
  int v825; // [sp+CCh] [bp-4D0h]
  int v826; // [sp+D0h] [bp-4CCh]
  int v827; // [sp+D4h] [bp-4C8h]
  int v828; // [sp+D8h] [bp-4C4h]
  int v829; // [sp+DCh] [bp-4C0h]
  int v830; // [sp+E0h] [bp-4BCh]
  int v831; // [sp+E4h] [bp-4B8h]
  int v832; // [sp+E8h] [bp-4B4h]
  int v833; // [sp+ECh] [bp-4B0h]
  int v834; // [sp+F0h] [bp-4ACh]
  int v835; // [sp+F4h] [bp-4A8h]
  int v836; // [sp+F8h] [bp-4A4h]
  int v837; // [sp+FCh] [bp-4A0h]
  int v838; // [sp+100h] [bp-49Ch]
  int v839; // [sp+104h] [bp-498h]
  int v840; // [sp+108h] [bp-494h]
  int v841; // [sp+10Ch] [bp-490h]
  int v842; // [sp+110h] [bp-48Ch]
  int v843; // [sp+114h] [bp-488h]
  int v844; // [sp+118h] [bp-484h]
  int v845; // [sp+11Ch] [bp-480h]
  int v846; // [sp+120h] [bp-47Ch]
  int v847; // [sp+124h] [bp-478h]
  int v848; // [sp+124h] [bp-478h]
  int v849; // [sp+124h] [bp-478h]
  int v850; // [sp+124h] [bp-478h]
  int v851; // [sp+128h] [bp-474h]
  int v852; // [sp+128h] [bp-474h]
  int v853; // [sp+12Ch] [bp-470h]
  int v854; // [sp+12Ch] [bp-470h]
  int v855; // [sp+12Ch] [bp-470h]
  int v856; // [sp+12Ch] [bp-470h]
  int v857; // [sp+130h] [bp-46Ch]
  int v858; // [sp+134h] [bp-468h]
  int v859; // [sp+134h] [bp-468h]
  int v860; // [sp+138h] [bp-464h]
  int v861; // [sp+13Ch] [bp-460h]
  int v862; // [sp+13Ch] [bp-460h]
  int v863; // [sp+140h] [bp-45Ch]
  int v864; // [sp+144h] [bp-458h]
  int v865; // [sp+150h] [bp-44Ch]
  int v866; // [sp+154h] [bp-448h]
  int v867; // [sp+154h] [bp-448h]
  int v868; // [sp+194h] [bp-408h] BYREF
  int v869; // [sp+198h] [bp-404h] BYREF
  int v870; // [sp+19Ch] [bp-400h]
  int v871; // [sp+1A0h] [bp-3FCh]
  int v872; // [sp+1A4h] [bp-3F8h]
  int v873; // [sp+1A8h] [bp-3F4h]
  int v874; // [sp+1ACh] [bp-3F0h]
  int v875; // [sp+1B0h] [bp-3ECh]
  int v876; // [sp+1B4h] [bp-3E8h]
  int v877; // [sp+1B8h] [bp-3E4h]
  int v878; // [sp+1BCh] [bp-3E0h]
  int v879; // [sp+1C0h] [bp-3DCh]
  int v880; // [sp+1C4h] [bp-3D8h]
  int v881; // [sp+1C8h] [bp-3D4h]
  int v882; // [sp+1CCh] [bp-3D0h]
  int v883; // [sp+1D0h] [bp-3CCh]
  int v884; // [sp+1D4h] [bp-3C8h]
  int v885; // [sp+1D8h] [bp-3C4h]
  int v886; // [sp+1DCh] [bp-3C0h]
  int v887; // [sp+1E0h] [bp-3BCh]
  int v888; // [sp+1E4h] [bp-3B8h]
  int v889; // [sp+1E8h] [bp-3B4h]
  int v890; // [sp+1ECh] [bp-3B0h]
  int v891; // [sp+1F0h] [bp-3ACh]
  int v892; // [sp+1F4h] [bp-3A8h]
  int v893; // [sp+1F8h] [bp-3A4h]
  int v894; // [sp+1FCh] [bp-3A0h]
  int v895; // [sp+200h] [bp-39Ch]
  int v896; // [sp+204h] [bp-398h]
  int v897; // [sp+208h] [bp-394h]
  int v898; // [sp+20Ch] [bp-390h]
  int v899; // [sp+210h] [bp-38Ch]
  int v900; // [sp+214h] [bp-388h]
  int v901; // [sp+218h] [bp-384h]
  int v902; // [sp+21Ch] [bp-380h]
  int v903; // [sp+220h] [bp-37Ch]
  int v904; // [sp+224h] [bp-378h]
  int v905; // [sp+228h] [bp-374h]
  int v906; // [sp+22Ch] [bp-370h]
  int v907; // [sp+230h] [bp-36Ch]
  int v908; // [sp+234h] [bp-368h]
  int v909; // [sp+238h] [bp-364h]
  int v910; // [sp+23Ch] [bp-360h]
  int v911; // [sp+240h] [bp-35Ch]
  int v912; // [sp+244h] [bp-358h]
  int v913; // [sp+248h] [bp-354h]
  int v914; // [sp+24Ch] [bp-350h]
  int v915; // [sp+250h] [bp-34Ch]
  int v916; // [sp+254h] [bp-348h]
  int v917; // [sp+258h] [bp-344h]
  int v918; // [sp+25Ch] [bp-340h]
  int v919; // [sp+260h] [bp-33Ch]
  int v920; // [sp+264h] [bp-338h]
  int v921; // [sp+268h] [bp-334h]
  int v922; // [sp+26Ch] [bp-330h]
  int v923; // [sp+270h] [bp-32Ch]
  int v924; // [sp+274h] [bp-328h]
  int v925; // [sp+278h] [bp-324h]
  int v926; // [sp+27Ch] [bp-320h]
  int v927; // [sp+280h] [bp-31Ch]
  int v928; // [sp+284h] [bp-318h]
  int v929; // [sp+288h] [bp-314h] BYREF
  int v930; // [sp+28Ch] [bp-310h]
  int v931; // [sp+290h] [bp-30Ch]
  int v932; // [sp+294h] [bp-308h]
  int v933; // [sp+298h] [bp-304h] BYREF
  int v934; // [sp+29Ch] [bp-300h]
  int v935; // [sp+2A0h] [bp-2FCh]
  int v936; // [sp+2A4h] [bp-2F8h]
  int v937; // [sp+2A8h] [bp-2F4h]
  int v938; // [sp+2ACh] [bp-2F0h]
  int v939; // [sp+2B0h] [bp-2ECh]
  int v940; // [sp+2B4h] [bp-2E8h]
  int v941; // [sp+2B8h] [bp-2E4h]
  int v942; // [sp+2BCh] [bp-2E0h]
  int v943; // [sp+2C0h] [bp-2DCh]
  int v944; // [sp+2C4h] [bp-2D8h]
  int v945; // [sp+2C8h] [bp-2D4h]
  int v946; // [sp+2CCh] [bp-2D0h]
  int v947; // [sp+2D0h] [bp-2CCh]
  int v948; // [sp+2D4h] [bp-2C8h]
  int v949; // [sp+2D8h] [bp-2C4h]
  int v950; // [sp+2DCh] [bp-2C0h]
  int v951; // [sp+2E0h] [bp-2BCh]
  int v952; // [sp+2E4h] [bp-2B8h]
  int v953; // [sp+2E8h] [bp-2B4h]
  int v954; // [sp+2ECh] [bp-2B0h]
  int v955; // [sp+2F0h] [bp-2ACh]
  int v956; // [sp+2F4h] [bp-2A8h]
  int v957; // [sp+2F8h] [bp-2A4h]
  int v958; // [sp+2FCh] [bp-2A0h]
  int v959; // [sp+300h] [bp-29Ch]
  int v960; // [sp+304h] [bp-298h]
  int v961; // [sp+308h] [bp-294h]
  int v962; // [sp+30Ch] [bp-290h]
  int v963; // [sp+310h] [bp-28Ch]
  int v964; // [sp+314h] [bp-288h]
  int v965; // [sp+318h] [bp-284h]
  int v966; // [sp+31Ch] [bp-280h]
  int v967; // [sp+320h] [bp-27Ch]
  int v968; // [sp+324h] [bp-278h]
  int v969; // [sp+328h] [bp-274h]
  int v970; // [sp+32Ch] [bp-270h]
  int v971; // [sp+330h] [bp-26Ch]
  int v972; // [sp+334h] [bp-268h]
  int v973; // [sp+338h] [bp-264h]
  int v974; // [sp+33Ch] [bp-260h]
  int v975; // [sp+340h] [bp-25Ch]
  int v976; // [sp+344h] [bp-258h]
  int v977; // [sp+348h] [bp-254h]
  int v978; // [sp+34Ch] [bp-250h]
  int v979; // [sp+350h] [bp-24Ch]
  int v980; // [sp+354h] [bp-248h]
  int v981; // [sp+358h] [bp-244h]
  int v982; // [sp+35Ch] [bp-240h]
  int v983; // [sp+360h] [bp-23Ch]
  int v984; // [sp+364h] [bp-238h]
  int v985; // [sp+368h] [bp-234h]
  int v986; // [sp+36Ch] [bp-230h]
  int v987; // [sp+370h] [bp-22Ch]
  int v988; // [sp+374h] [bp-228h]
  int v989; // [sp+378h] [bp-224h]
  int v990; // [sp+37Ch] [bp-220h]
  int v991; // [sp+380h] [bp-21Ch]
  int v992; // [sp+384h] [bp-218h]
  int v993; // [sp+388h] [bp-214h] BYREF
  int v994; // [sp+38Ch] [bp-210h]
  int v995; // [sp+390h] [bp-20Ch]
  int v996; // [sp+394h] [bp-208h]
  int v997; // [sp+398h] [bp-204h] BYREF
  int v998; // [sp+39Ch] [bp-200h]
  int v999; // [sp+3A0h] [bp-1FCh]
  int v1000; // [sp+3A4h] [bp-1F8h]
  int v1001; // [sp+3A8h] [bp-1F4h]
  int v1002; // [sp+3ACh] [bp-1F0h]
  int v1003; // [sp+3B0h] [bp-1ECh]
  int v1004; // [sp+3B4h] [bp-1E8h]
  int v1005; // [sp+3B8h] [bp-1E4h]
  int v1006; // [sp+3BCh] [bp-1E0h]
  int v1007; // [sp+3C0h] [bp-1DCh]
  int v1008; // [sp+3C4h] [bp-1D8h]
  int v1009; // [sp+3C8h] [bp-1D4h]
  int v1010; // [sp+3CCh] [bp-1D0h]
  int v1011; // [sp+3D0h] [bp-1CCh]
  int v1012; // [sp+3D4h] [bp-1C8h]
  int v1013; // [sp+3D8h] [bp-1C4h]
  int v1014; // [sp+3DCh] [bp-1C0h]
  int v1015; // [sp+3E0h] [bp-1BCh]
  int v1016; // [sp+3E4h] [bp-1B8h]
  int v1017; // [sp+3E8h] [bp-1B4h]
  int v1018; // [sp+3ECh] [bp-1B0h]
  int v1019; // [sp+3F0h] [bp-1ACh]
  int v1020; // [sp+3F4h] [bp-1A8h]
  int v1021; // [sp+3F8h] [bp-1A4h]
  int v1022; // [sp+3FCh] [bp-1A0h]
  int v1023; // [sp+400h] [bp-19Ch]
  int v1024; // [sp+404h] [bp-198h]
  int v1025; // [sp+408h] [bp-194h]
  int v1026; // [sp+40Ch] [bp-190h]
  int v1027; // [sp+410h] [bp-18Ch]
  int v1028; // [sp+414h] [bp-188h]
  int v1029; // [sp+418h] [bp-184h]
  int v1030; // [sp+41Ch] [bp-180h]
  int v1031; // [sp+420h] [bp-17Ch]
  int v1032; // [sp+424h] [bp-178h]
  int v1033; // [sp+428h] [bp-174h]
  int v1034; // [sp+42Ch] [bp-170h]
  int v1035; // [sp+430h] [bp-16Ch]
  int v1036; // [sp+434h] [bp-168h]
  int v1037; // [sp+438h] [bp-164h]
  int v1038; // [sp+43Ch] [bp-160h]
  int v1039; // [sp+440h] [bp-15Ch]
  int v1040; // [sp+444h] [bp-158h]
  int v1041; // [sp+448h] [bp-154h]
  int v1042; // [sp+44Ch] [bp-150h]
  int v1043; // [sp+450h] [bp-14Ch]
  int v1044; // [sp+454h] [bp-148h]
  int v1045; // [sp+458h] [bp-144h]
  int v1046; // [sp+45Ch] [bp-140h]
  int v1047; // [sp+460h] [bp-13Ch]
  int v1048; // [sp+464h] [bp-138h]
  int v1049; // [sp+468h] [bp-134h]
  int v1050; // [sp+46Ch] [bp-130h]
  int v1051; // [sp+470h] [bp-12Ch]
  int v1052; // [sp+474h] [bp-128h]
  int v1053; // [sp+478h] [bp-124h]
  int v1054; // [sp+47Ch] [bp-120h]
  int v1055; // [sp+480h] [bp-11Ch]
  int v1056; // [sp+484h] [bp-118h]
  int v1057; // [sp+488h] [bp-114h]
  int v1058; // [sp+48Ch] [bp-110h]
  int v1059; // [sp+490h] [bp-10Ch]
  int v1060; // [sp+494h] [bp-108h]
  int v1061; // [sp+498h] [bp-104h] BYREF
  int v1062; // [sp+49Ch] [bp-100h]
  int v1063; // [sp+4A0h] [bp-FCh]
  int v1064; // [sp+4A4h] [bp-F8h]
  int v1065; // [sp+4A8h] [bp-F4h]
  int v1066; // [sp+4ACh] [bp-F0h]
  int v1067; // [sp+4B0h] [bp-ECh]
  int v1068; // [sp+4B4h] [bp-E8h]
  int v1069; // [sp+4B8h] [bp-E4h]
  int v1070; // [sp+4BCh] [bp-E0h]
  int v1071; // [sp+4C0h] [bp-DCh]
  int v1072; // [sp+4C4h] [bp-D8h]
  int v1073; // [sp+4C8h] [bp-D4h]
  int v1074; // [sp+4CCh] [bp-D0h]
  int v1075; // [sp+4D0h] [bp-CCh]
  int v1076; // [sp+4D4h] [bp-C8h]
  int v1077; // [sp+4D8h] [bp-C4h]
  int v1078; // [sp+4DCh] [bp-C0h]
  int v1079; // [sp+4E0h] [bp-BCh]
  int v1080; // [sp+4E4h] [bp-B8h]
  int v1081; // [sp+4E8h] [bp-B4h]
  int v1082; // [sp+4ECh] [bp-B0h]
  int v1083; // [sp+4F0h] [bp-ACh]
  int v1084; // [sp+4F4h] [bp-A8h]
  int v1085; // [sp+4F8h] [bp-A4h]
  int v1086; // [sp+4FCh] [bp-A0h]
  int v1087; // [sp+500h] [bp-9Ch]
  int v1088; // [sp+504h] [bp-98h]
  int v1089; // [sp+508h] [bp-94h]
  int v1090; // [sp+50Ch] [bp-90h]
  int v1091; // [sp+510h] [bp-8Ch]
  int v1092; // [sp+514h] [bp-88h]
  int v1093; // [sp+518h] [bp-84h]
  int v1094; // [sp+51Ch] [bp-80h]
  int v1095; // [sp+520h] [bp-7Ch]
  int v1096; // [sp+524h] [bp-78h]
  int v1097; // [sp+528h] [bp-74h]
  int v1098; // [sp+52Ch] [bp-70h]
  int v1099; // [sp+530h] [bp-6Ch]
  int v1100; // [sp+534h] [bp-68h]
  int v1101; // [sp+538h] [bp-64h]
  int v1102; // [sp+53Ch] [bp-60h]
  int v1103; // [sp+540h] [bp-5Ch]
  int v1104; // [sp+544h] [bp-58h]
  int v1105; // [sp+548h] [bp-54h]
  int v1106; // [sp+54Ch] [bp-50h]
  int v1107; // [sp+550h] [bp-4Ch]
  int v1108; // [sp+554h] [bp-48h]
  int v1109; // [sp+558h] [bp-44h]
  int v1110; // [sp+55Ch] [bp-40h]
  int v1111; // [sp+560h] [bp-3Ch]
  int v1112; // [sp+564h] [bp-38h]
  int v1113; // [sp+568h] [bp-34h]
  int v1114; // [sp+56Ch] [bp-30h]
  int v1115; // [sp+570h] [bp-2Ch]
  int v1116; // [sp+574h] [bp-28h]
  int v1117; // [sp+578h] [bp-24h]
  int v1118; // [sp+57Ch] [bp-20h]
  int v1119; // [sp+580h] [bp-1Ch]
  int v1120; // [sp+584h] [bp-18h]
  int v1121; // [sp+588h] [bp-14h]
  int v1122; // [sp+58Ch] [bp-10h]
  int v1123; // [sp+590h] [bp-Ch]
  _DWORD v1124[2]; // [sp+594h] [bp-8h] BYREF

  sub_122E38((unsigned __int8 *)a1, &v869);
  sub_122E38((unsigned __int8 *)(a1 + 2), &v933);
  v4 = &v869;
  v5 = &unk_151A98;
  v6 = 226;
  v7 = 46;
  v8 = v869 - v933;
  v869 += v933;
  v9 = &unk_151A98;
  v933 = v8;
  v10 = 139;
  while ( 1 )
  {
    v9 += 8;
    v14 = v4[1];
    v15 = v4[3];
    v16 = v4[2];
    v17 = (unsigned __int16)(*((_WORD *)v4 + 130) * v10) + ((v4[65] * v10) >> 16);
    v18 = (unsigned __int16)(*((_WORD *)v4 + 132) * v7) + ((v4[66] * v7) >> 16);
    v19 = (unsigned __int16)(*((_WORD *)v4 + 134) * v6) + ((v4[67] * v6) >> 16);
    v4[1] = v14 + v17;
    v4[65] = v14 - v17;
    v4[2] = v16 + v18;
    v4[66] = v16 - v18;
    v4[3] = v15 + v19;
    v4[67] = v15 - v19;
    if ( &v929 == v4 )
      break;
    v11 = v4[68];
    v4 += 4;
    v10 = *(v9 - 6);
    v7 = *(v9 - 4);
    v6 = *(v9 - 2);
    v12 = (unsigned __int16)(v11 * *((_WORD *)v9 - 16)) + ((v11 * *(v9 - 8)) >> 16);
    v13 = *v4 - v12;
    *v4 += v12;
    v4[64] = v13;
  }
  v20 = 226;
  sub_122E38((unsigned __int8 *)(a1 + 1), &v997);
  sub_122E38((unsigned __int8 *)(a1 + 3), &v1061);
  v21 = &v869;
  v22 = v997 + v1061;
  v1061 = v997 - v1061;
  v997 = v22;
  v23 = 139;
  v24 = 46;
  while ( 1 )
  {
    v28 = v21[194];
    v21 += 4;
    v5 += 8;
    v29 = v21[125];
    v30 = v28 * v24;
    v31 = v21[126];
    v32 = v21[127];
    v33 = (unsigned __int16)v30 + (v30 >> 16);
    v34 = (unsigned __int16)(*((_WORD *)v21 + 378) * v23) + ((v21[189] * v23) >> 16);
    v35 = (unsigned __int16)(*((_WORD *)v21 + 382) * v20) + ((v21[191] * v20) >> 16);
    v21[125] = v29 + v34;
    v21[189] = v29 - v34;
    v21[126] = v31 + v33;
    v21[190] = v31 - v33;
    v21[127] = v32 + v35;
    v21[191] = v32 - v35;
    if ( &v933 == v21 )
      break;
    v25 = v21[128];
    v23 = *(v5 - 6);
    v24 = *(v5 - 4);
    v26 = v21[192] * *(v5 - 8);
    v20 = *(v5 - 2);
    v27 = (unsigned __int16)v26 + (v26 >> 16);
    v21[128] = v25 + v27;
    v21[192] = v25 - v27;
  }
  v36 = &v869;
  v37 = &unk_151A88;
  v38 = 45;
  v39 = v869 + v997;
  v997 = v869 - v997;
  v869 = v39;
  v40 = 41;
  v41 = 139;
  while ( 1 )
  {
    v37 += 4;
    v45 = v36[1];
    v46 = v36[2];
    v47 = v36[3];
    v48 = (unsigned __int16)(*((_WORD *)v36 + 260) * v41) + ((v36[130] * v41) >> 16);
    v49 = (unsigned __int16)(*((_WORD *)v36 + 258) * v40) + ((v36[129] * v40) >> 16);
    v50 = (unsigned __int16)(*((_WORD *)v36 + 262) * v38) + ((v36[131] * v38) >> 16);
    v36[1] = v45 + v49;
    v36[129] = v45 - v49;
    v36[2] = v46 + v48;
    v36[130] = v46 - v48;
    v36[3] = v47 + v50;
    v36[131] = v47 - v50;
    if ( &v993 == v36 )
      break;
    v42 = v36[132];
    v36 += 4;
    v40 = *(v37 - 3);
    v41 = *(v37 - 2);
    v38 = *(v37 - 1);
    v43 = (unsigned __int16)(v42 * *((_WORD *)v37 - 8)) + ((v42 * *(v37 - 4)) >> 16);
    v44 = *v36 - v43;
    *v36 += v43;
    v36[128] = v44;
  }
  if ( a2 )
  {
    v365 = (unsigned __int16 *)&unk_152278;
    v366 = &v868;
    for ( i = 2; ; i = v368 )
    {
      v369 = v366[1];
      ++v366;
      v370 = (unsigned __int16)(i + v369) + ((i + v369) >> 16);
      v371 = (unsigned __int8)(v370 - BYTE1(v370)) - (((unsigned __int8)v370 - (v370 >> 8)) >> 8);
      if ( v371 > 128 )
        v371 -= 257;
      *v366 = v371;
      if ( v1124 == v366 )
        break;
      v368 = v365[1];
      ++v365;
    }
  }
  else
  {
    v51 = &v868;
    v52 = (unsigned __int16 *)&unk_152078;
    for ( j = 1; ; j = v54 )
    {
      v55 = v51[1];
      ++v51;
      v56 = (unsigned __int16)(j + v55) + ((j + v55) >> 16);
      v57 = (unsigned __int8)(v56 - BYTE1(v56)) - (((unsigned __int8)v56 - (v56 >> 8)) >> 8);
      if ( v57 > 128 )
        v57 -= 257;
      *v51 = v57;
      if ( v1124 == v51 )
        break;
      v54 = v52[1];
      ++v52;
    }
  }
  v815 = *(_DWORD *)(a1 + 152);
  v816 = *(_DWORD *)(a1 + 156);
  v817 = *(_DWORD *)(a1 + 160);
  v818 = *(_DWORD *)(a1 + 164);
  v819 = *(_DWORD *)(a1 + 168);
  v820 = *(_DWORD *)(a1 + 172);
  v821 = *(_DWORD *)(a1 + 176);
  v823 = *(_DWORD *)(a1 + 184);
  v824 = *(_DWORD *)(a1 + 188);
  v825 = *(_DWORD *)(a1 + 192);
  v826 = *(_DWORD *)(a1 + 196);
  v827 = *(_DWORD *)(a1 + 200);
  v822 = *(_DWORD *)(a1 + 180);
  v829 = *(_DWORD *)(a1 + 208);
  v828 = *(_DWORD *)(a1 + 204);
  v830 = *(_DWORD *)(a1 + 212);
  v831 = *(_DWORD *)(a1 + 216);
  v834 = *(_DWORD *)(a1 + 228);
  v833 = *(_DWORD *)(a1 + 224);
  v832 = *(_DWORD *)(a1 + 220);
  v835 = *(_DWORD *)(a1 + 232);
  v836 = *(_DWORD *)(a1 + 236);
  v839 = *(_DWORD *)(a1 + 248);
  v838 = *(_DWORD *)(a1 + 244);
  v837 = *(_DWORD *)(a1 + 240);
  v840 = *(_DWORD *)(a1 + 252);
  v841 = *(_DWORD *)(a1 + 256);
  v842 = *(_DWORD *)(a1 + 132);
  v843 = *(_DWORD *)(a1 + 136);
  v844 = *(_DWORD *)(a1 + 140);
  v387 = v843 ^ *(_DWORD *)(a1 + 4);
  v401 = v844 ^ *(_DWORD *)(a1 + 8);
  v845 = *(_DWORD *)(a1 + 144);
  v372 = v842 ^ *(_DWORD *)a1;
  v416 = v845 ^ *(_DWORD *)(a1 + 12);
  v429 = *(_DWORD *)(a1 + 148) ^ *(_DWORD *)(a1 + 16);
  v464 = v817 ^ *(_DWORD *)(a1 + 28);
  v846 = *(_DWORD *)(a1 + 148);
  v577 = v819 ^ *(_DWORD *)(a1 + 36);
  v441 = v815 ^ *(_DWORD *)(a1 + 20);
  v453 = v816 ^ *(_DWORD *)(a1 + 24);
  v566 = v818 ^ *(_DWORD *)(a1 + 32);
  v588 = v821 ^ *(_DWORD *)(a1 + 44);
  v599 = v822 ^ *(_DWORD *)(a1 + 48);
  v611 = v823 ^ *(_DWORD *)(a1 + 52);
  v58 = *(_DWORD *)(a1 + 76);
  v640 = v825 ^ *(_DWORD *)(a1 + 60);
  v625 = v824 ^ *(_DWORD *)(a1 + 56);
  v678 = v831 ^ *(_DWORD *)(a1 + 84);
  v664 = v830 ^ *(_DWORD *)(a1 + 80);
  v510 = v832 ^ *(_DWORD *)(a1 + 88);
  v690 = v833 ^ *(_DWORD *)(a1 + 92);
  v523 = v827 ^ *(_DWORD *)(a1 + 68);
  v477 = v826 ^ *(_DWORD *)(a1 + 64);
  v652 = v820 ^ *(_DWORD *)(a1 + 40);
  v703 = v828 ^ *(_DWORD *)(a1 + 72);
  v59 = (v577 ^ v523) & v387;
  v60 = (v652 ^ v703) & v401;
  v847 = (v625 ^ v510) & v453;
  v61 = (v640 ^ v690) & v464;
  v714 = (v588 ^ v829 ^ v58) & v416;
  v62 = (v599 ^ v664) & v429;
  v773 = (v611 ^ v678) & v441;
  v63 = (unsigned __int16)(185 * v933) + 12124160 * v934 + (v834 ^ *(_DWORD *)(a1 + 96)) + ((v566 ^ v477) & v372 ^ v477);
  v373 = __ROR4__(v372, 29);
  v388 = __ROR4__(v387, 29);
  v402 = __ROR4__(v401, 29);
  v454 = __ROR4__(v453, 29);
  v465 = __ROR4__(v464, 29);
  v417 = __ROR4__(v416, 29);
  v430 = __ROR4__(v429, 29);
  v442 = __ROR4__(v441, 29);
  v499 = v373
       + __ROR4__((unsigned __int16)(185 * v935) + 12124160 * v936 + (v835 ^ *(_DWORD *)(a1 + 100)) + (v59 ^ v523), 9);
  v488 = v388 + __ROR4__(v63, 9);
  v64 = v465
      + __ROR4__((unsigned __int16)(185 * v945) + 12124160 * v946 + (v840 ^ *(_DWORD *)(a1 + 120)) + (v847 ^ v510), 9);
  v737 = v454
       + __ROR4__((unsigned __int16)(185 * v947) + 12124160 * v948 + (v841 ^ *(_DWORD *)(a1 + 124)) + (v61 ^ v690), 9);
  v555 = v417
       + __ROR4__((unsigned __int16)(185 * v937) + 12124160 * v938 + (v836 ^ *(_DWORD *)(a1 + 104)) + (v60 ^ v703), 9);
  v65 = v402
      + __ROR4__(
          (unsigned __int16)(185 * v939) + 12124160 * v940 + (v837 ^ *(_DWORD *)(a1 + 108)) + (v714 ^ v829 ^ v58),
          9);
  v715 = v442
       + __ROR4__((unsigned __int16)(185 * v941) + 12124160 * v942 + (v838 ^ *(_DWORD *)(a1 + 112)) + (v62 ^ v664), 9);
  v726 = v430
       + __ROR4__((unsigned __int16)(185 * v943) + 12124160 * v944 + (v839 ^ *(_DWORD *)(a1 + 116)) + (v773 ^ v678), 9);
  v66 = (v566 ^ v373) & v488;
  v67 = (v577 ^ v388) & v499;
  v68 = (v652 ^ v402) & v555;
  v69 = (v640 ^ v465) & v737;
  v70 = (v599 ^ v430) & v715;
  v546 = __ROR4__(v64, 9);
  v71 = v488;
  v749 = (unsigned __int16)(185 * v965) + 12124160 * v966 + v477;
  v489 = __ROR4__(v499, 9);
  v478 = __ROR4__(v71, 9);
  v511 = __ROR4__(v65, 9);
  v500 = __ROR4__(v555, 9);
  v556 = __ROR4__(v737, 9);
  v738 = (unsigned __int16)(185 * v967) + 12124160 * v968 + v523;
  v524 = __ROR4__(v715, 9);
  v72 = (unsigned __int16)(185 * v969) + 12124160 * v970 + v703 + (v68 ^ v652);
  v73 = (unsigned __int16)(185 * v979) + 12124160 * v980 + v690;
  v536 = __ROR4__(v726, 9);
  v691 = (unsigned __int16)(185 * v975) + 12124160 * v976 + v678;
  v74 = v546 + __ROR4__(v749 + (v66 ^ v566), 15);
  v704 = v478
       + __ROR4__(
           (unsigned __int16)(185 * v977)
         + 12124160 * v978
         + (v832 ^ *(_DWORD *)(a1 + 88))
         + ((v625 ^ v454) & v64 ^ v625),
           15);
  v716 = v489 + __ROR4__(v73 + (v69 ^ v640), 15);
  v75 = v556 + __ROR4__(v738 + (v67 ^ v577), 15);
  v76 = v524 + __ROR4__(v72, 15);
  v679 = v500 + __ROR4__((unsigned __int16)(185 * v973) + 12124160 * v974 + v664 + (v70 ^ v599), 15);
  v665 = v536
       + __ROR4__((unsigned __int16)(185 * v971) + 12124160 * v972 + (v829 ^ v58) + ((v588 ^ v417) & v65 ^ v588), 15);
  v692 = v511 + __ROR4__(v691 + ((v611 ^ v442) & v726 ^ v611), 15);
  v759 = __ROR4__(v75, 15);
  v750 = __ROR4__(v74, 15);
  v774 = __ROR4__(v76, 15);
  v783 = __ROR4__(v665, 15);
  v802 = __ROR4__(v704, 15);
  v791 = __ROR4__(v679, 15);
  v797 = __ROR4__(v692, 15);
  v806 = __ROR4__(v716, 15);
  v77 = (unsigned __int16)(185 * v879) + 12124160 * v880 + v611 + ((v442 ^ v536) & v692 ^ v442);
  v78 = (unsigned __int16)(185 * v883) + 12124160 * v884 + v640 + ((v465 ^ v556) & v716 ^ v465);
  v79 = v774 + __ROR4__((unsigned __int16)(185 * v869) + 12124160 * v870 + v566 + ((v373 ^ v478) & v74 ^ v373), 5);
  v80 = v750 + __ROR4__((unsigned __int16)(185 * v873) + 12124160 * v874 + v652 + ((v402 ^ v500) & v76 ^ v402), 5);
  v612 = v783 + __ROR4__((unsigned __int16)(185 * v871) + 12124160 * v872 + v577 + ((v388 ^ v489) & v75 ^ v388), 5);
  v81 = v759 + __ROR4__((unsigned __int16)(185 * v875) + 12124160 * v876 + v588 + ((v417 ^ v511) & v665 ^ v417), 5);
  v641 = v791 + __ROR4__((unsigned __int16)(185 * v881) + 12124160 * v882 + v625 + ((v454 ^ v546) & v704 ^ v454), 5);
  v626 = v806 + __ROR4__(v77, 5);
  v653 = v802 + __ROR4__((unsigned __int16)(185 * v877) + 12124160 * v878 + v599 + ((v430 ^ v524) & v679 ^ v430), 5);
  v666 = v797 + __ROR4__(v78, 5);
  v589 = __ROR4__(v80, 5);
  v578 = __ROR4__(v612, 5);
  v600 = __ROR4__(v81, 5);
  v567 = __ROR4__(v79, 5);
  v82 = v612 & (v489 ^ v759);
  v83 = (v546 ^ v802) & v641;
  v84 = (v500 ^ v774) & v80 ^ v500;
  v642 = __ROR4__(v641, 5);
  v85 = (v536 ^ v797) & v626 ^ v536;
  v627 = __ROR4__(v626, 5);
  v86 = v373;
  v374 = v85;
  v87 = (unsigned __int16)(185 * v909) + 12124160 * v910 + v430 + ((v524 ^ v791) & v653 ^ v524);
  v613 = __ROR4__(v653, 5);
  v88 = (unsigned __int16)(185 * v903) + 12124160 * v904 + v388 + (v82 ^ v489);
  v654 = __ROR4__(v666, 5);
  v89 = v567 + __ROR4__((unsigned __int16)(185 * v907) + 12124160 * v908 + v417 + (v81 & (v511 ^ v783) ^ v511), 29);
  v90 = v600 + __ROR4__((unsigned __int16)(185 * v901) + 12124160 * v902 + v86 + (v79 & (v478 ^ v750) ^ v478), 29);
  v91 = v578 + __ROR4__((unsigned __int16)(185 * v905) + 12124160 * v906 + v402 + v84, 29);
  v389 = v642 + __ROR4__((unsigned __int16)(185 * v911) + 12124160 * v912 + v442 + v374, 29);
  v92 = v589 + __ROR4__(v88, 29);
  v403 = v627 + __ROR4__((unsigned __int16)(185 * v913) + 12124160 * v914 + v454 + (v83 ^ v546), 29);
  v375 = v654 + __ROR4__(v87, 29);
  v93 = v613 + __ROR4__((unsigned __int16)(185 * v915) + 12124160 * v916 + v465 + ((v556 ^ v806) & v666 ^ v556), 29);
  v810 = __ROR4__(v91, 29);
  v680 = __ROR4__(v92, 29);
  v693 = __ROR4__(v89, 29);
  v667 = __ROR4__(v90, 29);
  v717 = __ROR4__(v389, 29);
  v727 = __ROR4__(v403, 29);
  v705 = __ROR4__(v375, 29);
  v739 = __ROR4__(v93, 29);
  v94 = v810 + __ROR4__((unsigned __int16)(185 * v995) + 12124160 * v996 + v556 + ((v654 | v93) & v806 | v654 & v93), 9);
  v95 = v717 + __ROR4__((unsigned __int16)(185 * v981) + 12124160 * v982 + v478 + ((v567 | v90) & v750 | v90 & v567), 9);
  v418 = v667
       + __ROR4__((unsigned __int16)(185 * v991) + 12124160 * v992 + v536 + ((v627 | v389) & v797 | v627 & v389), 9);
  v431 = v693
       + __ROR4__((unsigned __int16)(185 * v993) + 12124160 * v994 + v546 + ((v642 | v403) & v802 | v403 & v642), 9);
  v390 = v727
       + __ROR4__((unsigned __int16)(185 * v987) + 12124160 * v988 + v511 + ((v600 | v89) & v783 | v89 & v600), 9);
  v404 = v680
       + __ROR4__((unsigned __int16)(185 * v989) + 12124160 * v990 + v524 + ((v613 | v375) & v791 | v613 & v375), 9);
  v96 = v705 + __ROR4__((unsigned __int16)(185 * v983) + 12124160 * v984 + v489 + ((v578 | v92) & v759 | v92 & v578), 9);
  v376 = v739
       + __ROR4__((unsigned __int16)(185 * v985) + 12124160 * v986 + v500 + ((v589 | v91) & v774 | v91 & v589), 9);
  v866 = v739 & v94;
  v865 = (v739 | v94) & v654;
  v547 = __ROR4__(v94, 9);
  v479 = __ROR4__(v96, 9);
  v490 = __ROR4__(v376, 9);
  v501 = __ROR4__(v390, 9);
  v512 = __ROR4__(v404, 9);
  v525 = __ROR4__(v418, 9);
  v537 = __ROR4__(v431, 9);
  v97 = (unsigned __int16)(185 * v959) + 12124160 * v960 + v797 + ((v717 | v418) & v627 | v717 & v418);
  v98 = v547
      + __ROR4__((unsigned __int16)(185 * v949) + 12124160 * v950 + v750 + ((v667 | v95) & v567 | v667 & v95), 15);
  v99 = (unsigned __int16)(185 * v951) + 12124160 * v952 + v759 + ((v680 | v96) & v578 | v680 & v96);
  v405 = v501
       + __ROR4__((unsigned __int16)(185 * v957) + 12124160 * v958 + v791 + ((v705 | v404) & v613 | v705 & v404), 15);
  v419 = v512
       + __ROR4__((unsigned __int16)(185 * v955) + 12124160 * v956 + v783 + ((v693 | v390) & v600 | v693 & v390), 15);
  v443 = v490 + __ROR4__(v97, 15);
  v100 = __ROR4__(v95, 9);
  v455 = v479
       + __ROR4__((unsigned __int16)(185 * v961) + 12124160 * v962 + v802 + ((v727 | v431) & v642 | v727 & v431), 15);
  v101 = v525
       + __ROR4__((unsigned __int16)(185 * v953) + 12124160 * v954 + v774 + ((v810 | v376) & v589 | v810 & v376), 15);
  v466 = v100 + __ROR4__((unsigned __int16)(185 * v963) + 12124160 * v964 + v806 + (v865 | v866), 15);
  v391 = v537 + __ROR4__(v99, 15);
  v751 = v100;
  v102 = v479 | v391;
  v775 = v479 & v391;
  v803 = v501 & v419;
  v103 = (v501 | v419) & v693;
  v848 = v512 & v405;
  v104 = (v512 | v405) & v705;
  v858 = v537 & v455;
  v105 = (v537 | v455) & v727;
  v106 = v547 & v466;
  v861 = (v547 | v466) & v739;
  v853 = v525 & v443;
  v107 = (v525 | v443) & v717;
  v557 = (unsigned __int16)(185 * v917) + 12124160 * v918 + v567;
  v568 = (v100 | v98) & v667 | v100 & v98;
  v108 = v405;
  v406 = __ROR4__(v101, 15);
  v377 = __ROR4__(v98, 15);
  v392 = __ROR4__(v391, 15);
  v432 = __ROR4__(v108, 15);
  v420 = __ROR4__(v419, 15);
  v444 = __ROR4__(v443, 15);
  v456 = __ROR4__(v455, 15);
  v109 = v102 & v680 | v775;
  v467 = __ROR4__(v466, 15);
  v110 = v432 + __ROR4__(v568 + v557, 5);
  v111 = (unsigned __int16)(185 * v923) + 12124160 * v924 + v600 + (v103 | v803);
  v112 = (unsigned __int16)(185 * v927) + 12124160 * v928 + v627 + (v107 | v853);
  v113 = v444 + __ROR4__((unsigned __int16)(185 * v919) + 12124160 * v920 + v578 + v109, 5);
  v601 = v377 + __ROR4__((unsigned __int16)(185 * v925) + 12124160 * v926 + v613 + (v104 | v848), 5);
  v628 = v406 + __ROR4__((unsigned __int16)(185 * v929) + 12124160 * v930 + v642 + (v105 | v858), 5);
  v114 = v420 + __ROR4__((unsigned __int16)(185 * v931) + 12124160 * v932 + v654 + (v861 | v106), 5);
  v579 = v456
       + __ROR4__((unsigned __int16)(185 * v921) + 12124160 * v922 + v589 + ((v490 | v101) & v810 | v490 & v101), 5);
  v590 = v467 + __ROR4__(v111, 5);
  v614 = v392 + __ROR4__(v112, 5);
  v558 = __ROR4__(v110, 5);
  v569 = __ROR4__(v113, 5);
  v115 = (v456 | v628) & v537 | v456 & v628;
  v116 = v432 & v601;
  v854 = (v432 | v601) & v512;
  v857 = v444 & v614;
  v117 = (v444 | v614) & v525;
  v849 = v420 & v590;
  v118 = (v420 | v590) & v501;
  v629 = __ROR4__(v628, 5);
  v643 = __ROR4__(v114, 5);
  v602 = __ROR4__(v601, 5);
  v615 = __ROR4__(v614, 5);
  v119 = (unsigned __int16)(185 * v889) + 12124160 * v890 + v810 + ((v406 | v579) & v490 | v406 & v579);
  v580 = __ROR4__(v579, 5);
  v591 = __ROR4__(v590, 5);
  v120 = (unsigned __int16)(185 * v891) + 12124160 * v892 + v693 + (v118 | v849);
  v121 = v569
       + __ROR4__((unsigned __int16)(185 * v885) + 12124160 * v886 + v667 + ((v377 | v110) & v751 | v110 & v377), 29);
  v122 = v643 + __ROR4__((unsigned __int16)(185 * v897) + 12124160 * v898 + v727 + v115, 29);
  v694 = v558
       + __ROR4__((unsigned __int16)(185 * v887) + 12124160 * v888 + v680 + ((v392 | v113) & v479 | v113 & v392), 29);
  v123 = v615 + __ROR4__((unsigned __int16)(185 * v893) + 12124160 * v894 + v705 + (v854 | v116), 29);
  v668 = v591 + __ROR4__(v119, 29);
  v124 = v629
       + __ROR4__((unsigned __int16)(185 * v899) + 12124160 * v900 + v739 + ((v467 | v114) & v547 | v467 & v114), 29);
  v740 = v602 + __ROR4__((unsigned __int16)(185 * v895) + 12124160 * v896 + v717 + (v117 | v857), 29);
  v728 = v580 + __ROR4__(v120, 29);
  v125 = (v432 ^ v602) & v123;
  v126 = (v377 ^ v558) & v121;
  v127 = (v392 ^ v569) & v694;
  v655 = __ROR4__(v121, 4);
  v706 = __ROR4__(v122, 4);
  v718 = __ROR4__(v124, 4);
  v681 = __ROR4__(v123, 4);
  v850 = (v456 ^ v629) & v122 ^ v456;
  v811 = (unsigned __int16)(185 * v1121) + 12124160 * v1122 + v537;
  v792 = (v406 ^ v580) & v668 ^ v406;
  v669 = __ROR4__(v668, 4);
  v538 = __ROR4__(v694, 4);
  v128 = (unsigned __int16)(185 * v1113) + 12124160 * v1114 + v490;
  v695 = __ROR4__(v740, 4);
  v491 = __ROR4__(v728, 4);
  v129 = (unsigned __int16)(185 * v1111) + 12124160 * v1112 + v479;
  v130 = (unsigned __int16)(185 * v1115) + 12124160 * v1116 + v501 + ((v420 ^ v591) & v728 ^ v420);
  v131 = (unsigned __int16)(185 * v1119) + 12124160 * v1120 + v525 + ((v444 ^ v615) & v740 ^ v444);
  v132 = (unsigned __int16)(185 * v1123) + 12124160 * v1124[0] + v547 + ((v467 ^ v643) & v124 ^ v467);
  v133 = (unsigned __int16)(185 * v1117) + 12124160 * v1118 + v512 + (v125 ^ v432);
  v480 = v706 + __ROR4__((unsigned __int16)(185 * v1109) + 12124160 * v1110 + v751 + (v126 ^ v377), 13);
  v502 = v655 + __ROR4__(v811 + v850, 13);
  v134 = v718 + __ROR4__(v129 + (v127 ^ v392), 13);
  v513 = v681 + __ROR4__(v128 + v792, 13);
  v526 = v695 + __ROR4__(v130, 13);
  v135 = v669 + __ROR4__(v133, 13);
  v548 = v491 + __ROR4__(v131, 13);
  v729 = v538 + __ROR4__(v132, 13);
  v136 = (v569 ^ v538) & v134;
  v137 = (v629 ^ v706) & v502;
  v741 = (unsigned __int16)(185 * v1045) + 12124160 * v1046 + v377;
  v138 = (v558 ^ v655) & v480 ^ v558;
  v378 = __ROR4__(v480, 13);
  v793 = (unsigned __int16)(185 * v1057) + 12124160 * v1058 + v456;
  v503 = __ROR4__(v502, 13);
  v457 = __ROR4__(v513, 13);
  v139 = v406;
  v407 = __ROR4__(v134, 13);
  v481 = __ROR4__(v526, 13);
  v140 = (unsigned __int16)(185 * v1051) + 12124160 * v1052 + v420;
  v141 = v392;
  v393 = __ROR4__(v135, 13);
  v142 = (unsigned __int16)(185 * v1047) + 12124160 * v1048 + v141 + (v136 ^ v569);
  v752 = (unsigned __int16)(185 * v1055) + 12124160 * v1056 + v444;
  v445 = __ROR4__(v729, 13);
  v421 = __ROR4__(v548, 13);
  v143 = (unsigned __int16)(185 * v1053) + 12124160 * v1054 + v432 + ((v602 ^ v681) & v135 ^ v602);
  v144 = (unsigned __int16)(185 * v1059) + 12124160 * v1060 + v467 + ((v643 ^ v718) & v729 ^ v643);
  v433 = v457 + __ROR4__(v741 + v138, 10);
  v145 = v407 + __ROR4__(v140 + ((v591 ^ v491) & v526 ^ v591), 10);
  v514 = v378 + __ROR4__((unsigned __int16)(185 * v1049) + 12124160 * v1050 + v139 + ((v580 ^ v669) & v513 ^ v580), 10);
  v468 = v481 + __ROR4__(v142, 10);
  v527 = v445 + __ROR4__(v752 + ((v615 ^ v695) & v548 ^ v615), 10);
  v146 = v393 + __ROR4__(v793 + (v137 ^ v629), 10);
  v147 = v503 + __ROR4__(v143, 10);
  v148 = v421 + __ROR4__(v144, 10);
  v753 = __ROR4__(v145, 10);
  v784 = __ROR4__(v146, 10);
  v730 = __ROR4__(v433, 10);
  v149 = (unsigned __int16)(185 * v1067) + 12124160 * v1068 + v591;
  v776 = __ROR4__(v527, 10);
  v794 = __ROR4__(v148, 10);
  v742 = __ROR4__(v514, 10);
  v592 = __ROR4__(v468, 10);
  v760 = __ROR4__(v147, 10);
  v150 = (unsigned __int16)(185 * v1069) + 12124160 * v1070 + v602 + ((v681 ^ v393) & v147 ^ v681);
  v151 = v753 + __ROR4__((unsigned __int16)(185 * v1061) + 12124160 * v1062 + v558 + ((v655 ^ v378) & v433 ^ v655), 25);
  v515 = v592 + __ROR4__((unsigned __int16)(185 * v1065) + 12124160 * v1066 + v580 + ((v669 ^ v457) & v514 ^ v669), 25);
  v152 = v760 + __ROR4__((unsigned __int16)(185 * v1075) + 12124160 * v1076 + v643 + ((v718 ^ v445) & v148 ^ v718), 25);
  v153 = v730 + __ROR4__(v149 + ((v491 ^ v481) & v145 ^ v491), 25);
  v154 = v784 + __ROR4__((unsigned __int16)(185 * v1071) + 12124160 * v1072 + v615 + ((v695 ^ v421) & v527 ^ v695), 25);
  v155 = v776 + __ROR4__((unsigned __int16)(185 * v1073) + 12124160 * v1074 + v629 + ((v706 ^ v503) & v146 ^ v706), 25);
  v469 = v742 + __ROR4__((unsigned __int16)(185 * v1063) + 12124160 * v1064 + v569 + ((v538 ^ v407) & v468 ^ v538), 25);
  v156 = v794 + __ROR4__(v150, 25);
  v157 = (v421 ^ v776) & v154;
  v434 = __ROR4__(v151, 25);
  v549 = __ROR4__(v154, 25);
  v158 = (v481 ^ v753) & v153;
  v528 = __ROR4__(v153, 25);
  v559 = __ROR4__(v155, 25);
  v159 = (v457 ^ v742) & v515;
  v160 = (v407 ^ v592) & v469;
  v161 = v491;
  v492 = __ROR4__(v156, 25);
  v516 = __ROR4__(v515, 25);
  v570 = __ROR4__(v152, 25);
  v470 = __ROR4__(v469, 25);
  v162 = (unsigned __int16)(185 * v999) + 12124160 * v1000 + v538;
  v539 = v549 + __ROR4__((unsigned __int16)(185 * v997) + 12124160 * v998 + v655 + (v151 & (v378 ^ v730) ^ v378), 4);
  v630 = v434 + __ROR4__((unsigned __int16)(185 * v1007) + 12124160 * v1008 + v695 + (v157 ^ v421), 4);
  v644 = v528 + __ROR4__((unsigned __int16)(185 * v1009) + 12124160 * v1010 + v706 + ((v503 ^ v784) & v155 ^ v503), 4);
  v603 = v559 + __ROR4__((unsigned __int16)(185 * v1003) + 12124160 * v1004 + v161 + (v158 ^ v481), 4);
  v581 = v516 + __ROR4__((unsigned __int16)(185 * v1011) + 12124160 * v1012 + v718 + ((v445 ^ v794) & v152 ^ v445), 4);
  v163 = v570 + __ROR4__((unsigned __int16)(185 * v1001) + 12124160 * v1002 + v669 + (v159 ^ v457), 4);
  v616 = v470 + __ROR4__((unsigned __int16)(185 * v1005) + 12124160 * v1006 + v681 + ((v393 ^ v760) & v156 ^ v393), 4);
  v164 = v492 + __ROR4__(v162 + (v160 ^ v407), 4);
  v165 = (v570 | v581) & v794;
  v656 = (unsigned __int16)(185 * v1013) + 12124160 * v1014 + v378;
  v166 = (v434 | v539) & v730 | v434 & v539;
  v379 = __ROR4__(v539, 4);
  v670 = (unsigned __int16)(185 * v1015) + 12124160 * v1016 + v407;
  v682 = (unsigned __int16)(185 * v1017) + 12124160 * v1018 + v457;
  v707 = (unsigned __int16)(185 * v1019) + 12124160 * v1020 + v481;
  v408 = __ROR4__(v164, 4);
  v807 = (unsigned __int16)(185 * v1023) + 12124160 * v1024 + v421;
  v167 = v570 & v581;
  v582 = __ROR4__(v581, 4);
  v422 = __ROR4__(v163, 4);
  v458 = __ROR4__(v603, 4);
  v812 = (unsigned __int16)(185 * v1025) + 12124160 * v1026 + v503;
  v168 = (v516 | v163) & v742 | v516 & v163;
  v482 = __ROR4__(v616, 4);
  v504 = __ROR4__(v630, 4);
  v540 = __ROR4__(v644, 4);
  v169 = v812 + ((v559 | v644) & v784 | v559 & v644);
  v170 = (unsigned __int16)(185 * v1027) + 12124160 * v1028 + v445 + (v165 | v167);
  v171 = v582 + __ROR4__(v656 + v166, 13);
  v645 = v458
       + __ROR4__((unsigned __int16)(185 * v1021) + 12124160 * v1022 + v393 + ((v492 | v616) & v760 | v492 & v616), 13);
  v604 = v482 + __ROR4__(v707 + ((v528 | v603) & v753 | v528 & v603), 13);
  v617 = v422 + __ROR4__(v807 + ((v549 | v630) & v776 | v549 & v630), 13);
  v446 = v504 + __ROR4__(v682 + v168, 13);
  v394 = v408 + __ROR4__(v169, 13);
  v683 = v379 + __ROR4__(v170, 13);
  v172 = v540 + __ROR4__(v670 + ((v470 | v164) & v592 | v470 & v164), 13);
  v631 = __ROR4__(v171, 13);
  v173 = __ROR4__(v645, 13);
  v174 = v173
       + __ROR4__((unsigned __int16)(185 * v1077) + 12124160 * v1078 + v730 + ((v379 | v171) & v434 | v379 & v171), 10);
  v657 = v173;
  v761 = v631
       + __ROR4__((unsigned __int16)(185 * v1085) + 12124160 * v1086 + v760 + ((v482 | v645) & v492 | v645 & v482), 10);
  v175 = (unsigned __int16)(185 * v1029) + 12124160 * v1030 + v434;
  v435 = __ROR4__(v172, 13);
  v176 = v175 + ((v631 | v174) & v379 | v631 & v174);
  v696 = __ROR4__(v174, 10);
  v177 = (unsigned __int16)(185 * v1079) + 12124160 * v1080 + v592 + ((v408 | v172) & v470 | v408 & v172);
  v178 = (v422 | v446) & v516 | v422 & v446;
  v447 = __ROR4__(v446, 13);
  v179 = (unsigned __int16)(185 * v1081) + 12124160 * v1082 + v742 + v178;
  v593 = __ROR4__(v604, 13);
  v180 = (v458 | v604) & v528 | v458 & v604;
  v605 = __ROR4__(v617, 13);
  v719 = v605 + __ROR4__(v177, 10);
  v181 = (v504 | v617) & v549 | v504 & v617;
  v671 = __ROR4__(v394, 13);
  v646 = v671 + __ROR4__(v179, 10);
  v618 = __ROR4__(v683, 13);
  v731 = v435 + __ROR4__((unsigned __int16)(185 * v1087) + 12124160 * v1088 + v776 + v181, 10);
  v182 = v447
       + __ROR4__((unsigned __int16)(185 * v1089) + 12124160 * v1090 + v784 + ((v540 | v394) & v559 | v540 & v394), 10);
  v183 = __ROR4__(v719, 10);
  v743 = v593
       + __ROR4__((unsigned __int16)(185 * v1091) + 12124160 * v1092 + v794 + ((v582 | v683) & v570 | v582 & v683), 10);
  v684 = v183 + __ROR4__(v176, 25);
  v184 = __ROR4__((unsigned __int16)(185 * v1083) + 12124160 * v1084 + v753 + v180, 10);
  v185 = v631;
  v632 = v183;
  v851 = (unsigned __int16)(233 * v889) + 15269888 * v1017 + v447;
  v855 = (unsigned __int16)(233 * v891) + 15269888 * v1019 + v593;
  v186 = (unsigned __int16)(185 * v1041) + 12124160 * v1042 + v559;
  v395 = __ROR4__(v182, 10);
  v785 = (unsigned __int16)(185 * v1037) + 12124160 * v1038 + v492;
  v560 = (unsigned __int16)(185 * v1035) + 12124160 * v1036 + v528;
  v795 = (unsigned __int16)(185 * v1039) + 12124160 * v1040 + v549;
  v798 = (unsigned __int16)(185 * v1043) + 12124160 * v1044 + v570;
  v529 = __ROR4__(v743, 10);
  v777 = v529 + __ROR4__(v186 + ((v671 | v182) & v540 | v182 & v671), 25);
  v708 = __ROR4__(v777, 25);
  v187 = v708
       + __ROR4__((unsigned __int16)(185 * v1093) + 12124160 * v1094 + v379 + ((v696 | v684) & v185 | v696 & v684), 4);
  v685 = __ROR4__(v684, 25);
  v550 = __ROR4__(v187, 3);
  v860 = (unsigned __int16)(233 * v899) + 15269888 * v1027 + v618;
  v720 = v696
       + __ROR4__((unsigned __int16)(185 * v1031) + 12124160 * v1032 + v470 + ((v435 | v719) & v408 | v435 & v719), 25);
  v380 = __ROR4__(v646, 10);
  v188 = v761;
  v493 = __ROR4__(v761, 10);
  v859 = (unsigned __int16)(233 * v897) + 15269888 * v1025 + v671;
  v762 = (unsigned __int16)(233 * v885) + 15269888 * v1013 + v185 + ((v696 ^ v685) & v187 ^ v696);
  v189 = v785 + ((v657 | v188) & v482 | v657 & v188);
  v190 = __ROR4__(v618 + v184, 10);
  v191 = v190
       + __ROR4__((unsigned __int16)(185 * v1033) + 12124160 * v1034 + v516 + ((v447 | v646) & v422 | v447 & v646), 25);
  v471 = v190;
  v517 = __ROR4__(v731, 10);
  v571 = v517 + __ROR4__(v189, 25);
  v192 = v380 + __ROR4__(v560 + ((v593 | (v618 + v184)) & v458 | v593 & (v618 + v184)), 25);
  v193 = v493 + __ROR4__(v795 + ((v605 | v731) & v504 | v605 & v731), 25);
  v194 = v798 + ((v618 | v743) & v582 | v618 & v743);
  v799 = (unsigned __int16)(233 * v901) + 15269888 * v1029 + v696;
  v195 = v395 + __ROR4__(v194, 25);
  v862 = (unsigned __int16)(233 * v905) + 15269888 * v1033 + v380;
  v813 = (unsigned __int16)(233 * v903) + 15269888 * v1031 + v632;
  v196 = v447;
  v448 = __ROR4__(v191, 25);
  v697 = __ROR4__(v571, 25);
  v732 = v697
       + __ROR4__((unsigned __int16)(185 * v1097) + 12124160 * v1098 + v422 + ((v380 | v191) & v196 | v191 & v380), 4);
  v561 = __ROR4__(v732, 3);
  v863 = (unsigned __int16)(233 * v907) + 15269888 * v1035 + v471;
  v744 = (unsigned __int16)(185 * v1095) + 12124160 * v1096 + v408;
  v197 = v561 + __ROR4__(v762, 23);
  v647 = __ROR4__(v197, 23);
  v754 = (unsigned __int16)(185 * v1099) + 12124160 * v1100 + v458;
  v804 = (v685 ^ v550) & v197 ^ v685;
  v867 = (unsigned __int16)(233 * v915) + 15269888 * v1043 + v529;
  v864 = (unsigned __int16)(233 * v909) + 15269888 * v1037 + v493;
  v786 = (unsigned __int16)(233 * v911) + 15269888 * v1039 + v517;
  v409 = __ROR4__(v720, 25);
  v459 = __ROR4__(v195, 25);
  v423 = __ROR4__(v192, 25);
  v198 = (unsigned __int16)(185 * v1103) + 12124160 * v1104 + v504 + ((v517 | v193) & v605 | v517 & v193);
  v199 = __ROR4__(v193, 25);
  v200 = v199 + __ROR4__(v754 + ((v471 | v192) & v593 | v192 & v471), 4);
  v201 = v448
       + __ROR4__((unsigned __int16)(185 * v1101) + 12124160 * v1102 + v482 + ((v493 | v571) & v657 | v493 & v571), 4);
  v202 = v459 + __ROR4__(v744 + ((v632 | v720) & v435 | v632 & v720), 4);
  v203 = v409
       + __ROR4__((unsigned __int16)(185 * v1107) + 12124160 * v1108 + v582 + ((v529 | v195) & v618 | v195 & v529), 4);
  v204 = v685
       + __ROR4__((unsigned __int16)(185 * v1105) + 12124160 * v1106 + v540 + ((v395 | v777) & v671 | v395 & v777), 4);
  v483 = __ROR4__(v202, 3);
  v505 = __ROR4__(v200, 3);
  v541 = __ROR4__(v201, 3);
  v619 = v423 + __ROR4__(v198, 4);
  v572 = __ROR4__(v619, 3);
  v583 = __ROR4__(v204, 3);
  v672 = v203;
  v594 = __ROR4__(v203, 3);
  v205 = v550 + __ROR4__(v851 + ((v380 ^ v448) & v732 ^ v380), 23);
  v206 = v505 + __ROR4__((unsigned __int16)(233 * v887) + 15269888 * v1015 + v435 + (v202 & (v632 ^ v409) ^ v632), 23);
  v207 = v483 + __ROR4__(v855 + ((v471 ^ v423) & v200 ^ v471), 23);
  v208 = v583 + __ROR4__((unsigned __int16)(233 * v893) + 15269888 * v1021 + v657 + ((v493 ^ v697) & v201 ^ v493), 23);
  v633 = v594 + __ROR4__((unsigned __int16)(233 * v895) + 15269888 * v1023 + v605 + ((v517 ^ v199) & v619 ^ v517), 23);
  v209 = v572 + __ROR4__(v860 + ((v529 ^ v459) & v672 ^ v529), 23);
  v210 = v541 + __ROR4__(v859 + (v204 & (v395 ^ v708) ^ v395), 23);
  v472 = __ROR4__(v205, 23);
  v381 = __ROR4__(v206, 23);
  v494 = __ROR4__(v207, 23);
  v620 = __ROR4__(v209, 23);
  v518 = __ROR4__(v208, 23);
  v606 = __ROR4__(v210, 23);
  v530 = __ROR4__(v633, 23);
  v211 = v381 + __ROR4__(v862 + ((v448 ^ v561) & v205 ^ v448), 17);
  v212 = v472 + __ROR4__(v813 + (v206 & (v409 ^ v483) ^ v409), 17);
  v658 = v647 + __ROR4__(v863 + (v207 & (v423 ^ v505) ^ v423), 17);
  v213 = v494 + __ROR4__(v799 + v804, 17);
  v214 = v786 + (v633 & (v199 ^ v572) ^ v199);
  v634 = v518 + __ROR4__(v867 + ((v459 ^ v594) & v209 ^ v459), 17);
  v721 = v606 + __ROR4__(v214, 17);
  v215 = v620 + __ROR4__(v864 + (v208 & (v697 ^ v541) ^ v697), 17);
  v216 = v530 + __ROR4__((unsigned __int16)(233 * v913) + 15269888 * v1041 + v395 + (v210 & (v708 ^ v583) ^ v708), 17);
  v778 = __ROR4__(v211, 17);
  v808 = __ROR4__(v634, 17);
  v396 = __ROR4__(v213, 17);
  v800 = __ROR4__(v721, 17);
  v787 = __ROR4__(v658, 17);
  v805 = __ROR4__(v216, 17);
  v796 = __ROR4__(v215, 17);
  v763 = __ROR4__(v212, 17);
  v217 = v763 + __ROR4__((unsigned __int16)(233 * v989) + 15269888 * v1117 + v697 + ((v541 ^ v518) & v215 ^ v541), 27);
  v218 = v796 + __ROR4__((unsigned __int16)(233 * v983) + 15269888 * v1111 + v409 + ((v483 ^ v381) & v212 ^ v483), 27);
  v219 = v808 + __ROR4__((unsigned __int16)(233 * v985) + 15269888 * v1113 + v448 + ((v561 ^ v472) & v211 ^ v561), 27);
  v673 = __ROR4__(v219, 27);
  v220 = v778 + __ROR4__((unsigned __int16)(233 * v995) + 15269888 * v1123 + v459 + (v634 & (v594 ^ v620) ^ v594), 27);
  v733 = __ROR4__(v220, 27);
  v410 = v800 + __ROR4__((unsigned __int16)(233 * v981) + 15269888 * v1109 + v685 + (v213 & (v550 ^ v647) ^ v550), 27);
  v221 = v396 + __ROR4__((unsigned __int16)(233 * v991) + 15269888 * v1119 + v199 + ((v572 ^ v530) & v721 ^ v572), 27);
  v222 = v805 + __ROR4__((unsigned __int16)(233 * v987) + 15269888 * v1115 + v423 + ((v505 ^ v494) & v658 ^ v505), 27);
  v223 = v787 + __ROR4__((unsigned __int16)(233 * v993) + 15269888 * v1121 + v708 + ((v583 ^ v606) & v216 ^ v583), 27);
  v635 = __ROR4__(v410, 27);
  v709 = __ROR4__(v221, 27);
  v686 = __ROR4__(v222, 27);
  v698 = __ROR4__(v217, 27);
  v659 = __ROR4__(v218, 27);
  v722 = __ROR4__(v223, 27);
  v224 = v410;
  v424 = v673 + __ROR4__((unsigned __int16)(233 * v943) + 15269888 * v1071 + v572 + ((v530 ^ v800) & v221 ^ v530), 3);
  v411 = v709 + __ROR4__((unsigned __int16)(233 * v937) + 15269888 * v1065 + v561 + (v219 & (v472 ^ v778) ^ v472), 3);
  v436 = v635 + __ROR4__((unsigned __int16)(233 * v947) + 15269888 * v1075 + v594 + ((v620 ^ v808) & v220 ^ v620), 3);
  v225 = v686 + __ROR4__((unsigned __int16)(233 * v941) + 15269888 * v1069 + v541 + (v217 & (v518 ^ v796) ^ v518), 3);
  v226 = v733 + __ROR4__((unsigned __int16)(233 * v933) + 15269888 * v1061 + v550 + (v224 & (v647 ^ v396) ^ v647), 3);
  v227 = (unsigned __int16)(233 * v935) + 15269888 * v1063 + v483 + (v218 & (v381 ^ v763) ^ v381);
  v228 = v659 + __ROR4__((unsigned __int16)(233 * v945) + 15269888 * v1073 + v583 + ((v606 ^ v805) & v223 ^ v606), 3);
  v229 = v698 + __ROR4__((unsigned __int16)(233 * v939) + 15269888 * v1067 + v505 + ((v494 ^ v787) & v222 ^ v494), 3);
  v484 = __ROR4__(v226, 3);
  v230 = v722 + __ROR4__(v227, 3);
  v562 = __ROR4__(v225, 3);
  v506 = __ROR4__(v230, 3);
  v542 = __ROR4__(v411, 3);
  v551 = __ROR4__(v229, 3);
  v573 = __ROR4__(v424, 3);
  v584 = __ROR4__(v228, 3);
  v595 = __ROR4__(v436, 3);
  v231 = v722 & v228;
  v856 = (v722 | v228) & v805;
  v232 = (v659 | v230) & v763 | v230 & v659;
  v233 = (unsigned __int16)(233 * v973) + 15269888 * v1101 + v518 + ((v698 | v225) & v796 | v698 & v225);
  v234 = v506
       + __ROR4__((unsigned __int16)(233 * v975) + 15269888 * v1103 + v530 + ((v709 | v424) & v800 | v709 & v424), 23);
  v235 = (unsigned __int16)(233 * v965) + 15269888 * v1093 + v647 + ((v635 | v226) & v396 | v226 & v635);
  v236 = v542 + __ROR4__((unsigned __int16)(233 * v977) + 15269888 * v1105 + v606 + (v856 | v231), 23);
  v237 = v584
       + __ROR4__((unsigned __int16)(233 * v969) + 15269888 * v1097 + v472 + ((v673 | v411) & v778 | v673 & v411), 23);
  v238 = v551
       + __ROR4__((unsigned __int16)(233 * v979) + 15269888 * v1107 + v620 + ((v733 | v436) & v808 | v436 & v733), 23);
  v239 = v562 + __ROR4__(v235, 23);
  v240 = v595
       + __ROR4__((unsigned __int16)(233 * v971) + 15269888 * v1099 + v494 + ((v686 | v229) & v787 | v229 & v686), 23);
  v241 = v573 + __ROR4__((unsigned __int16)(233 * v967) + 15269888 * v1095 + v381 + v232, 23);
  v519 = __ROR4__(v241, 23);
  v242 = v484 + __ROR4__(v233, 23);
  v495 = __ROR4__(v239, 23);
  v607 = __ROR4__(v240, 23);
  v531 = __ROR4__(v237, 23);
  v648 = __ROR4__(v234, 23);
  v621 = __ROR4__(v242, 23);
  v755 = __ROR4__(v238, 23);
  v745 = __ROR4__(v236, 23);
  v382 = (v484 | v239) & v635 | v484 & v239;
  v243 = v531
       + __ROR4__((unsigned __int16)(233 * v955) + 15269888 * v1083 + v787 + ((v551 | v240) & v686 | v551 & v240), 17);
  v244 = v648
       + __ROR4__((unsigned __int16)(233 * v957) + 15269888 * v1085 + v796 + ((v562 | v242) & v698 | v562 & v242), 17);
  v245 = v745
       + __ROR4__((unsigned __int16)(233 * v963) + 15269888 * v1091 + v808 + ((v595 | v238) & v733 | v238 & v595), 17);
  v246 = v519 + __ROR4__((unsigned __int16)(233 * v949) + 15269888 * v1077 + v396 + v382, 17);
  v383 = __ROR4__(v246, 17);
  v247 = v495
       + __ROR4__((unsigned __int16)(233 * v951) + 15269888 * v1079 + v763 + ((v506 | v241) & v659 | v506 & v241), 17);
  v248 = v607
       + __ROR4__((unsigned __int16)(233 * v953) + 15269888 * v1081 + v778 + ((v542 | v237) & v673 | v237 & v542), 17);
  v249 = v755
       + __ROR4__((unsigned __int16)(233 * v961) + 15269888 * v1089 + v805 + ((v584 | v236) & v722 | v584 & v236), 17);
  v250 = v621
       + __ROR4__((unsigned __int16)(233 * v959) + 15269888 * v1087 + v800 + ((v573 | v234) & v709 | v573 & v234), 17);
  v460 = __ROR4__(v249, 17);
  v412 = __ROR4__(v248, 17);
  v437 = __ROR4__(v244, 17);
  v397 = __ROR4__(v247, 17);
  v425 = __ROR4__(v243, 17);
  v449 = __ROR4__(v250, 17);
  v473 = __ROR4__(v245, 17);
  v251 = v755 & v245;
  v809 = (v755 | v245) & v595;
  v252 = v460
       + __ROR4__((unsigned __int16)(233 * v869) + 15269888 * v997 + v635 + ((v495 | v246) & v484 | v246 & v495), 27);
  v764 = v437
       + __ROR4__((unsigned __int16)(233 * v873) + 15269888 * v1001 + v673 + ((v531 | v248) & v542 | v248 & v531), 27);
  v253 = (unsigned __int16)(233 * v875) + 15269888 * v1003 + v686 + ((v607 | v243) & v551 | v243 & v607);
  v254 = v412
       + __ROR4__((unsigned __int16)(233 * v877) + 15269888 * v1005 + v698 + ((v621 | v244) & v562 | v244 & v621), 27);
  v255 = v449 + __ROR4__(v253, 27);
  v256 = v425
       + __ROR4__((unsigned __int16)(233 * v879) + 15269888 * v1007 + v709 + ((v648 | v250) & v573 | v250 & v648), 27);
  v257 = v473
       + __ROR4__((unsigned __int16)(233 * v871) + 15269888 * v999 + v659 + ((v519 | v247) & v506 | v247 & v519), 27);
  v258 = v383
       + __ROR4__((unsigned __int16)(233 * v881) + 15269888 * v1009 + v722 + ((v745 | v249) & v584 | v745 & v249), 27);
  v259 = v397 + __ROR4__((unsigned __int16)(233 * v883) + 15269888 * v1011 + v733 + (v809 | v251), 27);
  v636 = __ROR4__(v252, 27);
  v674 = __ROR4__(v764, 27);
  v687 = __ROR4__(v255, 27);
  v660 = __ROR4__(v257, 27);
  v710 = __ROR4__(v256, 27);
  v723 = __ROR4__(v258, 27);
  v734 = __ROR4__(v259, 27);
  v699 = __ROR4__(v254, 27);
  v260 = (unsigned __int16)(233 * v931) + 15269888 * v1059 + v595 + ((v473 | v259) & v755 | v473 & v259);
  v261 = v734
       + __ROR4__((unsigned __int16)(233 * v927) + 15269888 * v1055 + v573 + ((v449 | v256) & v648 | v449 & v256), 3);
  v262 = v674
       + __ROR4__((unsigned __int16)(233 * v917) + 15269888 * v1045 + v484 + ((v383 | v252) & v495 | v383 & v252), 3);
  v263 = v636
       + __ROR4__((unsigned __int16)(233 * v921) + 15269888 * v1049 + v542 + ((v412 | v764) & v531 | v412 & v764), 3);
  v264 = v687
       + __ROR4__((unsigned __int16)(233 * v919) + 15269888 * v1047 + v506 + ((v397 | v257) & v519 | v397 & v257), 3);
  v265 = v261;
  v266 = v723
       + __ROR4__((unsigned __int16)(233 * v925) + 15269888 * v1053 + v562 + ((v437 | v254) & v621 | v437 & v254), 3);
  v267 = v660
       + __ROR4__((unsigned __int16)(233 * v923) + 15269888 * v1051 + v551 + ((v425 | v255) & v607 | v425 & v255), 3);
  v779 = v699
       + __ROR4__((unsigned __int16)(233 * v929) + 15269888 * v1057 + v584 + ((v460 | v258) & v745 | v460 & v258), 3);
  v552 = __ROR4__(v267, 28);
  v788 = v710 + __ROR4__(v260, 3);
  v485 = __ROR4__(v262, 28);
  v507 = __ROR4__(v264, 28);
  v574 = __ROR4__(v265, 28);
  v585 = __ROR4__(v779, 28);
  v596 = __ROR4__(v788, 28);
  v563 = __ROR4__(v266, 28);
  v543 = __ROR4__(v263, 28);
  v268 = (unsigned __int16)(233 * v970) + 15269888 * v1098 + v531 + ((v412 ^ v674) & v263 ^ v412);
  v269 = v585 + __ROR4__((unsigned __int16)(233 * v976) + 15269888 * v1104 + v648 + ((v449 ^ v710) & v265 ^ v449), 19);
  v270 = v543 + __ROR4__((unsigned __int16)(233 * v968) + 15269888 * v1096 + v519 + ((v397 ^ v660) & v264 ^ v397), 19);
  v532 = v552 + __ROR4__((unsigned __int16)(233 * v966) + 15269888 * v1094 + v495 + ((v383 ^ v636) & v262 ^ v383), 19);
  v271 = v574 + __ROR4__((unsigned __int16)(233 * v978) + 15269888 * v1106 + v745 + (v779 & (v460 ^ v723) ^ v460), 19);
  v272 = v485 + __ROR4__((unsigned __int16)(233 * v972) + 15269888 * v1100 + v607 + ((v425 ^ v687) & v267 ^ v425), 19);
  v765 = v596 + __ROR4__((unsigned __int16)(233 * v974) + 15269888 * v1102 + v621 + (v266 & (v437 ^ v699) ^ v437), 19);
  v273 = v563 + __ROR4__((unsigned __int16)(233 * v980) + 15269888 * v1108 + v755 + ((v473 ^ v734) & v788 ^ v473), 19);
  v496 = __ROR4__(v532, 19);
  v274 = v507 + __ROR4__(v268, 19);
  v608 = __ROR4__(v272, 19);
  v746 = __ROR4__(v271, 19);
  v520 = __ROR4__(v270, 19);
  v622 = __ROR4__(v765, 19);
  v649 = __ROR4__(v269, 19);
  v756 = __ROR4__(v273, 19);
  v275 = v532 & (v636 ^ v485);
  v533 = __ROR4__(v274, 19);
  v276 = v520 + __ROR4__((unsigned __int16)(233 * v878) + 15269888 * v1006 + v437 + (v765 & (v699 ^ v563) ^ v699), 22);
  v277 = v608 + __ROR4__((unsigned __int16)(233 * v882) + 15269888 * v1010 + v460 + (v271 & (v723 ^ v585) ^ v723), 22);
  v278 = v746 + __ROR4__((unsigned __int16)(233 * v876) + 15269888 * v1004 + v425 + (v272 & (v687 ^ v552) ^ v687), 22);
  v279 = v496 + __ROR4__((unsigned __int16)(233 * v880) + 15269888 * v1008 + v449 + (v269 & (v710 ^ v574) ^ v710), 22);
  v280 = v622 + __ROR4__((unsigned __int16)(233 * v872) + 15269888 * v1000 + v397 + (v270 & (v660 ^ v507) ^ v660), 22);
  v281 = v533 + __ROR4__((unsigned __int16)(233 * v884) + 15269888 * v1012 + v473 + (v273 & (v734 ^ v596) ^ v734), 22);
  v282 = v649 + __ROR4__((unsigned __int16)(233 * v870) + 15269888 * v998 + v383 + (v275 ^ v636), 22);
  v766 = v756 + __ROR4__((unsigned __int16)(233 * v874) + 15269888 * v1002 + v412 + (v274 & (v674 ^ v543) ^ v674), 22);
  v438 = __ROR4__(v276, 22);
  v384 = __ROR4__(v282, 22);
  v426 = __ROR4__(v278, 22);
  v283 = (v552 ^ v608) & v278;
  v474 = __ROR4__(v281, 22);
  v450 = __ROR4__(v279, 22);
  v398 = __ROR4__(v280, 22);
  v413 = __ROR4__(v766, 22);
  v461 = __ROR4__(v277, 22);
  v284 = (v596 ^ v756) & v281;
  v285 = (v585 ^ v746) & v277;
  v286 = v450 + __ROR4__((unsigned __int16)(233 * v890) + 15269888 * v1018 + v674 + (v766 & (v543 ^ v533) ^ v543), 7);
  v287 = v438 + __ROR4__((unsigned __int16)(233 * v892) + 15269888 * v1020 + v687 + (v283 ^ v552), 7);
  v288 = v426 + __ROR4__((unsigned __int16)(233 * v894) + 15269888 * v1022 + v699 + (v276 & (v563 ^ v622) ^ v563), 7);
  v700 = __ROR4__(v288, 7);
  v289 = v413 + __ROR4__((unsigned __int16)(233 * v896) + 15269888 * v1024 + v710 + (v279 & (v574 ^ v649) ^ v574), 7);
  v767 = v474 + __ROR4__((unsigned __int16)(233 * v886) + 15269888 * v1014 + v636 + (v282 & (v485 ^ v496) ^ v485), 7);
  v688 = __ROR4__(v287, 7);
  v290 = v384 + __ROR4__((unsigned __int16)(233 * v900) + 15269888 * v1028 + v734 + (v284 ^ v596), 7);
  v735 = __ROR4__(v290, 7);
  v291 = v461 + __ROR4__((unsigned __int16)(233 * v888) + 15269888 * v1016 + v660 + ((v507 ^ v520) & v280 ^ v507), 7);
  v637 = __ROR4__(v767, 7);
  v292 = v398 + __ROR4__((unsigned __int16)(233 * v898) + 15269888 * v1026 + v723 + (v285 ^ v585), 7);
  v711 = __ROR4__(v289, 7);
  v661 = __ROR4__(v291, 7);
  v675 = __ROR4__(v286, 7);
  v724 = __ROR4__(v292, 7);
  v293 = v290 & (v756 ^ v474) ^ v756;
  v294 = (unsigned __int16)(233 * v994) + 15269888 * v1122 + v585 + ((v746 ^ v461) & v292 ^ v746);
  v780 = v637 + __ROR4__((unsigned __int16)(233 * v990) + 15269888 * v1118 + v563 + ((v622 ^ v438) & v288 ^ v622), 28);
  v295 = v700 + __ROR4__((unsigned __int16)(233 * v982) + 15269888 * v1110 + v485 + ((v496 ^ v384) & v767 ^ v496), 28);
  v296 = v688 + __ROR4__((unsigned __int16)(233 * v996) + 15269888 * v1124[0] + v596 + v293, 28);
  v768 = v735 + __ROR4__((unsigned __int16)(233 * v988) + 15269888 * v1116 + v552 + ((v608 ^ v426) & v287 ^ v608), 28);
  v297 = v711 + __ROR4__((unsigned __int16)(233 * v984) + 15269888 * v1112 + v507 + (v291 & (v520 ^ v398) ^ v520), 28);
  v801 = v661 + __ROR4__((unsigned __int16)(233 * v992) + 15269888 * v1120 + v574 + ((v649 ^ v450) & v289 ^ v649), 28);
  v789 = v675 + __ROR4__(v294, 28);
  v298 = v724 + __ROR4__((unsigned __int16)(233 * v986) + 15269888 * v1114 + v543 + (v286 & (v533 ^ v413) ^ v533), 28);
  v544 = __ROR4__(v298, 28);
  v553 = __ROR4__(v768, 28);
  v486 = __ROR4__(v295, 28);
  v575 = __ROR4__(v801, 28);
  v508 = __ROR4__(v297, 28);
  v564 = __ROR4__(v780, 28);
  v586 = __ROR4__(v789, 28);
  v597 = __ROR4__(v296, 28);
  v299 = (v637 | v295) & v384 | v637 & v295;
  v852 = (v675 | v298) & v413;
  v300 = v298 & v675;
  v301 = v486
       + __ROR4__((unsigned __int16)(233 * v920) + 15269888 * v1048 + v520 + ((v661 | v297) & v398 | v297 & v661), 19);
  v302 = v544
       + __ROR4__((unsigned __int16)(233 * v924) + 15269888 * v1052 + v608 + ((v688 | v768) & v426 | v688 & v768), 19);
  v303 = v553 + __ROR4__((unsigned __int16)(233 * v922) + 15269888 * v1050 + v533 + (v852 | v300), 19);
  v304 = v508 + __ROR4__((unsigned __int16)(233 * v918) + 15269888 * v1046 + v496 + v299, 19);
  v769 = v564
       + __ROR4__((unsigned __int16)(233 * v928) + 15269888 * v1056 + v649 + ((v711 | v801) & v450 | v711 & v801), 19);
  v781 = v575
       + __ROR4__((unsigned __int16)(233 * v926) + 15269888 * v1054 + v622 + ((v700 | v780) & v438 | v700 & v780), 19);
  v305 = v586
       + __ROR4__((unsigned __int16)(233 * v932) + 15269888 * v1060 + v756 + ((v735 | v296) & v474 | v296 & v735), 19);
  v306 = v597
       + __ROR4__((unsigned __int16)(233 * v930) + 15269888 * v1058 + v746 + ((v724 | v789) & v461 | v724 & v789), 19);
  v521 = __ROR4__(v301, 19);
  v497 = __ROR4__(v304, 19);
  v534 = __ROR4__(v303, 19);
  v747 = __ROR4__(v306, 19);
  v609 = __ROR4__(v302, 19);
  v623 = __ROR4__(v781, 19);
  v757 = __ROR4__(v305, 19);
  v650 = __ROR4__(v769, 19);
  v868 = 233 * v916;
  v307 = (v597 | v305) & v735 | v305 & v597;
  v308 = (v553 | v302) & v688 | v553 & v302;
  v309 = v747
       + __ROR4__((unsigned __int16)(233 * v950) + 15269888 * v1078 + v384 + ((v486 | v304) & v637 | v304 & v486), 22);
  v310 = v757
       + __ROR4__((unsigned __int16)(233 * v952) + 15269888 * v1080 + v398 + ((v508 | v301) & v661 | v508 & v301), 22);
  v311 = v650 + __ROR4__((unsigned __int16)(233 * v956) + 15269888 * v1084 + v426 + v308, 22);
  v312 = v623
       + __ROR4__((unsigned __int16)(233 * v954) + 15269888 * v1082 + v413 + ((v544 | v303) & v675 | v303 & v544), 22);
  v313 = v534
       + __ROR4__((unsigned __int16)(233 * v958) + 15269888 * v1086 + v438 + ((v564 | v781) & v700 | v564 & v781), 22);
  v385 = __ROR4__(v309, 22);
  v314 = v497
       + __ROR4__((unsigned __int16)(233 * v962) + 15269888 * v1090 + v461 + ((v586 | v306) & v724 | v306 & v586), 22);
  v315 = v609
       + __ROR4__((unsigned __int16)(233 * v960) + 15269888 * v1088 + v450 + ((v575 | v769) & v711 | v575 & v769), 22);
  v399 = __ROR4__(v310, 22);
  v316 = v521 + __ROR4__((unsigned __int16)(233 * v964) + 15269888 * v1092 + v474 + v307, 22);
  v414 = __ROR4__(v312, 22);
  v427 = __ROR4__(v311, 22);
  v439 = __ROR4__(v313, 22);
  v462 = __ROR4__(v314, 22);
  v451 = __ROR4__(v315, 22);
  v317 = (v497 | v309) & v486;
  v475 = __ROR4__(v316, 22);
  v770 = v497 & v309;
  v318 = (v534 | v312) & v544 | v534 & v312;
  v790 = (v650 | v315) & v575;
  v319 = v650 & v315;
  v320 = v414 + __ROR4__((unsigned __int16)(233 * v934) + 15269888 * v1062 + v637 + (v317 | v770), 7);
  v321 = v399
       + __ROR4__((unsigned __int16)(233 * v940) + 15269888 * v1068 + v688 + ((v609 | v311) & v553 | v311 & v609), 7);
  v322 = v385 + __ROR4__((unsigned __int16)(233 * v938) + 15269888 * v1066 + v675 + v318, 7);
  v323 = v475 + __ROR4__((unsigned __int16)(233 * v944) + 15269888 * v1072 + v711 + (v790 | v319), 7);
  v324 = v439
       + __ROR4__((unsigned __int16)(233 * v946) + 15269888 * v1074 + v724 + ((v747 | v314) & v586 | v314 & v747), 7);
  v782 = v462
       + __ROR4__((unsigned __int16)(233 * v942) + 15269888 * v1070 + v700 + ((v623 | v313) & v564 | v313 & v623), 7);
  v676 = __ROR4__(v322, 7);
  v701 = __ROR4__(v782, 7);
  v325 = v427
       + __ROR4__((unsigned __int16)(233 * v936) + 15269888 * v1064 + v661 + ((v521 | v310) & v508 | v521 & v310), 7);
  v725 = __ROR4__(v324, 7);
  v326 = v451
       + __ROR4__((unsigned __int16)(233 * v948) + 15269888 * v1076 + v735 + ((v757 | v316) & v597 | v316 & v757), 7);
  v638 = __ROR4__(v320, 7);
  v662 = __ROR4__(v325, 7);
  v689 = __ROR4__(v321, 7);
  v712 = __ROR4__(v323, 7);
  v736 = __ROR4__(v326, 7);
  v327 = v712
       + __ROR4__((unsigned __int16)(233 * v914) + 15269888 * v1042 + v586 + ((v462 | v324) & v747 | v462 & v324), 28);
  v328 = v662
       + __ROR4__((unsigned __int16)(233 * v906) + 15269888 * v1034 + v544 + ((v414 | v322) & v534 | v322 & v414), 28);
  v329 = v676
       + __ROR4__((unsigned __int16)(233 * v904) + 15269888 * v1032 + v508 + ((v399 | v325) & v521 | v325 & v399), 28);
  v330 = v638
       + __ROR4__((unsigned __int16)(233 * v908) + 15269888 * v1036 + v553 + ((v427 | v321) & v609 | v321 & v427), 28);
  v331 = v701
       + __ROR4__((unsigned __int16)(233 * v916) + 15269888 * v1044 + v597 + ((v475 | v326) & v757 | v475 & v326), 28);
  v332 = v725
       + __ROR4__((unsigned __int16)(233 * v912) + 15269888 * v1040 + v575 + ((v451 | v323) & v650 | v451 & v323), 28);
  v333 = v689
       + __ROR4__((unsigned __int16)(233 * v902) + 15269888 * v1030 + v486 + ((v385 | v320) & v497 | v320 & v385), 28);
  v598 = __ROR4__(v331, 28);
  v334 = v736
       + __ROR4__((unsigned __int16)(233 * v910) + 15269888 * v1038 + v564 + ((v439 | v782) & v623 | v782 & v439), 28);
  v509 = __ROR4__(v329, 28);
  v487 = __ROR4__(v333, 28);
  v576 = __ROR4__(v332, 28);
  v545 = __ROR4__(v328, 28);
  v565 = __ROR4__(v334, 28);
  v554 = __ROR4__(v330, 28);
  v587 = __ROR4__(v327, 28);
  v335 = (v334 & (v439 ^ v701) ^ v439) + v846 + v623;
  v336 = (v399 ^ v662) & v329 ^ v399;
  v337 = v487 + __ROR4__((v332 & (v451 ^ v712) ^ v451) + v815 + v650, 19);
  v338 = (v327 & (v462 ^ v725) ^ v462) + v816 + v747;
  v771 = v576 + __ROR4__((v333 & (v385 ^ v638) ^ v385) + v842 + v497, 19);
  v339 = v587 + __ROR4__(((v427 ^ v689) & v330 ^ v427) + v845 + v609, 19);
  v340 = v545 + __ROR4__(((v475 ^ v736) & v331 ^ v475) + v817 + v757, 19);
  v341 = v565 + __ROR4__(v336 + v843 + v521, 19);
  v342 = v598 + __ROR4__(((v414 ^ v676) & v328 ^ v414) + v844 + v534, 19);
  v343 = v554 + __ROR4__(v338, 19);
  v344 = v509 + __ROR4__(v335, 19);
  v498 = __ROR4__(v771, 19);
  v758 = __ROR4__(v340, 19);
  v624 = __ROR4__(v344, 19);
  v610 = __ROR4__(v339, 19);
  v522 = __ROR4__(v341, 19);
  v748 = __ROR4__(v343, 19);
  v651 = __ROR4__(v337, 19);
  v535 = __ROR4__(v342, 19);
  v345 = (v344 & (v701 ^ v565) ^ v701) + v822 + v439;
  v346 = (v342 & (v676 ^ v545) ^ v676) + v820 + v414;
  v347 = v522 + __ROR4__((v343 & (v725 ^ v587) ^ v725) + v824 + v462, 22);
  v348 = v498 + __ROR4__((v340 & (v736 ^ v598) ^ v736) + v825 + v475, 22);
  v349 = v758 + __ROR4__(((v638 ^ v487) & v771 ^ v638) + v818 + v385, 22);
  v350 = v624 + __ROR4__((v339 & (v689 ^ v554) ^ v689) + v821 + v427, 22);
  v351 = v748 + __ROR4__((v341 & (v662 ^ v509) ^ v662) + v819 + v399, 22);
  v352 = v610 + __ROR4__(v345, 22);
  v353 = v535 + __ROR4__((v337 & (v712 ^ v576) ^ v712) + v823 + v451, 22);
  v440 = __ROR4__(v352, 22);
  v400 = __ROR4__(v351, 22);
  v354 = v651 + __ROR4__(v346, 22);
  v386 = __ROR4__(v349, 22);
  v452 = __ROR4__(v353, 22);
  v463 = __ROR4__(v347, 22);
  v428 = __ROR4__(v350, 22);
  v415 = __ROR4__(v354, 22);
  v476 = __ROR4__(v348, 22);
  v355 = v463 + __ROR4__((v354 & (v545 ^ v535) ^ v545) + v828 + v676, 7);
  v356 = v452 + __ROR4__((v351 & (v509 ^ v522) ^ v509) + v827 + v662, 7);
  v357 = v386 + __ROR4__((v352 & (v565 ^ v624) ^ v565) + v830 + v701, 7);
  v358 = v440 + __ROR4__((v349 & (v487 ^ v498) ^ v487) + v826 + v638, 7);
  v359 = v428 + __ROR4__(((v598 ^ v758) & v348 ^ v598) + v833 + v736, 7);
  v639 = v400 + __ROR4__((v353 & (v576 ^ v651) ^ v576) + v831 + v712, 7);
  v772 = __ROR4__(v357, 7);
  v360 = v415 + __ROR4__((v347 & (v587 ^ v748) ^ v587) + v832 + v725, 7);
  v361 = v476 + __ROR4__(((v554 ^ v610) & v350 ^ v554) + v829 + v689, 7);
  v663 = __ROR4__(v355, 7);
  v702 = __ROR4__(v360, 7);
  v677 = __ROR4__(v361, 7);
  v713 = __ROR4__(v359, 7);
  v362 = __ROR4__(v358, 7);
  v363 = __ROR4__(v356, 7);
  *(_DWORD *)(a1 + 132) = v363 + __ROR4__((v358 & (v498 ^ v386) ^ v498) + v834 + v487, 28);
  *(_DWORD *)(a1 + 164) = v362;
  *(_DWORD *)(a1 + 168) = v363;
  *(_DWORD *)(a1 + 200) = v400;
  *(_DWORD *)(a1 + 232) = v522;
  *(_DWORD *)(a1 + 196) = v386;
  *(_DWORD *)(a1 + 212) = v440;
  *(_DWORD *)(a1 + 180) = v772;
  *(_DWORD *)(a1 + 216) = v452;
  *(_DWORD *)(a1 + 228) = v498;
  *(_DWORD *)(a1 + 236) = v535;
  *(_DWORD *)(a1 + 256) = v758;
  *(_DWORD *)(a1 + 152) = v772 + __ROR4__((v639 & (v651 ^ v452) ^ v651) + v839 + v576, 28);
  *(_DWORD *)(a1 + 240) = v610;
  *(_DWORD *)(a1 + 136) = v362 + __ROR4__((v356 & (v522 ^ v400) ^ v522) + v835 + v509, 28);
  *(_DWORD *)(a1 + 204) = v415;
  result = __ROR4__(v639, 7);
  *(_DWORD *)(a1 + 220) = v463;
  *(_DWORD *)(a1 + 208) = v428;
  *(_DWORD *)(a1 + 172) = v663;
  *(_DWORD *)(a1 + 244) = v624;
  *(_DWORD *)(a1 + 248) = v651;
  *(_DWORD *)(a1 + 252) = v748;
  *(_DWORD *)(a1 + 148) = result + __ROR4__((v357 & (v624 ^ v440) ^ v624) + v838 + v565, 28);
  *(_DWORD *)(a1 + 184) = result;
  *(_DWORD *)(a1 + 188) = v702;
  *(_DWORD *)(a1 + 224) = v476;
  *(_DWORD *)(a1 + 144) = v663 + __ROR4__((v361 & (v610 ^ v428) ^ v610) + v837 + v554, 28);
  *(_DWORD *)(a1 + 140) = v677 + __ROR4__((v355 & (v535 ^ v415) ^ v535) + v836 + v545, 28);
  *(_DWORD *)(a1 + 176) = v677;
  *(_DWORD *)(a1 + 160) = v702 + __ROR4__((v359 & (v758 ^ v476) ^ v758) + v841 + v598, 28);
  *(_DWORD *)(a1 + 156) = v713 + __ROR4__((v360 & (v748 ^ v463) ^ v748) + v840 + v587, 28);
  *(_DWORD *)(a1 + 192) = v713;
  return result;
}
