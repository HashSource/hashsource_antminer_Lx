int __fastcall sub_1225EC(int a1, int a2)
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
  int v88; // r8
  int v89; // r2
  int v90; // r9
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
  int v125; // r5
  int v126; // r8
  int v127; // r7
  int v128; // r10
  int v129; // r4
  int v130; // r9
  int v131; // r4
  int v132; // r12
  int v133; // r0
  int v134; // r1
  int v135; // lr
  int v136; // lr
  int v137; // r4
  int v138; // r0
  int v139; // r5
  int v140; // r6
  int v141; // r2
  int v142; // r8
  int v143; // lr
  int v144; // r0
  int v145; // lr
  int v146; // r12
  int v147; // r8
  int v148; // r5
  int v149; // r9
  int v150; // r10
  int v151; // r0
  int v152; // lr
  int v153; // r6
  int v154; // r9
  int v155; // r7
  int v156; // r2
  int v157; // r1
  int v158; // r8
  int v159; // r5
  int v160; // r4
  int v161; // lr
  int v162; // r12
  int v163; // r7
  int v164; // r2
  int v165; // lr
  int v166; // r2
  int v167; // r10
  int v168; // r7
  int v169; // r1
  int v170; // r4
  int v171; // lr
  int v172; // r1
  int v173; // r12
  int v174; // r9
  int v175; // r6
  int v176; // r1
  int v177; // r7
  int v178; // r6
  int v179; // r2
  int v180; // r7
  int v181; // r10
  int v182; // r7
  int v183; // r4
  int v184; // r1
  int v185; // r5
  int v186; // t2
  int v187; // r7
  int v188; // r2
  int v189; // r5
  int v190; // r8
  int v191; // r7
  int v192; // r8
  int v193; // r2
  int v194; // r0
  int v195; // r4
  int v196; // r12
  int v197; // r12
  int v198; // r8
  int v199; // r9
  int v200; // r1
  int v201; // r5
  int v202; // r3
  int v203; // r4
  int v204; // r2
  int v205; // lr
  int v206; // r7
  int v207; // r6
  int v208; // r12
  int v209; // lr
  int v210; // r2
  int v211; // r1
  int v212; // r7
  int v213; // r10
  int v214; // r9
  int v215; // lr
  int v216; // r3
  int v217; // r2
  int v218; // r7
  int v219; // r12
  int v220; // r0
  int v221; // r3
  int v222; // r4
  int v223; // r6
  int v224; // r5
  int v225; // r1
  int v226; // lr
  int v227; // r2
  int v228; // lr
  int v229; // r0
  int v230; // r3
  int v231; // r6
  int v232; // r0
  int v233; // r12
  int v234; // r3
  int v235; // r4
  int v236; // r8
  int v237; // r9
  int v238; // lr
  int v239; // r0
  int v240; // r7
  int v241; // r10
  int v242; // r5
  int v243; // r3
  int v244; // r4
  int v245; // r10
  int v246; // r9
  int v247; // r1
  int v248; // r5
  int v249; // r3
  int v250; // r2
  int v251; // r0
  int v252; // r12
  int v253; // r6
  int v254; // r1
  int v255; // r2
  int v256; // r10
  int v257; // r2
  int v258; // r9
  int v259; // r3
  int v260; // lr
  int v261; // r12
  int v262; // r4
  int v263; // r12
  int v264; // r1
  int v265; // r9
  int v266; // r7
  int v267; // r8
  int v268; // r12
  int v269; // r10
  int v270; // r4
  int v271; // r5
  int v272; // r0
  int v273; // lr
  int v274; // r1
  int v275; // r3
  int v276; // r4
  int v277; // r2
  int v278; // r10
  int v279; // lr
  int v280; // r7
  int v281; // r9
  int v282; // r12
  int v283; // r3
  int v284; // r0
  int v285; // r1
  int v286; // r7
  int v287; // r3
  int v288; // lr
  int v289; // r1
  int v290; // r8
  int v291; // r2
  int v292; // r7
  int v293; // r10
  int v294; // r3
  int v295; // r0
  int v296; // r7
  int v297; // r3
  int v298; // r6
  int v299; // r10
  int v300; // r12
  int v301; // r0
  int v302; // r3
  int v303; // lr
  int v304; // r12
  int v305; // r3
  int v306; // r0
  int v307; // r4
  int v308; // r9
  int v309; // r5
  int v310; // r7
  int v311; // r12
  int v312; // r8
  int v313; // r0
  int v314; // r4
  int v315; // r3
  int v316; // r1
  int v317; // r10
  int v318; // r5
  int v319; // r11
  int v320; // r12
  int v321; // r2
  int v322; // r4
  int v323; // r10
  int v324; // r12
  int v325; // r2
  int v326; // r1
  int v327; // lr
  int v328; // r9
  int v329; // r5
  int v330; // r12
  int v331; // r0
  int v332; // r8
  int v333; // r7
  int v334; // r6
  int v335; // r11
  int v336; // r3
  int v337; // lr
  int v338; // r9
  int v339; // r0
  int v340; // r3
  int v341; // r6
  int v342; // r7
  int v343; // r5
  int v344; // r1
  int v345; // r3
  int v346; // r2
  int v347; // r12
  int v348; // r2
  int v349; // r3
  int v350; // r4
  int v351; // lr
  int v352; // r6
  int v353; // r10
  int v354; // r12
  int v355; // r1
  int v356; // r2
  int v357; // r2
  int v358; // r0
  int v359; // r12
  int v360; // lr
  int v361; // r5
  int v362; // r3
  int v363; // r7
  int v364; // r8
  int v365; // r9
  int result; // r0
  unsigned __int16 *v367; // r0
  int *v368; // r1
  int i; // r2
  int v370; // t1
  int v371; // t1
  int v372; // r2
  int v373; // r3
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
  int v387; // [sp+0h] [bp-59Ch]
  int v388; // [sp+0h] [bp-59Ch]
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
  int v401; // [sp+4h] [bp-598h]
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
  int v416; // [sp+8h] [bp-594h]
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
  int v429; // [sp+Ch] [bp-590h]
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
  int v441; // [sp+10h] [bp-58Ch]
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
  int v453; // [sp+14h] [bp-588h]
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
  int v464; // [sp+18h] [bp-584h]
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
  int v477; // [sp+1Ch] [bp-580h]
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
  int v488; // [sp+20h] [bp-57Ch]
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
  int v499; // [sp+24h] [bp-578h]
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
  int v510; // [sp+28h] [bp-574h]
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
  int v523; // [sp+2Ch] [bp-570h]
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
  int v536; // [sp+30h] [bp-56Ch]
  int v537; // [sp+34h] [bp-568h]
  int v538; // [sp+34h] [bp-568h]
  int v539; // [sp+34h] [bp-568h]
  int v540; // [sp+34h] [bp-568h]
  int v541; // [sp+34h] [bp-568h]
  int v542; // [sp+34h] [bp-568h]
  int v543; // [sp+34h] [bp-568h]
  int v544; // [sp+34h] [bp-568h]
  int v545; // [sp+34h] [bp-568h]
  int v546; // [sp+34h] [bp-568h]
  int v547; // [sp+38h] [bp-564h]
  int v548; // [sp+38h] [bp-564h]
  int v549; // [sp+38h] [bp-564h]
  int v550; // [sp+38h] [bp-564h]
  int v551; // [sp+38h] [bp-564h]
  int v552; // [sp+38h] [bp-564h]
  int v553; // [sp+38h] [bp-564h]
  int v554; // [sp+38h] [bp-564h]
  int v555; // [sp+38h] [bp-564h]
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
  int v566; // [sp+3Ch] [bp-560h]
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
  int v577; // [sp+40h] [bp-55Ch]
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
  int v588; // [sp+44h] [bp-558h]
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
  int v599; // [sp+48h] [bp-554h]
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
  int v611; // [sp+4Ch] [bp-550h]
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
  int v625; // [sp+50h] [bp-54Ch]
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
  int v640; // [sp+54h] [bp-548h]
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
  int v652; // [sp+58h] [bp-544h]
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
  int v664; // [sp+5Ch] [bp-540h]
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
  int v678; // [sp+60h] [bp-53Ch]
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
  int v690; // [sp+64h] [bp-538h]
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
  int v703; // [sp+68h] [bp-534h]
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
  int v714; // [sp+6Ch] [bp-530h]
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
  int v726; // [sp+70h] [bp-52Ch]
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
  int v737; // [sp+74h] [bp-528h]
  int v738; // [sp+74h] [bp-528h]
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
  int v749; // [sp+78h] [bp-524h]
  int v750; // [sp+78h] [bp-524h]
  int v751; // [sp+7Ch] [bp-520h]
  int v752; // [sp+7Ch] [bp-520h]
  int v753; // [sp+7Ch] [bp-520h]
  int v754; // [sp+7Ch] [bp-520h]
  int v755; // [sp+7Ch] [bp-520h]
  int v756; // [sp+7Ch] [bp-520h]
  int v757; // [sp+7Ch] [bp-520h]
  int v758; // [sp+7Ch] [bp-520h]
  int v759; // [sp+7Ch] [bp-520h]
  int v760; // [sp+7Ch] [bp-520h]
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
  int v773; // [sp+80h] [bp-51Ch]
  int v774; // [sp+80h] [bp-51Ch]
  int v775; // [sp+80h] [bp-51Ch]
  int v776; // [sp+84h] [bp-518h]
  int v777; // [sp+84h] [bp-518h]
  int v778; // [sp+84h] [bp-518h]
  int v779; // [sp+84h] [bp-518h]
  int v780; // [sp+84h] [bp-518h]
  int v781; // [sp+84h] [bp-518h]
  int v782; // [sp+84h] [bp-518h]
  int v783; // [sp+84h] [bp-518h]
  int v784; // [sp+84h] [bp-518h]
  int v785; // [sp+84h] [bp-518h]
  int v786; // [sp+88h] [bp-514h]
  int v787; // [sp+88h] [bp-514h]
  int v788; // [sp+88h] [bp-514h]
  int v789; // [sp+88h] [bp-514h]
  int v790; // [sp+88h] [bp-514h]
  int v791; // [sp+88h] [bp-514h]
  int v792; // [sp+88h] [bp-514h]
  int v793; // [sp+88h] [bp-514h]
  int v794; // [sp+8Ch] [bp-510h]
  int v795; // [sp+8Ch] [bp-510h]
  int v796; // [sp+8Ch] [bp-510h]
  int v797; // [sp+8Ch] [bp-510h]
  int v798; // [sp+8Ch] [bp-510h]
  int v799; // [sp+8Ch] [bp-510h]
  int v800; // [sp+90h] [bp-50Ch]
  int v801; // [sp+90h] [bp-50Ch]
  int v802; // [sp+90h] [bp-50Ch]
  int v803; // [sp+90h] [bp-50Ch]
  int v804; // [sp+90h] [bp-50Ch]
  int v805; // [sp+94h] [bp-508h]
  int v806; // [sp+94h] [bp-508h]
  int v807; // [sp+94h] [bp-508h]
  int v808; // [sp+94h] [bp-508h]
  int v809; // [sp+98h] [bp-504h]
  int v810; // [sp+98h] [bp-504h]
  int v811; // [sp+98h] [bp-504h]
  int v812; // [sp+98h] [bp-504h]
  int v813; // [sp+9Ch] [bp-500h]
  int v814; // [sp+9Ch] [bp-500h]
  int v815; // [sp+9Ch] [bp-500h]
  int v816; // [sp+9Ch] [bp-500h]
  int v818; // [sp+A4h] [bp-4F8h]
  int v819; // [sp+A8h] [bp-4F4h]
  int v820; // [sp+ACh] [bp-4F0h]
  int v821; // [sp+B0h] [bp-4ECh]
  int v822; // [sp+B4h] [bp-4E8h]
  int v823; // [sp+B8h] [bp-4E4h]
  int v824; // [sp+BCh] [bp-4E0h]
  int v825; // [sp+C0h] [bp-4DCh]
  int v826; // [sp+C4h] [bp-4D8h]
  int v827; // [sp+C8h] [bp-4D4h]
  int v828; // [sp+CCh] [bp-4D0h]
  int v829; // [sp+D0h] [bp-4CCh]
  int v830; // [sp+D4h] [bp-4C8h]
  int v831; // [sp+D8h] [bp-4C4h]
  int v832; // [sp+DCh] [bp-4C0h]
  int v833; // [sp+E0h] [bp-4BCh]
  int v834; // [sp+E4h] [bp-4B8h]
  int v835; // [sp+E8h] [bp-4B4h]
  int v836; // [sp+ECh] [bp-4B0h]
  int v837; // [sp+F0h] [bp-4ACh]
  int v838; // [sp+F4h] [bp-4A8h]
  int v839; // [sp+F8h] [bp-4A4h]
  int v840; // [sp+FCh] [bp-4A0h]
  int v841; // [sp+100h] [bp-49Ch]
  int v842; // [sp+104h] [bp-498h]
  int v843; // [sp+108h] [bp-494h]
  int v844; // [sp+10Ch] [bp-490h]
  int v845; // [sp+110h] [bp-48Ch]
  int v846; // [sp+114h] [bp-488h]
  int v847; // [sp+118h] [bp-484h]
  int v848; // [sp+11Ch] [bp-480h]
  int v849; // [sp+120h] [bp-47Ch]
  int v850; // [sp+124h] [bp-478h]
  int v851; // [sp+124h] [bp-478h]
  int v852; // [sp+124h] [bp-478h]
  int v853; // [sp+128h] [bp-474h]
  int v854; // [sp+128h] [bp-474h]
  int v855; // [sp+12Ch] [bp-470h]
  int v856; // [sp+12Ch] [bp-470h]
  int v857; // [sp+12Ch] [bp-470h]
  int v858; // [sp+12Ch] [bp-470h]
  int v859; // [sp+130h] [bp-46Ch]
  int v860; // [sp+134h] [bp-468h]
  int v861; // [sp+134h] [bp-468h]
  int v862; // [sp+138h] [bp-464h]
  int v863; // [sp+13Ch] [bp-460h]
  int v864; // [sp+13Ch] [bp-460h]
  int v865; // [sp+140h] [bp-45Ch]
  int v866; // [sp+144h] [bp-458h]
  int v867; // [sp+150h] [bp-44Ch]
  int v868; // [sp+154h] [bp-448h]
  int v869; // [sp+154h] [bp-448h]
  int v870; // [sp+194h] [bp-408h] BYREF
  int v871; // [sp+198h] [bp-404h] BYREF
  int v872; // [sp+19Ch] [bp-400h]
  int v873; // [sp+1A0h] [bp-3FCh]
  int v874; // [sp+1A4h] [bp-3F8h]
  int v875; // [sp+1A8h] [bp-3F4h]
  int v876; // [sp+1ACh] [bp-3F0h]
  int v877; // [sp+1B0h] [bp-3ECh]
  int v878; // [sp+1B4h] [bp-3E8h]
  int v879; // [sp+1B8h] [bp-3E4h]
  int v880; // [sp+1BCh] [bp-3E0h]
  int v881; // [sp+1C0h] [bp-3DCh]
  int v882; // [sp+1C4h] [bp-3D8h]
  int v883; // [sp+1C8h] [bp-3D4h]
  int v884; // [sp+1CCh] [bp-3D0h]
  int v885; // [sp+1D0h] [bp-3CCh]
  int v886; // [sp+1D4h] [bp-3C8h]
  int v887; // [sp+1D8h] [bp-3C4h]
  int v888; // [sp+1DCh] [bp-3C0h]
  int v889; // [sp+1E0h] [bp-3BCh]
  int v890; // [sp+1E4h] [bp-3B8h]
  int v891; // [sp+1E8h] [bp-3B4h]
  int v892; // [sp+1ECh] [bp-3B0h]
  int v893; // [sp+1F0h] [bp-3ACh]
  int v894; // [sp+1F4h] [bp-3A8h]
  int v895; // [sp+1F8h] [bp-3A4h]
  int v896; // [sp+1FCh] [bp-3A0h]
  int v897; // [sp+200h] [bp-39Ch]
  int v898; // [sp+204h] [bp-398h]
  int v899; // [sp+208h] [bp-394h]
  int v900; // [sp+20Ch] [bp-390h]
  int v901; // [sp+210h] [bp-38Ch]
  int v902; // [sp+214h] [bp-388h]
  int v903; // [sp+218h] [bp-384h]
  int v904; // [sp+21Ch] [bp-380h]
  int v905; // [sp+220h] [bp-37Ch]
  int v906; // [sp+224h] [bp-378h]
  int v907; // [sp+228h] [bp-374h]
  int v908; // [sp+22Ch] [bp-370h]
  int v909; // [sp+230h] [bp-36Ch]
  int v910; // [sp+234h] [bp-368h]
  int v911; // [sp+238h] [bp-364h]
  int v912; // [sp+23Ch] [bp-360h]
  int v913; // [sp+240h] [bp-35Ch]
  int v914; // [sp+244h] [bp-358h]
  int v915; // [sp+248h] [bp-354h]
  int v916; // [sp+24Ch] [bp-350h]
  int v917; // [sp+250h] [bp-34Ch]
  int v918; // [sp+254h] [bp-348h]
  int v919; // [sp+258h] [bp-344h]
  int v920; // [sp+25Ch] [bp-340h]
  int v921; // [sp+260h] [bp-33Ch]
  int v922; // [sp+264h] [bp-338h]
  int v923; // [sp+268h] [bp-334h]
  int v924; // [sp+26Ch] [bp-330h]
  int v925; // [sp+270h] [bp-32Ch]
  int v926; // [sp+274h] [bp-328h]
  int v927; // [sp+278h] [bp-324h]
  int v928; // [sp+27Ch] [bp-320h]
  int v929; // [sp+280h] [bp-31Ch]
  int v930; // [sp+284h] [bp-318h]
  int v931; // [sp+288h] [bp-314h] BYREF
  int v932; // [sp+28Ch] [bp-310h]
  int v933; // [sp+290h] [bp-30Ch]
  int v934; // [sp+294h] [bp-308h]
  int v935; // [sp+298h] [bp-304h] BYREF
  int v936; // [sp+29Ch] [bp-300h]
  int v937; // [sp+2A0h] [bp-2FCh]
  int v938; // [sp+2A4h] [bp-2F8h]
  int v939; // [sp+2A8h] [bp-2F4h]
  int v940; // [sp+2ACh] [bp-2F0h]
  int v941; // [sp+2B0h] [bp-2ECh]
  int v942; // [sp+2B4h] [bp-2E8h]
  int v943; // [sp+2B8h] [bp-2E4h]
  int v944; // [sp+2BCh] [bp-2E0h]
  int v945; // [sp+2C0h] [bp-2DCh]
  int v946; // [sp+2C4h] [bp-2D8h]
  int v947; // [sp+2C8h] [bp-2D4h]
  int v948; // [sp+2CCh] [bp-2D0h]
  int v949; // [sp+2D0h] [bp-2CCh]
  int v950; // [sp+2D4h] [bp-2C8h]
  int v951; // [sp+2D8h] [bp-2C4h]
  int v952; // [sp+2DCh] [bp-2C0h]
  int v953; // [sp+2E0h] [bp-2BCh]
  int v954; // [sp+2E4h] [bp-2B8h]
  int v955; // [sp+2E8h] [bp-2B4h]
  int v956; // [sp+2ECh] [bp-2B0h]
  int v957; // [sp+2F0h] [bp-2ACh]
  int v958; // [sp+2F4h] [bp-2A8h]
  int v959; // [sp+2F8h] [bp-2A4h]
  int v960; // [sp+2FCh] [bp-2A0h]
  int v961; // [sp+300h] [bp-29Ch]
  int v962; // [sp+304h] [bp-298h]
  int v963; // [sp+308h] [bp-294h]
  int v964; // [sp+30Ch] [bp-290h]
  int v965; // [sp+310h] [bp-28Ch]
  int v966; // [sp+314h] [bp-288h]
  int v967; // [sp+318h] [bp-284h]
  int v968; // [sp+31Ch] [bp-280h]
  int v969; // [sp+320h] [bp-27Ch]
  int v970; // [sp+324h] [bp-278h]
  int v971; // [sp+328h] [bp-274h]
  int v972; // [sp+32Ch] [bp-270h]
  int v973; // [sp+330h] [bp-26Ch]
  int v974; // [sp+334h] [bp-268h]
  int v975; // [sp+338h] [bp-264h]
  int v976; // [sp+33Ch] [bp-260h]
  int v977; // [sp+340h] [bp-25Ch]
  int v978; // [sp+344h] [bp-258h]
  int v979; // [sp+348h] [bp-254h]
  int v980; // [sp+34Ch] [bp-250h]
  int v981; // [sp+350h] [bp-24Ch]
  int v982; // [sp+354h] [bp-248h]
  int v983; // [sp+358h] [bp-244h]
  int v984; // [sp+35Ch] [bp-240h]
  int v985; // [sp+360h] [bp-23Ch]
  int v986; // [sp+364h] [bp-238h]
  int v987; // [sp+368h] [bp-234h]
  int v988; // [sp+36Ch] [bp-230h]
  int v989; // [sp+370h] [bp-22Ch]
  int v990; // [sp+374h] [bp-228h]
  int v991; // [sp+378h] [bp-224h]
  int v992; // [sp+37Ch] [bp-220h]
  int v993; // [sp+380h] [bp-21Ch]
  int v994; // [sp+384h] [bp-218h]
  int v995; // [sp+388h] [bp-214h] BYREF
  int v996; // [sp+38Ch] [bp-210h]
  int v997; // [sp+390h] [bp-20Ch]
  int v998; // [sp+394h] [bp-208h]
  int v999; // [sp+398h] [bp-204h] BYREF
  int v1000; // [sp+39Ch] [bp-200h]
  int v1001; // [sp+3A0h] [bp-1FCh]
  int v1002; // [sp+3A4h] [bp-1F8h]
  int v1003; // [sp+3A8h] [bp-1F4h]
  int v1004; // [sp+3ACh] [bp-1F0h]
  int v1005; // [sp+3B0h] [bp-1ECh]
  int v1006; // [sp+3B4h] [bp-1E8h]
  int v1007; // [sp+3B8h] [bp-1E4h]
  int v1008; // [sp+3BCh] [bp-1E0h]
  int v1009; // [sp+3C0h] [bp-1DCh]
  int v1010; // [sp+3C4h] [bp-1D8h]
  int v1011; // [sp+3C8h] [bp-1D4h]
  int v1012; // [sp+3CCh] [bp-1D0h]
  int v1013; // [sp+3D0h] [bp-1CCh]
  int v1014; // [sp+3D4h] [bp-1C8h]
  int v1015; // [sp+3D8h] [bp-1C4h]
  int v1016; // [sp+3DCh] [bp-1C0h]
  int v1017; // [sp+3E0h] [bp-1BCh]
  int v1018; // [sp+3E4h] [bp-1B8h]
  int v1019; // [sp+3E8h] [bp-1B4h]
  int v1020; // [sp+3ECh] [bp-1B0h]
  int v1021; // [sp+3F0h] [bp-1ACh]
  int v1022; // [sp+3F4h] [bp-1A8h]
  int v1023; // [sp+3F8h] [bp-1A4h]
  int v1024; // [sp+3FCh] [bp-1A0h]
  int v1025; // [sp+400h] [bp-19Ch]
  int v1026; // [sp+404h] [bp-198h]
  int v1027; // [sp+408h] [bp-194h]
  int v1028; // [sp+40Ch] [bp-190h]
  int v1029; // [sp+410h] [bp-18Ch]
  int v1030; // [sp+414h] [bp-188h]
  int v1031; // [sp+418h] [bp-184h]
  int v1032; // [sp+41Ch] [bp-180h]
  int v1033; // [sp+420h] [bp-17Ch]
  int v1034; // [sp+424h] [bp-178h]
  int v1035; // [sp+428h] [bp-174h]
  int v1036; // [sp+42Ch] [bp-170h]
  int v1037; // [sp+430h] [bp-16Ch]
  int v1038; // [sp+434h] [bp-168h]
  int v1039; // [sp+438h] [bp-164h]
  int v1040; // [sp+43Ch] [bp-160h]
  int v1041; // [sp+440h] [bp-15Ch]
  int v1042; // [sp+444h] [bp-158h]
  int v1043; // [sp+448h] [bp-154h]
  int v1044; // [sp+44Ch] [bp-150h]
  int v1045; // [sp+450h] [bp-14Ch]
  int v1046; // [sp+454h] [bp-148h]
  int v1047; // [sp+458h] [bp-144h]
  int v1048; // [sp+45Ch] [bp-140h]
  int v1049; // [sp+460h] [bp-13Ch]
  int v1050; // [sp+464h] [bp-138h]
  int v1051; // [sp+468h] [bp-134h]
  int v1052; // [sp+46Ch] [bp-130h]
  int v1053; // [sp+470h] [bp-12Ch]
  int v1054; // [sp+474h] [bp-128h]
  int v1055; // [sp+478h] [bp-124h]
  int v1056; // [sp+47Ch] [bp-120h]
  int v1057; // [sp+480h] [bp-11Ch]
  int v1058; // [sp+484h] [bp-118h]
  int v1059; // [sp+488h] [bp-114h]
  int v1060; // [sp+48Ch] [bp-110h]
  int v1061; // [sp+490h] [bp-10Ch]
  int v1062; // [sp+494h] [bp-108h]
  int v1063; // [sp+498h] [bp-104h] BYREF
  int v1064; // [sp+49Ch] [bp-100h]
  int v1065; // [sp+4A0h] [bp-FCh]
  int v1066; // [sp+4A4h] [bp-F8h]
  int v1067; // [sp+4A8h] [bp-F4h]
  int v1068; // [sp+4ACh] [bp-F0h]
  int v1069; // [sp+4B0h] [bp-ECh]
  int v1070; // [sp+4B4h] [bp-E8h]
  int v1071; // [sp+4B8h] [bp-E4h]
  int v1072; // [sp+4BCh] [bp-E0h]
  int v1073; // [sp+4C0h] [bp-DCh]
  int v1074; // [sp+4C4h] [bp-D8h]
  int v1075; // [sp+4C8h] [bp-D4h]
  int v1076; // [sp+4CCh] [bp-D0h]
  int v1077; // [sp+4D0h] [bp-CCh]
  int v1078; // [sp+4D4h] [bp-C8h]
  int v1079; // [sp+4D8h] [bp-C4h]
  int v1080; // [sp+4DCh] [bp-C0h]
  int v1081; // [sp+4E0h] [bp-BCh]
  int v1082; // [sp+4E4h] [bp-B8h]
  int v1083; // [sp+4E8h] [bp-B4h]
  int v1084; // [sp+4ECh] [bp-B0h]
  int v1085; // [sp+4F0h] [bp-ACh]
  int v1086; // [sp+4F4h] [bp-A8h]
  int v1087; // [sp+4F8h] [bp-A4h]
  int v1088; // [sp+4FCh] [bp-A0h]
  int v1089; // [sp+500h] [bp-9Ch]
  int v1090; // [sp+504h] [bp-98h]
  int v1091; // [sp+508h] [bp-94h]
  int v1092; // [sp+50Ch] [bp-90h]
  int v1093; // [sp+510h] [bp-8Ch]
  int v1094; // [sp+514h] [bp-88h]
  int v1095; // [sp+518h] [bp-84h]
  int v1096; // [sp+51Ch] [bp-80h]
  int v1097; // [sp+520h] [bp-7Ch]
  int v1098; // [sp+524h] [bp-78h]
  int v1099; // [sp+528h] [bp-74h]
  int v1100; // [sp+52Ch] [bp-70h]
  int v1101; // [sp+530h] [bp-6Ch]
  int v1102; // [sp+534h] [bp-68h]
  int v1103; // [sp+538h] [bp-64h]
  int v1104; // [sp+53Ch] [bp-60h]
  int v1105; // [sp+540h] [bp-5Ch]
  int v1106; // [sp+544h] [bp-58h]
  int v1107; // [sp+548h] [bp-54h]
  int v1108; // [sp+54Ch] [bp-50h]
  int v1109; // [sp+550h] [bp-4Ch]
  int v1110; // [sp+554h] [bp-48h]
  int v1111; // [sp+558h] [bp-44h]
  int v1112; // [sp+55Ch] [bp-40h]
  int v1113; // [sp+560h] [bp-3Ch]
  int v1114; // [sp+564h] [bp-38h]
  int v1115; // [sp+568h] [bp-34h]
  int v1116; // [sp+56Ch] [bp-30h]
  int v1117; // [sp+570h] [bp-2Ch]
  int v1118; // [sp+574h] [bp-28h]
  int v1119; // [sp+578h] [bp-24h]
  int v1120; // [sp+57Ch] [bp-20h]
  int v1121; // [sp+580h] [bp-1Ch]
  int v1122; // [sp+584h] [bp-18h]
  int v1123; // [sp+588h] [bp-14h]
  int v1124; // [sp+58Ch] [bp-10h]
  int v1125; // [sp+590h] [bp-Ch]
  _DWORD v1126[2]; // [sp+594h] [bp-8h] BYREF

  sub_121BE8((unsigned __int8 *)a1, &v871);
  sub_121BE8((unsigned __int8 *)(a1 + 2), &v935);
  v4 = &v871;
  v5 = &unk_150498;
  v6 = 226;
  v7 = 46;
  v8 = v871 - v935;
  v871 += v935;
  v9 = &unk_150498;
  v935 = v8;
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
    if ( &v931 == v4 )
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
  sub_121BE8((unsigned __int8 *)(a1 + 1), &v999);
  sub_121BE8((unsigned __int8 *)(a1 + 3), &v1063);
  v21 = &v871;
  v22 = v999 + v1063;
  v1063 = v999 - v1063;
  v999 = v22;
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
    if ( &v935 == v21 )
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
  v36 = &v871;
  v37 = &unk_150488;
  v38 = 45;
  v39 = v871 + v999;
  v999 = v871 - v999;
  v871 = v39;
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
    if ( &v995 == v36 )
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
    v367 = (unsigned __int16 *)&unk_150C78;
    v368 = &v870;
    for ( i = 2; ; i = v370 )
    {
      v371 = v368[1];
      ++v368;
      v372 = (unsigned __int16)(i + v371) + ((i + v371) >> 16);
      v373 = (unsigned __int8)(v372 - BYTE1(v372)) - (((unsigned __int8)v372 - (v372 >> 8)) >> 8);
      if ( v373 > 128 )
        v373 -= 257;
      *v368 = v373;
      if ( v1126 == v368 )
        break;
      v370 = v367[1];
      ++v367;
    }
  }
  else
  {
    v51 = &v870;
    v52 = (unsigned __int16 *)&unk_150A78;
    for ( j = 1; ; j = v54 )
    {
      v55 = v51[1];
      ++v51;
      v56 = (unsigned __int16)(j + v55) + ((j + v55) >> 16);
      v57 = (unsigned __int8)(v56 - BYTE1(v56)) - (((unsigned __int8)v56 - (v56 >> 8)) >> 8);
      if ( v57 > 128 )
        v57 -= 257;
      *v51 = v57;
      if ( v1126 == v51 )
        break;
      v54 = v52[1];
      ++v52;
    }
  }
  v818 = *(_DWORD *)(a1 + 152);
  v819 = *(_DWORD *)(a1 + 156);
  v820 = *(_DWORD *)(a1 + 160);
  v821 = *(_DWORD *)(a1 + 164);
  v822 = *(_DWORD *)(a1 + 168);
  v823 = *(_DWORD *)(a1 + 172);
  v824 = *(_DWORD *)(a1 + 176);
  v826 = *(_DWORD *)(a1 + 184);
  v827 = *(_DWORD *)(a1 + 188);
  v828 = *(_DWORD *)(a1 + 192);
  v829 = *(_DWORD *)(a1 + 196);
  v830 = *(_DWORD *)(a1 + 200);
  v825 = *(_DWORD *)(a1 + 180);
  v832 = *(_DWORD *)(a1 + 208);
  v831 = *(_DWORD *)(a1 + 204);
  v833 = *(_DWORD *)(a1 + 212);
  v834 = *(_DWORD *)(a1 + 216);
  v837 = *(_DWORD *)(a1 + 228);
  v836 = *(_DWORD *)(a1 + 224);
  v835 = *(_DWORD *)(a1 + 220);
  v838 = *(_DWORD *)(a1 + 232);
  v839 = *(_DWORD *)(a1 + 236);
  v842 = *(_DWORD *)(a1 + 248);
  v841 = *(_DWORD *)(a1 + 244);
  v840 = *(_DWORD *)(a1 + 240);
  v843 = *(_DWORD *)(a1 + 252);
  v844 = *(_DWORD *)(a1 + 256);
  v845 = *(_DWORD *)(a1 + 132);
  v846 = *(_DWORD *)(a1 + 136);
  v847 = *(_DWORD *)(a1 + 140);
  v389 = v846 ^ *(_DWORD *)(a1 + 4);
  v402 = v847 ^ *(_DWORD *)(a1 + 8);
  v848 = *(_DWORD *)(a1 + 144);
  v374 = v845 ^ *(_DWORD *)a1;
  v417 = v848 ^ *(_DWORD *)(a1 + 12);
  v430 = *(_DWORD *)(a1 + 148) ^ *(_DWORD *)(a1 + 16);
  v465 = v820 ^ *(_DWORD *)(a1 + 28);
  v849 = *(_DWORD *)(a1 + 148);
  v578 = v822 ^ *(_DWORD *)(a1 + 36);
  v442 = v818 ^ *(_DWORD *)(a1 + 20);
  v454 = v819 ^ *(_DWORD *)(a1 + 24);
  v567 = v821 ^ *(_DWORD *)(a1 + 32);
  v589 = v824 ^ *(_DWORD *)(a1 + 44);
  v600 = v825 ^ *(_DWORD *)(a1 + 48);
  v612 = v826 ^ *(_DWORD *)(a1 + 52);
  v58 = *(_DWORD *)(a1 + 76);
  v641 = v828 ^ *(_DWORD *)(a1 + 60);
  v626 = v827 ^ *(_DWORD *)(a1 + 56);
  v679 = v834 ^ *(_DWORD *)(a1 + 84);
  v665 = v833 ^ *(_DWORD *)(a1 + 80);
  v511 = v835 ^ *(_DWORD *)(a1 + 88);
  v691 = v836 ^ *(_DWORD *)(a1 + 92);
  v524 = v830 ^ *(_DWORD *)(a1 + 68);
  v478 = v829 ^ *(_DWORD *)(a1 + 64);
  v653 = v823 ^ *(_DWORD *)(a1 + 40);
  v704 = v831 ^ *(_DWORD *)(a1 + 72);
  v59 = (v578 ^ v524) & v389;
  v60 = (v653 ^ v704) & v402;
  v850 = (v626 ^ v511) & v454;
  v61 = (v641 ^ v691) & v465;
  v715 = (v589 ^ v832 ^ v58) & v417;
  v62 = (v600 ^ v665) & v430;
  v776 = (v612 ^ v679) & v442;
  v63 = (unsigned __int16)(185 * v935) + 12124160 * v936 + (v837 ^ *(_DWORD *)(a1 + 96)) + ((v567 ^ v478) & v374 ^ v478);
  v375 = __ROR4__(v374, 29);
  v390 = __ROR4__(v389, 29);
  v403 = __ROR4__(v402, 29);
  v455 = __ROR4__(v454, 29);
  v466 = __ROR4__(v465, 29);
  v418 = __ROR4__(v417, 29);
  v431 = __ROR4__(v430, 29);
  v443 = __ROR4__(v442, 29);
  v500 = v375
       + __ROR4__((unsigned __int16)(185 * v937) + 12124160 * v938 + (v838 ^ *(_DWORD *)(a1 + 100)) + (v59 ^ v524), 9);
  v489 = v390 + __ROR4__(v63, 9);
  v64 = v466
      + __ROR4__((unsigned __int16)(185 * v947) + 12124160 * v948 + (v843 ^ *(_DWORD *)(a1 + 120)) + (v850 ^ v511), 9);
  v739 = v455
       + __ROR4__((unsigned __int16)(185 * v949) + 12124160 * v950 + (v844 ^ *(_DWORD *)(a1 + 124)) + (v61 ^ v691), 9);
  v556 = v418
       + __ROR4__((unsigned __int16)(185 * v939) + 12124160 * v940 + (v839 ^ *(_DWORD *)(a1 + 104)) + (v60 ^ v704), 9);
  v65 = v403
      + __ROR4__(
          (unsigned __int16)(185 * v941) + 12124160 * v942 + (v840 ^ *(_DWORD *)(a1 + 108)) + (v715 ^ v832 ^ v58),
          9);
  v716 = v443
       + __ROR4__((unsigned __int16)(185 * v943) + 12124160 * v944 + (v841 ^ *(_DWORD *)(a1 + 112)) + (v62 ^ v665), 9);
  v727 = v431
       + __ROR4__((unsigned __int16)(185 * v945) + 12124160 * v946 + (v842 ^ *(_DWORD *)(a1 + 116)) + (v776 ^ v679), 9);
  v66 = (v567 ^ v375) & v489;
  v67 = (v578 ^ v390) & v500;
  v68 = (v653 ^ v403) & v556;
  v69 = (v641 ^ v466) & v739;
  v70 = (v600 ^ v431) & v716;
  v547 = __ROR4__(v64, 9);
  v71 = v489;
  v751 = (unsigned __int16)(185 * v967) + 12124160 * v968 + v478;
  v490 = __ROR4__(v500, 9);
  v479 = __ROR4__(v71, 9);
  v512 = __ROR4__(v65, 9);
  v501 = __ROR4__(v556, 9);
  v557 = __ROR4__(v739, 9);
  v740 = (unsigned __int16)(185 * v969) + 12124160 * v970 + v524;
  v525 = __ROR4__(v716, 9);
  v72 = (unsigned __int16)(185 * v971) + 12124160 * v972 + v704 + (v68 ^ v653);
  v73 = (unsigned __int16)(185 * v981) + 12124160 * v982 + v691;
  v537 = __ROR4__(v727, 9);
  v692 = (unsigned __int16)(185 * v977) + 12124160 * v978 + v679;
  v74 = v547 + __ROR4__(v751 + (v66 ^ v567), 15);
  v705 = v479
       + __ROR4__(
           (unsigned __int16)(185 * v979)
         + 12124160 * v980
         + (v835 ^ *(_DWORD *)(a1 + 88))
         + ((v626 ^ v455) & v64 ^ v626),
           15);
  v717 = v490 + __ROR4__(v73 + (v69 ^ v641), 15);
  v75 = v557 + __ROR4__(v740 + (v67 ^ v578), 15);
  v76 = v525 + __ROR4__(v72, 15);
  v680 = v501 + __ROR4__((unsigned __int16)(185 * v975) + 12124160 * v976 + v665 + (v70 ^ v600), 15);
  v666 = v537
       + __ROR4__((unsigned __int16)(185 * v973) + 12124160 * v974 + (v832 ^ v58) + ((v589 ^ v418) & v65 ^ v589), 15);
  v693 = v512 + __ROR4__(v692 + ((v612 ^ v443) & v727 ^ v612), 15);
  v761 = __ROR4__(v75, 15);
  v752 = __ROR4__(v74, 15);
  v777 = __ROR4__(v76, 15);
  v786 = __ROR4__(v666, 15);
  v805 = __ROR4__(v705, 15);
  v794 = __ROR4__(v680, 15);
  v800 = __ROR4__(v693, 15);
  v809 = __ROR4__(v717, 15);
  v77 = (unsigned __int16)(185 * v881) + 12124160 * v882 + v612 + ((v443 ^ v537) & v693 ^ v443);
  v78 = (unsigned __int16)(185 * v885) + 12124160 * v886 + v641 + ((v466 ^ v557) & v717 ^ v466);
  v79 = v777 + __ROR4__((unsigned __int16)(185 * v871) + 12124160 * v872 + v567 + ((v375 ^ v479) & v74 ^ v375), 5);
  v80 = v752 + __ROR4__((unsigned __int16)(185 * v875) + 12124160 * v876 + v653 + ((v403 ^ v501) & v76 ^ v403), 5);
  v613 = v786 + __ROR4__((unsigned __int16)(185 * v873) + 12124160 * v874 + v578 + ((v390 ^ v490) & v75 ^ v390), 5);
  v81 = v761 + __ROR4__((unsigned __int16)(185 * v877) + 12124160 * v878 + v589 + ((v418 ^ v512) & v666 ^ v418), 5);
  v642 = v794 + __ROR4__((unsigned __int16)(185 * v883) + 12124160 * v884 + v626 + ((v455 ^ v547) & v705 ^ v455), 5);
  v627 = v809 + __ROR4__(v77, 5);
  v654 = v805 + __ROR4__((unsigned __int16)(185 * v879) + 12124160 * v880 + v600 + ((v431 ^ v525) & v680 ^ v431), 5);
  v667 = v800 + __ROR4__(v78, 5);
  v590 = __ROR4__(v80, 5);
  v579 = __ROR4__(v613, 5);
  v601 = __ROR4__(v81, 5);
  v568 = __ROR4__(v79, 5);
  v82 = v613 & (v490 ^ v761);
  v83 = (v547 ^ v805) & v642;
  v84 = (v501 ^ v777) & v80 ^ v501;
  v643 = __ROR4__(v642, 5);
  v85 = (v537 ^ v800) & v627 ^ v537;
  v628 = __ROR4__(v627, 5);
  v86 = v375;
  v376 = v85;
  v87 = (unsigned __int16)(185 * v911) + 12124160 * v912 + v431 + ((v525 ^ v794) & v654 ^ v525);
  v614 = __ROR4__(v654, 5);
  v655 = __ROR4__(v667, 5);
  v88 = v568 + __ROR4__((unsigned __int16)(185 * v909) + 12124160 * v910 + v418 + (v81 & (v512 ^ v786) ^ v512), 29);
  v89 = v601 + __ROR4__((unsigned __int16)(185 * v903) + 12124160 * v904 + v86 + (v79 & (v479 ^ v752) ^ v479), 29);
  v90 = v643 + __ROR4__((unsigned __int16)(185 * v913) + 12124160 * v914 + v443 + v376, 29);
  v91 = v579 + __ROR4__((unsigned __int16)(185 * v907) + 12124160 * v908 + v403 + v84, 29);
  v92 = v590 + __ROR4__((unsigned __int16)(185 * v905) + 12124160 * v906 + v390 + (v82 ^ v490), 29);
  v404 = v628 + __ROR4__((unsigned __int16)(185 * v915) + 12124160 * v916 + v455 + (v83 ^ v547), 29);
  v377 = v655 + __ROR4__(v87, 29);
  v93 = v614 + __ROR4__((unsigned __int16)(185 * v917) + 12124160 * v918 + v466 + ((v557 ^ v809) & v667 ^ v557), 29);
  v813 = __ROR4__(v91, 29);
  v681 = __ROR4__(v92, 29);
  v694 = __ROR4__(v88, 29);
  v668 = __ROR4__(v89, 29);
  v718 = __ROR4__(v90, 29);
  v728 = __ROR4__(v404, 29);
  v706 = __ROR4__(v377, 29);
  v741 = __ROR4__(v93, 29);
  v94 = v813 + __ROR4__((unsigned __int16)(185 * v997) + 12124160 * v998 + v557 + ((v655 | v93) & v809 | v655 & v93), 9);
  v95 = v718 + __ROR4__((unsigned __int16)(185 * v983) + 12124160 * v984 + v479 + ((v568 | v89) & v752 | v89 & v568), 9);
  v419 = v668
       + __ROR4__((unsigned __int16)(185 * v993) + 12124160 * v994 + v537 + ((v628 | v90) & v800 | v628 & v90), 9);
  v432 = v694
       + __ROR4__((unsigned __int16)(185 * v995) + 12124160 * v996 + v547 + ((v643 | v404) & v805 | v404 & v643), 9);
  v391 = v728
       + __ROR4__((unsigned __int16)(185 * v989) + 12124160 * v990 + v512 + ((v601 | v88) & v786 | v88 & v601), 9);
  v405 = v681
       + __ROR4__((unsigned __int16)(185 * v991) + 12124160 * v992 + v525 + ((v614 | v377) & v794 | v614 & v377), 9);
  v96 = v706 + __ROR4__((unsigned __int16)(185 * v985) + 12124160 * v986 + v490 + ((v579 | v92) & v761 | v92 & v579), 9);
  v378 = v741
       + __ROR4__((unsigned __int16)(185 * v987) + 12124160 * v988 + v501 + ((v590 | v91) & v777 | v91 & v590), 9);
  v868 = v741 & v94;
  v867 = (v741 | v94) & v655;
  v548 = __ROR4__(v94, 9);
  v480 = __ROR4__(v96, 9);
  v491 = __ROR4__(v378, 9);
  v502 = __ROR4__(v391, 9);
  v513 = __ROR4__(v405, 9);
  v526 = __ROR4__(v419, 9);
  v538 = __ROR4__(v432, 9);
  v97 = (unsigned __int16)(185 * v961) + 12124160 * v962 + v800 + ((v718 | v419) & v628 | v718 & v419);
  v98 = v548
      + __ROR4__((unsigned __int16)(185 * v951) + 12124160 * v952 + v752 + ((v668 | v95) & v568 | v668 & v95), 15);
  v99 = (unsigned __int16)(185 * v953) + 12124160 * v954 + v761 + ((v681 | v96) & v579 | v681 & v96);
  v406 = v502
       + __ROR4__((unsigned __int16)(185 * v959) + 12124160 * v960 + v794 + ((v706 | v405) & v614 | v706 & v405), 15);
  v420 = v513
       + __ROR4__((unsigned __int16)(185 * v957) + 12124160 * v958 + v786 + ((v694 | v391) & v601 | v694 & v391), 15);
  v444 = v491 + __ROR4__(v97, 15);
  v100 = __ROR4__(v95, 9);
  v456 = v480
       + __ROR4__((unsigned __int16)(185 * v963) + 12124160 * v964 + v805 + ((v728 | v432) & v643 | v728 & v432), 15);
  v101 = v526
       + __ROR4__((unsigned __int16)(185 * v955) + 12124160 * v956 + v777 + ((v813 | v378) & v590 | v813 & v378), 15);
  v467 = v100 + __ROR4__((unsigned __int16)(185 * v965) + 12124160 * v966 + v809 + (v867 | v868), 15);
  v392 = v538 + __ROR4__(v99, 15);
  v753 = v100;
  v102 = v480 | v392;
  v778 = v480 & v392;
  v806 = v502 & v420;
  v103 = (v502 | v420) & v694;
  v851 = v513 & v406;
  v104 = (v513 | v406) & v706;
  v860 = v538 & v456;
  v105 = (v538 | v456) & v728;
  v106 = v548 & v467;
  v863 = (v548 | v467) & v741;
  v855 = v526 & v444;
  v107 = (v526 | v444) & v718;
  v558 = (unsigned __int16)(185 * v919) + 12124160 * v920 + v568;
  v569 = (v100 | v98) & v668 | v100 & v98;
  v108 = v406;
  v407 = __ROR4__(v101, 15);
  v379 = __ROR4__(v98, 15);
  v393 = __ROR4__(v392, 15);
  v433 = __ROR4__(v108, 15);
  v421 = __ROR4__(v420, 15);
  v445 = __ROR4__(v444, 15);
  v457 = __ROR4__(v456, 15);
  v109 = v102 & v681 | v778;
  v468 = __ROR4__(v467, 15);
  v110 = v433 + __ROR4__(v569 + v558, 5);
  v111 = (unsigned __int16)(185 * v925) + 12124160 * v926 + v601 + (v103 | v806);
  v112 = (unsigned __int16)(185 * v929) + 12124160 * v930 + v628 + (v107 | v855);
  v113 = v445 + __ROR4__((unsigned __int16)(185 * v921) + 12124160 * v922 + v579 + v109, 5);
  v602 = v379 + __ROR4__((unsigned __int16)(185 * v927) + 12124160 * v928 + v614 + (v104 | v851), 5);
  v629 = v407 + __ROR4__((unsigned __int16)(185 * v931) + 12124160 * v932 + v643 + (v105 | v860), 5);
  v114 = v421 + __ROR4__((unsigned __int16)(185 * v933) + 12124160 * v934 + v655 + (v863 | v106), 5);
  v580 = v457
       + __ROR4__((unsigned __int16)(185 * v923) + 12124160 * v924 + v590 + ((v491 | v101) & v813 | v491 & v101), 5);
  v591 = v468 + __ROR4__(v111, 5);
  v615 = v393 + __ROR4__(v112, 5);
  v559 = __ROR4__(v110, 5);
  v570 = __ROR4__(v113, 5);
  v115 = (v457 | v629) & v538 | v457 & v629;
  v116 = v433 & v602;
  v856 = (v433 | v602) & v513;
  v859 = v445 & v615;
  v117 = (v445 | v615) & v526;
  v852 = v421 & v591;
  v118 = (v421 | v591) & v502;
  v630 = __ROR4__(v629, 5);
  v644 = __ROR4__(v114, 5);
  v603 = __ROR4__(v602, 5);
  v616 = __ROR4__(v615, 5);
  v119 = (unsigned __int16)(185 * v891) + 12124160 * v892 + v813 + ((v407 | v580) & v491 | v407 & v580);
  v581 = __ROR4__(v580, 5);
  v592 = __ROR4__(v591, 5);
  v120 = (unsigned __int16)(185 * v893) + 12124160 * v894 + v694 + (v118 | v852);
  v121 = v570
       + __ROR4__((unsigned __int16)(185 * v887) + 12124160 * v888 + v668 + ((v379 | v110) & v753 | v110 & v379), 29);
  v122 = v644 + __ROR4__((unsigned __int16)(185 * v899) + 12124160 * v900 + v728 + v115, 29);
  v695 = v559
       + __ROR4__((unsigned __int16)(185 * v889) + 12124160 * v890 + v681 + ((v393 | v113) & v480 | v113 & v393), 29);
  v123 = v616 + __ROR4__((unsigned __int16)(185 * v895) + 12124160 * v896 + v706 + (v856 | v116), 29);
  v669 = v592 + __ROR4__(v119, 29);
  v124 = v630
       + __ROR4__((unsigned __int16)(185 * v901) + 12124160 * v902 + v741 + ((v468 | v114) & v548 | v468 & v114), 29);
  v742 = v603 + __ROR4__((unsigned __int16)(185 * v897) + 12124160 * v898 + v718 + (v117 | v859), 29);
  v729 = v581 + __ROR4__(v120, 29);
  v125 = (v468 ^ v644) & v124;
  v126 = (v393 ^ v570) & v695;
  v127 = (v421 ^ v592) & v729;
  v656 = __ROR4__(v121, 4);
  v707 = __ROR4__(v122, 4);
  v719 = __ROR4__(v124, 4);
  v682 = __ROR4__(v123, 4);
  v762 = (v379 ^ v559) & v121 ^ v379;
  v814 = (unsigned __int16)(185 * v1123) + 12124160 * v1124 + v538;
  v795 = (v407 ^ v581) & v669 ^ v407;
  v670 = __ROR4__(v669, 4);
  v539 = __ROR4__(v695, 4);
  v128 = (unsigned __int16)(185 * v1115) + 12124160 * v1116 + v491;
  v696 = __ROR4__(v742, 4);
  v129 = v729;
  v730 = (v433 ^ v603) & v123 ^ v433;
  v130 = (v457 ^ v630) & v122 ^ v457;
  v492 = __ROR4__(v129, 4);
  v131 = (unsigned __int16)(185 * v1119) + 12124160 * v1120 + v513;
  v132 = (unsigned __int16)(185 * v1117) + 12124160 * v1118 + v502 + (v127 ^ v421);
  v133 = (unsigned __int16)(185 * v1121) + 12124160 * v1122 + v526 + ((v445 ^ v616) & v742 ^ v445);
  v134 = (unsigned __int16)(185 * v1125) + 12124160 * v1126[0] + v548 + (v125 ^ v468);
  v135 = (unsigned __int16)(185 * v1113) + 12124160 * v1114 + v480 + (v126 ^ v393);
  v481 = v707 + __ROR4__((unsigned __int16)(185 * v1111) + 12124160 * v1112 + v753 + v762, 13);
  v503 = v656 + __ROR4__(v814 + v130, 13);
  v136 = v719 + __ROR4__(v135, 13);
  v514 = v682 + __ROR4__(v128 + v795, 13);
  v527 = v696 + __ROR4__(v132, 13);
  v137 = v670 + __ROR4__(v131 + v730, 13);
  v549 = v492 + __ROR4__(v133, 13);
  v731 = v539 + __ROR4__(v134, 13);
  v138 = (v570 ^ v539) & v136;
  v139 = (v630 ^ v707) & v503;
  v743 = (unsigned __int16)(185 * v1047) + 12124160 * v1048 + v379;
  v140 = (v559 ^ v656) & v481 ^ v559;
  v380 = __ROR4__(v481, 13);
  v796 = (unsigned __int16)(185 * v1059) + 12124160 * v1060 + v457;
  v504 = __ROR4__(v503, 13);
  v458 = __ROR4__(v514, 13);
  v141 = v407;
  v408 = __ROR4__(v136, 13);
  v482 = __ROR4__(v527, 13);
  v142 = (unsigned __int16)(185 * v1053) + 12124160 * v1054 + v421;
  v143 = v393;
  v394 = __ROR4__(v137, 13);
  v144 = (unsigned __int16)(185 * v1049) + 12124160 * v1050 + v143 + (v138 ^ v570);
  v754 = (unsigned __int16)(185 * v1057) + 12124160 * v1058 + v445;
  v446 = __ROR4__(v731, 13);
  v422 = __ROR4__(v549, 13);
  v145 = (unsigned __int16)(185 * v1055) + 12124160 * v1056 + v433 + ((v603 ^ v682) & v137 ^ v603);
  v146 = (unsigned __int16)(185 * v1061) + 12124160 * v1062 + v468 + ((v644 ^ v719) & v731 ^ v644);
  v434 = v458 + __ROR4__(v743 + v140, 10);
  v147 = v408 + __ROR4__(v142 + ((v592 ^ v492) & v527 ^ v592), 10);
  v515 = v380 + __ROR4__((unsigned __int16)(185 * v1051) + 12124160 * v1052 + v141 + ((v581 ^ v670) & v514 ^ v581), 10);
  v469 = v482 + __ROR4__(v144, 10);
  v528 = v446 + __ROR4__(v754 + ((v616 ^ v696) & v549 ^ v616), 10);
  v148 = v394 + __ROR4__(v796 + (v139 ^ v630), 10);
  v149 = v504 + __ROR4__(v145, 10);
  v150 = v422 + __ROR4__(v146, 10);
  v755 = __ROR4__(v147, 10);
  v787 = __ROR4__(v148, 10);
  v732 = __ROR4__(v434, 10);
  v151 = (unsigned __int16)(185 * v1069) + 12124160 * v1070 + v592;
  v779 = __ROR4__(v528, 10);
  v797 = __ROR4__(v150, 10);
  v744 = __ROR4__(v515, 10);
  v593 = __ROR4__(v469, 10);
  v763 = __ROR4__(v149, 10);
  v152 = (unsigned __int16)(185 * v1071) + 12124160 * v1072 + v603 + ((v682 ^ v394) & v149 ^ v682);
  v153 = v755 + __ROR4__((unsigned __int16)(185 * v1063) + 12124160 * v1064 + v559 + ((v656 ^ v380) & v434 ^ v656), 25);
  v516 = v593 + __ROR4__((unsigned __int16)(185 * v1067) + 12124160 * v1068 + v581 + ((v670 ^ v458) & v515 ^ v670), 25);
  v154 = v763 + __ROR4__((unsigned __int16)(185 * v1077) + 12124160 * v1078 + v644 + ((v719 ^ v446) & v150 ^ v719), 25);
  v155 = v732 + __ROR4__(v151 + ((v492 ^ v482) & v147 ^ v492), 25);
  v156 = v787 + __ROR4__((unsigned __int16)(185 * v1073) + 12124160 * v1074 + v616 + ((v696 ^ v422) & v528 ^ v696), 25);
  v157 = v779 + __ROR4__((unsigned __int16)(185 * v1075) + 12124160 * v1076 + v630 + ((v707 ^ v504) & v148 ^ v707), 25);
  v470 = v744 + __ROR4__((unsigned __int16)(185 * v1065) + 12124160 * v1066 + v570 + ((v539 ^ v408) & v469 ^ v539), 25);
  v158 = v797 + __ROR4__(v152, 25);
  v159 = (v422 ^ v779) & v156;
  v435 = __ROR4__(v153, 25);
  v550 = __ROR4__(v156, 25);
  v160 = (v482 ^ v755) & v155;
  v529 = __ROR4__(v155, 25);
  v560 = __ROR4__(v157, 25);
  v161 = (v458 ^ v744) & v516;
  v162 = (v408 ^ v593) & v470;
  v163 = v492;
  v493 = __ROR4__(v158, 25);
  v517 = __ROR4__(v516, 25);
  v571 = __ROR4__(v154, 25);
  v471 = __ROR4__(v470, 25);
  v164 = (unsigned __int16)(185 * v1001) + 12124160 * v1002 + v539;
  v540 = v550 + __ROR4__((unsigned __int16)(185 * v999) + 12124160 * v1000 + v656 + (v153 & (v380 ^ v732) ^ v380), 4);
  v631 = v435 + __ROR4__((unsigned __int16)(185 * v1009) + 12124160 * v1010 + v696 + (v159 ^ v422), 4);
  v645 = v529 + __ROR4__((unsigned __int16)(185 * v1011) + 12124160 * v1012 + v707 + ((v504 ^ v787) & v157 ^ v504), 4);
  v604 = v560 + __ROR4__((unsigned __int16)(185 * v1005) + 12124160 * v1006 + v163 + (v160 ^ v482), 4);
  v582 = v517 + __ROR4__((unsigned __int16)(185 * v1013) + 12124160 * v1014 + v719 + ((v446 ^ v797) & v154 ^ v446), 4);
  v165 = v571 + __ROR4__((unsigned __int16)(185 * v1003) + 12124160 * v1004 + v670 + (v161 ^ v458), 4);
  v617 = v471 + __ROR4__((unsigned __int16)(185 * v1007) + 12124160 * v1008 + v682 + ((v394 ^ v763) & v158 ^ v394), 4);
  v166 = v493 + __ROR4__(v164 + (v162 ^ v408), 4);
  v167 = (v571 | v582) & v797;
  v657 = (unsigned __int16)(185 * v1015) + 12124160 * v1016 + v380;
  v168 = (v435 | v540) & v732 | v435 & v540;
  v381 = __ROR4__(v540, 4);
  v671 = (unsigned __int16)(185 * v1017) + 12124160 * v1018 + v408;
  v683 = (unsigned __int16)(185 * v1019) + 12124160 * v1020 + v458;
  v708 = (unsigned __int16)(185 * v1021) + 12124160 * v1022 + v482;
  v409 = __ROR4__(v166, 4);
  v810 = (unsigned __int16)(185 * v1025) + 12124160 * v1026 + v422;
  v169 = v571 & v582;
  v583 = __ROR4__(v582, 4);
  v423 = __ROR4__(v165, 4);
  v459 = __ROR4__(v604, 4);
  v815 = (unsigned __int16)(185 * v1027) + 12124160 * v1028 + v504;
  v170 = (v517 | v165) & v744 | v517 & v165;
  v483 = __ROR4__(v617, 4);
  v505 = __ROR4__(v631, 4);
  v541 = __ROR4__(v645, 4);
  v171 = v815 + ((v560 | v645) & v787 | v560 & v645);
  v172 = (unsigned __int16)(185 * v1029) + 12124160 * v1030 + v446 + (v167 | v169);
  v173 = v583 + __ROR4__(v657 + v168, 13);
  v646 = v459
       + __ROR4__((unsigned __int16)(185 * v1023) + 12124160 * v1024 + v394 + ((v493 | v617) & v763 | v493 & v617), 13);
  v605 = v483 + __ROR4__(v708 + ((v529 | v604) & v755 | v529 & v604), 13);
  v618 = v423 + __ROR4__(v810 + ((v550 | v631) & v779 | v550 & v631), 13);
  v447 = v505 + __ROR4__(v683 + v170, 13);
  v395 = v409 + __ROR4__(v171, 13);
  v684 = v381 + __ROR4__(v172, 13);
  v174 = v541 + __ROR4__(v671 + ((v471 | v166) & v593 | v471 & v166), 13);
  v632 = __ROR4__(v173, 13);
  v175 = __ROR4__(v646, 13);
  v176 = v175
       + __ROR4__((unsigned __int16)(185 * v1079) + 12124160 * v1080 + v732 + ((v381 | v173) & v435 | v381 & v173), 10);
  v658 = v175;
  v764 = v632
       + __ROR4__((unsigned __int16)(185 * v1087) + 12124160 * v1088 + v763 + ((v483 | v646) & v493 | v646 & v483), 10);
  v177 = (unsigned __int16)(185 * v1031) + 12124160 * v1032 + v435;
  v436 = __ROR4__(v174, 13);
  v178 = v177 + ((v632 | v176) & v381 | v632 & v176);
  v697 = __ROR4__(v176, 10);
  v179 = (unsigned __int16)(185 * v1081) + 12124160 * v1082 + v593 + ((v409 | v174) & v471 | v409 & v174);
  v180 = (v423 | v447) & v517 | v423 & v447;
  v448 = __ROR4__(v447, 13);
  v181 = (unsigned __int16)(185 * v1083) + 12124160 * v1084 + v744 + v180;
  v594 = __ROR4__(v605, 13);
  v182 = (v459 | v605) & v529 | v459 & v605;
  v606 = __ROR4__(v618, 13);
  v720 = v606 + __ROR4__(v179, 10);
  v183 = (v505 | v618) & v550 | v505 & v618;
  v672 = __ROR4__(v395, 13);
  v647 = v672 + __ROR4__(v181, 10);
  v619 = __ROR4__(v684, 13);
  v733 = v436 + __ROR4__((unsigned __int16)(185 * v1089) + 12124160 * v1090 + v779 + v183, 10);
  v184 = v448
       + __ROR4__((unsigned __int16)(185 * v1091) + 12124160 * v1092 + v787 + ((v541 | v395) & v560 | v541 & v395), 10);
  v185 = __ROR4__(v720, 10);
  v745 = v594
       + __ROR4__((unsigned __int16)(185 * v1093) + 12124160 * v1094 + v797 + ((v583 | v684) & v571 | v583 & v684), 10);
  v685 = v185 + __ROR4__(v178, 25);
  v186 = __ROR4__((unsigned __int16)(185 * v1085) + 12124160 * v1086 + v755 + v182, 10);
  v187 = v632;
  v633 = v185;
  v853 = (unsigned __int16)(233 * v891) + 15269888 * v1019 + v448;
  v857 = (unsigned __int16)(233 * v893) + 15269888 * v1021 + v594;
  v188 = (unsigned __int16)(185 * v1043) + 12124160 * v1044 + v560;
  v396 = __ROR4__(v184, 10);
  v788 = (unsigned __int16)(185 * v1039) + 12124160 * v1040 + v493;
  v561 = (unsigned __int16)(185 * v1037) + 12124160 * v1038 + v529;
  v798 = (unsigned __int16)(185 * v1041) + 12124160 * v1042 + v550;
  v801 = (unsigned __int16)(185 * v1045) + 12124160 * v1046 + v571;
  v530 = __ROR4__(v745, 10);
  v780 = v530 + __ROR4__(v188 + ((v672 | v184) & v541 | v184 & v672), 25);
  v709 = __ROR4__(v780, 25);
  v189 = v709
       + __ROR4__((unsigned __int16)(185 * v1095) + 12124160 * v1096 + v381 + ((v697 | v685) & v187 | v697 & v685), 4);
  v686 = __ROR4__(v685, 25);
  v551 = __ROR4__(v189, 3);
  v862 = (unsigned __int16)(233 * v901) + 15269888 * v1029 + v619;
  v721 = v697
       + __ROR4__((unsigned __int16)(185 * v1033) + 12124160 * v1034 + v471 + ((v436 | v720) & v409 | v436 & v720), 25);
  v382 = __ROR4__(v647, 10);
  v190 = v764;
  v494 = __ROR4__(v764, 10);
  v861 = (unsigned __int16)(233 * v899) + 15269888 * v1027 + v672;
  v765 = (unsigned __int16)(233 * v887) + 15269888 * v1015 + v187 + ((v697 ^ v686) & v189 ^ v697);
  v191 = v788 + ((v658 | v190) & v483 | v658 & v190);
  v192 = __ROR4__(v619 + v186, 10);
  v193 = v192
       + __ROR4__((unsigned __int16)(185 * v1035) + 12124160 * v1036 + v517 + ((v448 | v647) & v423 | v448 & v647), 25);
  v472 = v192;
  v518 = __ROR4__(v733, 10);
  v572 = v518 + __ROR4__(v191, 25);
  v194 = v382 + __ROR4__(v561 + ((v594 | (v619 + v186)) & v459 | v594 & (v619 + v186)), 25);
  v195 = v494 + __ROR4__(v798 + ((v606 | v733) & v505 | v606 & v733), 25);
  v196 = v801 + ((v619 | v745) & v583 | v619 & v745);
  v802 = (unsigned __int16)(233 * v903) + 15269888 * v1031 + v697;
  v197 = v396 + __ROR4__(v196, 25);
  v864 = (unsigned __int16)(233 * v907) + 15269888 * v1035 + v382;
  v816 = (unsigned __int16)(233 * v905) + 15269888 * v1033 + v633;
  v198 = v448;
  v449 = __ROR4__(v193, 25);
  v698 = __ROR4__(v572, 25);
  v734 = v698
       + __ROR4__((unsigned __int16)(185 * v1099) + 12124160 * v1100 + v423 + ((v382 | v193) & v198 | v193 & v382), 4);
  v562 = __ROR4__(v734, 3);
  v865 = (unsigned __int16)(233 * v909) + 15269888 * v1037 + v472;
  v746 = (unsigned __int16)(185 * v1097) + 12124160 * v1098 + v409;
  v199 = v562 + __ROR4__(v765, 23);
  v648 = __ROR4__(v199, 23);
  v756 = (unsigned __int16)(185 * v1101) + 12124160 * v1102 + v459;
  v807 = (v686 ^ v551) & v199 ^ v686;
  v869 = (unsigned __int16)(233 * v917) + 15269888 * v1045 + v530;
  v866 = (unsigned __int16)(233 * v911) + 15269888 * v1039 + v494;
  v789 = (unsigned __int16)(233 * v913) + 15269888 * v1041 + v518;
  v410 = __ROR4__(v721, 25);
  v460 = __ROR4__(v197, 25);
  v424 = __ROR4__(v194, 25);
  v200 = (unsigned __int16)(185 * v1105) + 12124160 * v1106 + v505 + ((v518 | v195) & v606 | v518 & v195);
  v201 = __ROR4__(v195, 25);
  v202 = v201 + __ROR4__(v756 + ((v472 | v194) & v594 | v194 & v472), 4);
  v203 = v449
       + __ROR4__((unsigned __int16)(185 * v1103) + 12124160 * v1104 + v483 + ((v494 | v572) & v658 | v494 & v572), 4);
  v204 = v460 + __ROR4__(v746 + ((v633 | v721) & v436 | v633 & v721), 4);
  v205 = v410
       + __ROR4__((unsigned __int16)(185 * v1109) + 12124160 * v1110 + v583 + ((v530 | v197) & v619 | v197 & v530), 4);
  v206 = v686
       + __ROR4__((unsigned __int16)(185 * v1107) + 12124160 * v1108 + v541 + ((v396 | v780) & v672 | v396 & v780), 4);
  v484 = __ROR4__(v204, 3);
  v506 = __ROR4__(v202, 3);
  v542 = __ROR4__(v203, 3);
  v620 = v424 + __ROR4__(v200, 4);
  v573 = __ROR4__(v620, 3);
  v584 = __ROR4__(v206, 3);
  v673 = v205;
  v595 = __ROR4__(v205, 3);
  v207 = v551 + __ROR4__(v853 + ((v382 ^ v449) & v734 ^ v382), 23);
  v208 = v506 + __ROR4__((unsigned __int16)(233 * v889) + 15269888 * v1017 + v436 + (v204 & (v633 ^ v410) ^ v633), 23);
  v209 = v484 + __ROR4__(v857 + ((v472 ^ v424) & v202 ^ v472), 23);
  v210 = v584 + __ROR4__((unsigned __int16)(233 * v895) + 15269888 * v1023 + v658 + ((v494 ^ v698) & v203 ^ v494), 23);
  v634 = v595 + __ROR4__((unsigned __int16)(233 * v897) + 15269888 * v1025 + v606 + ((v518 ^ v201) & v620 ^ v518), 23);
  v211 = v573 + __ROR4__(v862 + ((v530 ^ v460) & v673 ^ v530), 23);
  v212 = v542 + __ROR4__(v861 + (v206 & (v396 ^ v709) ^ v396), 23);
  v473 = __ROR4__(v207, 23);
  v383 = __ROR4__(v208, 23);
  v495 = __ROR4__(v209, 23);
  v621 = __ROR4__(v211, 23);
  v519 = __ROR4__(v210, 23);
  v607 = __ROR4__(v212, 23);
  v531 = __ROR4__(v634, 23);
  v213 = v383 + __ROR4__(v864 + ((v449 ^ v562) & v207 ^ v449), 17);
  v214 = v473 + __ROR4__(v816 + (v208 & (v410 ^ v484) ^ v410), 17);
  v659 = v648 + __ROR4__(v865 + (v209 & (v424 ^ v506) ^ v424), 17);
  v215 = v495 + __ROR4__(v802 + v807, 17);
  v216 = v789 + (v634 & (v201 ^ v573) ^ v201);
  v635 = v519 + __ROR4__(v869 + ((v460 ^ v595) & v211 ^ v460), 17);
  v722 = v607 + __ROR4__(v216, 17);
  v217 = v621 + __ROR4__(v866 + (v210 & (v698 ^ v542) ^ v698), 17);
  v218 = v531 + __ROR4__((unsigned __int16)(233 * v915) + 15269888 * v1043 + v396 + (v212 & (v709 ^ v584) ^ v709), 17);
  v781 = __ROR4__(v213, 17);
  v811 = __ROR4__(v635, 17);
  v397 = __ROR4__(v215, 17);
  v803 = __ROR4__(v722, 17);
  v790 = __ROR4__(v659, 17);
  v808 = __ROR4__(v218, 17);
  v799 = __ROR4__(v217, 17);
  v766 = __ROR4__(v214, 17);
  v219 = v766 + __ROR4__((unsigned __int16)(233 * v991) + 15269888 * v1119 + v698 + ((v542 ^ v519) & v217 ^ v542), 27);
  v220 = v799 + __ROR4__((unsigned __int16)(233 * v985) + 15269888 * v1113 + v410 + ((v484 ^ v383) & v214 ^ v484), 27);
  v221 = v811 + __ROR4__((unsigned __int16)(233 * v987) + 15269888 * v1115 + v449 + ((v562 ^ v473) & v213 ^ v562), 27);
  v674 = __ROR4__(v221, 27);
  v222 = v781 + __ROR4__((unsigned __int16)(233 * v997) + 15269888 * v1125 + v460 + (v635 & (v595 ^ v621) ^ v595), 27);
  v735 = __ROR4__(v222, 27);
  v411 = v803 + __ROR4__((unsigned __int16)(233 * v983) + 15269888 * v1111 + v686 + (v215 & (v551 ^ v648) ^ v551), 27);
  v223 = v397 + __ROR4__((unsigned __int16)(233 * v993) + 15269888 * v1121 + v201 + ((v573 ^ v531) & v722 ^ v573), 27);
  v224 = v808 + __ROR4__((unsigned __int16)(233 * v989) + 15269888 * v1117 + v424 + ((v506 ^ v495) & v659 ^ v506), 27);
  v225 = v790 + __ROR4__((unsigned __int16)(233 * v995) + 15269888 * v1123 + v709 + ((v584 ^ v607) & v218 ^ v584), 27);
  v636 = __ROR4__(v411, 27);
  v710 = __ROR4__(v223, 27);
  v687 = __ROR4__(v224, 27);
  v699 = __ROR4__(v219, 27);
  v660 = __ROR4__(v220, 27);
  v723 = __ROR4__(v225, 27);
  v226 = v411;
  v425 = v674 + __ROR4__((unsigned __int16)(233 * v945) + 15269888 * v1073 + v573 + ((v531 ^ v803) & v223 ^ v531), 3);
  v412 = v710 + __ROR4__((unsigned __int16)(233 * v939) + 15269888 * v1067 + v562 + (v221 & (v473 ^ v781) ^ v473), 3);
  v437 = v636 + __ROR4__((unsigned __int16)(233 * v949) + 15269888 * v1077 + v595 + ((v621 ^ v811) & v222 ^ v621), 3);
  v227 = v687 + __ROR4__((unsigned __int16)(233 * v943) + 15269888 * v1071 + v542 + (v219 & (v519 ^ v799) ^ v519), 3);
  v228 = v735 + __ROR4__((unsigned __int16)(233 * v935) + 15269888 * v1063 + v551 + (v226 & (v648 ^ v397) ^ v648), 3);
  v229 = (unsigned __int16)(233 * v937) + 15269888 * v1065 + v484 + (v220 & (v383 ^ v766) ^ v383);
  v230 = v660 + __ROR4__((unsigned __int16)(233 * v947) + 15269888 * v1075 + v584 + ((v607 ^ v808) & v225 ^ v607), 3);
  v231 = v699 + __ROR4__((unsigned __int16)(233 * v941) + 15269888 * v1069 + v506 + ((v495 ^ v790) & v224 ^ v495), 3);
  v485 = __ROR4__(v228, 3);
  v232 = v723 + __ROR4__(v229, 3);
  v563 = __ROR4__(v227, 3);
  v507 = __ROR4__(v232, 3);
  v543 = __ROR4__(v412, 3);
  v552 = __ROR4__(v231, 3);
  v574 = __ROR4__(v425, 3);
  v585 = __ROR4__(v230, 3);
  v596 = __ROR4__(v437, 3);
  v233 = v723 & v230;
  v858 = (v723 | v230) & v808;
  v234 = (v660 | v232) & v766 | v232 & v660;
  v235 = (unsigned __int16)(233 * v975) + 15269888 * v1103 + v519 + ((v699 | v227) & v799 | v699 & v227);
  v236 = v507
       + __ROR4__((unsigned __int16)(233 * v977) + 15269888 * v1105 + v531 + ((v710 | v425) & v803 | v710 & v425), 23);
  v237 = (unsigned __int16)(233 * v967) + 15269888 * v1095 + v648 + ((v636 | v228) & v397 | v228 & v636);
  v238 = v543 + __ROR4__((unsigned __int16)(233 * v979) + 15269888 * v1107 + v607 + (v858 | v233), 23);
  v239 = v585
       + __ROR4__((unsigned __int16)(233 * v971) + 15269888 * v1099 + v473 + ((v674 | v412) & v781 | v674 & v412), 23);
  v240 = v552
       + __ROR4__((unsigned __int16)(233 * v981) + 15269888 * v1109 + v621 + ((v735 | v437) & v811 | v437 & v735), 23);
  v241 = v563 + __ROR4__(v237, 23);
  v242 = v596
       + __ROR4__((unsigned __int16)(233 * v973) + 15269888 * v1101 + v495 + ((v687 | v231) & v790 | v231 & v687), 23);
  v243 = v574 + __ROR4__((unsigned __int16)(233 * v969) + 15269888 * v1097 + v383 + v234, 23);
  v520 = __ROR4__(v243, 23);
  v244 = v485 + __ROR4__(v235, 23);
  v496 = __ROR4__(v241, 23);
  v608 = __ROR4__(v242, 23);
  v532 = __ROR4__(v239, 23);
  v649 = __ROR4__(v236, 23);
  v622 = __ROR4__(v244, 23);
  v757 = __ROR4__(v240, 23);
  v747 = __ROR4__(v238, 23);
  v384 = (v485 | v241) & v636 | v485 & v241;
  v245 = v532
       + __ROR4__((unsigned __int16)(233 * v957) + 15269888 * v1085 + v790 + ((v552 | v242) & v687 | v552 & v242), 17);
  v246 = v649
       + __ROR4__((unsigned __int16)(233 * v959) + 15269888 * v1087 + v799 + ((v563 | v244) & v699 | v563 & v244), 17);
  v247 = v747
       + __ROR4__((unsigned __int16)(233 * v965) + 15269888 * v1093 + v811 + ((v596 | v240) & v735 | v240 & v596), 17);
  v248 = v520 + __ROR4__((unsigned __int16)(233 * v951) + 15269888 * v1079 + v397 + v384, 17);
  v385 = __ROR4__(v248, 17);
  v249 = v496
       + __ROR4__((unsigned __int16)(233 * v953) + 15269888 * v1081 + v766 + ((v507 | v243) & v660 | v507 & v243), 17);
  v250 = v608
       + __ROR4__((unsigned __int16)(233 * v955) + 15269888 * v1083 + v781 + ((v543 | v239) & v674 | v239 & v543), 17);
  v251 = v757
       + __ROR4__((unsigned __int16)(233 * v963) + 15269888 * v1091 + v808 + ((v585 | v238) & v723 | v585 & v238), 17);
  v252 = v622
       + __ROR4__((unsigned __int16)(233 * v961) + 15269888 * v1089 + v803 + ((v574 | v236) & v710 | v574 & v236), 17);
  v461 = __ROR4__(v251, 17);
  v413 = __ROR4__(v250, 17);
  v438 = __ROR4__(v246, 17);
  v398 = __ROR4__(v249, 17);
  v426 = __ROR4__(v245, 17);
  v450 = __ROR4__(v252, 17);
  v474 = __ROR4__(v247, 17);
  v253 = v757 & v247;
  v812 = (v757 | v247) & v596;
  v254 = v461
       + __ROR4__((unsigned __int16)(233 * v871) + 15269888 * v999 + v636 + ((v496 | v248) & v485 | v248 & v496), 27);
  v767 = v438
       + __ROR4__((unsigned __int16)(233 * v875) + 15269888 * v1003 + v674 + ((v532 | v250) & v543 | v250 & v532), 27);
  v255 = (unsigned __int16)(233 * v877) + 15269888 * v1005 + v687 + ((v608 | v245) & v552 | v245 & v608);
  v256 = v413
       + __ROR4__((unsigned __int16)(233 * v879) + 15269888 * v1007 + v699 + ((v622 | v246) & v563 | v246 & v622), 27);
  v257 = v450 + __ROR4__(v255, 27);
  v258 = v426
       + __ROR4__((unsigned __int16)(233 * v881) + 15269888 * v1009 + v710 + ((v649 | v252) & v574 | v252 & v649), 27);
  v259 = v474
       + __ROR4__((unsigned __int16)(233 * v873) + 15269888 * v1001 + v660 + ((v520 | v249) & v507 | v249 & v520), 27);
  v260 = v385
       + __ROR4__((unsigned __int16)(233 * v883) + 15269888 * v1011 + v723 + ((v747 | v251) & v585 | v747 & v251), 27);
  v261 = v398 + __ROR4__((unsigned __int16)(233 * v885) + 15269888 * v1013 + v735 + (v812 | v253), 27);
  v637 = __ROR4__(v254, 27);
  v675 = __ROR4__(v767, 27);
  v688 = __ROR4__(v257, 27);
  v661 = __ROR4__(v259, 27);
  v711 = __ROR4__(v258, 27);
  v724 = __ROR4__(v260, 27);
  v736 = __ROR4__(v261, 27);
  v700 = __ROR4__(v256, 27);
  v262 = (unsigned __int16)(233 * v933) + 15269888 * v1061 + v596 + ((v474 | v261) & v757 | v474 & v261);
  v263 = v736
       + __ROR4__((unsigned __int16)(233 * v929) + 15269888 * v1057 + v574 + ((v450 | v258) & v649 | v450 & v258), 3);
  v264 = v675
       + __ROR4__((unsigned __int16)(233 * v919) + 15269888 * v1047 + v485 + ((v385 | v254) & v496 | v385 & v254), 3);
  v265 = v637
       + __ROR4__((unsigned __int16)(233 * v923) + 15269888 * v1051 + v543 + ((v413 | v767) & v532 | v413 & v767), 3);
  v266 = v688
       + __ROR4__((unsigned __int16)(233 * v921) + 15269888 * v1049 + v507 + ((v398 | v259) & v520 | v398 & v259), 3);
  v267 = v263;
  v268 = v724
       + __ROR4__((unsigned __int16)(233 * v927) + 15269888 * v1055 + v563 + ((v438 | v256) & v622 | v438 & v256), 3);
  v269 = v661
       + __ROR4__((unsigned __int16)(233 * v925) + 15269888 * v1053 + v552 + ((v426 | v257) & v608 | v426 & v257), 3);
  v782 = v700
       + __ROR4__((unsigned __int16)(233 * v931) + 15269888 * v1059 + v585 + ((v461 | v260) & v747 | v461 & v260), 3);
  v553 = __ROR4__(v269, 28);
  v791 = v711 + __ROR4__(v262, 3);
  v486 = __ROR4__(v264, 28);
  v508 = __ROR4__(v266, 28);
  v575 = __ROR4__(v267, 28);
  v586 = __ROR4__(v782, 28);
  v597 = __ROR4__(v791, 28);
  v564 = __ROR4__(v268, 28);
  v544 = __ROR4__(v265, 28);
  v270 = (unsigned __int16)(233 * v972) + 15269888 * v1100 + v532 + ((v413 ^ v675) & v265 ^ v413);
  v271 = v586 + __ROR4__((unsigned __int16)(233 * v978) + 15269888 * v1106 + v649 + ((v450 ^ v711) & v267 ^ v450), 19);
  v272 = v544 + __ROR4__((unsigned __int16)(233 * v970) + 15269888 * v1098 + v520 + ((v398 ^ v661) & v266 ^ v398), 19);
  v533 = v553 + __ROR4__((unsigned __int16)(233 * v968) + 15269888 * v1096 + v496 + ((v385 ^ v637) & v264 ^ v385), 19);
  v273 = v575 + __ROR4__((unsigned __int16)(233 * v980) + 15269888 * v1108 + v747 + (v782 & (v461 ^ v724) ^ v461), 19);
  v274 = v486 + __ROR4__((unsigned __int16)(233 * v974) + 15269888 * v1102 + v608 + ((v426 ^ v688) & v269 ^ v426), 19);
  v768 = v597 + __ROR4__((unsigned __int16)(233 * v976) + 15269888 * v1104 + v622 + (v268 & (v438 ^ v700) ^ v438), 19);
  v275 = v564 + __ROR4__((unsigned __int16)(233 * v982) + 15269888 * v1110 + v757 + ((v474 ^ v736) & v791 ^ v474), 19);
  v497 = __ROR4__(v533, 19);
  v276 = v508 + __ROR4__(v270, 19);
  v609 = __ROR4__(v274, 19);
  v748 = __ROR4__(v273, 19);
  v521 = __ROR4__(v272, 19);
  v623 = __ROR4__(v768, 19);
  v650 = __ROR4__(v271, 19);
  v758 = __ROR4__(v275, 19);
  v277 = v533 & (v637 ^ v486);
  v534 = __ROR4__(v276, 19);
  v278 = v521 + __ROR4__((unsigned __int16)(233 * v880) + 15269888 * v1008 + v438 + (v768 & (v700 ^ v564) ^ v700), 22);
  v279 = v609 + __ROR4__((unsigned __int16)(233 * v884) + 15269888 * v1012 + v461 + (v273 & (v724 ^ v586) ^ v724), 22);
  v280 = v748 + __ROR4__((unsigned __int16)(233 * v878) + 15269888 * v1006 + v426 + (v274 & (v688 ^ v553) ^ v688), 22);
  v281 = v497 + __ROR4__((unsigned __int16)(233 * v882) + 15269888 * v1010 + v450 + (v271 & (v711 ^ v575) ^ v711), 22);
  v282 = v623 + __ROR4__((unsigned __int16)(233 * v874) + 15269888 * v1002 + v398 + (v272 & (v661 ^ v508) ^ v661), 22);
  v283 = v534 + __ROR4__((unsigned __int16)(233 * v886) + 15269888 * v1014 + v474 + (v275 & (v736 ^ v597) ^ v736), 22);
  v284 = v650 + __ROR4__((unsigned __int16)(233 * v872) + 15269888 * v1000 + v385 + (v277 ^ v637), 22);
  v769 = v758 + __ROR4__((unsigned __int16)(233 * v876) + 15269888 * v1004 + v413 + (v276 & (v675 ^ v544) ^ v675), 22);
  v439 = __ROR4__(v278, 22);
  v386 = __ROR4__(v284, 22);
  v427 = __ROR4__(v280, 22);
  v285 = (v553 ^ v609) & v280;
  v475 = __ROR4__(v283, 22);
  v451 = __ROR4__(v281, 22);
  v399 = __ROR4__(v282, 22);
  v414 = __ROR4__(v769, 22);
  v462 = __ROR4__(v279, 22);
  v286 = (v597 ^ v758) & v283;
  v287 = (v586 ^ v748) & v279;
  v288 = v451 + __ROR4__((unsigned __int16)(233 * v892) + 15269888 * v1020 + v675 + (v769 & (v544 ^ v534) ^ v544), 7);
  v289 = v439 + __ROR4__((unsigned __int16)(233 * v894) + 15269888 * v1022 + v688 + (v285 ^ v553), 7);
  v290 = v427 + __ROR4__((unsigned __int16)(233 * v896) + 15269888 * v1024 + v700 + (v278 & (v564 ^ v623) ^ v564), 7);
  v701 = __ROR4__(v290, 7);
  v291 = v414 + __ROR4__((unsigned __int16)(233 * v898) + 15269888 * v1026 + v711 + (v281 & (v575 ^ v650) ^ v575), 7);
  v770 = v475 + __ROR4__((unsigned __int16)(233 * v888) + 15269888 * v1016 + v637 + (v284 & (v486 ^ v497) ^ v486), 7);
  v689 = __ROR4__(v289, 7);
  v292 = v386 + __ROR4__((unsigned __int16)(233 * v902) + 15269888 * v1030 + v736 + (v286 ^ v597), 7);
  v737 = __ROR4__(v292, 7);
  v293 = v462 + __ROR4__((unsigned __int16)(233 * v890) + 15269888 * v1018 + v661 + ((v508 ^ v521) & v282 ^ v508), 7);
  v638 = __ROR4__(v770, 7);
  v294 = v399 + __ROR4__((unsigned __int16)(233 * v900) + 15269888 * v1028 + v724 + (v287 ^ v586), 7);
  v712 = __ROR4__(v291, 7);
  v662 = __ROR4__(v293, 7);
  v676 = __ROR4__(v288, 7);
  v725 = __ROR4__(v294, 7);
  v295 = v292 & (v758 ^ v475) ^ v758;
  v296 = (unsigned __int16)(233 * v996) + 15269888 * v1124 + v586 + ((v748 ^ v462) & v294 ^ v748);
  v783 = v638 + __ROR4__((unsigned __int16)(233 * v992) + 15269888 * v1120 + v564 + ((v623 ^ v439) & v290 ^ v623), 28);
  v297 = v701 + __ROR4__((unsigned __int16)(233 * v984) + 15269888 * v1112 + v486 + ((v497 ^ v386) & v770 ^ v497), 28);
  v298 = v689 + __ROR4__((unsigned __int16)(233 * v998) + 15269888 * v1126[0] + v597 + v295, 28);
  v771 = v737 + __ROR4__((unsigned __int16)(233 * v990) + 15269888 * v1118 + v553 + ((v609 ^ v427) & v289 ^ v609), 28);
  v299 = v712 + __ROR4__((unsigned __int16)(233 * v986) + 15269888 * v1114 + v508 + (v293 & (v521 ^ v399) ^ v521), 28);
  v804 = v662 + __ROR4__((unsigned __int16)(233 * v994) + 15269888 * v1122 + v575 + ((v650 ^ v451) & v291 ^ v650), 28);
  v792 = v676 + __ROR4__(v296, 28);
  v300 = v725 + __ROR4__((unsigned __int16)(233 * v988) + 15269888 * v1116 + v544 + (v288 & (v534 ^ v414) ^ v534), 28);
  v545 = __ROR4__(v300, 28);
  v554 = __ROR4__(v771, 28);
  v487 = __ROR4__(v297, 28);
  v576 = __ROR4__(v804, 28);
  v509 = __ROR4__(v299, 28);
  v565 = __ROR4__(v783, 28);
  v587 = __ROR4__(v792, 28);
  v598 = __ROR4__(v298, 28);
  v301 = (v638 | v297) & v386 | v638 & v297;
  v854 = (v676 | v300) & v414;
  v302 = v300 & v676;
  v303 = v487
       + __ROR4__((unsigned __int16)(233 * v922) + 15269888 * v1050 + v521 + ((v662 | v299) & v399 | v299 & v662), 19);
  v304 = v545
       + __ROR4__((unsigned __int16)(233 * v926) + 15269888 * v1054 + v609 + ((v689 | v771) & v427 | v689 & v771), 19);
  v305 = v554 + __ROR4__((unsigned __int16)(233 * v924) + 15269888 * v1052 + v534 + (v854 | v302), 19);
  v306 = v509 + __ROR4__((unsigned __int16)(233 * v920) + 15269888 * v1048 + v497 + v301, 19);
  v772 = v565
       + __ROR4__((unsigned __int16)(233 * v930) + 15269888 * v1058 + v650 + ((v712 | v804) & v451 | v712 & v804), 19);
  v784 = v576
       + __ROR4__((unsigned __int16)(233 * v928) + 15269888 * v1056 + v623 + ((v701 | v783) & v439 | v701 & v783), 19);
  v307 = v587
       + __ROR4__((unsigned __int16)(233 * v934) + 15269888 * v1062 + v758 + ((v737 | v298) & v475 | v298 & v737), 19);
  v308 = v598
       + __ROR4__((unsigned __int16)(233 * v932) + 15269888 * v1060 + v748 + ((v725 | v792) & v462 | v725 & v792), 19);
  v522 = __ROR4__(v303, 19);
  v498 = __ROR4__(v306, 19);
  v535 = __ROR4__(v305, 19);
  v749 = __ROR4__(v308, 19);
  v610 = __ROR4__(v304, 19);
  v624 = __ROR4__(v784, 19);
  v759 = __ROR4__(v307, 19);
  v651 = __ROR4__(v772, 19);
  v870 = 233 * v918;
  v309 = (v598 | v307) & v737 | v307 & v598;
  v310 = (v554 | v304) & v689 | v554 & v304;
  v311 = v749
       + __ROR4__((unsigned __int16)(233 * v952) + 15269888 * v1080 + v386 + ((v487 | v306) & v638 | v306 & v487), 22);
  v312 = v759
       + __ROR4__((unsigned __int16)(233 * v954) + 15269888 * v1082 + v399 + ((v509 | v303) & v662 | v509 & v303), 22);
  v313 = v651 + __ROR4__((unsigned __int16)(233 * v958) + 15269888 * v1086 + v427 + v310, 22);
  v314 = v624
       + __ROR4__((unsigned __int16)(233 * v956) + 15269888 * v1084 + v414 + ((v545 | v305) & v676 | v305 & v545), 22);
  v315 = v535
       + __ROR4__((unsigned __int16)(233 * v960) + 15269888 * v1088 + v439 + ((v565 | v784) & v701 | v565 & v784), 22);
  v387 = __ROR4__(v311, 22);
  v316 = v498
       + __ROR4__((unsigned __int16)(233 * v964) + 15269888 * v1092 + v462 + ((v587 | v308) & v725 | v308 & v587), 22);
  v317 = v610
       + __ROR4__((unsigned __int16)(233 * v962) + 15269888 * v1090 + v451 + ((v576 | v772) & v712 | v576 & v772), 22);
  v400 = __ROR4__(v312, 22);
  v318 = v522 + __ROR4__((unsigned __int16)(233 * v966) + 15269888 * v1094 + v475 + v309, 22);
  v415 = __ROR4__(v314, 22);
  v428 = __ROR4__(v313, 22);
  v440 = __ROR4__(v315, 22);
  v463 = __ROR4__(v316, 22);
  v452 = __ROR4__(v317, 22);
  v319 = (v498 | v311) & v487;
  v476 = __ROR4__(v318, 22);
  v773 = v498 & v311;
  v320 = (v535 | v314) & v545 | v535 & v314;
  v793 = (v651 | v317) & v576;
  v321 = v651 & v317;
  v322 = v415 + __ROR4__((unsigned __int16)(233 * v936) + 15269888 * v1064 + v638 + (v319 | v773), 7);
  v323 = v400
       + __ROR4__((unsigned __int16)(233 * v942) + 15269888 * v1070 + v689 + ((v610 | v313) & v554 | v313 & v610), 7);
  v324 = v387 + __ROR4__((unsigned __int16)(233 * v940) + 15269888 * v1068 + v676 + v320, 7);
  v325 = v476 + __ROR4__((unsigned __int16)(233 * v946) + 15269888 * v1074 + v712 + (v793 | v321), 7);
  v326 = v440
       + __ROR4__((unsigned __int16)(233 * v948) + 15269888 * v1076 + v725 + ((v749 | v316) & v587 | v316 & v749), 7);
  v785 = v463
       + __ROR4__((unsigned __int16)(233 * v944) + 15269888 * v1072 + v701 + ((v624 | v315) & v565 | v315 & v624), 7);
  v677 = __ROR4__(v324, 7);
  v702 = __ROR4__(v785, 7);
  v327 = v428
       + __ROR4__((unsigned __int16)(233 * v938) + 15269888 * v1066 + v662 + ((v522 | v312) & v509 | v522 & v312), 7);
  v726 = __ROR4__(v326, 7);
  v328 = v452
       + __ROR4__((unsigned __int16)(233 * v950) + 15269888 * v1078 + v737 + ((v759 | v318) & v598 | v318 & v759), 7);
  v639 = __ROR4__(v322, 7);
  v663 = __ROR4__(v327, 7);
  v690 = __ROR4__(v323, 7);
  v713 = __ROR4__(v325, 7);
  v738 = __ROR4__(v328, 7);
  v329 = v713
       + __ROR4__((unsigned __int16)(233 * v916) + 15269888 * v1044 + v587 + ((v463 | v326) & v749 | v463 & v326), 28);
  v330 = v663
       + __ROR4__((unsigned __int16)(233 * v908) + 15269888 * v1036 + v545 + ((v415 | v324) & v535 | v324 & v415), 28);
  v331 = v677
       + __ROR4__((unsigned __int16)(233 * v906) + 15269888 * v1034 + v509 + ((v400 | v327) & v522 | v327 & v400), 28);
  v332 = v639
       + __ROR4__((unsigned __int16)(233 * v910) + 15269888 * v1038 + v554 + ((v428 | v323) & v610 | v323 & v428), 28);
  v333 = v702
       + __ROR4__((unsigned __int16)(233 * v918) + 15269888 * v1046 + v598 + ((v476 | v328) & v759 | v476 & v328), 28);
  v334 = v726
       + __ROR4__((unsigned __int16)(233 * v914) + 15269888 * v1042 + v576 + ((v452 | v325) & v651 | v452 & v325), 28);
  v335 = v690
       + __ROR4__((unsigned __int16)(233 * v904) + 15269888 * v1032 + v487 + ((v387 | v322) & v498 | v322 & v387), 28);
  v599 = __ROR4__(v333, 28);
  v336 = v738
       + __ROR4__((unsigned __int16)(233 * v912) + 15269888 * v1040 + v565 + ((v440 | v785) & v624 | v785 & v440), 28);
  v510 = __ROR4__(v331, 28);
  v488 = __ROR4__(v335, 28);
  v577 = __ROR4__(v334, 28);
  v546 = __ROR4__(v330, 28);
  v566 = __ROR4__(v336, 28);
  v555 = __ROR4__(v332, 28);
  v588 = __ROR4__(v329, 28);
  v337 = (v336 & (v440 ^ v702) ^ v440) + v849 + v624;
  v338 = (v400 ^ v663) & v331 ^ v400;
  v339 = v488 + __ROR4__((v334 & (v452 ^ v713) ^ v452) + v818 + v651, 19);
  v340 = (v329 & (v463 ^ v726) ^ v463) + v819 + v749;
  v774 = v577 + __ROR4__((v335 & (v387 ^ v639) ^ v387) + v845 + v498, 19);
  v341 = v588 + __ROR4__(((v428 ^ v690) & v332 ^ v428) + v848 + v610, 19);
  v342 = v546 + __ROR4__(((v476 ^ v738) & v333 ^ v476) + v820 + v759, 19);
  v343 = v566 + __ROR4__(v338 + v846 + v522, 19);
  v344 = v599 + __ROR4__(((v415 ^ v677) & v330 ^ v415) + v847 + v535, 19);
  v345 = v555 + __ROR4__(v340, 19);
  v346 = v510 + __ROR4__(v337, 19);
  v499 = __ROR4__(v774, 19);
  v760 = __ROR4__(v342, 19);
  v625 = __ROR4__(v346, 19);
  v611 = __ROR4__(v341, 19);
  v523 = __ROR4__(v343, 19);
  v750 = __ROR4__(v345, 19);
  v652 = __ROR4__(v339, 19);
  v536 = __ROR4__(v344, 19);
  v347 = (v346 & (v702 ^ v566) ^ v702) + v825 + v440;
  v348 = (v344 & (v677 ^ v546) ^ v677) + v823 + v415;
  v349 = v523 + __ROR4__((v345 & (v726 ^ v588) ^ v726) + v827 + v463, 22);
  v350 = v499 + __ROR4__((v342 & (v738 ^ v599) ^ v738) + v828 + v476, 22);
  v351 = v760 + __ROR4__(((v639 ^ v488) & v774 ^ v639) + v821 + v387, 22);
  v352 = v625 + __ROR4__((v341 & (v690 ^ v555) ^ v690) + v824 + v428, 22);
  v353 = v750 + __ROR4__((v343 & (v663 ^ v510) ^ v663) + v822 + v400, 22);
  v354 = v611 + __ROR4__(v347, 22);
  v355 = v536 + __ROR4__((v339 & (v713 ^ v577) ^ v713) + v826 + v452, 22);
  v441 = __ROR4__(v354, 22);
  v401 = __ROR4__(v353, 22);
  v356 = v652 + __ROR4__(v348, 22);
  v388 = __ROR4__(v351, 22);
  v453 = __ROR4__(v355, 22);
  v464 = __ROR4__(v349, 22);
  v429 = __ROR4__(v352, 22);
  v416 = __ROR4__(v356, 22);
  v477 = __ROR4__(v350, 22);
  v357 = v464 + __ROR4__((v356 & (v546 ^ v536) ^ v546) + v831 + v677, 7);
  v358 = v453 + __ROR4__((v353 & (v510 ^ v523) ^ v510) + v830 + v663, 7);
  v359 = v388 + __ROR4__((v354 & (v566 ^ v625) ^ v566) + v833 + v702, 7);
  v360 = v441 + __ROR4__((v351 & (v488 ^ v499) ^ v488) + v829 + v639, 7);
  v361 = v429 + __ROR4__(((v599 ^ v760) & v350 ^ v599) + v836 + v738, 7);
  v640 = v401 + __ROR4__((v355 & (v577 ^ v652) ^ v577) + v834 + v713, 7);
  v775 = __ROR4__(v359, 7);
  v362 = v416 + __ROR4__((v349 & (v588 ^ v750) ^ v588) + v835 + v726, 7);
  v363 = v477 + __ROR4__(((v555 ^ v611) & v352 ^ v555) + v832 + v690, 7);
  v664 = __ROR4__(v357, 7);
  v703 = __ROR4__(v362, 7);
  v678 = __ROR4__(v363, 7);
  v714 = __ROR4__(v361, 7);
  v364 = __ROR4__(v360, 7);
  v365 = __ROR4__(v358, 7);
  *(_DWORD *)(a1 + 132) = v365 + __ROR4__((v360 & (v499 ^ v388) ^ v499) + v837 + v488, 28);
  *(_DWORD *)(a1 + 164) = v364;
  *(_DWORD *)(a1 + 168) = v365;
  *(_DWORD *)(a1 + 200) = v401;
  *(_DWORD *)(a1 + 232) = v523;
  *(_DWORD *)(a1 + 196) = v388;
  *(_DWORD *)(a1 + 212) = v441;
  *(_DWORD *)(a1 + 180) = v775;
  *(_DWORD *)(a1 + 216) = v453;
  *(_DWORD *)(a1 + 228) = v499;
  *(_DWORD *)(a1 + 236) = v536;
  *(_DWORD *)(a1 + 256) = v760;
  *(_DWORD *)(a1 + 152) = v775 + __ROR4__((v640 & (v652 ^ v453) ^ v652) + v842 + v577, 28);
  *(_DWORD *)(a1 + 240) = v611;
  *(_DWORD *)(a1 + 136) = v364 + __ROR4__((v358 & (v523 ^ v401) ^ v523) + v838 + v510, 28);
  *(_DWORD *)(a1 + 204) = v416;
  result = __ROR4__(v640, 7);
  *(_DWORD *)(a1 + 220) = v464;
  *(_DWORD *)(a1 + 208) = v429;
  *(_DWORD *)(a1 + 172) = v664;
  *(_DWORD *)(a1 + 244) = v625;
  *(_DWORD *)(a1 + 248) = v652;
  *(_DWORD *)(a1 + 252) = v750;
  *(_DWORD *)(a1 + 148) = result + __ROR4__((v359 & (v625 ^ v441) ^ v625) + v841 + v566, 28);
  *(_DWORD *)(a1 + 184) = result;
  *(_DWORD *)(a1 + 188) = v703;
  *(_DWORD *)(a1 + 224) = v477;
  *(_DWORD *)(a1 + 144) = v664 + __ROR4__((v363 & (v611 ^ v429) ^ v611) + v840 + v555, 28);
  *(_DWORD *)(a1 + 140) = v678 + __ROR4__((v357 & (v536 ^ v416) ^ v536) + v839 + v546, 28);
  *(_DWORD *)(a1 + 176) = v678;
  *(_DWORD *)(a1 + 160) = v703 + __ROR4__((v361 & (v760 ^ v477) ^ v760) + v844 + v599, 28);
  *(_DWORD *)(a1 + 156) = v714 + __ROR4__((v362 & (v750 ^ v464) ^ v750) + v843 + v588, 28);
  *(_DWORD *)(a1 + 192) = v714;
  return result;
}
