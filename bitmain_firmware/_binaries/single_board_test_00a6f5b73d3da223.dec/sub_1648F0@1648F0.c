unsigned int __fastcall sub_1648F0(int *a1, char a2, char a3, _BYTE *a4)
{
  int v4; // r3
  unsigned int result; // r0
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+14h] [bp+14h]
  int v9; // [sp+18h] [bp+18h]
  int v10; // [sp+18h] [bp+18h]
  int v11; // [sp+1Ch] [bp+1Ch]
  int v12; // [sp+1Ch] [bp+1Ch]
  int v13; // [sp+20h] [bp+20h]
  int v14; // [sp+20h] [bp+20h]
  int v15; // [sp+24h] [bp+24h]
  int v16; // [sp+24h] [bp+24h]
  int v17; // [sp+28h] [bp+28h]
  int v18; // [sp+28h] [bp+28h]
  int v19; // [sp+2Ch] [bp+2Ch]
  int v20; // [sp+2Ch] [bp+2Ch]
  int v21; // [sp+30h] [bp+30h]
  int v22; // [sp+30h] [bp+30h]
  int v23; // [sp+34h] [bp+34h]
  int v24; // [sp+34h] [bp+34h]
  int v25; // [sp+38h] [bp+38h]
  int v26; // [sp+38h] [bp+38h]
  unsigned int v27; // [sp+44h] [bp+44h]
  int v28; // [sp+4Ch] [bp+4Ch]
  int v29; // [sp+50h] [bp+50h]
  int v30; // [sp+54h] [bp+54h]
  int v31; // [sp+58h] [bp+58h]
  int v32; // [sp+60h] [bp+60h]
  int v33; // [sp+64h] [bp+64h]
  int v34; // [sp+68h] [bp+68h]
  int v35; // [sp+6Ch] [bp+6Ch]
  int v36; // [sp+74h] [bp+74h]
  int v37; // [sp+78h] [bp+78h]
  int v38; // [sp+7Ch] [bp+7Ch]
  int v39; // [sp+80h] [bp+80h]
  int v40; // [sp+84h] [bp+84h]
  int v41; // [sp+88h] [bp+88h]
  int v42; // [sp+8Ch] [bp+8Ch]
  int v43; // [sp+90h] [bp+90h]
  int v44; // [sp+94h] [bp+94h]
  int v45; // [sp+98h] [bp+98h]
  int v46; // [sp+9Ch] [bp+9Ch]
  int v47; // [sp+A0h] [bp+A0h]
  int v48; // [sp+A4h] [bp+A4h]
  int v49; // [sp+A8h] [bp+A8h]
  int v50; // [sp+ACh] [bp+ACh]
  int v51; // [sp+B0h] [bp+B0h]
  unsigned int v52; // [sp+BCh] [bp+BCh]
  unsigned int v53; // [sp+BCh] [bp+BCh]
  unsigned int v54; // [sp+C0h] [bp+C0h]
  unsigned int v55; // [sp+C4h] [bp+C4h]
  unsigned int v56; // [sp+C8h] [bp+C8h]
  unsigned int v57; // [sp+C8h] [bp+C8h]
  unsigned int v58; // [sp+CCh] [bp+CCh]
  unsigned int v59; // [sp+D0h] [bp+D0h]
  unsigned int v60; // [sp+D4h] [bp+D4h]
  int j; // [sp+E8h] [bp+E8h]
  int k; // [sp+E8h] [bp+E8h]
  int m; // [sp+E8h] [bp+E8h]
  int n; // [sp+E8h] [bp+E8h]
  int ii; // [sp+E8h] [bp+E8h]
  int v68; // [sp+ECh] [bp+ECh]
  int v69; // [sp+ECh] [bp+ECh]
  int v70; // [sp+ECh] [bp+ECh]
  int v71; // [sp+ECh] [bp+ECh]
  int v72; // [sp+ECh] [bp+ECh]
  int v73; // [sp+ECh] [bp+ECh]
  int v74; // [sp+ECh] [bp+ECh]
  int v75; // [sp+ECh] [bp+ECh]
  int v76; // [sp+ECh] [bp+ECh]
  int v77; // [sp+ECh] [bp+ECh]
  int v78; // [sp+ECh] [bp+ECh]
  int v79; // [sp+F0h] [bp+F0h]
  int v80; // [sp+F0h] [bp+F0h]
  int v81; // [sp+F0h] [bp+F0h]
  int v82; // [sp+F0h] [bp+F0h]
  int v83; // [sp+F0h] [bp+F0h]
  int v84; // [sp+F0h] [bp+F0h]
  int v85; // [sp+F0h] [bp+F0h]
  int v86; // [sp+F0h] [bp+F0h]
  int v87; // [sp+F0h] [bp+F0h]
  int v88; // [sp+F0h] [bp+F0h]
  int v89; // [sp+F0h] [bp+F0h]
  int v90; // [sp+F4h] [bp+F4h]
  int v91; // [sp+F4h] [bp+F4h]
  int v92; // [sp+F4h] [bp+F4h]
  int v93; // [sp+F4h] [bp+F4h]
  int v94; // [sp+F4h] [bp+F4h]
  int v95; // [sp+F4h] [bp+F4h]
  int v96; // [sp+F4h] [bp+F4h]
  int v97; // [sp+F4h] [bp+F4h]
  int v98; // [sp+F4h] [bp+F4h]
  int v99; // [sp+F8h] [bp+F8h]
  int v100; // [sp+F8h] [bp+F8h]
  int v101; // [sp+F8h] [bp+F8h]
  int v102; // [sp+F8h] [bp+F8h]
  int v103; // [sp+F8h] [bp+F8h]
  int v104; // [sp+F8h] [bp+F8h]
  int v105; // [sp+F8h] [bp+F8h]
  int v106; // [sp+F8h] [bp+F8h]
  int v107; // [sp+F8h] [bp+F8h]
  int v108; // [sp+F8h] [bp+F8h]
  int v109; // [sp+F8h] [bp+F8h]
  int v110; // [sp+FCh] [bp+FCh]
  int v111; // [sp+FCh] [bp+FCh]
  int v112; // [sp+FCh] [bp+FCh]
  int v113; // [sp+FCh] [bp+FCh]
  int v114; // [sp+FCh] [bp+FCh]
  int v115; // [sp+FCh] [bp+FCh]
  int v116; // [sp+FCh] [bp+FCh]
  int v117; // [sp+FCh] [bp+FCh]
  int v118; // [sp+FCh] [bp+FCh]
  int v119; // [sp+FCh] [bp+FCh]
  int v120; // [sp+100h] [bp+100h]
  int v121; // [sp+100h] [bp+100h]
  int v122; // [sp+100h] [bp+100h]
  int v123; // [sp+100h] [bp+100h]
  int v124; // [sp+100h] [bp+100h]
  int v125; // [sp+100h] [bp+100h]
  int v126; // [sp+100h] [bp+100h]
  int v127; // [sp+100h] [bp+100h]
  int v128; // [sp+100h] [bp+100h]
  int v129; // [sp+100h] [bp+100h]
  int v130; // [sp+104h] [bp+104h]
  int v131; // [sp+104h] [bp+104h]
  int v132; // [sp+104h] [bp+104h]
  int v133; // [sp+104h] [bp+104h]
  int v134; // [sp+104h] [bp+104h]
  int v135; // [sp+104h] [bp+104h]
  int v136; // [sp+104h] [bp+104h]
  int v137; // [sp+104h] [bp+104h]
  int v138; // [sp+108h] [bp+108h]
  int v139; // [sp+108h] [bp+108h]
  int v140; // [sp+108h] [bp+108h]
  int v141; // [sp+108h] [bp+108h]
  int v142; // [sp+10Ch] [bp+10Ch]
  int v143; // [sp+10Ch] [bp+10Ch]
  int v144; // [sp+10Ch] [bp+10Ch]
  int v145; // [sp+10Ch] [bp+10Ch]
  int v146; // [sp+10Ch] [bp+10Ch]
  int v147; // [sp+10Ch] [bp+10Ch]
  int v148; // [sp+10Ch] [bp+10Ch]
  int v149; // [sp+10Ch] [bp+10Ch]
  int v150; // [sp+10Ch] [bp+10Ch]
  int v151; // [sp+10Ch] [bp+10Ch]
  int v152; // [sp+10Ch] [bp+10Ch]
  int v153; // [sp+110h] [bp+110h]
  int v154; // [sp+110h] [bp+110h]
  int v155; // [sp+110h] [bp+110h]
  int v156; // [sp+110h] [bp+110h]
  int v157; // [sp+110h] [bp+110h]
  int v158; // [sp+110h] [bp+110h]
  int v159; // [sp+110h] [bp+110h]
  int v160; // [sp+110h] [bp+110h]
  int v161; // [sp+110h] [bp+110h]
  int v162; // [sp+110h] [bp+110h]
  int v163; // [sp+110h] [bp+110h]
  int v164; // [sp+114h] [bp+114h]
  int v165; // [sp+114h] [bp+114h]
  int v166; // [sp+114h] [bp+114h]
  int v167; // [sp+114h] [bp+114h]
  int v168; // [sp+114h] [bp+114h]
  int v169; // [sp+114h] [bp+114h]
  int v170; // [sp+114h] [bp+114h]
  int v171; // [sp+114h] [bp+114h]
  int v172; // [sp+114h] [bp+114h]
  int v173; // [sp+118h] [bp+118h]
  int v174; // [sp+118h] [bp+118h]
  int v175; // [sp+118h] [bp+118h]
  int v176; // [sp+118h] [bp+118h]
  int v177; // [sp+118h] [bp+118h]
  int v178; // [sp+118h] [bp+118h]
  int v179; // [sp+118h] [bp+118h]
  int v180; // [sp+118h] [bp+118h]
  int v181; // [sp+118h] [bp+118h]
  int v182; // [sp+118h] [bp+118h]
  int v183; // [sp+118h] [bp+118h]
  int v184; // [sp+11Ch] [bp+11Ch]
  int v185; // [sp+11Ch] [bp+11Ch]
  int v186; // [sp+11Ch] [bp+11Ch]
  int v187; // [sp+11Ch] [bp+11Ch]
  int v188; // [sp+11Ch] [bp+11Ch]
  int v189; // [sp+11Ch] [bp+11Ch]
  int v190; // [sp+11Ch] [bp+11Ch]
  int v191; // [sp+11Ch] [bp+11Ch]
  int v192; // [sp+11Ch] [bp+11Ch]
  int v193; // [sp+11Ch] [bp+11Ch]
  int v194; // [sp+120h] [bp+120h]
  int v195; // [sp+120h] [bp+120h]
  int v196; // [sp+120h] [bp+120h]
  int v197; // [sp+120h] [bp+120h]
  int v198; // [sp+120h] [bp+120h]
  int v199; // [sp+120h] [bp+120h]
  int v200; // [sp+120h] [bp+120h]
  int v201; // [sp+120h] [bp+120h]
  int v202; // [sp+120h] [bp+120h]
  int v203; // [sp+120h] [bp+120h]
  int v204; // [sp+124h] [bp+124h]
  int v205; // [sp+124h] [bp+124h]
  int v206; // [sp+124h] [bp+124h]
  int v207; // [sp+124h] [bp+124h]
  int v208; // [sp+124h] [bp+124h]
  int v209; // [sp+124h] [bp+124h]
  int v210; // [sp+124h] [bp+124h]
  int v211; // [sp+124h] [bp+124h]
  int v212; // [sp+128h] [bp+128h]
  int v213; // [sp+128h] [bp+128h]
  int v214; // [sp+128h] [bp+128h]
  int v215; // [sp+128h] [bp+128h]
  int v216; // [sp+12Ch] [bp+12Ch]
  int v217; // [sp+12Ch] [bp+12Ch]
  int v218; // [sp+12Ch] [bp+12Ch]
  int v219; // [sp+12Ch] [bp+12Ch]
  int v220; // [sp+12Ch] [bp+12Ch]
  int v221; // [sp+12Ch] [bp+12Ch]
  int v222; // [sp+12Ch] [bp+12Ch]
  int v223; // [sp+12Ch] [bp+12Ch]
  int v224; // [sp+12Ch] [bp+12Ch]
  int v225; // [sp+12Ch] [bp+12Ch]
  int v226; // [sp+12Ch] [bp+12Ch]
  int v227; // [sp+130h] [bp+130h]
  int v228; // [sp+130h] [bp+130h]
  int v229; // [sp+130h] [bp+130h]
  int v230; // [sp+130h] [bp+130h]
  int v231; // [sp+130h] [bp+130h]
  int v232; // [sp+130h] [bp+130h]
  int v233; // [sp+130h] [bp+130h]
  int v234; // [sp+130h] [bp+130h]
  int v235; // [sp+130h] [bp+130h]
  int v236; // [sp+130h] [bp+130h]
  int v237; // [sp+130h] [bp+130h]
  int v238; // [sp+134h] [bp+134h]
  int v239; // [sp+134h] [bp+134h]
  int v240; // [sp+134h] [bp+134h]
  int v241; // [sp+134h] [bp+134h]
  int v242; // [sp+134h] [bp+134h]
  int v243; // [sp+134h] [bp+134h]
  unsigned int v244; // [sp+134h] [bp+134h]
  int v245; // [sp+134h] [bp+134h]
  int v246; // [sp+134h] [bp+134h]
  int v247; // [sp+134h] [bp+134h]
  int v248; // [sp+138h] [bp+138h]
  int v249; // [sp+138h] [bp+138h]
  int v250; // [sp+138h] [bp+138h]
  int v251; // [sp+138h] [bp+138h]
  int v252; // [sp+138h] [bp+138h]
  int v253; // [sp+138h] [bp+138h]
  unsigned int v254; // [sp+138h] [bp+138h]
  int v255; // [sp+138h] [bp+138h]
  int v256; // [sp+138h] [bp+138h]
  int v257; // [sp+138h] [bp+138h]
  int v258; // [sp+138h] [bp+138h]
  int v259; // [sp+138h] [bp+138h]
  int v260; // [sp+13Ch] [bp+13Ch]
  int v261; // [sp+13Ch] [bp+13Ch]
  int v262; // [sp+13Ch] [bp+13Ch]
  int v263; // [sp+13Ch] [bp+13Ch]
  int v264; // [sp+13Ch] [bp+13Ch]
  int v265; // [sp+13Ch] [bp+13Ch]
  int v266; // [sp+13Ch] [bp+13Ch]
  int v267; // [sp+13Ch] [bp+13Ch]
  int v268; // [sp+13Ch] [bp+13Ch]
  int v269; // [sp+13Ch] [bp+13Ch]
  int v270; // [sp+140h] [bp+140h]
  int v271; // [sp+140h] [bp+140h]
  int v272; // [sp+140h] [bp+140h]
  int v273; // [sp+140h] [bp+140h]
  int v274; // [sp+140h] [bp+140h]
  int v275; // [sp+140h] [bp+140h]
  int v276; // [sp+140h] [bp+140h]
  int v277; // [sp+140h] [bp+140h]
  int v278; // [sp+140h] [bp+140h]
  int v279; // [sp+140h] [bp+140h]
  int v280; // [sp+144h] [bp+144h]
  int v281; // [sp+144h] [bp+144h]
  int v282; // [sp+144h] [bp+144h]
  int v283; // [sp+144h] [bp+144h]
  int v284; // [sp+144h] [bp+144h]
  int v285; // [sp+144h] [bp+144h]
  int v286; // [sp+144h] [bp+144h]
  int v287; // [sp+144h] [bp+144h]
  int v288; // [sp+148h] [bp+148h]
  int v289; // [sp+148h] [bp+148h]
  int v290; // [sp+148h] [bp+148h]
  int v291; // [sp+148h] [bp+148h]
  int v292; // [sp+14Ch] [bp+14Ch]
  int v293; // [sp+14Ch] [bp+14Ch]
  int v294; // [sp+14Ch] [bp+14Ch]
  int v295; // [sp+14Ch] [bp+14Ch]
  int v296; // [sp+14Ch] [bp+14Ch]
  int v297; // [sp+14Ch] [bp+14Ch]
  int v298; // [sp+14Ch] [bp+14Ch]
  int v299; // [sp+14Ch] [bp+14Ch]
  int v300; // [sp+14Ch] [bp+14Ch]
  int v301; // [sp+14Ch] [bp+14Ch]
  int v302; // [sp+14Ch] [bp+14Ch]
  int v303; // [sp+150h] [bp+150h]
  int v304; // [sp+150h] [bp+150h]
  int v305; // [sp+150h] [bp+150h]
  int v306; // [sp+150h] [bp+150h]
  int v307; // [sp+150h] [bp+150h]
  int v308; // [sp+150h] [bp+150h]
  int v309; // [sp+150h] [bp+150h]
  int v310; // [sp+150h] [bp+150h]
  int v311; // [sp+150h] [bp+150h]
  int v312; // [sp+150h] [bp+150h]
  int v313; // [sp+154h] [bp+154h]
  int v314; // [sp+154h] [bp+154h]
  int v315; // [sp+154h] [bp+154h]
  int v316; // [sp+154h] [bp+154h]
  int v317; // [sp+154h] [bp+154h]
  int v318; // [sp+154h] [bp+154h]
  int v319; // [sp+154h] [bp+154h]
  int v320; // [sp+154h] [bp+154h]
  int v321; // [sp+158h] [bp+158h]
  int v322; // [sp+158h] [bp+158h]
  int v323; // [sp+158h] [bp+158h]
  int v324; // [sp+158h] [bp+158h]
  int v325; // [sp+158h] [bp+158h]
  unsigned int v326; // [sp+158h] [bp+158h]
  int v327; // [sp+158h] [bp+158h]
  int v328; // [sp+158h] [bp+158h]
  int v329; // [sp+158h] [bp+158h]
  int v330; // [sp+158h] [bp+158h]
  int v331; // [sp+158h] [bp+158h]
  int v332; // [sp+15Ch] [bp+15Ch]
  int v333; // [sp+15Ch] [bp+15Ch]
  int v334; // [sp+15Ch] [bp+15Ch]
  int v335; // [sp+15Ch] [bp+15Ch]
  int v336; // [sp+15Ch] [bp+15Ch]
  int v337; // [sp+15Ch] [bp+15Ch]
  int v338; // [sp+15Ch] [bp+15Ch]
  int v339; // [sp+15Ch] [bp+15Ch]
  int v340; // [sp+15Ch] [bp+15Ch]
  int v341; // [sp+160h] [bp+160h]
  int v342; // [sp+160h] [bp+160h]
  int v343; // [sp+160h] [bp+160h]
  int v344; // [sp+160h] [bp+160h]
  int v345; // [sp+160h] [bp+160h]
  int v346; // [sp+160h] [bp+160h]
  int v347; // [sp+160h] [bp+160h]
  int v348; // [sp+160h] [bp+160h]
  int v349; // [sp+160h] [bp+160h]
  int v350; // [sp+164h] [bp+164h]
  int v351; // [sp+164h] [bp+164h]
  int v352; // [sp+164h] [bp+164h]
  int v353; // [sp+164h] [bp+164h]
  int v354; // [sp+164h] [bp+164h]
  int v355; // [sp+164h] [bp+164h]
  int v356; // [sp+164h] [bp+164h]
  int v357; // [sp+168h] [bp+168h]
  int v358; // [sp+168h] [bp+168h]
  int v359; // [sp+168h] [bp+168h]
  int v360; // [sp+168h] [bp+168h]
  unsigned int v361; // [sp+16Ch] [bp+16Ch]
  int v362; // [sp+16Ch] [bp+16Ch]
  int v363; // [sp+16Ch] [bp+16Ch]
  int v364; // [sp+16Ch] [bp+16Ch]
  int v365; // [sp+16Ch] [bp+16Ch]
  int v366; // [sp+16Ch] [bp+16Ch]
  int v367; // [sp+16Ch] [bp+16Ch]
  int v368; // [sp+170h] [bp+170h]
  int v369; // [sp+170h] [bp+170h]
  int v370; // [sp+170h] [bp+170h]
  int v371; // [sp+170h] [bp+170h]
  int v372; // [sp+170h] [bp+170h]
  int v373; // [sp+170h] [bp+170h]
  int v374; // [sp+170h] [bp+170h]
  int v375; // [sp+174h] [bp+174h]
  int v376; // [sp+174h] [bp+174h]
  int v377; // [sp+174h] [bp+174h]
  int v378; // [sp+174h] [bp+174h]
  int v379; // [sp+174h] [bp+174h]
  int v380; // [sp+174h] [bp+174h]
  int v381; // [sp+178h] [bp+178h]
  int v382; // [sp+178h] [bp+178h]
  int v383; // [sp+178h] [bp+178h]
  int v384; // [sp+178h] [bp+178h]
  int v385; // [sp+178h] [bp+178h]
  int v386; // [sp+178h] [bp+178h]
  int v387; // [sp+178h] [bp+178h]
  int v388; // [sp+178h] [bp+178h]
  int v389; // [sp+17Ch] [bp+17Ch]
  int v390; // [sp+17Ch] [bp+17Ch]
  int v391; // [sp+17Ch] [bp+17Ch]
  int v392; // [sp+17Ch] [bp+17Ch]
  int v393; // [sp+17Ch] [bp+17Ch]
  int v394; // [sp+17Ch] [bp+17Ch]
  int v395; // [sp+17Ch] [bp+17Ch]
  int v396; // [sp+180h] [bp+180h]
  int v397; // [sp+180h] [bp+180h]
  int v398; // [sp+180h] [bp+180h]
  int v399; // [sp+180h] [bp+180h]
  int v400; // [sp+180h] [bp+180h]
  int v401; // [sp+180h] [bp+180h]
  int v402; // [sp+180h] [bp+180h]
  int v403; // [sp+184h] [bp+184h]
  int v404; // [sp+184h] [bp+184h]
  int v405; // [sp+184h] [bp+184h]
  int v406; // [sp+184h] [bp+184h]
  int v407; // [sp+184h] [bp+184h]
  int v408; // [sp+184h] [bp+184h]
  int v409; // [sp+184h] [bp+184h]
  int v410; // [sp+188h] [bp+188h]
  int v411; // [sp+188h] [bp+188h]
  int v412; // [sp+188h] [bp+188h]
  int v413; // [sp+188h] [bp+188h]
  int i; // [sp+18Ch] [bp+18Ch]

  v4 = a1[8];
  *((_BYTE *)a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  result = (unsigned int)memset((char *)a1 + v4 + 1, 0, 31 - v4);
  v410 = a1[9];
  v403 = a1[10];
  v396 = a1[11];
  v389 = a1[12];
  v381 = a1[13];
  v375 = a1[14];
  v368 = a1[15];
  v361 = a1[16];
  v357 = a1[17];
  v350 = a1[18];
  v341 = a1[19];
  v332 = a1[20];
  v321 = a1[21];
  v313 = a1[22];
  v303 = a1[23];
  v292 = a1[24];
  v288 = a1[25];
  v280 = a1[26];
  v270 = a1[27];
  v260 = a1[28];
  v248 = a1[29];
  v238 = a1[30];
  v227 = a1[31];
  v216 = a1[32];
  v212 = a1[33];
  v204 = a1[34];
  v194 = a1[35];
  v184 = a1[36];
  v173 = a1[37];
  v164 = a1[38];
  v153 = a1[39];
  v142 = a1[40];
  v138 = a1[41];
  v130 = a1[42];
  v120 = a1[43];
  v110 = a1[44];
  v99 = a1[45];
  v90 = a1[46];
  v79 = a1[47];
  v68 = a1[48];
  for ( i = 0; i <= 2; ++i )
  {
    v60 = sub_15CA34(a1);
    v59 = sub_15CA34(a1 + 1);
    v58 = sub_15CA34(a1 + 2);
    v56 = sub_15CA34(a1 + 3);
    v55 = sub_15CA34(a1 + 4);
    v54 = sub_15CA34(a1 + 5);
    v52 = sub_15CA34(a1 + 6);
    result = sub_15CA34(a1 + 7);
    v36 = v68 ^ v142 ^ v216 ^ v292 ^ v361;
    v45 = v79 ^ v153 ^ v227 ^ v303 ^ v368;
    v46 = v90 ^ v164 ^ v238 ^ v313 ^ v375;
    v47 = v99 ^ v173 ^ v248 ^ v321 ^ v381;
    v48 = v36 ^ v110 ^ v184 ^ v260 ^ v332 ^ v389;
    v49 = v36 ^ v120 ^ v194 ^ v270 ^ v341 ^ v396;
    v50 = v130 ^ v204 ^ v280 ^ v350 ^ v403;
    v51 = v36 ^ v138 ^ v212 ^ v288 ^ v357 ^ v410;
    v411 = v36 ^ v410;
    v404 = v51 ^ v403;
    v397 = v50 ^ v396;
    v390 = v49 ^ v389;
    v382 = v48 ^ v381;
    v376 = v47 ^ v375;
    v358 = v36 ^ v357;
    v351 = v51 ^ v350;
    v342 = v50 ^ v341;
    v333 = v49 ^ v332;
    v322 = v48 ^ v321;
    v314 = v47 ^ v313;
    v304 = v46 ^ v303;
    v293 = v45 ^ v292;
    v289 = v36 ^ v288;
    v281 = v51 ^ v280;
    v271 = v50 ^ v270;
    v261 = v49 ^ v260;
    v249 = v48 ^ v248;
    v239 = v47 ^ v238;
    v228 = v46 ^ v227;
    v217 = v45 ^ v216;
    v213 = v36 ^ v212;
    v205 = v51 ^ v204;
    v195 = v50 ^ v194;
    v185 = v49 ^ v184;
    v174 = v48 ^ v173;
    v165 = v47 ^ v164;
    v154 = v46 ^ v153;
    v143 = v45 ^ v142;
    v139 = v36 ^ v138;
    v131 = v51 ^ v130;
    v121 = v50 ^ v120;
    v111 = v49 ^ v110;
    v100 = v48 ^ v99;
    v91 = v47 ^ v90;
    v80 = v46 ^ v79;
    v69 = v45 ^ v68;
    v44 = v358 ^ v45 ^ v361;
    v43 = v351 ^ v45 ^ v361 ^ v411;
    v42 = v342 ^ v404;
    v41 = v333 ^ v45 ^ v361 ^ v397;
    v40 = v322 ^ v45 ^ v361 ^ v390;
    v39 = v314 ^ v382;
    v38 = v304 ^ v376;
    v37 = v293 ^ v46 ^ v368;
    v35 = v293;
    v294 = v304;
    v305 = v314;
    v315 = v322;
    v323 = v35 ^ v333;
    v334 = v35 ^ v342;
    v343 = v351;
    v352 = v281 ^ v35 ^ v358;
    v344 = v271 ^ v343;
    v335 = v261 ^ v334;
    v324 = v249 ^ v323;
    v316 = v239 ^ v315;
    v306 = v228 ^ v305;
    v295 = v217 ^ v294;
    v34 = v217;
    v218 = v228;
    v229 = v239;
    v240 = v249;
    v250 = v34 ^ v261;
    v262 = v34 ^ v271;
    v272 = v281;
    v282 = v205 ^ v34 ^ v289;
    v273 = v195 ^ v272;
    v263 = v185 ^ v262;
    v251 = v174 ^ v250;
    v241 = v165 ^ v240;
    v230 = v154 ^ v229;
    v219 = v143 ^ v218;
    v33 = v143;
    v144 = v154;
    v155 = v165;
    v166 = v174;
    v175 = v33 ^ v185;
    v186 = v33 ^ v195;
    v196 = v205;
    v206 = v131 ^ v33 ^ v213;
    v197 = v121 ^ v196;
    v187 = v111 ^ v186;
    v176 = v100 ^ v175;
    v167 = v91 ^ v166;
    v156 = v80 ^ v155;
    v145 = v69 ^ v144;
    v32 = v69;
    v70 = v80;
    v81 = v91;
    v92 = v100;
    v101 = v32 ^ v111;
    v112 = v32 ^ v121;
    v122 = v131;
    v132 = v404 ^ v32 ^ v139;
    v123 = v397 ^ v122;
    v113 = v390 ^ v112;
    v102 = v382 ^ v101;
    v93 = v376 ^ v92;
    v82 = v46 ^ v368 ^ v81;
    v71 = v45 ^ v361 ^ v70;
    v405 = v132 ^ v37 ^ v44;
    v398 = v123 ^ v43;
    v391 = v113 ^ v37 ^ v42;
    v383 = v102 ^ v37 ^ v41;
    v377 = v93 ^ v40;
    v369 = v82 ^ v39;
    v362 = v71 ^ v38;
    v31 = v71;
    v72 = v82;
    v83 = v93;
    v94 = v102;
    v103 = v31 ^ v113;
    v114 = v31 ^ v123;
    v124 = v132;
    v133 = v206 ^ v31 ^ v411 ^ v32;
    v125 = v197 ^ v124;
    v115 = v187 ^ v114;
    v104 = v176 ^ v103;
    v95 = v167 ^ v94;
    v84 = v156 ^ v83;
    v73 = v145 ^ v72;
    v30 = v145;
    v146 = v156;
    v157 = v167;
    v168 = v176;
    v177 = v30 ^ v187;
    v188 = v30 ^ v197;
    v198 = v206;
    v207 = v282 ^ v30 ^ v139 ^ v33;
    v199 = v273 ^ v198;
    v189 = v263 ^ v188;
    v178 = v251 ^ v177;
    v169 = v241 ^ v168;
    v158 = v230 ^ v157;
    v147 = v219 ^ v146;
    v29 = v219;
    v220 = v230;
    v231 = v241;
    v242 = v251;
    v252 = v29 ^ v263;
    v264 = v29 ^ v273;
    v274 = v282;
    v283 = v352 ^ v29 ^ v213 ^ v34;
    v275 = v344 ^ v274;
    v265 = v335 ^ v264;
    v253 = v324 ^ v252;
    v243 = v316 ^ v242;
    v232 = v306 ^ v231;
    v221 = v295 ^ v220;
    v28 = v295;
    v296 = v306;
    v307 = v316;
    v317 = v324;
    v325 = v28 ^ v335;
    v336 = v28 ^ v344;
    v345 = v352;
    v410 = v60 ^ v411 ^ v32 ^ v37;
    v403 = v59 ^ v405;
    v396 = v58 ^ v398;
    v389 = v56 ^ v391;
    v381 = v55 ^ v383;
    v375 = v54 ^ v377;
    v368 = v52 ^ v369;
    v361 = result ^ v362;
    v357 = result ^ v44 ^ v28;
    v350 = result ^ v60 ^ v43 ^ v28 ^ v289 ^ v35;
    v341 = v59 ^ v42 ^ v345;
    v332 = result ^ v58 ^ v41 ^ v336;
    v326 = result ^ v56 ^ v40 ^ v325;
    v297 = v52 ^ v37 ^ v296;
    v27 = v52;
    v288 = v52 ^ v289 ^ v35 ^ v29;
    v280 = v52 ^ result ^ v283;
    v270 = result ^ v60 ^ v275;
    v260 = v52 ^ v59 ^ v265;
    v254 = v52 ^ result ^ v58 ^ v253;
    v244 = result ^ v56 ^ v243;
    v53 = result ^ v56;
    v57 = v54 ^ result ^ v60;
    v212 = v54 ^ v213 ^ v34 ^ v30;
    v204 = v54 ^ v27 ^ v207;
    v194 = v27 ^ result ^ v199;
    v184 = v57 ^ v189;
    v138 = v55 ^ v139 ^ v33 ^ v31;
    v130 = v55 ^ v54 ^ v133;
    v120 = v54 ^ v27 ^ v125;
    v110 = v55 ^ v27 ^ result ^ v115;
    v321 = __ROR4__(v326, 31);
    v313 = __ROR4__(v55 ^ v39 ^ v317, 31);
    v303 = __ROR4__(v54 ^ v38 ^ v307, 31);
    v292 = __ROR4__(v297, 31);
    v248 = __ROR4__(v254, 30);
    v238 = __ROR4__(v244, 30);
    v227 = __ROR4__(v55 ^ v232, 30);
    v216 = __ROR4__(v54 ^ v221, 30);
    v173 = __ROR4__(v54 ^ v27 ^ v59 ^ v178, 29);
    v164 = __ROR4__(v27 ^ result ^ v58 ^ v169, 29);
    v153 = __ROR4__(v53 ^ v158, 29);
    v142 = __ROR4__(v55 ^ v147, 29);
    v99 = __ROR4__(v55 ^ v57 ^ v104, 28);
    v90 = __ROR4__(v54 ^ v27 ^ v59 ^ v95, 28);
    v79 = __ROR4__(v27 ^ result ^ v58 ^ v84, 28);
    v68 = __ROR4__(v53 ^ v73, 28);
    for ( j = 0; j <= 7; ++j )
    {
      v25 = v410;
      v399 = v389 ^ v396;
      v412 = v389 ^ (v403 | v410);
      v392 = v25 & v389;
      v406 = v392 ^ ~v403;
      v393 = v399 ^ v392;
      v400 = v406 ^ v412 & v399;
      v407 = v393 | v406;
      v26 = v407 ^ v25;
      v394 = v400 ^ v393;
      v401 = v407 & v400;
      v408 = ~v412 ^ v407;
      v23 = v375;
      v363 = v381 ^ v361;
      v378 = v381 ^ (v368 | v375);
      v384 = v23 & v381;
      v370 = v384 ^ ~v368;
      v385 = v363 ^ v384;
      v364 = v370 ^ v378 & v363;
      v371 = v385 | v370;
      v24 = v371 ^ v23;
      v386 = v364 ^ v385;
      v365 = v371 & v364;
      v372 = ~v378 ^ v371;
      v387 = v26 ^ v386;
      v413 = v387 ^ __ROR4__(v26, 30);
      v388 = v413 ^ __ROR4__(v387, 18);
      v379 = v408 ^ v24;
      v409 = v408 ^ v24 ^ __ROR4__(v408, 30);
      v380 = v409 ^ __ROR4__(v379, 18);
      v403 = v380 ^ __ROR4__(v409, 22);
      v375 = __ROR4__(v380, 31);
      v373 = v401 ^ v372;
      v402 = v373 ^ __ROR4__(v401, 30);
      v374 = v402 ^ __ROR4__(v373, 18);
      v396 = v374 ^ __ROR4__(v402, 22);
      v368 = __ROR4__(v374, 31);
      v366 = v394 ^ v365;
      v395 = v366 ^ __ROR4__(v394, 30);
      v367 = v395 ^ __ROR4__(v366, 18);
      v389 = v367 ^ __ROR4__(v395, 22);
      v361 = __ROR4__(v367, 31);
      v410 = dword_1D5C28[j] ^ v388 ^ __ROR4__(v413, 22);
      v381 = dword_1D5C48[j] ^ __ROR4__(v388, 31);
    }
    for ( k = 0; k <= 7; ++k )
    {
      v21 = v357;
      v346 = v332 ^ v341;
      v359 = v332 ^ (v350 | v357);
      v337 = v21 & v332;
      v353 = v337 ^ ~v350;
      v338 = v346 ^ v337;
      v347 = v353 ^ v359 & v346;
      v354 = v338 | v353;
      v22 = v354 ^ v21;
      v339 = v347 ^ v338;
      v348 = v354 & v347;
      v355 = ~v359 ^ v354;
      v19 = v313;
      v298 = v321 ^ v292;
      v318 = v321 ^ (v303 | v313);
      v327 = v19 & v321;
      v308 = v327 ^ ~v303;
      v328 = v298 ^ v327;
      v299 = v308 ^ v318 & v298;
      v309 = v328 | v308;
      v20 = v309 ^ v19;
      v329 = v299 ^ v328;
      v300 = v309 & v299;
      v310 = ~v318 ^ v309;
      v330 = v22 ^ v329;
      v360 = v330 ^ __ROR4__(v22, 30);
      v331 = v360 ^ __ROR4__(v330, 18);
      v319 = v355 ^ v20;
      v356 = v355 ^ v20 ^ __ROR4__(v355, 30);
      v320 = v356 ^ __ROR4__(v319, 18);
      v350 = v320 ^ __ROR4__(v356, 22);
      v313 = __ROR4__(v320, 31);
      v311 = v348 ^ v310;
      v349 = v311 ^ __ROR4__(v348, 30);
      v312 = v349 ^ __ROR4__(v311, 18);
      v341 = v312 ^ __ROR4__(v349, 22);
      v303 = __ROR4__(v312, 31);
      v301 = v339 ^ v300;
      v340 = v301 ^ __ROR4__(v339, 30);
      v302 = v340 ^ __ROR4__(v301, 18);
      v332 = v302 ^ __ROR4__(v340, 22);
      v292 = __ROR4__(v302, 31);
      v357 = dword_1D5C68[k] ^ v331 ^ __ROR4__(v360, 22);
      v321 = dword_1D5C88[k] ^ __ROR4__(v331, 31);
    }
    for ( m = 0; m <= 7; ++m )
    {
      v17 = v288;
      v276 = v260 ^ v270;
      v290 = v260 ^ (v280 | v288);
      v266 = v17 & v260;
      v284 = v266 ^ ~v280;
      v267 = v276 ^ v266;
      v277 = v284 ^ v290 & v276;
      v285 = v267 | v284;
      v18 = v285 ^ v17;
      v268 = v277 ^ v267;
      v278 = v285 & v277;
      v286 = ~v290 ^ v285;
      v15 = v238;
      v222 = v248 ^ v216;
      v245 = v248 ^ (v227 | v238);
      v255 = v15 & v248;
      v233 = v255 ^ ~v227;
      v256 = v222 ^ v255;
      v223 = v233 ^ v245 & v222;
      v234 = v256 | v233;
      v16 = v234 ^ v15;
      v257 = v223 ^ v256;
      v224 = v234 & v223;
      v235 = ~v245 ^ v234;
      v258 = v18 ^ v257;
      v291 = v258 ^ __ROR4__(v18, 30);
      v259 = v291 ^ __ROR4__(v258, 18);
      v246 = v286 ^ v16;
      v287 = v286 ^ v16 ^ __ROR4__(v286, 30);
      v247 = v287 ^ __ROR4__(v246, 18);
      v280 = v247 ^ __ROR4__(v287, 22);
      v238 = __ROR4__(v247, 31);
      v236 = v278 ^ v235;
      v279 = v236 ^ __ROR4__(v278, 30);
      v237 = v279 ^ __ROR4__(v236, 18);
      v270 = v237 ^ __ROR4__(v279, 22);
      v227 = __ROR4__(v237, 31);
      v225 = v268 ^ v224;
      v269 = v225 ^ __ROR4__(v268, 30);
      v226 = v269 ^ __ROR4__(v225, 18);
      v260 = v226 ^ __ROR4__(v269, 22);
      v216 = __ROR4__(v226, 31);
      v288 = dword_1D5CA8[m] ^ v259 ^ __ROR4__(v291, 22);
      v248 = dword_1D5CC8[m] ^ __ROR4__(v259, 31);
    }
    for ( n = 0; n <= 7; ++n )
    {
      v13 = v212;
      v200 = v184 ^ v194;
      v214 = v184 ^ (v204 | v212);
      v190 = v13 & v184;
      v208 = v190 ^ ~v204;
      v191 = v200 ^ v190;
      v201 = v208 ^ v214 & v200;
      v209 = v191 | v208;
      v14 = v209 ^ v13;
      v192 = v201 ^ v191;
      v202 = v209 & v201;
      v210 = ~v214 ^ v209;
      v11 = v164;
      v148 = v173 ^ v142;
      v170 = v173 ^ (v153 | v164);
      v179 = v11 & v173;
      v159 = v179 ^ ~v153;
      v180 = v148 ^ v179;
      v149 = v159 ^ v170 & v148;
      v160 = v180 | v159;
      v12 = v160 ^ v11;
      v181 = v149 ^ v180;
      v150 = v160 & v149;
      v161 = ~v170 ^ v160;
      v182 = v14 ^ v181;
      v215 = v182 ^ __ROR4__(v14, 30);
      v183 = v215 ^ __ROR4__(v182, 18);
      v171 = v210 ^ v12;
      v211 = v210 ^ v12 ^ __ROR4__(v210, 30);
      v172 = v211 ^ __ROR4__(v171, 18);
      v204 = v172 ^ __ROR4__(v211, 22);
      v164 = __ROR4__(v172, 31);
      v162 = v202 ^ v161;
      v203 = v162 ^ __ROR4__(v202, 30);
      v163 = v203 ^ __ROR4__(v162, 18);
      v194 = v163 ^ __ROR4__(v203, 22);
      v153 = __ROR4__(v163, 31);
      v151 = v192 ^ v150;
      v193 = v151 ^ __ROR4__(v192, 30);
      v152 = v193 ^ __ROR4__(v151, 18);
      v184 = v152 ^ __ROR4__(v193, 22);
      v142 = __ROR4__(v152, 31);
      v212 = dword_1D5CE8[n] ^ v183 ^ __ROR4__(v215, 22);
      v173 = dword_1D5D08[n] ^ __ROR4__(v183, 31);
    }
    for ( ii = 0; ii <= 7; ++ii )
    {
      v9 = v138;
      v126 = v110 ^ v120;
      v140 = v110 ^ (v130 | v138);
      v116 = v9 & v110;
      v134 = v116 ^ ~v130;
      v117 = v126 ^ v116;
      v127 = v134 ^ v140 & v126;
      v135 = v117 | v134;
      v10 = v135 ^ v9;
      v118 = v127 ^ v117;
      v128 = v135 & v127;
      v136 = ~v140 ^ v135;
      v7 = v90;
      v74 = v99 ^ v68;
      v96 = v99 ^ (v79 | v90);
      v105 = v7 & v99;
      v85 = v105 ^ ~v79;
      v106 = v74 ^ v105;
      v75 = v85 ^ v96 & v74;
      v86 = v106 | v85;
      v8 = v86 ^ v7;
      v107 = v75 ^ v106;
      v76 = v86 & v75;
      v87 = ~v96 ^ v86;
      v108 = v10 ^ v107;
      v141 = v108 ^ __ROR4__(v10, 30);
      v109 = v141 ^ __ROR4__(v108, 18);
      v97 = v136 ^ v8;
      v137 = v136 ^ v8 ^ __ROR4__(v136, 30);
      v98 = v137 ^ __ROR4__(v97, 18);
      v130 = v98 ^ __ROR4__(v137, 22);
      v90 = __ROR4__(v98, 31);
      v88 = v128 ^ v87;
      v129 = v88 ^ __ROR4__(v128, 30);
      v89 = v129 ^ __ROR4__(v88, 18);
      v120 = v89 ^ __ROR4__(v129, 22);
      v79 = __ROR4__(v89, 31);
      v77 = v118 ^ v76;
      v119 = v77 ^ __ROR4__(v118, 30);
      v78 = v119 ^ __ROR4__(v77, 18);
      v110 = v78 ^ __ROR4__(v119, 22);
      v68 = __ROR4__(v78, 31);
      v138 = dword_1D5D28[ii] ^ v109 ^ __ROR4__(v141, 22);
      v99 = dword_1D5D48[ii] ^ __ROR4__(v109, 31);
    }
    switch ( i )
    {
      case 1:
        sub_15C9F0(a4, v138 ^ v410 ^ v357 ^ v288 ^ v212);
        sub_15C9F0(a4 + 4, v130 ^ v403 ^ v350 ^ v280 ^ v204);
        sub_15C9F0(a4 + 8, v120 ^ v396 ^ v341 ^ v270 ^ v194);
        sub_15C9F0(a4 + 12, v110 ^ v389 ^ v332 ^ v260 ^ v184);
        sub_15C9F0(a4 + 16, v99 ^ v381 ^ v321 ^ v248 ^ v173);
        sub_15C9F0(a4 + 20, v90 ^ v375 ^ v313 ^ v238 ^ v164);
        sub_15C9F0(a4 + 24, v79 ^ v368 ^ v303 ^ v227 ^ v153);
        result = (unsigned int)sub_15C9F0(a4 + 28, v68 ^ v361 ^ v292 ^ v216 ^ v142);
        break;
      case 2:
        sub_15C9F0(a4 + 32, v138 ^ v410 ^ v357 ^ v288 ^ v212);
        sub_15C9F0(a4 + 36, v130 ^ v403 ^ v350 ^ v280 ^ v204);
        sub_15C9F0(a4 + 40, v120 ^ v396 ^ v341 ^ v270 ^ v194);
        sub_15C9F0(a4 + 44, v110 ^ v389 ^ v332 ^ v260 ^ v184);
        sub_15C9F0(a4 + 48, v99 ^ v381 ^ v321 ^ v248 ^ v173);
        sub_15C9F0(a4 + 52, v90 ^ v375 ^ v313 ^ v238 ^ v164);
        sub_15C9F0(a4 + 56, v79 ^ v368 ^ v303 ^ v227 ^ v153);
        result = (unsigned int)sub_15C9F0(a4 + 60, v68 ^ v361 ^ v292 ^ v216 ^ v142);
        break;
      case 0:
        result = (unsigned int)memset(a1, 0, 0x20u);
        break;
    }
  }
  return result;
}
