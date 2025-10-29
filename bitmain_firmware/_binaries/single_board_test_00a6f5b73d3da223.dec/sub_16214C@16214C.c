unsigned int __fastcall sub_16214C(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // [sp+4h] [bp+4h]
  char *v4; // [sp+8h] [bp+8h]
  _DWORD *v5; // [sp+Ch] [bp+Ch]
  int v6; // [sp+14h] [bp+14h]
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+18h] [bp+18h]
  int v10; // [sp+1Ch] [bp+1Ch]
  int v11; // [sp+1Ch] [bp+1Ch]
  int v12; // [sp+20h] [bp+20h]
  int v13; // [sp+20h] [bp+20h]
  int v14; // [sp+24h] [bp+24h]
  int v15; // [sp+24h] [bp+24h]
  int v16; // [sp+28h] [bp+28h]
  int v17; // [sp+28h] [bp+28h]
  int v18; // [sp+2Ch] [bp+2Ch]
  int v19; // [sp+2Ch] [bp+2Ch]
  int v20; // [sp+30h] [bp+30h]
  int v21; // [sp+30h] [bp+30h]
  int v22; // [sp+34h] [bp+34h]
  int v23; // [sp+34h] [bp+34h]
  int v24; // [sp+38h] [bp+38h]
  int v25; // [sp+38h] [bp+38h]
  unsigned int v26; // [sp+44h] [bp+44h]
  int v27; // [sp+4Ch] [bp+4Ch]
  int v28; // [sp+50h] [bp+50h]
  int v29; // [sp+54h] [bp+54h]
  int v30; // [sp+58h] [bp+58h]
  int v31; // [sp+60h] [bp+60h]
  int v32; // [sp+64h] [bp+64h]
  int v33; // [sp+68h] [bp+68h]
  int v34; // [sp+6Ch] [bp+6Ch]
  int v35; // [sp+74h] [bp+74h]
  int v36; // [sp+78h] [bp+78h]
  int v37; // [sp+7Ch] [bp+7Ch]
  int v38; // [sp+80h] [bp+80h]
  int v39; // [sp+84h] [bp+84h]
  int v40; // [sp+88h] [bp+88h]
  int v41; // [sp+8Ch] [bp+8Ch]
  int v42; // [sp+90h] [bp+90h]
  int v43; // [sp+94h] [bp+94h]
  int v44; // [sp+98h] [bp+98h]
  int v45; // [sp+9Ch] [bp+9Ch]
  int v46; // [sp+A0h] [bp+A0h]
  int v47; // [sp+A4h] [bp+A4h]
  int v48; // [sp+A8h] [bp+A8h]
  int v49; // [sp+ACh] [bp+ACh]
  int v50; // [sp+B0h] [bp+B0h]
  unsigned int v51; // [sp+BCh] [bp+BCh]
  unsigned int v52; // [sp+BCh] [bp+BCh]
  unsigned int v53; // [sp+C0h] [bp+C0h]
  unsigned int v54; // [sp+C4h] [bp+C4h]
  unsigned int v55; // [sp+C8h] [bp+C8h]
  unsigned int v56; // [sp+C8h] [bp+C8h]
  unsigned int v57; // [sp+CCh] [bp+CCh]
  unsigned int v58; // [sp+D0h] [bp+D0h]
  unsigned int v59; // [sp+D4h] [bp+D4h]
  int *v60; // [sp+D8h] [bp+D8h]
  int i; // [sp+DCh] [bp+DCh]
  int j; // [sp+DCh] [bp+DCh]
  int k; // [sp+DCh] [bp+DCh]
  int m; // [sp+DCh] [bp+DCh]
  int ii; // [sp+DCh] [bp+DCh]
  size_t n; // [sp+E0h] [bp+E0h]
  int v67; // [sp+E4h] [bp+E4h]
  int v68; // [sp+E4h] [bp+E4h]
  int v69; // [sp+E4h] [bp+E4h]
  int v70; // [sp+E4h] [bp+E4h]
  int v71; // [sp+E4h] [bp+E4h]
  int v72; // [sp+E4h] [bp+E4h]
  int v73; // [sp+E4h] [bp+E4h]
  int v74; // [sp+E4h] [bp+E4h]
  int v75; // [sp+E4h] [bp+E4h]
  int v76; // [sp+E4h] [bp+E4h]
  int v77; // [sp+E4h] [bp+E4h]
  int v78; // [sp+E8h] [bp+E8h]
  int v79; // [sp+E8h] [bp+E8h]
  int v80; // [sp+E8h] [bp+E8h]
  int v81; // [sp+E8h] [bp+E8h]
  int v82; // [sp+E8h] [bp+E8h]
  int v83; // [sp+E8h] [bp+E8h]
  int v84; // [sp+E8h] [bp+E8h]
  int v85; // [sp+E8h] [bp+E8h]
  int v86; // [sp+E8h] [bp+E8h]
  int v87; // [sp+E8h] [bp+E8h]
  int v88; // [sp+E8h] [bp+E8h]
  int v89; // [sp+ECh] [bp+ECh]
  int v90; // [sp+ECh] [bp+ECh]
  int v91; // [sp+ECh] [bp+ECh]
  int v92; // [sp+ECh] [bp+ECh]
  int v93; // [sp+ECh] [bp+ECh]
  int v94; // [sp+ECh] [bp+ECh]
  int v95; // [sp+ECh] [bp+ECh]
  int v96; // [sp+ECh] [bp+ECh]
  int v97; // [sp+ECh] [bp+ECh]
  int v98; // [sp+F0h] [bp+F0h]
  int v99; // [sp+F0h] [bp+F0h]
  int v100; // [sp+F0h] [bp+F0h]
  int v101; // [sp+F0h] [bp+F0h]
  int v102; // [sp+F0h] [bp+F0h]
  int v103; // [sp+F0h] [bp+F0h]
  int v104; // [sp+F0h] [bp+F0h]
  int v105; // [sp+F0h] [bp+F0h]
  int v106; // [sp+F0h] [bp+F0h]
  int v107; // [sp+F0h] [bp+F0h]
  int v108; // [sp+F0h] [bp+F0h]
  unsigned int v109; // [sp+F4h] [bp+F4h]
  int v110; // [sp+F4h] [bp+F4h]
  int v111; // [sp+F4h] [bp+F4h]
  int v112; // [sp+F4h] [bp+F4h]
  int v113; // [sp+F4h] [bp+F4h]
  int v114; // [sp+F4h] [bp+F4h]
  int v115; // [sp+F4h] [bp+F4h]
  int v116; // [sp+F4h] [bp+F4h]
  int v117; // [sp+F4h] [bp+F4h]
  int v118; // [sp+F4h] [bp+F4h]
  int v119; // [sp+F8h] [bp+F8h]
  int v120; // [sp+F8h] [bp+F8h]
  int v121; // [sp+F8h] [bp+F8h]
  int v122; // [sp+F8h] [bp+F8h]
  int v123; // [sp+F8h] [bp+F8h]
  int v124; // [sp+F8h] [bp+F8h]
  int v125; // [sp+F8h] [bp+F8h]
  int v126; // [sp+F8h] [bp+F8h]
  int v127; // [sp+F8h] [bp+F8h]
  int v128; // [sp+F8h] [bp+F8h]
  int v129; // [sp+FCh] [bp+FCh]
  int v130; // [sp+FCh] [bp+FCh]
  int v131; // [sp+FCh] [bp+FCh]
  int v132; // [sp+FCh] [bp+FCh]
  int v133; // [sp+FCh] [bp+FCh]
  int v134; // [sp+FCh] [bp+FCh]
  int v135; // [sp+FCh] [bp+FCh]
  int v136; // [sp+FCh] [bp+FCh]
  int v137; // [sp+100h] [bp+100h]
  int v138; // [sp+100h] [bp+100h]
  int v139; // [sp+100h] [bp+100h]
  int v140; // [sp+100h] [bp+100h]
  int v141; // [sp+104h] [bp+104h]
  int v142; // [sp+104h] [bp+104h]
  int v143; // [sp+104h] [bp+104h]
  int v144; // [sp+104h] [bp+104h]
  int v145; // [sp+104h] [bp+104h]
  int v146; // [sp+104h] [bp+104h]
  int v147; // [sp+104h] [bp+104h]
  int v148; // [sp+104h] [bp+104h]
  int v149; // [sp+104h] [bp+104h]
  int v150; // [sp+104h] [bp+104h]
  int v151; // [sp+104h] [bp+104h]
  int v152; // [sp+108h] [bp+108h]
  int v153; // [sp+108h] [bp+108h]
  int v154; // [sp+108h] [bp+108h]
  int v155; // [sp+108h] [bp+108h]
  int v156; // [sp+108h] [bp+108h]
  int v157; // [sp+108h] [bp+108h]
  int v158; // [sp+108h] [bp+108h]
  int v159; // [sp+108h] [bp+108h]
  int v160; // [sp+108h] [bp+108h]
  int v161; // [sp+108h] [bp+108h]
  int v162; // [sp+108h] [bp+108h]
  int v163; // [sp+10Ch] [bp+10Ch]
  int v164; // [sp+10Ch] [bp+10Ch]
  int v165; // [sp+10Ch] [bp+10Ch]
  int v166; // [sp+10Ch] [bp+10Ch]
  int v167; // [sp+10Ch] [bp+10Ch]
  int v168; // [sp+10Ch] [bp+10Ch]
  int v169; // [sp+10Ch] [bp+10Ch]
  int v170; // [sp+10Ch] [bp+10Ch]
  int v171; // [sp+10Ch] [bp+10Ch]
  int v172; // [sp+110h] [bp+110h]
  int v173; // [sp+110h] [bp+110h]
  int v174; // [sp+110h] [bp+110h]
  int v175; // [sp+110h] [bp+110h]
  int v176; // [sp+110h] [bp+110h]
  int v177; // [sp+110h] [bp+110h]
  int v178; // [sp+110h] [bp+110h]
  int v179; // [sp+110h] [bp+110h]
  int v180; // [sp+110h] [bp+110h]
  int v181; // [sp+110h] [bp+110h]
  int v182; // [sp+110h] [bp+110h]
  int v183; // [sp+114h] [bp+114h]
  int v184; // [sp+114h] [bp+114h]
  int v185; // [sp+114h] [bp+114h]
  int v186; // [sp+114h] [bp+114h]
  int v187; // [sp+114h] [bp+114h]
  int v188; // [sp+114h] [bp+114h]
  int v189; // [sp+114h] [bp+114h]
  int v190; // [sp+114h] [bp+114h]
  int v191; // [sp+114h] [bp+114h]
  int v192; // [sp+114h] [bp+114h]
  unsigned int v193; // [sp+118h] [bp+118h]
  int v194; // [sp+118h] [bp+118h]
  int v195; // [sp+118h] [bp+118h]
  int v196; // [sp+118h] [bp+118h]
  int v197; // [sp+118h] [bp+118h]
  int v198; // [sp+118h] [bp+118h]
  int v199; // [sp+118h] [bp+118h]
  int v200; // [sp+118h] [bp+118h]
  int v201; // [sp+118h] [bp+118h]
  int v202; // [sp+118h] [bp+118h]
  int v203; // [sp+11Ch] [bp+11Ch]
  int v204; // [sp+11Ch] [bp+11Ch]
  int v205; // [sp+11Ch] [bp+11Ch]
  int v206; // [sp+11Ch] [bp+11Ch]
  int v207; // [sp+11Ch] [bp+11Ch]
  int v208; // [sp+11Ch] [bp+11Ch]
  int v209; // [sp+11Ch] [bp+11Ch]
  int v210; // [sp+11Ch] [bp+11Ch]
  int v211; // [sp+120h] [bp+120h]
  int v212; // [sp+120h] [bp+120h]
  int v213; // [sp+120h] [bp+120h]
  int v214; // [sp+120h] [bp+120h]
  int v215; // [sp+124h] [bp+124h]
  int v216; // [sp+124h] [bp+124h]
  int v217; // [sp+124h] [bp+124h]
  int v218; // [sp+124h] [bp+124h]
  int v219; // [sp+124h] [bp+124h]
  int v220; // [sp+124h] [bp+124h]
  int v221; // [sp+124h] [bp+124h]
  int v222; // [sp+124h] [bp+124h]
  int v223; // [sp+124h] [bp+124h]
  int v224; // [sp+124h] [bp+124h]
  int v225; // [sp+124h] [bp+124h]
  int v226; // [sp+128h] [bp+128h]
  int v227; // [sp+128h] [bp+128h]
  int v228; // [sp+128h] [bp+128h]
  int v229; // [sp+128h] [bp+128h]
  int v230; // [sp+128h] [bp+128h]
  int v231; // [sp+128h] [bp+128h]
  int v232; // [sp+128h] [bp+128h]
  int v233; // [sp+128h] [bp+128h]
  int v234; // [sp+128h] [bp+128h]
  int v235; // [sp+128h] [bp+128h]
  int v236; // [sp+128h] [bp+128h]
  int v237; // [sp+12Ch] [bp+12Ch]
  int v238; // [sp+12Ch] [bp+12Ch]
  int v239; // [sp+12Ch] [bp+12Ch]
  int v240; // [sp+12Ch] [bp+12Ch]
  int v241; // [sp+12Ch] [bp+12Ch]
  int v242; // [sp+12Ch] [bp+12Ch]
  unsigned int v243; // [sp+12Ch] [bp+12Ch]
  int v244; // [sp+12Ch] [bp+12Ch]
  int v245; // [sp+12Ch] [bp+12Ch]
  int v246; // [sp+12Ch] [bp+12Ch]
  int v247; // [sp+130h] [bp+130h]
  int v248; // [sp+130h] [bp+130h]
  int v249; // [sp+130h] [bp+130h]
  int v250; // [sp+130h] [bp+130h]
  int v251; // [sp+130h] [bp+130h]
  int v252; // [sp+130h] [bp+130h]
  unsigned int v253; // [sp+130h] [bp+130h]
  int v254; // [sp+130h] [bp+130h]
  int v255; // [sp+130h] [bp+130h]
  int v256; // [sp+130h] [bp+130h]
  int v257; // [sp+130h] [bp+130h]
  int v258; // [sp+130h] [bp+130h]
  int v259; // [sp+134h] [bp+134h]
  int v260; // [sp+134h] [bp+134h]
  int v261; // [sp+134h] [bp+134h]
  int v262; // [sp+134h] [bp+134h]
  int v263; // [sp+134h] [bp+134h]
  int v264; // [sp+134h] [bp+134h]
  int v265; // [sp+134h] [bp+134h]
  int v266; // [sp+134h] [bp+134h]
  int v267; // [sp+134h] [bp+134h]
  int v268; // [sp+134h] [bp+134h]
  unsigned int v269; // [sp+138h] [bp+138h]
  int v270; // [sp+138h] [bp+138h]
  int v271; // [sp+138h] [bp+138h]
  int v272; // [sp+138h] [bp+138h]
  int v273; // [sp+138h] [bp+138h]
  int v274; // [sp+138h] [bp+138h]
  int v275; // [sp+138h] [bp+138h]
  int v276; // [sp+138h] [bp+138h]
  int v277; // [sp+138h] [bp+138h]
  int v278; // [sp+138h] [bp+138h]
  unsigned int v279; // [sp+13Ch] [bp+13Ch]
  int v280; // [sp+13Ch] [bp+13Ch]
  int v281; // [sp+13Ch] [bp+13Ch]
  int v282; // [sp+13Ch] [bp+13Ch]
  int v283; // [sp+13Ch] [bp+13Ch]
  int v284; // [sp+13Ch] [bp+13Ch]
  int v285; // [sp+13Ch] [bp+13Ch]
  int v286; // [sp+13Ch] [bp+13Ch]
  int v287; // [sp+140h] [bp+140h]
  int v288; // [sp+140h] [bp+140h]
  int v289; // [sp+140h] [bp+140h]
  int v290; // [sp+140h] [bp+140h]
  int v291; // [sp+144h] [bp+144h]
  int v292; // [sp+144h] [bp+144h]
  int v293; // [sp+144h] [bp+144h]
  int v294; // [sp+144h] [bp+144h]
  int v295; // [sp+144h] [bp+144h]
  int v296; // [sp+144h] [bp+144h]
  int v297; // [sp+144h] [bp+144h]
  int v298; // [sp+144h] [bp+144h]
  int v299; // [sp+144h] [bp+144h]
  int v300; // [sp+144h] [bp+144h]
  int v301; // [sp+144h] [bp+144h]
  int v302; // [sp+148h] [bp+148h]
  int v303; // [sp+148h] [bp+148h]
  int v304; // [sp+148h] [bp+148h]
  int v305; // [sp+148h] [bp+148h]
  int v306; // [sp+148h] [bp+148h]
  int v307; // [sp+148h] [bp+148h]
  int v308; // [sp+148h] [bp+148h]
  int v309; // [sp+148h] [bp+148h]
  int v310; // [sp+148h] [bp+148h]
  int v311; // [sp+148h] [bp+148h]
  int v312; // [sp+14Ch] [bp+14Ch]
  int v313; // [sp+14Ch] [bp+14Ch]
  int v314; // [sp+14Ch] [bp+14Ch]
  int v315; // [sp+14Ch] [bp+14Ch]
  int v316; // [sp+14Ch] [bp+14Ch]
  int v317; // [sp+14Ch] [bp+14Ch]
  int v318; // [sp+14Ch] [bp+14Ch]
  int v319; // [sp+14Ch] [bp+14Ch]
  int v320; // [sp+150h] [bp+150h]
  int v321; // [sp+150h] [bp+150h]
  int v322; // [sp+150h] [bp+150h]
  int v323; // [sp+150h] [bp+150h]
  int v324; // [sp+150h] [bp+150h]
  unsigned int v325; // [sp+150h] [bp+150h]
  int v326; // [sp+150h] [bp+150h]
  int v327; // [sp+150h] [bp+150h]
  int v328; // [sp+150h] [bp+150h]
  int v329; // [sp+150h] [bp+150h]
  int v330; // [sp+150h] [bp+150h]
  unsigned int v331; // [sp+154h] [bp+154h]
  int v332; // [sp+154h] [bp+154h]
  int v333; // [sp+154h] [bp+154h]
  int v334; // [sp+154h] [bp+154h]
  int v335; // [sp+154h] [bp+154h]
  int v336; // [sp+154h] [bp+154h]
  int v337; // [sp+154h] [bp+154h]
  int v338; // [sp+154h] [bp+154h]
  int v339; // [sp+154h] [bp+154h]
  int v340; // [sp+158h] [bp+158h]
  int v341; // [sp+158h] [bp+158h]
  int v342; // [sp+158h] [bp+158h]
  int v343; // [sp+158h] [bp+158h]
  int v344; // [sp+158h] [bp+158h]
  int v345; // [sp+158h] [bp+158h]
  int v346; // [sp+158h] [bp+158h]
  int v347; // [sp+158h] [bp+158h]
  int v348; // [sp+158h] [bp+158h]
  unsigned int v349; // [sp+15Ch] [bp+15Ch]
  int v350; // [sp+15Ch] [bp+15Ch]
  int v351; // [sp+15Ch] [bp+15Ch]
  int v352; // [sp+15Ch] [bp+15Ch]
  int v353; // [sp+15Ch] [bp+15Ch]
  int v354; // [sp+15Ch] [bp+15Ch]
  int v355; // [sp+15Ch] [bp+15Ch]
  unsigned int v356; // [sp+160h] [bp+160h]
  int v357; // [sp+160h] [bp+160h]
  int v358; // [sp+160h] [bp+160h]
  int v359; // [sp+160h] [bp+160h]
  unsigned int v360; // [sp+164h] [bp+164h]
  int v361; // [sp+164h] [bp+164h]
  int v362; // [sp+164h] [bp+164h]
  int v363; // [sp+164h] [bp+164h]
  int v364; // [sp+164h] [bp+164h]
  int v365; // [sp+164h] [bp+164h]
  int v366; // [sp+164h] [bp+164h]
  int v367; // [sp+168h] [bp+168h]
  int v368; // [sp+168h] [bp+168h]
  int v369; // [sp+168h] [bp+168h]
  int v370; // [sp+168h] [bp+168h]
  int v371; // [sp+168h] [bp+168h]
  int v372; // [sp+168h] [bp+168h]
  int v373; // [sp+168h] [bp+168h]
  int v374; // [sp+16Ch] [bp+16Ch]
  int v375; // [sp+16Ch] [bp+16Ch]
  int v376; // [sp+16Ch] [bp+16Ch]
  int v377; // [sp+16Ch] [bp+16Ch]
  int v378; // [sp+16Ch] [bp+16Ch]
  int v379; // [sp+16Ch] [bp+16Ch]
  int v380; // [sp+170h] [bp+170h]
  int v381; // [sp+170h] [bp+170h]
  int v382; // [sp+170h] [bp+170h]
  int v383; // [sp+170h] [bp+170h]
  int v384; // [sp+170h] [bp+170h]
  int v385; // [sp+170h] [bp+170h]
  int v386; // [sp+170h] [bp+170h]
  int v387; // [sp+170h] [bp+170h]
  int v388; // [sp+174h] [bp+174h]
  int v389; // [sp+174h] [bp+174h]
  int v390; // [sp+174h] [bp+174h]
  int v391; // [sp+174h] [bp+174h]
  int v392; // [sp+174h] [bp+174h]
  int v393; // [sp+174h] [bp+174h]
  int v394; // [sp+174h] [bp+174h]
  int v395; // [sp+178h] [bp+178h]
  int v396; // [sp+178h] [bp+178h]
  int v397; // [sp+178h] [bp+178h]
  int v398; // [sp+178h] [bp+178h]
  int v399; // [sp+178h] [bp+178h]
  int v400; // [sp+178h] [bp+178h]
  int v401; // [sp+178h] [bp+178h]
  int v402; // [sp+17Ch] [bp+17Ch]
  int v403; // [sp+17Ch] [bp+17Ch]
  int v404; // [sp+17Ch] [bp+17Ch]
  int v405; // [sp+17Ch] [bp+17Ch]
  int v406; // [sp+17Ch] [bp+17Ch]
  int v407; // [sp+17Ch] [bp+17Ch]
  int v408; // [sp+17Ch] [bp+17Ch]
  int v409; // [sp+180h] [bp+180h]
  int v410; // [sp+180h] [bp+180h]
  int v411; // [sp+180h] [bp+180h]
  int v412; // [sp+180h] [bp+180h]
  int v413; // [sp+184h] [bp+184h]

  v5 = (_DWORD *)result;
  v4 = a2;
  v3 = a3;
  v60 = (int *)result;
  v413 = *(_DWORD *)(result + 32);
  if ( 32 - v413 <= a3 )
  {
    v409 = *(_DWORD *)(result + 36);
    v402 = *(_DWORD *)(result + 40);
    v395 = *(_DWORD *)(result + 44);
    v388 = *(_DWORD *)(result + 48);
    v380 = *(_DWORD *)(result + 52);
    v374 = *(_DWORD *)(result + 56);
    v367 = *(_DWORD *)(result + 60);
    v360 = *(_DWORD *)(result + 64);
    v356 = *(_DWORD *)(result + 68);
    v349 = *(_DWORD *)(result + 72);
    v340 = *(_DWORD *)(result + 76);
    v331 = *(_DWORD *)(result + 80);
    v320 = *(_DWORD *)(result + 84);
    v312 = *(_DWORD *)(result + 88);
    v302 = *(_DWORD *)(result + 92);
    v291 = *(_DWORD *)(result + 96);
    v287 = *(_DWORD *)(result + 100);
    v279 = *(_DWORD *)(result + 104);
    v269 = *(_DWORD *)(result + 108);
    v259 = *(_DWORD *)(result + 112);
    v247 = *(_DWORD *)(result + 116);
    v237 = *(_DWORD *)(result + 120);
    v226 = *(_DWORD *)(result + 124);
    v215 = *(_DWORD *)(result + 128);
    v211 = *(_DWORD *)(result + 132);
    v203 = *(_DWORD *)(result + 136);
    v193 = *(_DWORD *)(result + 140);
    v183 = *(_DWORD *)(result + 144);
    v172 = *(_DWORD *)(result + 148);
    v163 = *(_DWORD *)(result + 152);
    v152 = *(_DWORD *)(result + 156);
    v141 = *(_DWORD *)(result + 160);
    v137 = *(_DWORD *)(result + 164);
    v129 = *(_DWORD *)(result + 168);
    v119 = *(_DWORD *)(result + 172);
    v109 = *(_DWORD *)(result + 176);
    v98 = *(_DWORD *)(result + 180);
    v89 = *(_DWORD *)(result + 184);
    v78 = *(_DWORD *)(result + 188);
    v67 = *(_DWORD *)(result + 192);
    while ( v3 )
    {
      n = 32 - v413;
      if ( 32 - v413 > v3 )
        n = v3;
      result = (unsigned int)memcpy((char *)v60 + v413, v4, n);
      v413 += n;
      v4 += n;
      v3 -= n;
      if ( v413 == 32 )
      {
        v59 = sub_15CA34(v60);
        v58 = sub_15CA34(v60 + 1);
        v57 = sub_15CA34(v60 + 2);
        v55 = sub_15CA34(v60 + 3);
        v54 = sub_15CA34(v60 + 4);
        v53 = sub_15CA34(v60 + 5);
        v51 = sub_15CA34(v60 + 6);
        result = sub_15CA34(v60 + 7);
        v35 = v67 ^ v141 ^ v215 ^ v291 ^ v360;
        v44 = v78 ^ v152 ^ v226 ^ v302 ^ v367;
        v45 = v89 ^ v163 ^ v237 ^ v312 ^ v374;
        v46 = v98 ^ v172 ^ v247 ^ v320 ^ v380;
        v47 = v35 ^ v109 ^ v183 ^ v259 ^ v331 ^ v388;
        v48 = v35 ^ v119 ^ v193 ^ v269 ^ v340 ^ v395;
        v49 = v129 ^ v203 ^ v279 ^ v349 ^ v402;
        v50 = v35 ^ v137 ^ v211 ^ v287 ^ v356 ^ v409;
        v410 = v35 ^ v409;
        v403 = v50 ^ v402;
        v396 = v49 ^ v395;
        v389 = v48 ^ v388;
        v381 = v47 ^ v380;
        v375 = v46 ^ v374;
        v357 = v35 ^ v356;
        v350 = v50 ^ v349;
        v341 = v49 ^ v340;
        v332 = v48 ^ v331;
        v321 = v47 ^ v320;
        v313 = v46 ^ v312;
        v303 = v45 ^ v302;
        v292 = v44 ^ v291;
        v288 = v35 ^ v287;
        v280 = v50 ^ v279;
        v270 = v49 ^ v269;
        v260 = v48 ^ v259;
        v248 = v47 ^ v247;
        v238 = v46 ^ v237;
        v227 = v45 ^ v226;
        v216 = v44 ^ v215;
        v212 = v35 ^ v211;
        v204 = v50 ^ v203;
        v194 = v49 ^ v193;
        v184 = v48 ^ v183;
        v173 = v47 ^ v172;
        v164 = v46 ^ v163;
        v153 = v45 ^ v152;
        v142 = v44 ^ v141;
        v138 = v35 ^ v137;
        v130 = v50 ^ v129;
        v120 = v49 ^ v119;
        v110 = v48 ^ v109;
        v99 = v47 ^ v98;
        v90 = v46 ^ v89;
        v79 = v45 ^ v78;
        v68 = v44 ^ v67;
        v43 = v357 ^ v44 ^ v360;
        v42 = v350 ^ v44 ^ v360 ^ v410;
        v41 = v341 ^ v403;
        v40 = v332 ^ v44 ^ v360 ^ v396;
        v39 = v321 ^ v44 ^ v360 ^ v389;
        v38 = v313 ^ v381;
        v37 = v303 ^ v375;
        v36 = v292 ^ v45 ^ v367;
        v34 = v292;
        v293 = v303;
        v304 = v313;
        v314 = v321;
        v322 = v34 ^ v332;
        v333 = v34 ^ v341;
        v342 = v350;
        v351 = v280 ^ v34 ^ v357;
        v343 = v270 ^ v342;
        v334 = v260 ^ v333;
        v323 = v248 ^ v322;
        v315 = v238 ^ v314;
        v305 = v227 ^ v304;
        v294 = v216 ^ v293;
        v33 = v216;
        v217 = v227;
        v228 = v238;
        v239 = v248;
        v249 = v33 ^ v260;
        v261 = v33 ^ v270;
        v271 = v280;
        v281 = v204 ^ v33 ^ v288;
        v272 = v194 ^ v271;
        v262 = v184 ^ v261;
        v250 = v173 ^ v249;
        v240 = v164 ^ v239;
        v229 = v153 ^ v228;
        v218 = v142 ^ v217;
        v32 = v142;
        v143 = v153;
        v154 = v164;
        v165 = v173;
        v174 = v32 ^ v184;
        v185 = v32 ^ v194;
        v195 = v204;
        v205 = v130 ^ v32 ^ v212;
        v196 = v120 ^ v195;
        v186 = v110 ^ v185;
        v175 = v99 ^ v174;
        v166 = v90 ^ v165;
        v155 = v79 ^ v154;
        v144 = v68 ^ v143;
        v31 = v68;
        v69 = v79;
        v80 = v90;
        v91 = v99;
        v100 = v31 ^ v110;
        v111 = v31 ^ v120;
        v121 = v130;
        v131 = v403 ^ v31 ^ v138;
        v122 = v396 ^ v121;
        v112 = v389 ^ v111;
        v101 = v381 ^ v100;
        v92 = v375 ^ v91;
        v81 = v45 ^ v367 ^ v80;
        v70 = v44 ^ v360 ^ v69;
        v404 = v131 ^ v36 ^ v43;
        v397 = v122 ^ v42;
        v390 = v112 ^ v36 ^ v41;
        v382 = v101 ^ v36 ^ v40;
        v376 = v92 ^ v39;
        v368 = v81 ^ v38;
        v361 = v70 ^ v37;
        v30 = v70;
        v71 = v81;
        v82 = v92;
        v93 = v101;
        v102 = v30 ^ v112;
        v113 = v30 ^ v122;
        v123 = v131;
        v132 = v205 ^ v30 ^ v410 ^ v31;
        v124 = v196 ^ v123;
        v114 = v186 ^ v113;
        v103 = v175 ^ v102;
        v94 = v166 ^ v93;
        v83 = v155 ^ v82;
        v72 = v144 ^ v71;
        v29 = v144;
        v145 = v155;
        v156 = v166;
        v167 = v175;
        v176 = v29 ^ v186;
        v187 = v29 ^ v196;
        v197 = v205;
        v206 = v281 ^ v29 ^ v138 ^ v32;
        v198 = v272 ^ v197;
        v188 = v262 ^ v187;
        v177 = v250 ^ v176;
        v168 = v240 ^ v167;
        v157 = v229 ^ v156;
        v146 = v218 ^ v145;
        v28 = v218;
        v219 = v229;
        v230 = v240;
        v241 = v250;
        v251 = v28 ^ v262;
        v263 = v28 ^ v272;
        v273 = v281;
        v282 = v351 ^ v28 ^ v212 ^ v33;
        v274 = v343 ^ v273;
        v264 = v334 ^ v263;
        v252 = v323 ^ v251;
        v242 = v315 ^ v241;
        v231 = v305 ^ v230;
        v220 = v294 ^ v219;
        v27 = v294;
        v295 = v305;
        v306 = v315;
        v316 = v323;
        v324 = v27 ^ v334;
        v335 = v27 ^ v343;
        v344 = v351;
        v409 = v59 ^ v410 ^ v31 ^ v36;
        v402 = v58 ^ v404;
        v395 = v57 ^ v397;
        v388 = v55 ^ v390;
        v380 = v54 ^ v382;
        v374 = v53 ^ v376;
        v367 = v51 ^ v368;
        v360 = result ^ v361;
        v356 = result ^ v43 ^ v27;
        v349 = result ^ v59 ^ v42 ^ v27 ^ v288 ^ v34;
        v340 = v58 ^ v41 ^ v344;
        v331 = result ^ v57 ^ v40 ^ v335;
        v325 = result ^ v55 ^ v39 ^ v324;
        v296 = v51 ^ v36 ^ v295;
        v26 = v51;
        v287 = v51 ^ v288 ^ v34 ^ v28;
        v279 = v51 ^ result ^ v282;
        v269 = result ^ v59 ^ v274;
        v259 = v51 ^ v58 ^ v264;
        v253 = v51 ^ result ^ v57 ^ v252;
        v243 = result ^ v55 ^ v242;
        v52 = result ^ v55;
        v56 = v53 ^ result ^ v59;
        v211 = v53 ^ v212 ^ v33 ^ v29;
        v203 = v53 ^ v26 ^ v206;
        v193 = v26 ^ result ^ v198;
        v183 = v56 ^ v188;
        v137 = v54 ^ v138 ^ v32 ^ v30;
        v129 = v54 ^ v53 ^ v132;
        v119 = v53 ^ v26 ^ v124;
        v109 = v54 ^ v26 ^ result ^ v114;
        v320 = __ROR4__(v325, 31);
        v312 = __ROR4__(v54 ^ v38 ^ v316, 31);
        v302 = __ROR4__(v53 ^ v37 ^ v306, 31);
        v291 = __ROR4__(v296, 31);
        v247 = __ROR4__(v253, 30);
        v237 = __ROR4__(v243, 30);
        v226 = __ROR4__(v54 ^ v231, 30);
        v215 = __ROR4__(v53 ^ v220, 30);
        v172 = __ROR4__(v53 ^ v26 ^ v58 ^ v177, 29);
        v163 = __ROR4__(v26 ^ result ^ v57 ^ v168, 29);
        v152 = __ROR4__(v52 ^ v157, 29);
        v141 = __ROR4__(v54 ^ v146, 29);
        v98 = __ROR4__(v54 ^ v56 ^ v103, 28);
        v89 = __ROR4__(v53 ^ v26 ^ v58 ^ v94, 28);
        v78 = __ROR4__(v26 ^ result ^ v57 ^ v83, 28);
        v67 = __ROR4__(v52 ^ v72, 28);
        for ( i = 0; i <= 7; ++i )
        {
          v24 = v409;
          v398 = v388 ^ v395;
          v411 = v388 ^ (v402 | v409);
          v391 = v24 & v388;
          v405 = v391 ^ ~v402;
          v392 = v398 ^ v391;
          v399 = v405 ^ v411 & v398;
          v406 = v392 | v405;
          v25 = v406 ^ v24;
          v393 = v399 ^ v392;
          v400 = v406 & v399;
          v407 = ~v411 ^ v406;
          v22 = v374;
          v362 = v380 ^ v360;
          v377 = v380 ^ (v367 | v374);
          v383 = v22 & v380;
          v369 = v383 ^ ~v367;
          v384 = v362 ^ v383;
          v363 = v369 ^ v377 & v362;
          v370 = v384 | v369;
          v23 = v370 ^ v22;
          v385 = v363 ^ v384;
          v364 = v370 & v363;
          v371 = ~v377 ^ v370;
          v386 = v25 ^ v385;
          v412 = v386 ^ __ROR4__(v25, 30);
          v387 = v412 ^ __ROR4__(v386, 18);
          v378 = v407 ^ v23;
          v408 = v407 ^ v23 ^ __ROR4__(v407, 30);
          v379 = v408 ^ __ROR4__(v378, 18);
          v402 = v379 ^ __ROR4__(v408, 22);
          v374 = __ROR4__(v379, 31);
          v372 = v400 ^ v371;
          v401 = v372 ^ __ROR4__(v400, 30);
          v373 = v401 ^ __ROR4__(v372, 18);
          v395 = v373 ^ __ROR4__(v401, 22);
          v367 = __ROR4__(v373, 31);
          v365 = v393 ^ v364;
          v394 = v365 ^ __ROR4__(v393, 30);
          v366 = v394 ^ __ROR4__(v365, 18);
          v388 = v366 ^ __ROR4__(v394, 22);
          v360 = __ROR4__(v366, 31);
          v409 = dword_1D5C28[i] ^ v387 ^ __ROR4__(v412, 22);
          v380 = dword_1D5C48[i] ^ __ROR4__(v387, 31);
        }
        for ( j = 0; j <= 7; ++j )
        {
          v20 = v356;
          v345 = v331 ^ v340;
          v358 = v331 ^ (v349 | v356);
          v336 = v20 & v331;
          v352 = v336 ^ ~v349;
          v337 = v345 ^ v336;
          v346 = v352 ^ v358 & v345;
          v353 = v337 | v352;
          v21 = v353 ^ v20;
          v338 = v346 ^ v337;
          v347 = v353 & v346;
          v354 = ~v358 ^ v353;
          v18 = v312;
          v297 = v320 ^ v291;
          v317 = v320 ^ (v302 | v312);
          v326 = v18 & v320;
          v307 = v326 ^ ~v302;
          v327 = v297 ^ v326;
          v298 = v307 ^ v317 & v297;
          v308 = v327 | v307;
          v19 = v308 ^ v18;
          v328 = v298 ^ v327;
          v299 = v308 & v298;
          v309 = ~v317 ^ v308;
          v329 = v21 ^ v328;
          v359 = v329 ^ __ROR4__(v21, 30);
          v330 = v359 ^ __ROR4__(v329, 18);
          v318 = v354 ^ v19;
          v355 = v354 ^ v19 ^ __ROR4__(v354, 30);
          v319 = v355 ^ __ROR4__(v318, 18);
          v349 = v319 ^ __ROR4__(v355, 22);
          v312 = __ROR4__(v319, 31);
          v310 = v347 ^ v309;
          v348 = v310 ^ __ROR4__(v347, 30);
          v311 = v348 ^ __ROR4__(v310, 18);
          v340 = v311 ^ __ROR4__(v348, 22);
          v302 = __ROR4__(v311, 31);
          v300 = v338 ^ v299;
          v339 = v300 ^ __ROR4__(v338, 30);
          v301 = v339 ^ __ROR4__(v300, 18);
          v331 = v301 ^ __ROR4__(v339, 22);
          v291 = __ROR4__(v301, 31);
          v356 = dword_1D5C68[j] ^ v330 ^ __ROR4__(v359, 22);
          v320 = dword_1D5C88[j] ^ __ROR4__(v330, 31);
        }
        for ( k = 0; k <= 7; ++k )
        {
          v16 = v287;
          v275 = v259 ^ v269;
          v289 = v259 ^ (v279 | v287);
          v265 = v16 & v259;
          v283 = v265 ^ ~v279;
          v266 = v275 ^ v265;
          v276 = v283 ^ v289 & v275;
          v284 = v266 | v283;
          v17 = v284 ^ v16;
          v267 = v276 ^ v266;
          v277 = v284 & v276;
          v285 = ~v289 ^ v284;
          v14 = v237;
          v221 = v247 ^ v215;
          v244 = v247 ^ (v226 | v237);
          v254 = v14 & v247;
          v232 = v254 ^ ~v226;
          v255 = v221 ^ v254;
          v222 = v232 ^ v244 & v221;
          v233 = v255 | v232;
          v15 = v233 ^ v14;
          v256 = v222 ^ v255;
          v223 = v233 & v222;
          v234 = ~v244 ^ v233;
          v257 = v17 ^ v256;
          v290 = v257 ^ __ROR4__(v17, 30);
          v258 = v290 ^ __ROR4__(v257, 18);
          v245 = v285 ^ v15;
          v286 = v285 ^ v15 ^ __ROR4__(v285, 30);
          v246 = v286 ^ __ROR4__(v245, 18);
          v279 = v246 ^ __ROR4__(v286, 22);
          v237 = __ROR4__(v246, 31);
          v235 = v277 ^ v234;
          v278 = v235 ^ __ROR4__(v277, 30);
          v236 = v278 ^ __ROR4__(v235, 18);
          v269 = v236 ^ __ROR4__(v278, 22);
          v226 = __ROR4__(v236, 31);
          v224 = v267 ^ v223;
          v268 = v224 ^ __ROR4__(v267, 30);
          v225 = v268 ^ __ROR4__(v224, 18);
          v259 = v225 ^ __ROR4__(v268, 22);
          v215 = __ROR4__(v225, 31);
          v287 = dword_1D5CA8[k] ^ v258 ^ __ROR4__(v290, 22);
          v247 = dword_1D5CC8[k] ^ __ROR4__(v258, 31);
        }
        for ( m = 0; m <= 7; ++m )
        {
          v12 = v211;
          v199 = v183 ^ v193;
          v213 = v183 ^ (v203 | v211);
          v189 = v12 & v183;
          v207 = v189 ^ ~v203;
          v190 = v199 ^ v189;
          v200 = v207 ^ v213 & v199;
          v208 = v190 | v207;
          v13 = v208 ^ v12;
          v191 = v200 ^ v190;
          v201 = v208 & v200;
          v209 = ~v213 ^ v208;
          v10 = v163;
          v147 = v172 ^ v141;
          v169 = v172 ^ (v152 | v163);
          v178 = v10 & v172;
          v158 = v178 ^ ~v152;
          v179 = v147 ^ v178;
          v148 = v158 ^ v169 & v147;
          v159 = v179 | v158;
          v11 = v159 ^ v10;
          v180 = v148 ^ v179;
          v149 = v159 & v148;
          v160 = ~v169 ^ v159;
          v181 = v13 ^ v180;
          v214 = v181 ^ __ROR4__(v13, 30);
          v182 = v214 ^ __ROR4__(v181, 18);
          v170 = v209 ^ v11;
          v210 = v209 ^ v11 ^ __ROR4__(v209, 30);
          v171 = v210 ^ __ROR4__(v170, 18);
          v203 = v171 ^ __ROR4__(v210, 22);
          v163 = __ROR4__(v171, 31);
          v161 = v201 ^ v160;
          v202 = v161 ^ __ROR4__(v201, 30);
          v162 = v202 ^ __ROR4__(v161, 18);
          v193 = v162 ^ __ROR4__(v202, 22);
          v152 = __ROR4__(v162, 31);
          v150 = v191 ^ v149;
          v192 = v150 ^ __ROR4__(v191, 30);
          v151 = v192 ^ __ROR4__(v150, 18);
          v183 = v151 ^ __ROR4__(v192, 22);
          v141 = __ROR4__(v151, 31);
          v211 = dword_1D5CE8[m] ^ v182 ^ __ROR4__(v214, 22);
          v172 = dword_1D5D08[m] ^ __ROR4__(v182, 31);
        }
        for ( ii = 0; ii <= 7; ++ii )
        {
          v8 = v137;
          v125 = v109 ^ v119;
          v139 = v109 ^ (v129 | v137);
          v115 = v8 & v109;
          v133 = v115 ^ ~v129;
          v116 = v125 ^ v115;
          v126 = v133 ^ v139 & v125;
          v134 = v116 | v133;
          v9 = v134 ^ v8;
          v117 = v126 ^ v116;
          v127 = v134 & v126;
          v135 = ~v139 ^ v134;
          v6 = v89;
          v73 = v98 ^ v67;
          v95 = v98 ^ (v78 | v89);
          v104 = v6 & v98;
          v84 = v104 ^ ~v78;
          v105 = v73 ^ v104;
          v74 = v84 ^ v95 & v73;
          v85 = v105 | v84;
          v7 = v85 ^ v6;
          v106 = v74 ^ v105;
          v75 = v85 & v74;
          v86 = ~v95 ^ v85;
          v107 = v9 ^ v106;
          v140 = v107 ^ __ROR4__(v9, 30);
          v108 = v140 ^ __ROR4__(v107, 18);
          v96 = v135 ^ v7;
          v136 = v135 ^ v7 ^ __ROR4__(v135, 30);
          v97 = v136 ^ __ROR4__(v96, 18);
          v129 = v97 ^ __ROR4__(v136, 22);
          v89 = __ROR4__(v97, 31);
          v87 = v127 ^ v86;
          v128 = v87 ^ __ROR4__(v127, 30);
          v88 = v128 ^ __ROR4__(v87, 18);
          v119 = v88 ^ __ROR4__(v128, 22);
          v78 = __ROR4__(v88, 31);
          v76 = v117 ^ v75;
          v118 = v76 ^ __ROR4__(v117, 30);
          v77 = v118 ^ __ROR4__(v76, 18);
          v109 = v77 ^ __ROR4__(v118, 22);
          v67 = __ROR4__(v77, 31);
          v137 = dword_1D5D28[ii] ^ v108 ^ __ROR4__(v140, 22);
          v98 = dword_1D5D48[ii] ^ __ROR4__(v108, 31);
        }
        v413 = 0;
      }
    }
    v5[9] = v409;
    v5[10] = v402;
    v5[11] = v395;
    v5[12] = v388;
    v5[13] = v380;
    v5[14] = v374;
    v5[15] = v367;
    v5[16] = v360;
    v5[17] = v356;
    v5[18] = v349;
    v5[19] = v340;
    v5[20] = v331;
    v5[21] = v320;
    v5[22] = v312;
    v5[23] = v302;
    v5[24] = v291;
    v5[25] = v287;
    v5[26] = v279;
    v5[27] = v269;
    v5[28] = v259;
    v5[29] = v247;
    v5[30] = v237;
    v5[31] = v226;
    v5[32] = v215;
    v5[33] = v211;
    v5[34] = v203;
    v5[35] = v193;
    v5[36] = v183;
    v5[37] = v172;
    v5[38] = v163;
    v5[39] = v152;
    v5[40] = v141;
    v5[41] = v137;
    v5[42] = v129;
    v5[43] = v119;
    v5[44] = v109;
    v5[45] = v98;
    v5[46] = v89;
    v5[47] = v78;
    v5[48] = v67;
    v5[8] = v413;
  }
  else
  {
    result = (unsigned int)memcpy((void *)(result + v413), a2, a3);
    v5[8] = v3 + v413;
  }
  return result;
}
