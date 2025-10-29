void *__fastcall sub_167660(_DWORD *a1)
{
  void *result; // r0
  unsigned int v2; // r4
  unsigned int v3; // r4
  unsigned int v4; // r4
  unsigned int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r0
  int v9; // r2
  _OWORD dest[4]; // [sp+8h] [bp+8h] BYREF
  unsigned int v12; // [sp+48h] [bp+48h]
  unsigned int v13; // [sp+4Ch] [bp+4Ch]
  unsigned int v14; // [sp+50h] [bp+50h]
  unsigned int v15; // [sp+54h] [bp+54h]
  unsigned int v16; // [sp+58h] [bp+58h]
  unsigned int v17; // [sp+5Ch] [bp+5Ch]
  unsigned int v18; // [sp+60h] [bp+60h]
  unsigned int v19; // [sp+64h] [bp+64h]
  unsigned int v20; // [sp+68h] [bp+68h]
  unsigned int v21; // [sp+6Ch] [bp+6Ch]
  unsigned int v22; // [sp+70h] [bp+70h]
  unsigned int v23; // [sp+74h] [bp+74h]
  unsigned int v24; // [sp+78h] [bp+78h]
  unsigned int v25; // [sp+7Ch] [bp+7Ch]
  unsigned int v26; // [sp+80h] [bp+80h]
  unsigned int v27; // [sp+84h] [bp+84h]
  unsigned int v28; // [sp+88h] [bp+88h]
  unsigned int v29; // [sp+8Ch] [bp+8Ch]
  unsigned int v30; // [sp+90h] [bp+90h]
  unsigned int v31; // [sp+94h] [bp+94h]
  unsigned int v32; // [sp+98h] [bp+98h]
  unsigned int v33; // [sp+9Ch] [bp+9Ch]
  unsigned int v34; // [sp+A0h] [bp+A0h]
  unsigned int v35; // [sp+A4h] [bp+A4h]
  unsigned int v36; // [sp+A8h] [bp+A8h]
  unsigned int v37; // [sp+ACh] [bp+ACh]
  unsigned int v38; // [sp+B0h] [bp+B0h]
  unsigned int v39; // [sp+B4h] [bp+B4h]
  unsigned int v40; // [sp+B8h] [bp+B8h]
  unsigned int v41; // [sp+BCh] [bp+BCh]
  unsigned int v42; // [sp+C0h] [bp+C0h]
  unsigned int v43; // [sp+C4h] [bp+C4h]
  unsigned int v44; // [sp+C8h] [bp+C8h]
  unsigned int v45; // [sp+CCh] [bp+CCh]
  unsigned int v46; // [sp+D0h] [bp+D0h]
  unsigned int v47; // [sp+D4h] [bp+D4h]
  unsigned int v48; // [sp+D8h] [bp+D8h]
  unsigned int v49; // [sp+DCh] [bp+DCh]
  unsigned int v50; // [sp+E0h] [bp+E0h]
  unsigned int v51; // [sp+E4h] [bp+E4h]
  unsigned int v52; // [sp+E8h] [bp+E8h]
  unsigned int v53; // [sp+ECh] [bp+ECh]
  unsigned int v54; // [sp+F0h] [bp+F0h]
  unsigned int v55; // [sp+F4h] [bp+F4h]
  unsigned int v56; // [sp+F8h] [bp+F8h]
  unsigned int v57; // [sp+FCh] [bp+FCh]
  unsigned int v58; // [sp+100h] [bp+100h]
  unsigned int v59; // [sp+104h] [bp+104h]
  _OWORD *v60; // [sp+108h] [bp+108h]
  _DWORD *v61; // [sp+10Ch] [bp+10Ch]
  unsigned int v62; // [sp+110h] [bp+110h]
  unsigned int v63; // [sp+114h] [bp+114h]
  unsigned int v64; // [sp+118h] [bp+118h]
  int v65; // [sp+11Ch] [bp+11Ch]
  int v66; // [sp+120h] [bp+120h]
  int v67; // [sp+124h] [bp+124h]
  unsigned int v68; // [sp+128h] [bp+128h]
  unsigned int v69; // [sp+12Ch] [bp+12Ch]
  unsigned int v70; // [sp+130h] [bp+130h]
  unsigned int v71; // [sp+134h] [bp+134h]
  unsigned int v72; // [sp+138h] [bp+138h]
  unsigned int v73; // [sp+13Ch] [bp+13Ch]
  unsigned int v74; // [sp+140h] [bp+140h]
  int v75; // [sp+144h] [bp+144h]
  int v76; // [sp+148h] [bp+148h]
  int v77; // [sp+14Ch] [bp+14Ch]
  unsigned int v78; // [sp+150h] [bp+150h]
  unsigned int v79; // [sp+154h] [bp+154h]
  unsigned int v80; // [sp+158h] [bp+158h]
  unsigned int v81; // [sp+15Ch] [bp+15Ch]
  unsigned int v82; // [sp+160h] [bp+160h]
  unsigned int v83; // [sp+164h] [bp+164h]
  unsigned int v84; // [sp+168h] [bp+168h]
  int v85; // [sp+16Ch] [bp+16Ch]
  int v86; // [sp+170h] [bp+170h]
  int v87; // [sp+174h] [bp+174h]
  unsigned int v88; // [sp+178h] [bp+178h]
  unsigned int v89; // [sp+17Ch] [bp+17Ch]
  unsigned int v90; // [sp+180h] [bp+180h]
  unsigned int v91; // [sp+184h] [bp+184h]
  unsigned int v92; // [sp+188h] [bp+188h]
  unsigned int v93; // [sp+18Ch] [bp+18Ch]
  unsigned int v94; // [sp+190h] [bp+190h]
  int v95; // [sp+194h] [bp+194h]
  int v96; // [sp+198h] [bp+198h]
  int v97; // [sp+19Ch] [bp+19Ch]
  unsigned int v98; // [sp+1A0h] [bp+1A0h]
  unsigned int v99; // [sp+1A4h] [bp+1A4h]
  unsigned int v100; // [sp+1A8h] [bp+1A8h]
  unsigned int v101; // [sp+1ACh] [bp+1ACh]
  unsigned int v102; // [sp+1B0h] [bp+1B0h]
  unsigned int v103; // [sp+1B4h] [bp+1B4h]
  unsigned int v104; // [sp+1B8h] [bp+1B8h]
  int v105; // [sp+1BCh] [bp+1BCh]
  int v106; // [sp+1C0h] [bp+1C0h]
  int v107; // [sp+1C4h] [bp+1C4h]
  unsigned int v108; // [sp+1C8h] [bp+1C8h]
  unsigned int v109; // [sp+1CCh] [bp+1CCh]
  unsigned int v110; // [sp+1D0h] [bp+1D0h]
  unsigned int v111; // [sp+1D4h] [bp+1D4h]
  unsigned int v112; // [sp+1D8h] [bp+1D8h]
  unsigned int v113; // [sp+1DCh] [bp+1DCh]
  unsigned int v114; // [sp+1E0h] [bp+1E0h]
  int v115; // [sp+1E4h] [bp+1E4h]
  int v116; // [sp+1E8h] [bp+1E8h]
  int v117; // [sp+1ECh] [bp+1ECh]
  unsigned int v118; // [sp+1F0h] [bp+1F0h]
  unsigned int v119; // [sp+1F4h] [bp+1F4h]
  unsigned int v120; // [sp+1F8h] [bp+1F8h]
  unsigned int v121; // [sp+1FCh] [bp+1FCh]
  unsigned int v122; // [sp+200h] [bp+200h]
  unsigned int v123; // [sp+204h] [bp+204h]
  unsigned int v124; // [sp+208h] [bp+208h]
  int v125; // [sp+20Ch] [bp+20Ch]
  int v126; // [sp+210h] [bp+210h]
  int v127; // [sp+214h] [bp+214h]
  unsigned int v128; // [sp+218h] [bp+218h]
  unsigned int v129; // [sp+21Ch] [bp+21Ch]
  unsigned int v130; // [sp+220h] [bp+220h]
  unsigned int v131; // [sp+224h] [bp+224h]
  unsigned int v132; // [sp+228h] [bp+228h]
  unsigned int v133; // [sp+22Ch] [bp+22Ch]
  unsigned int v134; // [sp+230h] [bp+230h]
  int v135; // [sp+234h] [bp+234h]
  int v136; // [sp+238h] [bp+238h]
  int v137; // [sp+23Ch] [bp+23Ch]
  unsigned int v138; // [sp+240h] [bp+240h]
  unsigned int v139; // [sp+244h] [bp+244h]
  unsigned int v140; // [sp+248h] [bp+248h]
  unsigned int v141; // [sp+24Ch] [bp+24Ch]
  unsigned int v142; // [sp+250h] [bp+250h]
  unsigned int v143; // [sp+254h] [bp+254h]
  unsigned int v144; // [sp+258h] [bp+258h]
  int v145; // [sp+25Ch] [bp+25Ch]
  int v146; // [sp+260h] [bp+260h]
  int v147; // [sp+264h] [bp+264h]
  unsigned int v148; // [sp+268h] [bp+268h]
  unsigned int v149; // [sp+26Ch] [bp+26Ch]
  unsigned int v150; // [sp+270h] [bp+270h]
  unsigned int v151; // [sp+274h] [bp+274h]
  unsigned int v152; // [sp+278h] [bp+278h]
  unsigned int v153; // [sp+27Ch] [bp+27Ch]
  unsigned int v154; // [sp+280h] [bp+280h]
  int v155; // [sp+284h] [bp+284h]
  int v156; // [sp+288h] [bp+288h]
  int v157; // [sp+28Ch] [bp+28Ch]
  unsigned int v158; // [sp+290h] [bp+290h]
  unsigned int v159; // [sp+294h] [bp+294h]
  unsigned int v160; // [sp+298h] [bp+298h]
  unsigned int v161; // [sp+29Ch] [bp+29Ch]
  unsigned int v162; // [sp+2A0h] [bp+2A0h]
  unsigned int v163; // [sp+2A4h] [bp+2A4h]
  unsigned int v164; // [sp+2A8h] [bp+2A8h]
  int v165; // [sp+2ACh] [bp+2ACh]
  int v166; // [sp+2B0h] [bp+2B0h]
  int v167; // [sp+2B4h] [bp+2B4h]
  unsigned int v168; // [sp+2B8h] [bp+2B8h]
  unsigned int v169; // [sp+2BCh] [bp+2BCh]
  unsigned int v170; // [sp+2C0h] [bp+2C0h]
  unsigned int v171; // [sp+2C4h] [bp+2C4h]
  unsigned int v172; // [sp+2C8h] [bp+2C8h]
  unsigned int v173; // [sp+2CCh] [bp+2CCh]
  unsigned int v174; // [sp+2D0h] [bp+2D0h]
  int v175; // [sp+2D4h] [bp+2D4h]
  int v176; // [sp+2D8h] [bp+2D8h]
  int v177; // [sp+2DCh] [bp+2DCh]
  unsigned int v178; // [sp+2E0h] [bp+2E0h]
  unsigned int v179; // [sp+2E4h] [bp+2E4h]
  unsigned int v180; // [sp+2E8h] [bp+2E8h]
  unsigned int v181; // [sp+2ECh] [bp+2ECh]
  unsigned int v182; // [sp+2F0h] [bp+2F0h]
  unsigned int v183; // [sp+2F4h] [bp+2F4h]
  unsigned int v184; // [sp+2F8h] [bp+2F8h]
  int v185; // [sp+2FCh] [bp+2FCh]
  int v186; // [sp+300h] [bp+300h]
  int v187; // [sp+304h] [bp+304h]
  unsigned int v188; // [sp+308h] [bp+308h]
  int v189; // [sp+30Ch] [bp+30Ch]
  unsigned int v190; // [sp+310h] [bp+310h]
  int v191; // [sp+314h] [bp+314h]
  unsigned int v192; // [sp+318h] [bp+318h]
  unsigned int v193; // [sp+31Ch] [bp+31Ch]
  unsigned int v194; // [sp+320h] [bp+320h]
  int v195; // [sp+324h] [bp+324h]
  int v196; // [sp+328h] [bp+328h]
  int v197; // [sp+32Ch] [bp+32Ch]
  int v198; // [sp+330h] [bp+330h]
  int v199; // [sp+334h] [bp+334h]
  int v200; // [sp+338h] [bp+338h]
  int v201; // [sp+33Ch] [bp+33Ch]
  unsigned int v202; // [sp+340h] [bp+340h]
  unsigned int v203; // [sp+344h] [bp+344h]
  unsigned int v204; // [sp+348h] [bp+348h]
  int v205; // [sp+34Ch] [bp+34Ch]
  int v206; // [sp+350h] [bp+350h]
  int v207; // [sp+354h] [bp+354h]
  int v208; // [sp+358h] [bp+358h]
  int v209; // [sp+35Ch] [bp+35Ch]
  int v210; // [sp+360h] [bp+360h]
  int v211; // [sp+364h] [bp+364h]
  unsigned int v212; // [sp+368h] [bp+368h]
  unsigned int v213; // [sp+36Ch] [bp+36Ch]
  unsigned int v214; // [sp+370h] [bp+370h]
  int v215; // [sp+374h] [bp+374h]
  int v216; // [sp+378h] [bp+378h]
  int v217; // [sp+37Ch] [bp+37Ch]
  int v218; // [sp+380h] [bp+380h]
  int v219; // [sp+384h] [bp+384h]
  int v220; // [sp+388h] [bp+388h]
  int v221; // [sp+38Ch] [bp+38Ch]
  unsigned int v222; // [sp+390h] [bp+390h]
  unsigned int v223; // [sp+394h] [bp+394h]
  unsigned int v224; // [sp+398h] [bp+398h]
  unsigned int v225; // [sp+39Ch] [bp+39Ch]
  unsigned int v226; // [sp+3A0h] [bp+3A0h]
  unsigned int v227; // [sp+3A4h] [bp+3A4h]
  unsigned int v228; // [sp+3A8h] [bp+3A8h]
  unsigned int v229; // [sp+3ACh] [bp+3ACh]
  unsigned int v230; // [sp+3B0h] [bp+3B0h]
  unsigned int v231; // [sp+3B4h] [bp+3B4h]
  unsigned int v232; // [sp+3B8h] [bp+3B8h]
  unsigned int v233; // [sp+3BCh] [bp+3BCh]
  unsigned int v234; // [sp+3C0h] [bp+3C0h]
  unsigned int v235; // [sp+3C4h] [bp+3C4h]
  unsigned int v236; // [sp+3C8h] [bp+3C8h]
  unsigned int v237; // [sp+3CCh] [bp+3CCh]
  unsigned int v238; // [sp+3D0h] [bp+3D0h]
  unsigned int v239; // [sp+3D4h] [bp+3D4h]
  unsigned int v240; // [sp+3D8h] [bp+3D8h]
  unsigned int v241; // [sp+3DCh] [bp+3DCh]
  unsigned int v242; // [sp+3E0h] [bp+3E0h]
  unsigned int v243; // [sp+3E4h] [bp+3E4h]
  unsigned int v244; // [sp+3E8h] [bp+3E8h]
  unsigned int v245; // [sp+3ECh] [bp+3ECh]
  unsigned int v246; // [sp+3F0h] [bp+3F0h]
  unsigned int v247; // [sp+3F4h] [bp+3F4h]
  unsigned int v248; // [sp+3F8h] [bp+3F8h]
  unsigned int v249; // [sp+3FCh] [bp+3FCh]
  unsigned int v250; // [sp+400h] [bp+400h]
  unsigned int v251; // [sp+404h] [bp+404h]
  unsigned int v252; // [sp+408h] [bp+408h]
  unsigned int v253; // [sp+40Ch] [bp+40Ch]
  unsigned int v254; // [sp+410h] [bp+410h]
  unsigned int v255; // [sp+414h] [bp+414h]
  unsigned int v256; // [sp+418h] [bp+418h]
  unsigned int v257; // [sp+41Ch] [bp+41Ch]
  unsigned int v258; // [sp+420h] [bp+420h]
  unsigned int v259; // [sp+424h] [bp+424h]
  unsigned int v260; // [sp+428h] [bp+428h]
  unsigned int v261; // [sp+42Ch] [bp+42Ch]
  unsigned int v262; // [sp+430h] [bp+430h]
  unsigned int v263; // [sp+434h] [bp+434h]
  unsigned int v264; // [sp+438h] [bp+438h]
  unsigned int v265; // [sp+43Ch] [bp+43Ch]
  unsigned int v266; // [sp+440h] [bp+440h]
  unsigned int v267; // [sp+444h] [bp+444h]
  unsigned int v268; // [sp+448h] [bp+448h]
  unsigned int v269; // [sp+44Ch] [bp+44Ch]
  unsigned int v270; // [sp+450h] [bp+450h]
  unsigned int v271; // [sp+454h] [bp+454h]
  unsigned int v272; // [sp+458h] [bp+458h]
  unsigned int v273; // [sp+45Ch] [bp+45Ch]
  unsigned int v274; // [sp+460h] [bp+460h]
  unsigned int v275; // [sp+464h] [bp+464h]
  unsigned int v276; // [sp+468h] [bp+468h]
  unsigned int v277; // [sp+46Ch] [bp+46Ch]
  unsigned int v278; // [sp+470h] [bp+470h]
  unsigned int v279; // [sp+474h] [bp+474h]
  unsigned int v280; // [sp+478h] [bp+478h]
  unsigned int v281; // [sp+47Ch] [bp+47Ch]
  unsigned int v282; // [sp+480h] [bp+480h]
  unsigned int v283; // [sp+484h] [bp+484h]
  unsigned int v284; // [sp+488h] [bp+488h]
  unsigned int v285; // [sp+48Ch] [bp+48Ch]
  unsigned int v286; // [sp+490h] [bp+490h]
  unsigned int v287; // [sp+494h] [bp+494h]
  unsigned int v288; // [sp+498h] [bp+498h]
  unsigned int k; // [sp+49Ch] [bp+49Ch]
  unsigned int i; // [sp+4A0h] [bp+4A0h]
  unsigned int j; // [sp+4A4h] [bp+4A4h]
  int v292; // [sp+4A8h] [bp+4A8h]
  int v293; // [sp+4ACh] [bp+4ACh]
  int v294; // [sp+4B0h] [bp+4B0h]
  int v295; // [sp+4B4h] [bp+4B4h]

  v295 = a1[66];
  v294 = a1[67];
  v293 = a1[68];
  v292 = a1[69];
  result = memcpy(dest, a1 + 50, sizeof(dest));
  for ( i = 0; i <= 0xB; ++i )
  {
    v2 = i + 4;
    LODWORD(dest[v2]) = sub_1673D0((int)&a1[4 * i]);
    v3 = i + 4;
    DWORD1(dest[v3]) = sub_1673D0((int)&a1[4 * i + 1]);
    v4 = i + 4;
    DWORD2(dest[v4]) = sub_1673D0((int)&a1[4 * i + 2]);
    v5 = i + 4;
    result = (void *)sub_1673D0((int)&a1[4 * i + 3]);
    HIDWORD(dest[v5]) = result;
  }
  for ( j = 0; j <= 7; ++j )
  {
    v288 = v295
         ^ dword_1D5D68[LOBYTE(dest[0])]
         ^ dword_1D6168[BYTE5(dest[0])]
         ^ dword_1D6568[BYTE10(dest[0])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[0]))];
    v287 = v294
         ^ dword_1D5D68[BYTE4(dest[0])]
         ^ dword_1D6168[BYTE9(dest[0])]
         ^ dword_1D6568[BYTE14(dest[0])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[0]))];
    v286 = v293
         ^ dword_1D5D68[BYTE8(dest[0])]
         ^ dword_1D6168[BYTE13(dest[0])]
         ^ dword_1D6568[BYTE2(dest[0])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[0]))];
    v285 = v292
         ^ dword_1D5D68[BYTE12(dest[0])]
         ^ dword_1D6168[BYTE1(dest[0])]
         ^ dword_1D6568[BYTE6(dest[0])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[0]))];
    LODWORD(dest[0]) = dword_1D5D68[(unsigned __int8)v288]
                     ^ dword_1D6168[BYTE1(v287)]
                     ^ dword_1D6568[BYTE2(v286)]
                     ^ dword_1D6968[HIBYTE(v285)];
    DWORD1(dest[0]) = dword_1D5D68[(unsigned __int8)v287]
                    ^ dword_1D6168[BYTE1(v286)]
                    ^ dword_1D6568[BYTE2(v285)]
                    ^ dword_1D6968[HIBYTE(v288)];
    DWORD2(dest[0]) = dword_1D5D68[(unsigned __int8)v286]
                    ^ dword_1D6168[BYTE1(v285)]
                    ^ dword_1D6568[BYTE2(v288)]
                    ^ dword_1D6968[HIBYTE(v287)];
    HIDWORD(dest[0]) = dword_1D5D68[(unsigned __int8)v285]
                     ^ dword_1D6168[BYTE1(v288)]
                     ^ dword_1D6568[BYTE2(v287)]
                     ^ dword_1D6968[HIBYTE(v286)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v284 = v295
         ^ dword_1D5D68[LOBYTE(dest[1])]
         ^ dword_1D6168[BYTE5(dest[1])]
         ^ dword_1D6568[BYTE10(dest[1])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[1]))];
    v283 = v294
         ^ dword_1D5D68[BYTE4(dest[1])]
         ^ dword_1D6168[BYTE9(dest[1])]
         ^ dword_1D6568[BYTE14(dest[1])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[1]))];
    v282 = v293
         ^ dword_1D5D68[BYTE8(dest[1])]
         ^ dword_1D6168[BYTE13(dest[1])]
         ^ dword_1D6568[BYTE2(dest[1])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[1]))];
    v281 = v292
         ^ dword_1D5D68[BYTE12(dest[1])]
         ^ dword_1D6168[BYTE1(dest[1])]
         ^ dword_1D6568[BYTE6(dest[1])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[1]))];
    LODWORD(dest[1]) = dword_1D5D68[(unsigned __int8)v284]
                     ^ dword_1D6168[BYTE1(v283)]
                     ^ dword_1D6568[BYTE2(v282)]
                     ^ dword_1D6968[HIBYTE(v281)];
    DWORD1(dest[1]) = dword_1D5D68[(unsigned __int8)v283]
                    ^ dword_1D6168[BYTE1(v282)]
                    ^ dword_1D6568[BYTE2(v281)]
                    ^ dword_1D6968[HIBYTE(v284)];
    DWORD2(dest[1]) = dword_1D5D68[(unsigned __int8)v282]
                    ^ dword_1D6168[BYTE1(v281)]
                    ^ dword_1D6568[BYTE2(v284)]
                    ^ dword_1D6968[HIBYTE(v283)];
    HIDWORD(dest[1]) = dword_1D5D68[(unsigned __int8)v281]
                     ^ dword_1D6168[BYTE1(v284)]
                     ^ dword_1D6568[BYTE2(v283)]
                     ^ dword_1D6968[HIBYTE(v282)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v280 = v295
         ^ dword_1D5D68[LOBYTE(dest[2])]
         ^ dword_1D6168[BYTE5(dest[2])]
         ^ dword_1D6568[BYTE10(dest[2])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[2]))];
    v279 = v294
         ^ dword_1D5D68[BYTE4(dest[2])]
         ^ dword_1D6168[BYTE9(dest[2])]
         ^ dword_1D6568[BYTE14(dest[2])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[2]))];
    v278 = v293
         ^ dword_1D5D68[BYTE8(dest[2])]
         ^ dword_1D6168[BYTE13(dest[2])]
         ^ dword_1D6568[BYTE2(dest[2])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[2]))];
    v277 = v292
         ^ dword_1D5D68[BYTE12(dest[2])]
         ^ dword_1D6168[BYTE1(dest[2])]
         ^ dword_1D6568[BYTE6(dest[2])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[2]))];
    LODWORD(dest[2]) = dword_1D5D68[(unsigned __int8)v280]
                     ^ dword_1D6168[BYTE1(v279)]
                     ^ dword_1D6568[BYTE2(v278)]
                     ^ dword_1D6968[HIBYTE(v277)];
    DWORD1(dest[2]) = dword_1D5D68[(unsigned __int8)v279]
                    ^ dword_1D6168[BYTE1(v278)]
                    ^ dword_1D6568[BYTE2(v277)]
                    ^ dword_1D6968[HIBYTE(v280)];
    DWORD2(dest[2]) = dword_1D5D68[(unsigned __int8)v278]
                    ^ dword_1D6168[BYTE1(v277)]
                    ^ dword_1D6568[BYTE2(v280)]
                    ^ dword_1D6968[HIBYTE(v279)];
    HIDWORD(dest[2]) = dword_1D5D68[(unsigned __int8)v277]
                     ^ dword_1D6168[BYTE1(v280)]
                     ^ dword_1D6568[BYTE2(v279)]
                     ^ dword_1D6968[HIBYTE(v278)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v276 = v295
         ^ dword_1D5D68[LOBYTE(dest[3])]
         ^ dword_1D6168[BYTE5(dest[3])]
         ^ dword_1D6568[BYTE10(dest[3])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[3]))];
    v275 = v294
         ^ dword_1D5D68[BYTE4(dest[3])]
         ^ dword_1D6168[BYTE9(dest[3])]
         ^ dword_1D6568[BYTE14(dest[3])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[3]))];
    v274 = v293
         ^ dword_1D5D68[BYTE8(dest[3])]
         ^ dword_1D6168[BYTE13(dest[3])]
         ^ dword_1D6568[BYTE2(dest[3])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[3]))];
    v273 = v292
         ^ dword_1D5D68[BYTE12(dest[3])]
         ^ dword_1D6168[BYTE1(dest[3])]
         ^ dword_1D6568[BYTE6(dest[3])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[3]))];
    LODWORD(dest[3]) = dword_1D5D68[(unsigned __int8)v276]
                     ^ dword_1D6168[BYTE1(v275)]
                     ^ dword_1D6568[BYTE2(v274)]
                     ^ dword_1D6968[HIBYTE(v273)];
    DWORD1(dest[3]) = dword_1D5D68[(unsigned __int8)v275]
                    ^ dword_1D6168[BYTE1(v274)]
                    ^ dword_1D6568[BYTE2(v273)]
                    ^ dword_1D6968[HIBYTE(v276)];
    DWORD2(dest[3]) = dword_1D5D68[(unsigned __int8)v274]
                    ^ dword_1D6168[BYTE1(v273)]
                    ^ dword_1D6568[BYTE2(v276)]
                    ^ dword_1D6968[HIBYTE(v275)];
    HIDWORD(dest[3]) = dword_1D5D68[(unsigned __int8)v273]
                     ^ dword_1D6168[BYTE1(v276)]
                     ^ dword_1D6568[BYTE2(v275)]
                     ^ dword_1D6968[HIBYTE(v274)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v272 = v295
         ^ dword_1D5D68[(unsigned __int8)v12]
         ^ dword_1D6168[BYTE1(v13)]
         ^ dword_1D6568[BYTE2(v14)]
         ^ dword_1D6968[HIBYTE(v15)];
    v271 = v294
         ^ dword_1D5D68[(unsigned __int8)v13]
         ^ dword_1D6168[BYTE1(v14)]
         ^ dword_1D6568[BYTE2(v15)]
         ^ dword_1D6968[HIBYTE(v12)];
    v270 = v293
         ^ dword_1D5D68[(unsigned __int8)v14]
         ^ dword_1D6168[BYTE1(v15)]
         ^ dword_1D6568[BYTE2(v12)]
         ^ dword_1D6968[HIBYTE(v13)];
    v269 = v292
         ^ dword_1D5D68[(unsigned __int8)v15]
         ^ dword_1D6168[BYTE1(v12)]
         ^ dword_1D6568[BYTE2(v13)]
         ^ dword_1D6968[HIBYTE(v14)];
    v12 = dword_1D5D68[(unsigned __int8)v272]
        ^ dword_1D6168[BYTE1(v271)]
        ^ dword_1D6568[BYTE2(v270)]
        ^ dword_1D6968[HIBYTE(v269)];
    v13 = dword_1D5D68[(unsigned __int8)v271]
        ^ dword_1D6168[BYTE1(v270)]
        ^ dword_1D6568[BYTE2(v269)]
        ^ dword_1D6968[HIBYTE(v272)];
    v14 = dword_1D5D68[(unsigned __int8)v270]
        ^ dword_1D6168[BYTE1(v269)]
        ^ dword_1D6568[BYTE2(v272)]
        ^ dword_1D6968[HIBYTE(v271)];
    v15 = dword_1D5D68[(unsigned __int8)v269]
        ^ dword_1D6168[BYTE1(v272)]
        ^ dword_1D6568[BYTE2(v271)]
        ^ dword_1D6968[HIBYTE(v270)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v268 = v295
         ^ dword_1D5D68[(unsigned __int8)v16]
         ^ dword_1D6168[BYTE1(v17)]
         ^ dword_1D6568[BYTE2(v18)]
         ^ dword_1D6968[HIBYTE(v19)];
    v267 = v294
         ^ dword_1D5D68[(unsigned __int8)v17]
         ^ dword_1D6168[BYTE1(v18)]
         ^ dword_1D6568[BYTE2(v19)]
         ^ dword_1D6968[HIBYTE(v16)];
    v266 = v293
         ^ dword_1D5D68[(unsigned __int8)v18]
         ^ dword_1D6168[BYTE1(v19)]
         ^ dword_1D6568[BYTE2(v16)]
         ^ dword_1D6968[HIBYTE(v17)];
    v265 = v292
         ^ dword_1D5D68[(unsigned __int8)v19]
         ^ dword_1D6168[BYTE1(v16)]
         ^ dword_1D6568[BYTE2(v17)]
         ^ dword_1D6968[HIBYTE(v18)];
    v16 = dword_1D5D68[(unsigned __int8)v268]
        ^ dword_1D6168[BYTE1(v267)]
        ^ dword_1D6568[BYTE2(v266)]
        ^ dword_1D6968[HIBYTE(v265)];
    v17 = dword_1D5D68[(unsigned __int8)v267]
        ^ dword_1D6168[BYTE1(v266)]
        ^ dword_1D6568[BYTE2(v265)]
        ^ dword_1D6968[HIBYTE(v268)];
    v18 = dword_1D5D68[(unsigned __int8)v266]
        ^ dword_1D6168[BYTE1(v265)]
        ^ dword_1D6568[BYTE2(v268)]
        ^ dword_1D6968[HIBYTE(v267)];
    v19 = dword_1D5D68[(unsigned __int8)v265]
        ^ dword_1D6168[BYTE1(v268)]
        ^ dword_1D6568[BYTE2(v267)]
        ^ dword_1D6968[HIBYTE(v266)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v264 = v295
         ^ dword_1D5D68[(unsigned __int8)v20]
         ^ dword_1D6168[BYTE1(v21)]
         ^ dword_1D6568[BYTE2(v22)]
         ^ dword_1D6968[HIBYTE(v23)];
    v263 = v294
         ^ dword_1D5D68[(unsigned __int8)v21]
         ^ dword_1D6168[BYTE1(v22)]
         ^ dword_1D6568[BYTE2(v23)]
         ^ dword_1D6968[HIBYTE(v20)];
    v262 = v293
         ^ dword_1D5D68[(unsigned __int8)v22]
         ^ dword_1D6168[BYTE1(v23)]
         ^ dword_1D6568[BYTE2(v20)]
         ^ dword_1D6968[HIBYTE(v21)];
    v261 = v292
         ^ dword_1D5D68[(unsigned __int8)v23]
         ^ dword_1D6168[BYTE1(v20)]
         ^ dword_1D6568[BYTE2(v21)]
         ^ dword_1D6968[HIBYTE(v22)];
    v20 = dword_1D5D68[(unsigned __int8)v264]
        ^ dword_1D6168[BYTE1(v263)]
        ^ dword_1D6568[BYTE2(v262)]
        ^ dword_1D6968[HIBYTE(v261)];
    v21 = dword_1D5D68[(unsigned __int8)v263]
        ^ dword_1D6168[BYTE1(v262)]
        ^ dword_1D6568[BYTE2(v261)]
        ^ dword_1D6968[HIBYTE(v264)];
    v22 = dword_1D5D68[(unsigned __int8)v262]
        ^ dword_1D6168[BYTE1(v261)]
        ^ dword_1D6568[BYTE2(v264)]
        ^ dword_1D6968[HIBYTE(v263)];
    v23 = dword_1D5D68[(unsigned __int8)v261]
        ^ dword_1D6168[BYTE1(v264)]
        ^ dword_1D6568[BYTE2(v263)]
        ^ dword_1D6968[HIBYTE(v262)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v260 = v295
         ^ dword_1D5D68[(unsigned __int8)v24]
         ^ dword_1D6168[BYTE1(v25)]
         ^ dword_1D6568[BYTE2(v26)]
         ^ dword_1D6968[HIBYTE(v27)];
    v259 = v294
         ^ dword_1D5D68[(unsigned __int8)v25]
         ^ dword_1D6168[BYTE1(v26)]
         ^ dword_1D6568[BYTE2(v27)]
         ^ dword_1D6968[HIBYTE(v24)];
    v258 = v293
         ^ dword_1D5D68[(unsigned __int8)v26]
         ^ dword_1D6168[BYTE1(v27)]
         ^ dword_1D6568[BYTE2(v24)]
         ^ dword_1D6968[HIBYTE(v25)];
    v257 = v292
         ^ dword_1D5D68[(unsigned __int8)v27]
         ^ dword_1D6168[BYTE1(v24)]
         ^ dword_1D6568[BYTE2(v25)]
         ^ dword_1D6968[HIBYTE(v26)];
    v24 = dword_1D5D68[(unsigned __int8)v260]
        ^ dword_1D6168[BYTE1(v259)]
        ^ dword_1D6568[BYTE2(v258)]
        ^ dword_1D6968[HIBYTE(v257)];
    v25 = dword_1D5D68[(unsigned __int8)v259]
        ^ dword_1D6168[BYTE1(v258)]
        ^ dword_1D6568[BYTE2(v257)]
        ^ dword_1D6968[HIBYTE(v260)];
    v26 = dword_1D5D68[(unsigned __int8)v258]
        ^ dword_1D6168[BYTE1(v257)]
        ^ dword_1D6568[BYTE2(v260)]
        ^ dword_1D6968[HIBYTE(v259)];
    v27 = dword_1D5D68[(unsigned __int8)v257]
        ^ dword_1D6168[BYTE1(v260)]
        ^ dword_1D6568[BYTE2(v259)]
        ^ dword_1D6968[HIBYTE(v258)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v256 = v295
         ^ dword_1D5D68[(unsigned __int8)v28]
         ^ dword_1D6168[BYTE1(v29)]
         ^ dword_1D6568[BYTE2(v30)]
         ^ dword_1D6968[HIBYTE(v31)];
    v255 = v294
         ^ dword_1D5D68[(unsigned __int8)v29]
         ^ dword_1D6168[BYTE1(v30)]
         ^ dword_1D6568[BYTE2(v31)]
         ^ dword_1D6968[HIBYTE(v28)];
    v254 = v293
         ^ dword_1D5D68[(unsigned __int8)v30]
         ^ dword_1D6168[BYTE1(v31)]
         ^ dword_1D6568[BYTE2(v28)]
         ^ dword_1D6968[HIBYTE(v29)];
    v253 = v292
         ^ dword_1D5D68[(unsigned __int8)v31]
         ^ dword_1D6168[BYTE1(v28)]
         ^ dword_1D6568[BYTE2(v29)]
         ^ dword_1D6968[HIBYTE(v30)];
    v28 = dword_1D5D68[(unsigned __int8)v256]
        ^ dword_1D6168[BYTE1(v255)]
        ^ dword_1D6568[BYTE2(v254)]
        ^ dword_1D6968[HIBYTE(v253)];
    v29 = dword_1D5D68[(unsigned __int8)v255]
        ^ dword_1D6168[BYTE1(v254)]
        ^ dword_1D6568[BYTE2(v253)]
        ^ dword_1D6968[HIBYTE(v256)];
    v30 = dword_1D5D68[(unsigned __int8)v254]
        ^ dword_1D6168[BYTE1(v253)]
        ^ dword_1D6568[BYTE2(v256)]
        ^ dword_1D6968[HIBYTE(v255)];
    v31 = dword_1D5D68[(unsigned __int8)v253]
        ^ dword_1D6168[BYTE1(v256)]
        ^ dword_1D6568[BYTE2(v255)]
        ^ dword_1D6968[HIBYTE(v254)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v252 = v295
         ^ dword_1D5D68[(unsigned __int8)v32]
         ^ dword_1D6168[BYTE1(v33)]
         ^ dword_1D6568[BYTE2(v34)]
         ^ dword_1D6968[HIBYTE(v35)];
    v251 = v294
         ^ dword_1D5D68[(unsigned __int8)v33]
         ^ dword_1D6168[BYTE1(v34)]
         ^ dword_1D6568[BYTE2(v35)]
         ^ dword_1D6968[HIBYTE(v32)];
    v250 = v293
         ^ dword_1D5D68[(unsigned __int8)v34]
         ^ dword_1D6168[BYTE1(v35)]
         ^ dword_1D6568[BYTE2(v32)]
         ^ dword_1D6968[HIBYTE(v33)];
    v249 = v292
         ^ dword_1D5D68[(unsigned __int8)v35]
         ^ dword_1D6168[BYTE1(v32)]
         ^ dword_1D6568[BYTE2(v33)]
         ^ dword_1D6968[HIBYTE(v34)];
    v32 = dword_1D5D68[(unsigned __int8)v252]
        ^ dword_1D6168[BYTE1(v251)]
        ^ dword_1D6568[BYTE2(v250)]
        ^ dword_1D6968[HIBYTE(v249)];
    v33 = dword_1D5D68[(unsigned __int8)v251]
        ^ dword_1D6168[BYTE1(v250)]
        ^ dword_1D6568[BYTE2(v249)]
        ^ dword_1D6968[HIBYTE(v252)];
    v34 = dword_1D5D68[(unsigned __int8)v250]
        ^ dword_1D6168[BYTE1(v249)]
        ^ dword_1D6568[BYTE2(v252)]
        ^ dword_1D6968[HIBYTE(v251)];
    v35 = dword_1D5D68[(unsigned __int8)v249]
        ^ dword_1D6168[BYTE1(v252)]
        ^ dword_1D6568[BYTE2(v251)]
        ^ dword_1D6968[HIBYTE(v250)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v248 = v295
         ^ dword_1D5D68[(unsigned __int8)v36]
         ^ dword_1D6168[BYTE1(v37)]
         ^ dword_1D6568[BYTE2(v38)]
         ^ dword_1D6968[HIBYTE(v39)];
    v247 = v294
         ^ dword_1D5D68[(unsigned __int8)v37]
         ^ dword_1D6168[BYTE1(v38)]
         ^ dword_1D6568[BYTE2(v39)]
         ^ dword_1D6968[HIBYTE(v36)];
    v246 = v293
         ^ dword_1D5D68[(unsigned __int8)v38]
         ^ dword_1D6168[BYTE1(v39)]
         ^ dword_1D6568[BYTE2(v36)]
         ^ dword_1D6968[HIBYTE(v37)];
    v245 = v292
         ^ dword_1D5D68[(unsigned __int8)v39]
         ^ dword_1D6168[BYTE1(v36)]
         ^ dword_1D6568[BYTE2(v37)]
         ^ dword_1D6968[HIBYTE(v38)];
    v36 = dword_1D5D68[(unsigned __int8)v248]
        ^ dword_1D6168[BYTE1(v247)]
        ^ dword_1D6568[BYTE2(v246)]
        ^ dword_1D6968[HIBYTE(v245)];
    v37 = dword_1D5D68[(unsigned __int8)v247]
        ^ dword_1D6168[BYTE1(v246)]
        ^ dword_1D6568[BYTE2(v245)]
        ^ dword_1D6968[HIBYTE(v248)];
    v38 = dword_1D5D68[(unsigned __int8)v246]
        ^ dword_1D6168[BYTE1(v245)]
        ^ dword_1D6568[BYTE2(v248)]
        ^ dword_1D6968[HIBYTE(v247)];
    v39 = dword_1D5D68[(unsigned __int8)v245]
        ^ dword_1D6168[BYTE1(v248)]
        ^ dword_1D6568[BYTE2(v247)]
        ^ dword_1D6968[HIBYTE(v246)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v244 = v295
         ^ dword_1D5D68[(unsigned __int8)v40]
         ^ dword_1D6168[BYTE1(v41)]
         ^ dword_1D6568[BYTE2(v42)]
         ^ dword_1D6968[HIBYTE(v43)];
    v243 = v294
         ^ dword_1D5D68[(unsigned __int8)v41]
         ^ dword_1D6168[BYTE1(v42)]
         ^ dword_1D6568[BYTE2(v43)]
         ^ dword_1D6968[HIBYTE(v40)];
    v242 = v293
         ^ dword_1D5D68[(unsigned __int8)v42]
         ^ dword_1D6168[BYTE1(v43)]
         ^ dword_1D6568[BYTE2(v40)]
         ^ dword_1D6968[HIBYTE(v41)];
    v241 = v292
         ^ dword_1D5D68[(unsigned __int8)v43]
         ^ dword_1D6168[BYTE1(v40)]
         ^ dword_1D6568[BYTE2(v41)]
         ^ dword_1D6968[HIBYTE(v42)];
    v40 = dword_1D5D68[(unsigned __int8)v244]
        ^ dword_1D6168[BYTE1(v243)]
        ^ dword_1D6568[BYTE2(v242)]
        ^ dword_1D6968[HIBYTE(v241)];
    v41 = dword_1D5D68[(unsigned __int8)v243]
        ^ dword_1D6168[BYTE1(v242)]
        ^ dword_1D6568[BYTE2(v241)]
        ^ dword_1D6968[HIBYTE(v244)];
    v42 = dword_1D5D68[(unsigned __int8)v242]
        ^ dword_1D6168[BYTE1(v241)]
        ^ dword_1D6568[BYTE2(v244)]
        ^ dword_1D6968[HIBYTE(v243)];
    v43 = dword_1D5D68[(unsigned __int8)v241]
        ^ dword_1D6168[BYTE1(v244)]
        ^ dword_1D6568[BYTE2(v243)]
        ^ dword_1D6968[HIBYTE(v242)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v240 = v295
         ^ dword_1D5D68[(unsigned __int8)v44]
         ^ dword_1D6168[BYTE1(v45)]
         ^ dword_1D6568[BYTE2(v46)]
         ^ dword_1D6968[HIBYTE(v47)];
    v239 = v294
         ^ dword_1D5D68[(unsigned __int8)v45]
         ^ dword_1D6168[BYTE1(v46)]
         ^ dword_1D6568[BYTE2(v47)]
         ^ dword_1D6968[HIBYTE(v44)];
    v238 = v293
         ^ dword_1D5D68[(unsigned __int8)v46]
         ^ dword_1D6168[BYTE1(v47)]
         ^ dword_1D6568[BYTE2(v44)]
         ^ dword_1D6968[HIBYTE(v45)];
    v237 = v292
         ^ dword_1D5D68[(unsigned __int8)v47]
         ^ dword_1D6168[BYTE1(v44)]
         ^ dword_1D6568[BYTE2(v45)]
         ^ dword_1D6968[HIBYTE(v46)];
    v44 = dword_1D5D68[(unsigned __int8)v240]
        ^ dword_1D6168[BYTE1(v239)]
        ^ dword_1D6568[BYTE2(v238)]
        ^ dword_1D6968[HIBYTE(v237)];
    v45 = dword_1D5D68[(unsigned __int8)v239]
        ^ dword_1D6168[BYTE1(v238)]
        ^ dword_1D6568[BYTE2(v237)]
        ^ dword_1D6968[HIBYTE(v240)];
    v46 = dword_1D5D68[(unsigned __int8)v238]
        ^ dword_1D6168[BYTE1(v237)]
        ^ dword_1D6568[BYTE2(v240)]
        ^ dword_1D6968[HIBYTE(v239)];
    v47 = dword_1D5D68[(unsigned __int8)v237]
        ^ dword_1D6168[BYTE1(v240)]
        ^ dword_1D6568[BYTE2(v239)]
        ^ dword_1D6968[HIBYTE(v238)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v236 = v295
         ^ dword_1D5D68[(unsigned __int8)v48]
         ^ dword_1D6168[BYTE1(v49)]
         ^ dword_1D6568[BYTE2(v50)]
         ^ dword_1D6968[HIBYTE(v51)];
    v235 = v294
         ^ dword_1D5D68[(unsigned __int8)v49]
         ^ dword_1D6168[BYTE1(v50)]
         ^ dword_1D6568[BYTE2(v51)]
         ^ dword_1D6968[HIBYTE(v48)];
    v234 = v293
         ^ dword_1D5D68[(unsigned __int8)v50]
         ^ dword_1D6168[BYTE1(v51)]
         ^ dword_1D6568[BYTE2(v48)]
         ^ dword_1D6968[HIBYTE(v49)];
    v233 = v292
         ^ dword_1D5D68[(unsigned __int8)v51]
         ^ dword_1D6168[BYTE1(v48)]
         ^ dword_1D6568[BYTE2(v49)]
         ^ dword_1D6968[HIBYTE(v50)];
    v48 = dword_1D5D68[(unsigned __int8)v236]
        ^ dword_1D6168[BYTE1(v235)]
        ^ dword_1D6568[BYTE2(v234)]
        ^ dword_1D6968[HIBYTE(v233)];
    v49 = dword_1D5D68[(unsigned __int8)v235]
        ^ dword_1D6168[BYTE1(v234)]
        ^ dword_1D6568[BYTE2(v233)]
        ^ dword_1D6968[HIBYTE(v236)];
    v50 = dword_1D5D68[(unsigned __int8)v234]
        ^ dword_1D6168[BYTE1(v233)]
        ^ dword_1D6568[BYTE2(v236)]
        ^ dword_1D6968[HIBYTE(v235)];
    v51 = dword_1D5D68[(unsigned __int8)v233]
        ^ dword_1D6168[BYTE1(v236)]
        ^ dword_1D6568[BYTE2(v235)]
        ^ dword_1D6968[HIBYTE(v234)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v232 = v295
         ^ dword_1D5D68[(unsigned __int8)v52]
         ^ dword_1D6168[BYTE1(v53)]
         ^ dword_1D6568[BYTE2(v54)]
         ^ dword_1D6968[HIBYTE(v55)];
    v231 = v294
         ^ dword_1D5D68[(unsigned __int8)v53]
         ^ dword_1D6168[BYTE1(v54)]
         ^ dword_1D6568[BYTE2(v55)]
         ^ dword_1D6968[HIBYTE(v52)];
    v230 = v293
         ^ dword_1D5D68[(unsigned __int8)v54]
         ^ dword_1D6168[BYTE1(v55)]
         ^ dword_1D6568[BYTE2(v52)]
         ^ dword_1D6968[HIBYTE(v53)];
    v229 = v292
         ^ dword_1D5D68[(unsigned __int8)v55]
         ^ dword_1D6168[BYTE1(v52)]
         ^ dword_1D6568[BYTE2(v53)]
         ^ dword_1D6968[HIBYTE(v54)];
    v52 = dword_1D5D68[(unsigned __int8)v232]
        ^ dword_1D6168[BYTE1(v231)]
        ^ dword_1D6568[BYTE2(v230)]
        ^ dword_1D6968[HIBYTE(v229)];
    v53 = dword_1D5D68[(unsigned __int8)v231]
        ^ dword_1D6168[BYTE1(v230)]
        ^ dword_1D6568[BYTE2(v229)]
        ^ dword_1D6968[HIBYTE(v232)];
    v54 = dword_1D5D68[(unsigned __int8)v230]
        ^ dword_1D6168[BYTE1(v229)]
        ^ dword_1D6568[BYTE2(v232)]
        ^ dword_1D6968[HIBYTE(v231)];
    v55 = dword_1D5D68[(unsigned __int8)v229]
        ^ dword_1D6168[BYTE1(v232)]
        ^ dword_1D6568[BYTE2(v231)]
        ^ dword_1D6968[HIBYTE(v230)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v228 = v295
         ^ dword_1D5D68[(unsigned __int8)v56]
         ^ dword_1D6168[BYTE1(v57)]
         ^ dword_1D6568[BYTE2(v58)]
         ^ dword_1D6968[HIBYTE(v59)];
    v227 = v294
         ^ dword_1D5D68[(unsigned __int8)v57]
         ^ dword_1D6168[BYTE1(v58)]
         ^ dword_1D6568[BYTE2(v59)]
         ^ dword_1D6968[HIBYTE(v56)];
    v226 = v293
         ^ dword_1D5D68[(unsigned __int8)v58]
         ^ dword_1D6168[BYTE1(v59)]
         ^ dword_1D6568[BYTE2(v56)]
         ^ dword_1D6968[HIBYTE(v57)];
    v225 = v292
         ^ dword_1D5D68[(unsigned __int8)v59]
         ^ dword_1D6168[BYTE1(v56)]
         ^ dword_1D6568[BYTE2(v57)]
         ^ dword_1D6968[HIBYTE(v58)];
    v56 = dword_1D5D68[(unsigned __int8)v228]
        ^ dword_1D6168[BYTE1(v227)]
        ^ dword_1D6568[BYTE2(v226)]
        ^ dword_1D6968[HIBYTE(v225)];
    v57 = dword_1D5D68[(unsigned __int8)v227]
        ^ dword_1D6168[BYTE1(v226)]
        ^ dword_1D6568[BYTE2(v225)]
        ^ dword_1D6968[HIBYTE(v228)];
    v58 = dword_1D5D68[(unsigned __int8)v226]
        ^ dword_1D6168[BYTE1(v225)]
        ^ dword_1D6568[BYTE2(v228)]
        ^ dword_1D6968[HIBYTE(v227)];
    v59 = dword_1D5D68[(unsigned __int8)v225]
        ^ dword_1D6168[BYTE1(v228)]
        ^ dword_1D6568[BYTE2(v227)]
        ^ dword_1D6968[HIBYTE(v226)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v224 = dest[1];
    LODWORD(dest[1]) = v16;
    v16 = v32;
    v32 = v48;
    v48 = v224;
    v224 = DWORD1(dest[1]);
    DWORD1(dest[1]) = v17;
    v17 = v33;
    v33 = v49;
    v49 = v224;
    v224 = DWORD2(dest[1]);
    DWORD2(dest[1]) = v18;
    v18 = v34;
    v34 = v50;
    v50 = v224;
    v224 = HIDWORD(dest[1]);
    v223 = dest[2];
    LODWORD(dest[2]) = v36;
    v36 = v223;
    v223 = v20;
    v20 = v52;
    v52 = v223;
    v223 = DWORD1(dest[2]);
    DWORD1(dest[2]) = v37;
    v37 = v223;
    v223 = v21;
    v21 = v53;
    v53 = v223;
    v223 = DWORD2(dest[2]);
    DWORD2(dest[2]) = v38;
    v38 = v223;
    v223 = v22;
    v22 = v54;
    v54 = v223;
    v223 = HIDWORD(dest[2]);
    HIDWORD(dest[2]) = v39;
    v39 = v223;
    v223 = v23;
    v222 = v56;
    v56 = v40;
    v40 = v24;
    v24 = dest[3];
    LODWORD(dest[3]) = v222;
    v222 = v57;
    v57 = v41;
    v41 = v25;
    v25 = DWORD1(dest[3]);
    DWORD1(dest[3]) = v222;
    v222 = v58;
    v58 = v42;
    v42 = v26;
    v26 = DWORD2(dest[3]);
    DWORD2(dest[3]) = v222;
    v222 = v59;
    v59 = v43;
    v43 = v27;
    v27 = HIDWORD(dest[3]);
    v221 = dest[0];
    v220 = dest[1];
    v219 = dest[2];
    v218 = dest[3];
    v217 = LODWORD(dest[1]) ^ LODWORD(dest[0]);
    v216 = LODWORD(dest[2]) ^ LODWORD(dest[1]);
    v215 = LODWORD(dest[3]) ^ LODWORD(dest[2]);
    v214 = (2 * (v217 & 0x7F7F7F7F)) ^ (27 * ((v217 & 0x80808080) >> 7));
    v213 = (2 * (v216 & 0x7F7F7F7F)) ^ (27 * ((v216 & 0x80808080) >> 7));
    v212 = (2 * (v215 & 0x7F7F7F7F)) ^ (27 * ((v215 & 0x80808080) >> 7));
    LODWORD(dest[0]) = v214 ^ LODWORD(dest[2]) ^ LODWORD(dest[1]) ^ LODWORD(dest[3]);
    LODWORD(dest[1]) = v213 ^ v221 ^ LODWORD(dest[3]) ^ LODWORD(dest[2]);
    LODWORD(dest[2]) = v212 ^ v217 ^ LODWORD(dest[3]);
    LODWORD(dest[3]) = v214 ^ v213 ^ v212 ^ v217 ^ v219;
    v211 = DWORD1(dest[0]);
    v210 = DWORD1(dest[1]);
    v209 = DWORD1(dest[2]);
    v208 = DWORD1(dest[3]);
    v207 = DWORD1(dest[1]) ^ DWORD1(dest[0]);
    v206 = DWORD1(dest[2]) ^ DWORD1(dest[1]);
    v205 = DWORD1(dest[3]) ^ DWORD1(dest[2]);
    v204 = (2 * (v207 & 0x7F7F7F7F)) ^ (27 * ((v207 & 0x80808080) >> 7));
    v203 = (2 * (v206 & 0x7F7F7F7F)) ^ (27 * ((v206 & 0x80808080) >> 7));
    v202 = (2 * (v205 & 0x7F7F7F7F)) ^ (27 * ((v205 & 0x80808080) >> 7));
    DWORD1(dest[0]) = v204 ^ DWORD1(dest[2]) ^ DWORD1(dest[1]) ^ DWORD1(dest[3]);
    DWORD1(dest[1]) = v203 ^ v211 ^ DWORD1(dest[3]) ^ DWORD1(dest[2]);
    DWORD1(dest[2]) = v202 ^ v207 ^ DWORD1(dest[3]);
    DWORD1(dest[3]) = v204 ^ v203 ^ v202 ^ v207 ^ v209;
    v201 = DWORD2(dest[0]);
    v200 = DWORD2(dest[1]);
    v199 = DWORD2(dest[2]);
    v198 = DWORD2(dest[3]);
    v197 = DWORD2(dest[1]) ^ DWORD2(dest[0]);
    v196 = DWORD2(dest[2]) ^ DWORD2(dest[1]);
    v195 = DWORD2(dest[3]) ^ DWORD2(dest[2]);
    v194 = (2 * (v197 & 0x7F7F7F7F)) ^ (27 * ((v197 & 0x80808080) >> 7));
    v193 = (2 * (v196 & 0x7F7F7F7F)) ^ (27 * ((v196 & 0x80808080) >> 7));
    v192 = (2 * (v195 & 0x7F7F7F7F)) ^ (27 * ((v195 & 0x80808080) >> 7));
    DWORD2(dest[0]) = v194 ^ DWORD2(dest[2]) ^ DWORD2(dest[1]) ^ DWORD2(dest[3]);
    DWORD2(dest[1]) = v193 ^ v201 ^ DWORD2(dest[3]) ^ DWORD2(dest[2]);
    DWORD2(dest[2]) = v192 ^ v197 ^ DWORD2(dest[3]);
    DWORD2(dest[3]) = v194 ^ v193 ^ v192 ^ v197 ^ v199;
    v191 = HIDWORD(dest[0]);
    v190 = v19;
    v189 = HIDWORD(dest[2]);
    v188 = v222;
    v187 = v19 ^ HIDWORD(dest[0]);
    v186 = HIDWORD(dest[2]) ^ v19;
    v185 = v222 ^ HIDWORD(dest[2]);
    v184 = (2 * (v187 & 0x7F7F7F7F)) ^ (27 * ((v187 & 0x80808080) >> 7));
    v183 = (2 * (v186 & 0x7F7F7F7F)) ^ (27 * ((v186 & 0x80808080) >> 7));
    v182 = (2 * (v185 & 0x7F7F7F7F)) ^ (27 * ((v185 & 0x80808080) >> 7));
    HIDWORD(dest[0]) = v184 ^ HIDWORD(dest[2]) ^ v19 ^ v222;
    HIDWORD(dest[1]) = v183 ^ v191 ^ v222 ^ HIDWORD(dest[2]);
    HIDWORD(dest[2]) = v182 ^ v187 ^ v222;
    HIDWORD(dest[3]) = v184 ^ v183 ^ v182 ^ v187 ^ v189;
    v181 = v12;
    v180 = v16;
    v179 = v20;
    v178 = v24;
    v177 = v16 ^ v12;
    v176 = v20 ^ v16;
    v175 = v24 ^ v20;
    v174 = (2 * (v177 & 0x7F7F7F7F)) ^ (27 * ((v177 & 0x80808080) >> 7));
    v173 = (2 * (v176 & 0x7F7F7F7F)) ^ (27 * ((v176 & 0x80808080) >> 7));
    v172 = (2 * (v175 & 0x7F7F7F7F)) ^ (27 * ((v175 & 0x80808080) >> 7));
    v12 = v174 ^ v20 ^ v16 ^ v24;
    v16 = v173 ^ v181 ^ v24 ^ v20;
    v20 = v172 ^ v177 ^ v24;
    v24 = v174 ^ v173 ^ v172 ^ v177 ^ v179;
    v171 = v13;
    v170 = v17;
    v169 = v21;
    v168 = v25;
    v167 = v17 ^ v13;
    v166 = v21 ^ v17;
    v165 = v25 ^ v21;
    v164 = (2 * (v167 & 0x7F7F7F7F)) ^ (27 * ((v167 & 0x80808080) >> 7));
    v163 = (2 * (v166 & 0x7F7F7F7F)) ^ (27 * ((v166 & 0x80808080) >> 7));
    v162 = (2 * (v165 & 0x7F7F7F7F)) ^ (27 * ((v165 & 0x80808080) >> 7));
    v13 = v164 ^ v21 ^ v17 ^ v25;
    v17 = v163 ^ v171 ^ v25 ^ v21;
    v21 = v162 ^ v167 ^ v25;
    v25 = v164 ^ v163 ^ v162 ^ v167 ^ v169;
    v161 = v14;
    v160 = v18;
    v159 = v22;
    v158 = v26;
    v157 = v18 ^ v14;
    v156 = v22 ^ v18;
    v155 = v26 ^ v22;
    v154 = (2 * (v157 & 0x7F7F7F7F)) ^ (27 * ((v157 & 0x80808080) >> 7));
    v153 = (2 * (v156 & 0x7F7F7F7F)) ^ (27 * ((v156 & 0x80808080) >> 7));
    v152 = (2 * (v155 & 0x7F7F7F7F)) ^ (27 * ((v155 & 0x80808080) >> 7));
    v14 = v154 ^ v22 ^ v18 ^ v26;
    v18 = v153 ^ v161 ^ v26 ^ v22;
    v22 = v152 ^ v157 ^ v26;
    v26 = v154 ^ v153 ^ v152 ^ v157 ^ v159;
    v151 = v15;
    v150 = v35;
    v149 = v55;
    v148 = v27;
    v147 = v35 ^ v15;
    v146 = v55 ^ v35;
    v145 = v27 ^ v55;
    v144 = (2 * (v147 & 0x7F7F7F7F)) ^ (27 * ((v147 & 0x80808080) >> 7));
    v143 = (2 * (v146 & 0x7F7F7F7F)) ^ (27 * ((v146 & 0x80808080) >> 7));
    v142 = (2 * (v145 & 0x7F7F7F7F)) ^ (27 * ((v145 & 0x80808080) >> 7));
    v15 = v144 ^ v55 ^ v35 ^ v27;
    v19 = v143 ^ v151 ^ v27 ^ v55;
    v23 = v142 ^ v147 ^ v27;
    v27 = v144 ^ v143 ^ v142 ^ v147 ^ v55;
    v141 = v28;
    v140 = v32;
    v139 = v36;
    v138 = v40;
    v137 = v32 ^ v28;
    v136 = v36 ^ v32;
    v135 = v40 ^ v36;
    v134 = (2 * (v137 & 0x7F7F7F7F)) ^ (27 * ((v137 & 0x80808080) >> 7));
    v133 = (2 * (v136 & 0x7F7F7F7F)) ^ (27 * ((v136 & 0x80808080) >> 7));
    v132 = (2 * (v135 & 0x7F7F7F7F)) ^ (27 * ((v135 & 0x80808080) >> 7));
    v28 = v134 ^ v36 ^ v32 ^ v40;
    v32 = v133 ^ v141 ^ v40 ^ v36;
    v36 = v132 ^ v137 ^ v40;
    v40 = v134 ^ v133 ^ v132 ^ v137 ^ v139;
    v131 = v29;
    v130 = v33;
    v129 = v37;
    v128 = v41;
    v127 = v33 ^ v29;
    v126 = v37 ^ v33;
    v125 = v41 ^ v37;
    v124 = (2 * (v127 & 0x7F7F7F7F)) ^ (27 * ((v127 & 0x80808080) >> 7));
    v123 = (2 * (v126 & 0x7F7F7F7F)) ^ (27 * ((v126 & 0x80808080) >> 7));
    v122 = (2 * (v125 & 0x7F7F7F7F)) ^ (27 * ((v125 & 0x80808080) >> 7));
    v29 = v124 ^ v37 ^ v33 ^ v41;
    v33 = v123 ^ v131 ^ v41 ^ v37;
    v37 = v122 ^ v127 ^ v41;
    v41 = v124 ^ v123 ^ v122 ^ v127 ^ v129;
    v121 = v30;
    v120 = v34;
    v119 = v38;
    v118 = v42;
    v117 = v34 ^ v30;
    v116 = v38 ^ v34;
    v115 = v42 ^ v38;
    v114 = (2 * (v117 & 0x7F7F7F7F)) ^ (27 * ((v117 & 0x80808080) >> 7));
    v113 = (2 * (v116 & 0x7F7F7F7F)) ^ (27 * ((v116 & 0x80808080) >> 7));
    v112 = (2 * (v115 & 0x7F7F7F7F)) ^ (27 * ((v115 & 0x80808080) >> 7));
    v30 = v114 ^ v38 ^ v34 ^ v42;
    v34 = v113 ^ v121 ^ v42 ^ v38;
    v38 = v112 ^ v117 ^ v42;
    v42 = v114 ^ v113 ^ v112 ^ v117 ^ v119;
    v111 = v31;
    v110 = v51;
    v109 = v39;
    v108 = v43;
    v107 = v51 ^ v31;
    v106 = v39 ^ v51;
    v105 = v43 ^ v39;
    v104 = (2 * (v107 & 0x7F7F7F7F)) ^ (27 * ((v107 & 0x80808080) >> 7));
    v103 = (2 * (v106 & 0x7F7F7F7F)) ^ (27 * ((v106 & 0x80808080) >> 7));
    v102 = (2 * (v105 & 0x7F7F7F7F)) ^ (27 * ((v105 & 0x80808080) >> 7));
    v31 = v104 ^ v39 ^ v51 ^ v43;
    v35 = v103 ^ v111 ^ v43 ^ v39;
    v39 = v102 ^ v107 ^ v43;
    v43 = v104 ^ v103 ^ v102 ^ v107 ^ v109;
    v101 = v44;
    v100 = v48;
    v99 = v52;
    v98 = v56;
    v97 = v48 ^ v44;
    v96 = v52 ^ v48;
    v95 = v56 ^ v52;
    v94 = (2 * (v97 & 0x7F7F7F7F)) ^ (27 * ((v97 & 0x80808080) >> 7));
    v93 = (2 * (v96 & 0x7F7F7F7F)) ^ (27 * ((v96 & 0x80808080) >> 7));
    v92 = (2 * (v95 & 0x7F7F7F7F)) ^ (27 * ((v95 & 0x80808080) >> 7));
    v44 = v94 ^ v52 ^ v48 ^ v56;
    v48 = v93 ^ v101 ^ v56 ^ v52;
    v52 = v92 ^ v97 ^ v56;
    v56 = v94 ^ v93 ^ v92 ^ v97 ^ v99;
    v91 = v45;
    v90 = v49;
    v89 = v53;
    v88 = v57;
    v87 = v49 ^ v45;
    v86 = v53 ^ v49;
    v85 = v57 ^ v53;
    v84 = (2 * (v87 & 0x7F7F7F7F)) ^ (27 * ((v87 & 0x80808080) >> 7));
    v83 = (2 * (v86 & 0x7F7F7F7F)) ^ (27 * ((v86 & 0x80808080) >> 7));
    v82 = (2 * (v85 & 0x7F7F7F7F)) ^ (27 * ((v85 & 0x80808080) >> 7));
    v45 = v84 ^ v53 ^ v49 ^ v57;
    v49 = v83 ^ v91 ^ v57 ^ v53;
    v53 = v82 ^ v87 ^ v57;
    v57 = v84 ^ v83 ^ v82 ^ v87 ^ v89;
    v81 = v46;
    v80 = v50;
    v79 = v54;
    v78 = v58;
    v77 = v50 ^ v46;
    v76 = v54 ^ v50;
    v75 = v58 ^ v54;
    v74 = (2 * (v77 & 0x7F7F7F7F)) ^ (27 * ((v77 & 0x80808080) >> 7));
    v73 = (2 * (v76 & 0x7F7F7F7F)) ^ (27 * ((v76 & 0x80808080) >> 7));
    v72 = (2 * (v75 & 0x7F7F7F7F)) ^ (27 * ((v75 & 0x80808080) >> 7));
    v46 = v74 ^ v54 ^ v50 ^ v58;
    v50 = v73 ^ v81 ^ v58 ^ v54;
    v54 = v72 ^ v77 ^ v58;
    v58 = v74 ^ v73 ^ v72 ^ v77 ^ v79;
    v71 = v47;
    v70 = v224;
    v69 = v223;
    v68 = v59;
    v67 = v224 ^ v47;
    v66 = v223 ^ v224;
    v65 = v59 ^ v223;
    v64 = (2 * (v67 & 0x7F7F7F7F)) ^ (27 * ((v67 & 0x80808080) >> 7));
    v63 = (2 * (v66 & 0x7F7F7F7F)) ^ (27 * ((v66 & 0x80808080) >> 7));
    v62 = (2 * ((v59 ^ v223) & 0x7F7F7F7F)) ^ (27 * (((v59 ^ v223) & 0x80808080) >> 7));
    v47 = v64 ^ v223 ^ v224 ^ v59;
    v51 = v63 ^ v71 ^ v59 ^ v223;
    v55 = v62 ^ v67 ^ v59;
    v59 = v64 ^ v63 ^ v62 ^ v67 ^ v223;
  }
  v61 = a1 + 50;
  v60 = dest;
  for ( k = 0; k <= 0xF; ++k )
  {
    v6 = sub_1673D0((int)&a1[k]);
    v7 = v6 ^ sub_1673D0((int)&a1[k + 16]);
    v8 = sub_1673D0((int)&a1[k + 32]);
    v9 = v7
       ^ v8
       ^ *((_DWORD *)v60 + k)
       ^ *((_DWORD *)v60 + k + 16)
       ^ *((_DWORD *)v60 + k + 32)
       ^ *((_DWORD *)v60 + k + 48);
    result = v61;
    v61[k] ^= v9;
  }
  return result;
}
