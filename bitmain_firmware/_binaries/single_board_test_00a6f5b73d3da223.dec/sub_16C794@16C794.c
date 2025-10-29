void *__fastcall sub_16C794(_DWORD *a1)
{
  void *result; // r0
  unsigned int v2; // r4
  unsigned int v3; // r4
  unsigned int v4; // r4
  unsigned int v5; // r4
  int v6; // r0
  int v7; // r2
  _OWORD dest[8]; // [sp+8h] [bp+8h] BYREF
  unsigned int v10; // [sp+88h] [bp+88h]
  unsigned int v11; // [sp+8Ch] [bp+8Ch]
  unsigned int v12; // [sp+90h] [bp+90h]
  unsigned int v13; // [sp+94h] [bp+94h]
  unsigned int v14; // [sp+98h] [bp+98h]
  unsigned int v15; // [sp+9Ch] [bp+9Ch]
  unsigned int v16; // [sp+A0h] [bp+A0h]
  unsigned int v17; // [sp+A4h] [bp+A4h]
  unsigned int v18; // [sp+A8h] [bp+A8h]
  unsigned int v19; // [sp+ACh] [bp+ACh]
  unsigned int v20; // [sp+B0h] [bp+B0h]
  unsigned int v21; // [sp+B4h] [bp+B4h]
  unsigned int v22; // [sp+B8h] [bp+B8h]
  unsigned int v23; // [sp+BCh] [bp+BCh]
  unsigned int v24; // [sp+C0h] [bp+C0h]
  unsigned int v25; // [sp+C4h] [bp+C4h]
  unsigned int v26; // [sp+C8h] [bp+C8h]
  unsigned int v27; // [sp+CCh] [bp+CCh]
  unsigned int v28; // [sp+D0h] [bp+D0h]
  unsigned int v29; // [sp+D4h] [bp+D4h]
  unsigned int v30; // [sp+D8h] [bp+D8h]
  unsigned int v31; // [sp+DCh] [bp+DCh]
  unsigned int v32; // [sp+E0h] [bp+E0h]
  unsigned int v33; // [sp+E4h] [bp+E4h]
  unsigned int v34; // [sp+E8h] [bp+E8h]
  unsigned int v35; // [sp+ECh] [bp+ECh]
  unsigned int v36; // [sp+F0h] [bp+F0h]
  unsigned int v37; // [sp+F4h] [bp+F4h]
  unsigned int v38; // [sp+F8h] [bp+F8h]
  unsigned int v39; // [sp+FCh] [bp+FCh]
  unsigned int v40; // [sp+100h] [bp+100h]
  unsigned int v41; // [sp+104h] [bp+104h]
  _OWORD *v42; // [sp+108h] [bp+108h]
  _DWORD *v43; // [sp+10Ch] [bp+10Ch]
  unsigned int v44; // [sp+110h] [bp+110h]
  unsigned int v45; // [sp+114h] [bp+114h]
  unsigned int v46; // [sp+118h] [bp+118h]
  int v47; // [sp+11Ch] [bp+11Ch]
  int v48; // [sp+120h] [bp+120h]
  int v49; // [sp+124h] [bp+124h]
  unsigned int v50; // [sp+128h] [bp+128h]
  unsigned int v51; // [sp+12Ch] [bp+12Ch]
  unsigned int v52; // [sp+130h] [bp+130h]
  unsigned int v53; // [sp+134h] [bp+134h]
  unsigned int v54; // [sp+138h] [bp+138h]
  unsigned int v55; // [sp+13Ch] [bp+13Ch]
  unsigned int v56; // [sp+140h] [bp+140h]
  int v57; // [sp+144h] [bp+144h]
  int v58; // [sp+148h] [bp+148h]
  int v59; // [sp+14Ch] [bp+14Ch]
  unsigned int v60; // [sp+150h] [bp+150h]
  unsigned int v61; // [sp+154h] [bp+154h]
  unsigned int v62; // [sp+158h] [bp+158h]
  unsigned int v63; // [sp+15Ch] [bp+15Ch]
  unsigned int v64; // [sp+160h] [bp+160h]
  unsigned int v65; // [sp+164h] [bp+164h]
  unsigned int v66; // [sp+168h] [bp+168h]
  int v67; // [sp+16Ch] [bp+16Ch]
  int v68; // [sp+170h] [bp+170h]
  int v69; // [sp+174h] [bp+174h]
  unsigned int v70; // [sp+178h] [bp+178h]
  unsigned int v71; // [sp+17Ch] [bp+17Ch]
  unsigned int v72; // [sp+180h] [bp+180h]
  unsigned int v73; // [sp+184h] [bp+184h]
  unsigned int v74; // [sp+188h] [bp+188h]
  unsigned int v75; // [sp+18Ch] [bp+18Ch]
  unsigned int v76; // [sp+190h] [bp+190h]
  int v77; // [sp+194h] [bp+194h]
  int v78; // [sp+198h] [bp+198h]
  int v79; // [sp+19Ch] [bp+19Ch]
  unsigned int v80; // [sp+1A0h] [bp+1A0h]
  unsigned int v81; // [sp+1A4h] [bp+1A4h]
  unsigned int v82; // [sp+1A8h] [bp+1A8h]
  unsigned int v83; // [sp+1ACh] [bp+1ACh]
  unsigned int v84; // [sp+1B0h] [bp+1B0h]
  unsigned int v85; // [sp+1B4h] [bp+1B4h]
  unsigned int v86; // [sp+1B8h] [bp+1B8h]
  int v87; // [sp+1BCh] [bp+1BCh]
  int v88; // [sp+1C0h] [bp+1C0h]
  int v89; // [sp+1C4h] [bp+1C4h]
  unsigned int v90; // [sp+1C8h] [bp+1C8h]
  unsigned int v91; // [sp+1CCh] [bp+1CCh]
  unsigned int v92; // [sp+1D0h] [bp+1D0h]
  unsigned int v93; // [sp+1D4h] [bp+1D4h]
  unsigned int v94; // [sp+1D8h] [bp+1D8h]
  unsigned int v95; // [sp+1DCh] [bp+1DCh]
  unsigned int v96; // [sp+1E0h] [bp+1E0h]
  int v97; // [sp+1E4h] [bp+1E4h]
  int v98; // [sp+1E8h] [bp+1E8h]
  int v99; // [sp+1ECh] [bp+1ECh]
  unsigned int v100; // [sp+1F0h] [bp+1F0h]
  unsigned int v101; // [sp+1F4h] [bp+1F4h]
  unsigned int v102; // [sp+1F8h] [bp+1F8h]
  unsigned int v103; // [sp+1FCh] [bp+1FCh]
  unsigned int v104; // [sp+200h] [bp+200h]
  unsigned int v105; // [sp+204h] [bp+204h]
  unsigned int v106; // [sp+208h] [bp+208h]
  int v107; // [sp+20Ch] [bp+20Ch]
  int v108; // [sp+210h] [bp+210h]
  int v109; // [sp+214h] [bp+214h]
  unsigned int v110; // [sp+218h] [bp+218h]
  unsigned int v111; // [sp+21Ch] [bp+21Ch]
  unsigned int v112; // [sp+220h] [bp+220h]
  unsigned int v113; // [sp+224h] [bp+224h]
  unsigned int v114; // [sp+228h] [bp+228h]
  unsigned int v115; // [sp+22Ch] [bp+22Ch]
  unsigned int v116; // [sp+230h] [bp+230h]
  int v117; // [sp+234h] [bp+234h]
  int v118; // [sp+238h] [bp+238h]
  int v119; // [sp+23Ch] [bp+23Ch]
  unsigned int v120; // [sp+240h] [bp+240h]
  unsigned int v121; // [sp+244h] [bp+244h]
  unsigned int v122; // [sp+248h] [bp+248h]
  unsigned int v123; // [sp+24Ch] [bp+24Ch]
  unsigned int v124; // [sp+250h] [bp+250h]
  unsigned int v125; // [sp+254h] [bp+254h]
  unsigned int v126; // [sp+258h] [bp+258h]
  int v127; // [sp+25Ch] [bp+25Ch]
  int v128; // [sp+260h] [bp+260h]
  int v129; // [sp+264h] [bp+264h]
  int v130; // [sp+268h] [bp+268h]
  unsigned int v131; // [sp+26Ch] [bp+26Ch]
  unsigned int v132; // [sp+270h] [bp+270h]
  int v133; // [sp+274h] [bp+274h]
  unsigned int v134; // [sp+278h] [bp+278h]
  unsigned int v135; // [sp+27Ch] [bp+27Ch]
  unsigned int v136; // [sp+280h] [bp+280h]
  int v137; // [sp+284h] [bp+284h]
  int v138; // [sp+288h] [bp+288h]
  int v139; // [sp+28Ch] [bp+28Ch]
  int v140; // [sp+290h] [bp+290h]
  int v141; // [sp+294h] [bp+294h]
  int v142; // [sp+298h] [bp+298h]
  int v143; // [sp+29Ch] [bp+29Ch]
  unsigned int v144; // [sp+2A0h] [bp+2A0h]
  unsigned int v145; // [sp+2A4h] [bp+2A4h]
  unsigned int v146; // [sp+2A8h] [bp+2A8h]
  int v147; // [sp+2ACh] [bp+2ACh]
  int v148; // [sp+2B0h] [bp+2B0h]
  int v149; // [sp+2B4h] [bp+2B4h]
  int v150; // [sp+2B8h] [bp+2B8h]
  int v151; // [sp+2BCh] [bp+2BCh]
  int v152; // [sp+2C0h] [bp+2C0h]
  int v153; // [sp+2C4h] [bp+2C4h]
  unsigned int v154; // [sp+2C8h] [bp+2C8h]
  unsigned int v155; // [sp+2CCh] [bp+2CCh]
  unsigned int v156; // [sp+2D0h] [bp+2D0h]
  int v157; // [sp+2D4h] [bp+2D4h]
  int v158; // [sp+2D8h] [bp+2D8h]
  int v159; // [sp+2DCh] [bp+2DCh]
  int v160; // [sp+2E0h] [bp+2E0h]
  int v161; // [sp+2E4h] [bp+2E4h]
  int v162; // [sp+2E8h] [bp+2E8h]
  int v163; // [sp+2ECh] [bp+2ECh]
  unsigned int v164; // [sp+2F0h] [bp+2F0h]
  unsigned int v165; // [sp+2F4h] [bp+2F4h]
  unsigned int v166; // [sp+2F8h] [bp+2F8h]
  int v167; // [sp+2FCh] [bp+2FCh]
  int v168; // [sp+300h] [bp+300h]
  int v169; // [sp+304h] [bp+304h]
  unsigned int v170; // [sp+308h] [bp+308h]
  int v171; // [sp+30Ch] [bp+30Ch]
  int v172; // [sp+310h] [bp+310h]
  int v173; // [sp+314h] [bp+314h]
  unsigned int v174; // [sp+318h] [bp+318h]
  unsigned int v175; // [sp+31Ch] [bp+31Ch]
  unsigned int v176; // [sp+320h] [bp+320h]
  int v177; // [sp+324h] [bp+324h]
  int v178; // [sp+328h] [bp+328h]
  int v179; // [sp+32Ch] [bp+32Ch]
  int v180; // [sp+330h] [bp+330h]
  int v181; // [sp+334h] [bp+334h]
  int v182; // [sp+338h] [bp+338h]
  int v183; // [sp+33Ch] [bp+33Ch]
  unsigned int v184; // [sp+340h] [bp+340h]
  unsigned int v185; // [sp+344h] [bp+344h]
  unsigned int v186; // [sp+348h] [bp+348h]
  int v187; // [sp+34Ch] [bp+34Ch]
  int v188; // [sp+350h] [bp+350h]
  int v189; // [sp+354h] [bp+354h]
  int v190; // [sp+358h] [bp+358h]
  int v191; // [sp+35Ch] [bp+35Ch]
  int v192; // [sp+360h] [bp+360h]
  int v193; // [sp+364h] [bp+364h]
  unsigned int v194; // [sp+368h] [bp+368h]
  unsigned int v195; // [sp+36Ch] [bp+36Ch]
  unsigned int v196; // [sp+370h] [bp+370h]
  int v197; // [sp+374h] [bp+374h]
  int v198; // [sp+378h] [bp+378h]
  int v199; // [sp+37Ch] [bp+37Ch]
  int v200; // [sp+380h] [bp+380h]
  int v201; // [sp+384h] [bp+384h]
  int v202; // [sp+388h] [bp+388h]
  int v203; // [sp+38Ch] [bp+38Ch]
  unsigned int v204; // [sp+390h] [bp+390h]
  unsigned int v205; // [sp+394h] [bp+394h]
  unsigned int v206; // [sp+398h] [bp+398h]
  unsigned int v207; // [sp+39Ch] [bp+39Ch]
  unsigned int v208; // [sp+3A0h] [bp+3A0h]
  unsigned int v209; // [sp+3A4h] [bp+3A4h]
  unsigned int v210; // [sp+3A8h] [bp+3A8h]
  unsigned int v211; // [sp+3ACh] [bp+3ACh]
  unsigned int v212; // [sp+3B0h] [bp+3B0h]
  unsigned int v213; // [sp+3B4h] [bp+3B4h]
  unsigned int v214; // [sp+3B8h] [bp+3B8h]
  unsigned int v215; // [sp+3BCh] [bp+3BCh]
  unsigned int v216; // [sp+3C0h] [bp+3C0h]
  unsigned int v217; // [sp+3C4h] [bp+3C4h]
  unsigned int v218; // [sp+3C8h] [bp+3C8h]
  unsigned int v219; // [sp+3CCh] [bp+3CCh]
  unsigned int v220; // [sp+3D0h] [bp+3D0h]
  unsigned int v221; // [sp+3D4h] [bp+3D4h]
  unsigned int v222; // [sp+3D8h] [bp+3D8h]
  unsigned int v223; // [sp+3DCh] [bp+3DCh]
  unsigned int v224; // [sp+3E0h] [bp+3E0h]
  unsigned int v225; // [sp+3E4h] [bp+3E4h]
  unsigned int v226; // [sp+3E8h] [bp+3E8h]
  unsigned int v227; // [sp+3ECh] [bp+3ECh]
  unsigned int v228; // [sp+3F0h] [bp+3F0h]
  unsigned int v229; // [sp+3F4h] [bp+3F4h]
  unsigned int v230; // [sp+3F8h] [bp+3F8h]
  unsigned int v231; // [sp+3FCh] [bp+3FCh]
  unsigned int v232; // [sp+400h] [bp+400h]
  unsigned int v233; // [sp+404h] [bp+404h]
  unsigned int v234; // [sp+408h] [bp+408h]
  unsigned int v235; // [sp+40Ch] [bp+40Ch]
  unsigned int v236; // [sp+410h] [bp+410h]
  unsigned int v237; // [sp+414h] [bp+414h]
  unsigned int v238; // [sp+418h] [bp+418h]
  unsigned int v239; // [sp+41Ch] [bp+41Ch]
  unsigned int v240; // [sp+420h] [bp+420h]
  unsigned int v241; // [sp+424h] [bp+424h]
  unsigned int v242; // [sp+428h] [bp+428h]
  unsigned int v243; // [sp+42Ch] [bp+42Ch]
  unsigned int v244; // [sp+430h] [bp+430h]
  unsigned int v245; // [sp+434h] [bp+434h]
  unsigned int v246; // [sp+438h] [bp+438h]
  unsigned int v247; // [sp+43Ch] [bp+43Ch]
  unsigned int v248; // [sp+440h] [bp+440h]
  unsigned int v249; // [sp+444h] [bp+444h]
  unsigned int v250; // [sp+448h] [bp+448h]
  unsigned int v251; // [sp+44Ch] [bp+44Ch]
  unsigned int v252; // [sp+450h] [bp+450h]
  unsigned int v253; // [sp+454h] [bp+454h]
  unsigned int v254; // [sp+458h] [bp+458h]
  unsigned int v255; // [sp+45Ch] [bp+45Ch]
  unsigned int v256; // [sp+460h] [bp+460h]
  unsigned int v257; // [sp+464h] [bp+464h]
  unsigned int v258; // [sp+468h] [bp+468h]
  unsigned int v259; // [sp+46Ch] [bp+46Ch]
  unsigned int v260; // [sp+470h] [bp+470h]
  unsigned int v261; // [sp+474h] [bp+474h]
  unsigned int v262; // [sp+478h] [bp+478h]
  unsigned int v263; // [sp+47Ch] [bp+47Ch]
  unsigned int v264; // [sp+480h] [bp+480h]
  unsigned int v265; // [sp+484h] [bp+484h]
  unsigned int v266; // [sp+488h] [bp+488h]
  unsigned int v267; // [sp+48Ch] [bp+48Ch]
  unsigned int v268; // [sp+490h] [bp+490h]
  unsigned int v269; // [sp+494h] [bp+494h]
  unsigned int v270; // [sp+498h] [bp+498h]
  unsigned int k; // [sp+49Ch] [bp+49Ch]
  unsigned int i; // [sp+4A0h] [bp+4A0h]
  unsigned int j; // [sp+4A4h] [bp+4A4h]
  int v274; // [sp+4A8h] [bp+4A8h]
  int v275; // [sp+4ACh] [bp+4ACh]
  int v276; // [sp+4B0h] [bp+4B0h]
  int v277; // [sp+4B4h] [bp+4B4h]

  v277 = a1[66];
  v276 = a1[67];
  v275 = a1[68];
  v274 = a1[69];
  result = memcpy(dest, a1 + 34, sizeof(dest));
  for ( i = 0; i <= 7; ++i )
  {
    v2 = i + 8;
    LODWORD(dest[v2]) = sub_1673D0((int)&a1[4 * i]);
    v3 = i + 8;
    DWORD1(dest[v3]) = sub_1673D0((int)&a1[4 * i + 1]);
    v4 = i + 8;
    DWORD2(dest[v4]) = sub_1673D0((int)&a1[4 * i + 2]);
    v5 = i + 8;
    result = (void *)sub_1673D0((int)&a1[4 * i + 3]);
    HIDWORD(dest[v5]) = result;
  }
  for ( j = 0; j <= 9; ++j )
  {
    v270 = v277
         ^ dword_1D5D68[LOBYTE(dest[0])]
         ^ dword_1D6168[BYTE5(dest[0])]
         ^ dword_1D6568[BYTE10(dest[0])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[0]))];
    v269 = v276
         ^ dword_1D5D68[BYTE4(dest[0])]
         ^ dword_1D6168[BYTE9(dest[0])]
         ^ dword_1D6568[BYTE14(dest[0])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[0]))];
    v268 = v275
         ^ dword_1D5D68[BYTE8(dest[0])]
         ^ dword_1D6168[BYTE13(dest[0])]
         ^ dword_1D6568[BYTE2(dest[0])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[0]))];
    v267 = v274
         ^ dword_1D5D68[BYTE12(dest[0])]
         ^ dword_1D6168[BYTE1(dest[0])]
         ^ dword_1D6568[BYTE6(dest[0])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[0]))];
    LODWORD(dest[0]) = dword_1D5D68[(unsigned __int8)v270]
                     ^ dword_1D6168[BYTE1(v269)]
                     ^ dword_1D6568[BYTE2(v268)]
                     ^ dword_1D6968[HIBYTE(v267)];
    DWORD1(dest[0]) = dword_1D5D68[(unsigned __int8)v269]
                    ^ dword_1D6168[BYTE1(v268)]
                    ^ dword_1D6568[BYTE2(v267)]
                    ^ dword_1D6968[HIBYTE(v270)];
    DWORD2(dest[0]) = dword_1D5D68[(unsigned __int8)v268]
                    ^ dword_1D6168[BYTE1(v267)]
                    ^ dword_1D6568[BYTE2(v270)]
                    ^ dword_1D6968[HIBYTE(v269)];
    HIDWORD(dest[0]) = dword_1D5D68[(unsigned __int8)v267]
                     ^ dword_1D6168[BYTE1(v270)]
                     ^ dword_1D6568[BYTE2(v269)]
                     ^ dword_1D6968[HIBYTE(v268)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v266 = v277
         ^ dword_1D5D68[LOBYTE(dest[1])]
         ^ dword_1D6168[BYTE5(dest[1])]
         ^ dword_1D6568[BYTE10(dest[1])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[1]))];
    v265 = v276
         ^ dword_1D5D68[BYTE4(dest[1])]
         ^ dword_1D6168[BYTE9(dest[1])]
         ^ dword_1D6568[BYTE14(dest[1])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[1]))];
    v264 = v275
         ^ dword_1D5D68[BYTE8(dest[1])]
         ^ dword_1D6168[BYTE13(dest[1])]
         ^ dword_1D6568[BYTE2(dest[1])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[1]))];
    v263 = v274
         ^ dword_1D5D68[BYTE12(dest[1])]
         ^ dword_1D6168[BYTE1(dest[1])]
         ^ dword_1D6568[BYTE6(dest[1])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[1]))];
    LODWORD(dest[1]) = dword_1D5D68[(unsigned __int8)v266]
                     ^ dword_1D6168[BYTE1(v265)]
                     ^ dword_1D6568[BYTE2(v264)]
                     ^ dword_1D6968[HIBYTE(v263)];
    DWORD1(dest[1]) = dword_1D5D68[(unsigned __int8)v265]
                    ^ dword_1D6168[BYTE1(v264)]
                    ^ dword_1D6568[BYTE2(v263)]
                    ^ dword_1D6968[HIBYTE(v266)];
    DWORD2(dest[1]) = dword_1D5D68[(unsigned __int8)v264]
                    ^ dword_1D6168[BYTE1(v263)]
                    ^ dword_1D6568[BYTE2(v266)]
                    ^ dword_1D6968[HIBYTE(v265)];
    HIDWORD(dest[1]) = dword_1D5D68[(unsigned __int8)v263]
                     ^ dword_1D6168[BYTE1(v266)]
                     ^ dword_1D6568[BYTE2(v265)]
                     ^ dword_1D6968[HIBYTE(v264)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v262 = v277
         ^ dword_1D5D68[LOBYTE(dest[2])]
         ^ dword_1D6168[BYTE5(dest[2])]
         ^ dword_1D6568[BYTE10(dest[2])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[2]))];
    v261 = v276
         ^ dword_1D5D68[BYTE4(dest[2])]
         ^ dword_1D6168[BYTE9(dest[2])]
         ^ dword_1D6568[BYTE14(dest[2])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[2]))];
    v260 = v275
         ^ dword_1D5D68[BYTE8(dest[2])]
         ^ dword_1D6168[BYTE13(dest[2])]
         ^ dword_1D6568[BYTE2(dest[2])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[2]))];
    v259 = v274
         ^ dword_1D5D68[BYTE12(dest[2])]
         ^ dword_1D6168[BYTE1(dest[2])]
         ^ dword_1D6568[BYTE6(dest[2])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[2]))];
    LODWORD(dest[2]) = dword_1D5D68[(unsigned __int8)v262]
                     ^ dword_1D6168[BYTE1(v261)]
                     ^ dword_1D6568[BYTE2(v260)]
                     ^ dword_1D6968[HIBYTE(v259)];
    DWORD1(dest[2]) = dword_1D5D68[(unsigned __int8)v261]
                    ^ dword_1D6168[BYTE1(v260)]
                    ^ dword_1D6568[BYTE2(v259)]
                    ^ dword_1D6968[HIBYTE(v262)];
    DWORD2(dest[2]) = dword_1D5D68[(unsigned __int8)v260]
                    ^ dword_1D6168[BYTE1(v259)]
                    ^ dword_1D6568[BYTE2(v262)]
                    ^ dword_1D6968[HIBYTE(v261)];
    HIDWORD(dest[2]) = dword_1D5D68[(unsigned __int8)v259]
                     ^ dword_1D6168[BYTE1(v262)]
                     ^ dword_1D6568[BYTE2(v261)]
                     ^ dword_1D6968[HIBYTE(v260)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v258 = v277
         ^ dword_1D5D68[LOBYTE(dest[3])]
         ^ dword_1D6168[BYTE5(dest[3])]
         ^ dword_1D6568[BYTE10(dest[3])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[3]))];
    v257 = v276
         ^ dword_1D5D68[BYTE4(dest[3])]
         ^ dword_1D6168[BYTE9(dest[3])]
         ^ dword_1D6568[BYTE14(dest[3])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[3]))];
    v256 = v275
         ^ dword_1D5D68[BYTE8(dest[3])]
         ^ dword_1D6168[BYTE13(dest[3])]
         ^ dword_1D6568[BYTE2(dest[3])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[3]))];
    v255 = v274
         ^ dword_1D5D68[BYTE12(dest[3])]
         ^ dword_1D6168[BYTE1(dest[3])]
         ^ dword_1D6568[BYTE6(dest[3])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[3]))];
    LODWORD(dest[3]) = dword_1D5D68[(unsigned __int8)v258]
                     ^ dword_1D6168[BYTE1(v257)]
                     ^ dword_1D6568[BYTE2(v256)]
                     ^ dword_1D6968[HIBYTE(v255)];
    DWORD1(dest[3]) = dword_1D5D68[(unsigned __int8)v257]
                    ^ dword_1D6168[BYTE1(v256)]
                    ^ dword_1D6568[BYTE2(v255)]
                    ^ dword_1D6968[HIBYTE(v258)];
    DWORD2(dest[3]) = dword_1D5D68[(unsigned __int8)v256]
                    ^ dword_1D6168[BYTE1(v255)]
                    ^ dword_1D6568[BYTE2(v258)]
                    ^ dword_1D6968[HIBYTE(v257)];
    HIDWORD(dest[3]) = dword_1D5D68[(unsigned __int8)v255]
                     ^ dword_1D6168[BYTE1(v258)]
                     ^ dword_1D6568[BYTE2(v257)]
                     ^ dword_1D6968[HIBYTE(v256)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v254 = v277
         ^ dword_1D5D68[LOBYTE(dest[4])]
         ^ dword_1D6168[BYTE5(dest[4])]
         ^ dword_1D6568[BYTE10(dest[4])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[4]))];
    v253 = v276
         ^ dword_1D5D68[BYTE4(dest[4])]
         ^ dword_1D6168[BYTE9(dest[4])]
         ^ dword_1D6568[BYTE14(dest[4])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[4]))];
    v252 = v275
         ^ dword_1D5D68[BYTE8(dest[4])]
         ^ dword_1D6168[BYTE13(dest[4])]
         ^ dword_1D6568[BYTE2(dest[4])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[4]))];
    v251 = v274
         ^ dword_1D5D68[BYTE12(dest[4])]
         ^ dword_1D6168[BYTE1(dest[4])]
         ^ dword_1D6568[BYTE6(dest[4])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[4]))];
    LODWORD(dest[4]) = dword_1D5D68[(unsigned __int8)v254]
                     ^ dword_1D6168[BYTE1(v253)]
                     ^ dword_1D6568[BYTE2(v252)]
                     ^ dword_1D6968[HIBYTE(v251)];
    DWORD1(dest[4]) = dword_1D5D68[(unsigned __int8)v253]
                    ^ dword_1D6168[BYTE1(v252)]
                    ^ dword_1D6568[BYTE2(v251)]
                    ^ dword_1D6968[HIBYTE(v254)];
    DWORD2(dest[4]) = dword_1D5D68[(unsigned __int8)v252]
                    ^ dword_1D6168[BYTE1(v251)]
                    ^ dword_1D6568[BYTE2(v254)]
                    ^ dword_1D6968[HIBYTE(v253)];
    HIDWORD(dest[4]) = dword_1D5D68[(unsigned __int8)v251]
                     ^ dword_1D6168[BYTE1(v254)]
                     ^ dword_1D6568[BYTE2(v253)]
                     ^ dword_1D6968[HIBYTE(v252)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v250 = v277
         ^ dword_1D5D68[LOBYTE(dest[5])]
         ^ dword_1D6168[BYTE5(dest[5])]
         ^ dword_1D6568[BYTE10(dest[5])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[5]))];
    v249 = v276
         ^ dword_1D5D68[BYTE4(dest[5])]
         ^ dword_1D6168[BYTE9(dest[5])]
         ^ dword_1D6568[BYTE14(dest[5])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[5]))];
    v248 = v275
         ^ dword_1D5D68[BYTE8(dest[5])]
         ^ dword_1D6168[BYTE13(dest[5])]
         ^ dword_1D6568[BYTE2(dest[5])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[5]))];
    v247 = v274
         ^ dword_1D5D68[BYTE12(dest[5])]
         ^ dword_1D6168[BYTE1(dest[5])]
         ^ dword_1D6568[BYTE6(dest[5])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[5]))];
    LODWORD(dest[5]) = dword_1D5D68[(unsigned __int8)v250]
                     ^ dword_1D6168[BYTE1(v249)]
                     ^ dword_1D6568[BYTE2(v248)]
                     ^ dword_1D6968[HIBYTE(v247)];
    DWORD1(dest[5]) = dword_1D5D68[(unsigned __int8)v249]
                    ^ dword_1D6168[BYTE1(v248)]
                    ^ dword_1D6568[BYTE2(v247)]
                    ^ dword_1D6968[HIBYTE(v250)];
    DWORD2(dest[5]) = dword_1D5D68[(unsigned __int8)v248]
                    ^ dword_1D6168[BYTE1(v247)]
                    ^ dword_1D6568[BYTE2(v250)]
                    ^ dword_1D6968[HIBYTE(v249)];
    HIDWORD(dest[5]) = dword_1D5D68[(unsigned __int8)v247]
                     ^ dword_1D6168[BYTE1(v250)]
                     ^ dword_1D6568[BYTE2(v249)]
                     ^ dword_1D6968[HIBYTE(v248)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v246 = v277
         ^ dword_1D5D68[LOBYTE(dest[6])]
         ^ dword_1D6168[BYTE5(dest[6])]
         ^ dword_1D6568[BYTE10(dest[6])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[6]))];
    v245 = v276
         ^ dword_1D5D68[BYTE4(dest[6])]
         ^ dword_1D6168[BYTE9(dest[6])]
         ^ dword_1D6568[BYTE14(dest[6])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[6]))];
    v244 = v275
         ^ dword_1D5D68[BYTE8(dest[6])]
         ^ dword_1D6168[BYTE13(dest[6])]
         ^ dword_1D6568[BYTE2(dest[6])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[6]))];
    v243 = v274
         ^ dword_1D5D68[BYTE12(dest[6])]
         ^ dword_1D6168[BYTE1(dest[6])]
         ^ dword_1D6568[BYTE6(dest[6])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[6]))];
    LODWORD(dest[6]) = dword_1D5D68[(unsigned __int8)v246]
                     ^ dword_1D6168[BYTE1(v245)]
                     ^ dword_1D6568[BYTE2(v244)]
                     ^ dword_1D6968[HIBYTE(v243)];
    DWORD1(dest[6]) = dword_1D5D68[(unsigned __int8)v245]
                    ^ dword_1D6168[BYTE1(v244)]
                    ^ dword_1D6568[BYTE2(v243)]
                    ^ dword_1D6968[HIBYTE(v246)];
    DWORD2(dest[6]) = dword_1D5D68[(unsigned __int8)v244]
                    ^ dword_1D6168[BYTE1(v243)]
                    ^ dword_1D6568[BYTE2(v246)]
                    ^ dword_1D6968[HIBYTE(v245)];
    HIDWORD(dest[6]) = dword_1D5D68[(unsigned __int8)v243]
                     ^ dword_1D6168[BYTE1(v246)]
                     ^ dword_1D6568[BYTE2(v245)]
                     ^ dword_1D6968[HIBYTE(v244)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v242 = v277
         ^ dword_1D5D68[LOBYTE(dest[7])]
         ^ dword_1D6168[BYTE5(dest[7])]
         ^ dword_1D6568[BYTE10(dest[7])]
         ^ dword_1D6968[HIBYTE(HIDWORD(dest[7]))];
    v241 = v276
         ^ dword_1D5D68[BYTE4(dest[7])]
         ^ dword_1D6168[BYTE9(dest[7])]
         ^ dword_1D6568[BYTE14(dest[7])]
         ^ dword_1D6968[HIBYTE(LODWORD(dest[7]))];
    v240 = v275
         ^ dword_1D5D68[BYTE8(dest[7])]
         ^ dword_1D6168[BYTE13(dest[7])]
         ^ dword_1D6568[BYTE2(dest[7])]
         ^ dword_1D6968[HIBYTE(DWORD1(dest[7]))];
    v239 = v274
         ^ dword_1D5D68[BYTE12(dest[7])]
         ^ dword_1D6168[BYTE1(dest[7])]
         ^ dword_1D6568[BYTE6(dest[7])]
         ^ dword_1D6968[HIBYTE(DWORD2(dest[7]))];
    LODWORD(dest[7]) = dword_1D5D68[(unsigned __int8)v242]
                     ^ dword_1D6168[BYTE1(v241)]
                     ^ dword_1D6568[BYTE2(v240)]
                     ^ dword_1D6968[HIBYTE(v239)];
    DWORD1(dest[7]) = dword_1D5D68[(unsigned __int8)v241]
                    ^ dword_1D6168[BYTE1(v240)]
                    ^ dword_1D6568[BYTE2(v239)]
                    ^ dword_1D6968[HIBYTE(v242)];
    DWORD2(dest[7]) = dword_1D5D68[(unsigned __int8)v240]
                    ^ dword_1D6168[BYTE1(v239)]
                    ^ dword_1D6568[BYTE2(v242)]
                    ^ dword_1D6968[HIBYTE(v241)];
    HIDWORD(dest[7]) = dword_1D5D68[(unsigned __int8)v239]
                     ^ dword_1D6168[BYTE1(v242)]
                     ^ dword_1D6568[BYTE2(v241)]
                     ^ dword_1D6968[HIBYTE(v240)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v238 = v277
         ^ dword_1D5D68[(unsigned __int8)v10]
         ^ dword_1D6168[BYTE1(v11)]
         ^ dword_1D6568[BYTE2(v12)]
         ^ dword_1D6968[HIBYTE(v13)];
    v237 = v276
         ^ dword_1D5D68[(unsigned __int8)v11]
         ^ dword_1D6168[BYTE1(v12)]
         ^ dword_1D6568[BYTE2(v13)]
         ^ dword_1D6968[HIBYTE(v10)];
    v236 = v275
         ^ dword_1D5D68[(unsigned __int8)v12]
         ^ dword_1D6168[BYTE1(v13)]
         ^ dword_1D6568[BYTE2(v10)]
         ^ dword_1D6968[HIBYTE(v11)];
    v235 = v274
         ^ dword_1D5D68[(unsigned __int8)v13]
         ^ dword_1D6168[BYTE1(v10)]
         ^ dword_1D6568[BYTE2(v11)]
         ^ dword_1D6968[HIBYTE(v12)];
    v10 = dword_1D5D68[(unsigned __int8)v238]
        ^ dword_1D6168[BYTE1(v237)]
        ^ dword_1D6568[BYTE2(v236)]
        ^ dword_1D6968[HIBYTE(v235)];
    v11 = dword_1D5D68[(unsigned __int8)v237]
        ^ dword_1D6168[BYTE1(v236)]
        ^ dword_1D6568[BYTE2(v235)]
        ^ dword_1D6968[HIBYTE(v238)];
    v12 = dword_1D5D68[(unsigned __int8)v236]
        ^ dword_1D6168[BYTE1(v235)]
        ^ dword_1D6568[BYTE2(v238)]
        ^ dword_1D6968[HIBYTE(v237)];
    v13 = dword_1D5D68[(unsigned __int8)v235]
        ^ dword_1D6168[BYTE1(v238)]
        ^ dword_1D6568[BYTE2(v237)]
        ^ dword_1D6968[HIBYTE(v236)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v234 = v277
         ^ dword_1D5D68[(unsigned __int8)v14]
         ^ dword_1D6168[BYTE1(v15)]
         ^ dword_1D6568[BYTE2(v16)]
         ^ dword_1D6968[HIBYTE(v17)];
    v233 = v276
         ^ dword_1D5D68[(unsigned __int8)v15]
         ^ dword_1D6168[BYTE1(v16)]
         ^ dword_1D6568[BYTE2(v17)]
         ^ dword_1D6968[HIBYTE(v14)];
    v232 = v275
         ^ dword_1D5D68[(unsigned __int8)v16]
         ^ dword_1D6168[BYTE1(v17)]
         ^ dword_1D6568[BYTE2(v14)]
         ^ dword_1D6968[HIBYTE(v15)];
    v231 = v274
         ^ dword_1D5D68[(unsigned __int8)v17]
         ^ dword_1D6168[BYTE1(v14)]
         ^ dword_1D6568[BYTE2(v15)]
         ^ dword_1D6968[HIBYTE(v16)];
    v14 = dword_1D5D68[(unsigned __int8)v234]
        ^ dword_1D6168[BYTE1(v233)]
        ^ dword_1D6568[BYTE2(v232)]
        ^ dword_1D6968[HIBYTE(v231)];
    v15 = dword_1D5D68[(unsigned __int8)v233]
        ^ dword_1D6168[BYTE1(v232)]
        ^ dword_1D6568[BYTE2(v231)]
        ^ dword_1D6968[HIBYTE(v234)];
    v16 = dword_1D5D68[(unsigned __int8)v232]
        ^ dword_1D6168[BYTE1(v231)]
        ^ dword_1D6568[BYTE2(v234)]
        ^ dword_1D6968[HIBYTE(v233)];
    v17 = dword_1D5D68[(unsigned __int8)v231]
        ^ dword_1D6168[BYTE1(v234)]
        ^ dword_1D6568[BYTE2(v233)]
        ^ dword_1D6968[HIBYTE(v232)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v230 = v277
         ^ dword_1D5D68[(unsigned __int8)v18]
         ^ dword_1D6168[BYTE1(v19)]
         ^ dword_1D6568[BYTE2(v20)]
         ^ dword_1D6968[HIBYTE(v21)];
    v229 = v276
         ^ dword_1D5D68[(unsigned __int8)v19]
         ^ dword_1D6168[BYTE1(v20)]
         ^ dword_1D6568[BYTE2(v21)]
         ^ dword_1D6968[HIBYTE(v18)];
    v228 = v275
         ^ dword_1D5D68[(unsigned __int8)v20]
         ^ dword_1D6168[BYTE1(v21)]
         ^ dword_1D6568[BYTE2(v18)]
         ^ dword_1D6968[HIBYTE(v19)];
    v227 = v274
         ^ dword_1D5D68[(unsigned __int8)v21]
         ^ dword_1D6168[BYTE1(v18)]
         ^ dword_1D6568[BYTE2(v19)]
         ^ dword_1D6968[HIBYTE(v20)];
    v18 = dword_1D5D68[(unsigned __int8)v230]
        ^ dword_1D6168[BYTE1(v229)]
        ^ dword_1D6568[BYTE2(v228)]
        ^ dword_1D6968[HIBYTE(v227)];
    v19 = dword_1D5D68[(unsigned __int8)v229]
        ^ dword_1D6168[BYTE1(v228)]
        ^ dword_1D6568[BYTE2(v227)]
        ^ dword_1D6968[HIBYTE(v230)];
    v20 = dword_1D5D68[(unsigned __int8)v228]
        ^ dword_1D6168[BYTE1(v227)]
        ^ dword_1D6568[BYTE2(v230)]
        ^ dword_1D6968[HIBYTE(v229)];
    v21 = dword_1D5D68[(unsigned __int8)v227]
        ^ dword_1D6168[BYTE1(v230)]
        ^ dword_1D6568[BYTE2(v229)]
        ^ dword_1D6968[HIBYTE(v228)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v226 = v277
         ^ dword_1D5D68[(unsigned __int8)v22]
         ^ dword_1D6168[BYTE1(v23)]
         ^ dword_1D6568[BYTE2(v24)]
         ^ dword_1D6968[HIBYTE(v25)];
    v225 = v276
         ^ dword_1D5D68[(unsigned __int8)v23]
         ^ dword_1D6168[BYTE1(v24)]
         ^ dword_1D6568[BYTE2(v25)]
         ^ dword_1D6968[HIBYTE(v22)];
    v224 = v275
         ^ dword_1D5D68[(unsigned __int8)v24]
         ^ dword_1D6168[BYTE1(v25)]
         ^ dword_1D6568[BYTE2(v22)]
         ^ dword_1D6968[HIBYTE(v23)];
    v223 = v274
         ^ dword_1D5D68[(unsigned __int8)v25]
         ^ dword_1D6168[BYTE1(v22)]
         ^ dword_1D6568[BYTE2(v23)]
         ^ dword_1D6968[HIBYTE(v24)];
    v22 = dword_1D5D68[(unsigned __int8)v226]
        ^ dword_1D6168[BYTE1(v225)]
        ^ dword_1D6568[BYTE2(v224)]
        ^ dword_1D6968[HIBYTE(v223)];
    v23 = dword_1D5D68[(unsigned __int8)v225]
        ^ dword_1D6168[BYTE1(v224)]
        ^ dword_1D6568[BYTE2(v223)]
        ^ dword_1D6968[HIBYTE(v226)];
    v24 = dword_1D5D68[(unsigned __int8)v224]
        ^ dword_1D6168[BYTE1(v223)]
        ^ dword_1D6568[BYTE2(v226)]
        ^ dword_1D6968[HIBYTE(v225)];
    v25 = dword_1D5D68[(unsigned __int8)v223]
        ^ dword_1D6168[BYTE1(v226)]
        ^ dword_1D6568[BYTE2(v225)]
        ^ dword_1D6968[HIBYTE(v224)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v222 = v277
         ^ dword_1D5D68[(unsigned __int8)v26]
         ^ dword_1D6168[BYTE1(v27)]
         ^ dword_1D6568[BYTE2(v28)]
         ^ dword_1D6968[HIBYTE(v29)];
    v221 = v276
         ^ dword_1D5D68[(unsigned __int8)v27]
         ^ dword_1D6168[BYTE1(v28)]
         ^ dword_1D6568[BYTE2(v29)]
         ^ dword_1D6968[HIBYTE(v26)];
    v220 = v275
         ^ dword_1D5D68[(unsigned __int8)v28]
         ^ dword_1D6168[BYTE1(v29)]
         ^ dword_1D6568[BYTE2(v26)]
         ^ dword_1D6968[HIBYTE(v27)];
    v219 = v274
         ^ dword_1D5D68[(unsigned __int8)v29]
         ^ dword_1D6168[BYTE1(v26)]
         ^ dword_1D6568[BYTE2(v27)]
         ^ dword_1D6968[HIBYTE(v28)];
    v26 = dword_1D5D68[(unsigned __int8)v222]
        ^ dword_1D6168[BYTE1(v221)]
        ^ dword_1D6568[BYTE2(v220)]
        ^ dword_1D6968[HIBYTE(v219)];
    v27 = dword_1D5D68[(unsigned __int8)v221]
        ^ dword_1D6168[BYTE1(v220)]
        ^ dword_1D6568[BYTE2(v219)]
        ^ dword_1D6968[HIBYTE(v222)];
    v28 = dword_1D5D68[(unsigned __int8)v220]
        ^ dword_1D6168[BYTE1(v219)]
        ^ dword_1D6568[BYTE2(v222)]
        ^ dword_1D6968[HIBYTE(v221)];
    v29 = dword_1D5D68[(unsigned __int8)v219]
        ^ dword_1D6168[BYTE1(v222)]
        ^ dword_1D6568[BYTE2(v221)]
        ^ dword_1D6968[HIBYTE(v220)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v218 = v277
         ^ dword_1D5D68[(unsigned __int8)v30]
         ^ dword_1D6168[BYTE1(v31)]
         ^ dword_1D6568[BYTE2(v32)]
         ^ dword_1D6968[HIBYTE(v33)];
    v217 = v276
         ^ dword_1D5D68[(unsigned __int8)v31]
         ^ dword_1D6168[BYTE1(v32)]
         ^ dword_1D6568[BYTE2(v33)]
         ^ dword_1D6968[HIBYTE(v30)];
    v216 = v275
         ^ dword_1D5D68[(unsigned __int8)v32]
         ^ dword_1D6168[BYTE1(v33)]
         ^ dword_1D6568[BYTE2(v30)]
         ^ dword_1D6968[HIBYTE(v31)];
    v215 = v274
         ^ dword_1D5D68[(unsigned __int8)v33]
         ^ dword_1D6168[BYTE1(v30)]
         ^ dword_1D6568[BYTE2(v31)]
         ^ dword_1D6968[HIBYTE(v32)];
    v30 = dword_1D5D68[(unsigned __int8)v218]
        ^ dword_1D6168[BYTE1(v217)]
        ^ dword_1D6568[BYTE2(v216)]
        ^ dword_1D6968[HIBYTE(v215)];
    v31 = dword_1D5D68[(unsigned __int8)v217]
        ^ dword_1D6168[BYTE1(v216)]
        ^ dword_1D6568[BYTE2(v215)]
        ^ dword_1D6968[HIBYTE(v218)];
    v32 = dword_1D5D68[(unsigned __int8)v216]
        ^ dword_1D6168[BYTE1(v215)]
        ^ dword_1D6568[BYTE2(v218)]
        ^ dword_1D6968[HIBYTE(v217)];
    v33 = dword_1D5D68[(unsigned __int8)v215]
        ^ dword_1D6168[BYTE1(v218)]
        ^ dword_1D6568[BYTE2(v217)]
        ^ dword_1D6968[HIBYTE(v216)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v214 = v277
         ^ dword_1D5D68[(unsigned __int8)v34]
         ^ dword_1D6168[BYTE1(v35)]
         ^ dword_1D6568[BYTE2(v36)]
         ^ dword_1D6968[HIBYTE(v37)];
    v213 = v276
         ^ dword_1D5D68[(unsigned __int8)v35]
         ^ dword_1D6168[BYTE1(v36)]
         ^ dword_1D6568[BYTE2(v37)]
         ^ dword_1D6968[HIBYTE(v34)];
    v212 = v275
         ^ dword_1D5D68[(unsigned __int8)v36]
         ^ dword_1D6168[BYTE1(v37)]
         ^ dword_1D6568[BYTE2(v34)]
         ^ dword_1D6968[HIBYTE(v35)];
    v211 = v274
         ^ dword_1D5D68[(unsigned __int8)v37]
         ^ dword_1D6168[BYTE1(v34)]
         ^ dword_1D6568[BYTE2(v35)]
         ^ dword_1D6968[HIBYTE(v36)];
    v34 = dword_1D5D68[(unsigned __int8)v214]
        ^ dword_1D6168[BYTE1(v213)]
        ^ dword_1D6568[BYTE2(v212)]
        ^ dword_1D6968[HIBYTE(v211)];
    v35 = dword_1D5D68[(unsigned __int8)v213]
        ^ dword_1D6168[BYTE1(v212)]
        ^ dword_1D6568[BYTE2(v211)]
        ^ dword_1D6968[HIBYTE(v214)];
    v36 = dword_1D5D68[(unsigned __int8)v212]
        ^ dword_1D6168[BYTE1(v211)]
        ^ dword_1D6568[BYTE2(v214)]
        ^ dword_1D6968[HIBYTE(v213)];
    v37 = dword_1D5D68[(unsigned __int8)v211]
        ^ dword_1D6168[BYTE1(v214)]
        ^ dword_1D6568[BYTE2(v213)]
        ^ dword_1D6968[HIBYTE(v212)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v210 = v277
         ^ dword_1D5D68[(unsigned __int8)v38]
         ^ dword_1D6168[BYTE1(v39)]
         ^ dword_1D6568[BYTE2(v40)]
         ^ dword_1D6968[HIBYTE(v41)];
    v209 = v276
         ^ dword_1D5D68[(unsigned __int8)v39]
         ^ dword_1D6168[BYTE1(v40)]
         ^ dword_1D6568[BYTE2(v41)]
         ^ dword_1D6968[HIBYTE(v38)];
    v208 = v275
         ^ dword_1D5D68[(unsigned __int8)v40]
         ^ dword_1D6168[BYTE1(v41)]
         ^ dword_1D6568[BYTE2(v38)]
         ^ dword_1D6968[HIBYTE(v39)];
    v207 = v274
         ^ dword_1D5D68[(unsigned __int8)v41]
         ^ dword_1D6168[BYTE1(v38)]
         ^ dword_1D6568[BYTE2(v39)]
         ^ dword_1D6968[HIBYTE(v40)];
    v38 = dword_1D5D68[(unsigned __int8)v210]
        ^ dword_1D6168[BYTE1(v209)]
        ^ dword_1D6568[BYTE2(v208)]
        ^ dword_1D6968[HIBYTE(v207)];
    v39 = dword_1D5D68[(unsigned __int8)v209]
        ^ dword_1D6168[BYTE1(v208)]
        ^ dword_1D6568[BYTE2(v207)]
        ^ dword_1D6968[HIBYTE(v210)];
    v40 = dword_1D5D68[(unsigned __int8)v208]
        ^ dword_1D6168[BYTE1(v207)]
        ^ dword_1D6568[BYTE2(v210)]
        ^ dword_1D6968[HIBYTE(v209)];
    v41 = dword_1D5D68[(unsigned __int8)v207]
        ^ dword_1D6168[BYTE1(v210)]
        ^ dword_1D6568[BYTE2(v209)]
        ^ dword_1D6968[HIBYTE(v208)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v206 = dest[1];
    LODWORD(dest[1]) = dest[5];
    LODWORD(dest[5]) = v14;
    v14 = v30;
    v30 = v206;
    v206 = DWORD1(dest[1]);
    DWORD1(dest[1]) = DWORD1(dest[5]);
    DWORD1(dest[5]) = v15;
    v15 = v31;
    v31 = v206;
    v206 = DWORD2(dest[1]);
    DWORD2(dest[1]) = DWORD2(dest[5]);
    DWORD2(dest[5]) = v16;
    v16 = v32;
    v32 = v206;
    v206 = HIDWORD(dest[1]);
    v205 = dest[2];
    LODWORD(dest[2]) = v18;
    v18 = v205;
    v205 = dest[6];
    LODWORD(dest[6]) = v34;
    v34 = v205;
    v205 = DWORD1(dest[2]);
    DWORD1(dest[2]) = v19;
    v19 = v205;
    v205 = DWORD1(dest[6]);
    DWORD1(dest[6]) = v35;
    v35 = v205;
    v205 = DWORD2(dest[2]);
    DWORD2(dest[2]) = v20;
    v20 = v205;
    v205 = DWORD2(dest[6]);
    DWORD2(dest[6]) = v36;
    v36 = v205;
    v205 = HIDWORD(dest[2]);
    HIDWORD(dest[2]) = v21;
    v21 = v205;
    v205 = HIDWORD(dest[6]);
    v204 = v38;
    v38 = v22;
    v22 = dest[7];
    LODWORD(dest[7]) = dest[3];
    LODWORD(dest[3]) = v204;
    v204 = v39;
    v39 = v23;
    v23 = DWORD1(dest[7]);
    DWORD1(dest[7]) = DWORD1(dest[3]);
    DWORD1(dest[3]) = v204;
    v204 = v40;
    v40 = v24;
    v24 = DWORD2(dest[7]);
    DWORD2(dest[7]) = DWORD2(dest[3]);
    DWORD2(dest[3]) = v204;
    v204 = v41;
    v41 = v25;
    v25 = HIDWORD(dest[7]);
    HIDWORD(dest[7]) = HIDWORD(dest[3]);
    v203 = dest[0];
    v202 = dest[1];
    v201 = dest[2];
    v200 = dest[3];
    v199 = LODWORD(dest[1]) ^ LODWORD(dest[0]);
    v198 = LODWORD(dest[2]) ^ LODWORD(dest[1]);
    v197 = LODWORD(dest[3]) ^ LODWORD(dest[2]);
    v196 = (2 * (v199 & 0x7F7F7F7F)) ^ (27 * ((v199 & 0x80808080) >> 7));
    v195 = (2 * (v198 & 0x7F7F7F7F)) ^ (27 * ((v198 & 0x80808080) >> 7));
    v194 = (2 * (v197 & 0x7F7F7F7F)) ^ (27 * ((v197 & 0x80808080) >> 7));
    LODWORD(dest[0]) = v196 ^ LODWORD(dest[2]) ^ LODWORD(dest[1]) ^ LODWORD(dest[3]);
    LODWORD(dest[1]) = v195 ^ v203 ^ LODWORD(dest[3]) ^ LODWORD(dest[2]);
    LODWORD(dest[2]) = v194 ^ v199 ^ LODWORD(dest[3]);
    LODWORD(dest[3]) = v196 ^ v195 ^ v194 ^ v199 ^ v201;
    v193 = DWORD1(dest[0]);
    v192 = DWORD1(dest[1]);
    v191 = DWORD1(dest[2]);
    v190 = DWORD1(dest[3]);
    v189 = DWORD1(dest[1]) ^ DWORD1(dest[0]);
    v188 = DWORD1(dest[2]) ^ DWORD1(dest[1]);
    v187 = DWORD1(dest[3]) ^ DWORD1(dest[2]);
    v186 = (2 * (v189 & 0x7F7F7F7F)) ^ (27 * ((v189 & 0x80808080) >> 7));
    v185 = (2 * (v188 & 0x7F7F7F7F)) ^ (27 * ((v188 & 0x80808080) >> 7));
    v184 = (2 * (v187 & 0x7F7F7F7F)) ^ (27 * ((v187 & 0x80808080) >> 7));
    DWORD1(dest[0]) = v186 ^ DWORD1(dest[2]) ^ DWORD1(dest[1]) ^ DWORD1(dest[3]);
    DWORD1(dest[1]) = v185 ^ v193 ^ DWORD1(dest[3]) ^ DWORD1(dest[2]);
    DWORD1(dest[2]) = v184 ^ v189 ^ DWORD1(dest[3]);
    DWORD1(dest[3]) = v186 ^ v185 ^ v184 ^ v189 ^ v191;
    v183 = DWORD2(dest[0]);
    v182 = DWORD2(dest[1]);
    v181 = DWORD2(dest[2]);
    v180 = DWORD2(dest[3]);
    v179 = DWORD2(dest[1]) ^ DWORD2(dest[0]);
    v178 = DWORD2(dest[2]) ^ DWORD2(dest[1]);
    v177 = DWORD2(dest[3]) ^ DWORD2(dest[2]);
    v176 = (2 * (v179 & 0x7F7F7F7F)) ^ (27 * ((v179 & 0x80808080) >> 7));
    v175 = (2 * (v178 & 0x7F7F7F7F)) ^ (27 * ((v178 & 0x80808080) >> 7));
    v174 = (2 * (v177 & 0x7F7F7F7F)) ^ (27 * ((v177 & 0x80808080) >> 7));
    DWORD2(dest[0]) = v176 ^ DWORD2(dest[2]) ^ DWORD2(dest[1]) ^ DWORD2(dest[3]);
    DWORD2(dest[1]) = v175 ^ v183 ^ DWORD2(dest[3]) ^ DWORD2(dest[2]);
    DWORD2(dest[2]) = v174 ^ v179 ^ DWORD2(dest[3]);
    DWORD2(dest[3]) = v176 ^ v175 ^ v174 ^ v179 ^ v181;
    v173 = HIDWORD(dest[0]);
    v172 = HIDWORD(dest[5]);
    v171 = HIDWORD(dest[2]);
    v170 = v204;
    v169 = HIDWORD(dest[5]) ^ HIDWORD(dest[0]);
    v168 = HIDWORD(dest[2]) ^ HIDWORD(dest[5]);
    v167 = v204 ^ HIDWORD(dest[2]);
    v166 = (2 * (v169 & 0x7F7F7F7F)) ^ (27 * ((v169 & 0x80808080) >> 7));
    v165 = (2 * (v168 & 0x7F7F7F7F)) ^ (27 * ((v168 & 0x80808080) >> 7));
    v164 = (2 * (v167 & 0x7F7F7F7F)) ^ (27 * ((v167 & 0x80808080) >> 7));
    HIDWORD(dest[0]) = v166 ^ HIDWORD(dest[2]) ^ HIDWORD(dest[5]) ^ v204;
    HIDWORD(dest[1]) = v165 ^ v173 ^ v204 ^ HIDWORD(dest[2]);
    HIDWORD(dest[2]) = v164 ^ v169 ^ v204;
    HIDWORD(dest[3]) = v166 ^ v165 ^ v164 ^ v169 ^ v171;
    v163 = dest[4];
    v162 = dest[5];
    v161 = dest[6];
    v160 = dest[7];
    v159 = LODWORD(dest[5]) ^ LODWORD(dest[4]);
    v158 = LODWORD(dest[6]) ^ LODWORD(dest[5]);
    v157 = LODWORD(dest[7]) ^ LODWORD(dest[6]);
    v156 = (2 * (v159 & 0x7F7F7F7F)) ^ (27 * ((v159 & 0x80808080) >> 7));
    v155 = (2 * (v158 & 0x7F7F7F7F)) ^ (27 * ((v158 & 0x80808080) >> 7));
    v154 = (2 * (v157 & 0x7F7F7F7F)) ^ (27 * ((v157 & 0x80808080) >> 7));
    LODWORD(dest[4]) = v156 ^ LODWORD(dest[6]) ^ LODWORD(dest[5]) ^ LODWORD(dest[7]);
    LODWORD(dest[5]) = v155 ^ v163 ^ LODWORD(dest[7]) ^ LODWORD(dest[6]);
    LODWORD(dest[6]) = v154 ^ v159 ^ LODWORD(dest[7]);
    LODWORD(dest[7]) = v156 ^ v155 ^ v154 ^ v159 ^ v161;
    v153 = DWORD1(dest[4]);
    v152 = DWORD1(dest[5]);
    v151 = DWORD1(dest[6]);
    v150 = DWORD1(dest[7]);
    v149 = DWORD1(dest[5]) ^ DWORD1(dest[4]);
    v148 = DWORD1(dest[6]) ^ DWORD1(dest[5]);
    v147 = DWORD1(dest[7]) ^ DWORD1(dest[6]);
    v146 = (2 * (v149 & 0x7F7F7F7F)) ^ (27 * ((v149 & 0x80808080) >> 7));
    v145 = (2 * (v148 & 0x7F7F7F7F)) ^ (27 * ((v148 & 0x80808080) >> 7));
    v144 = (2 * (v147 & 0x7F7F7F7F)) ^ (27 * ((v147 & 0x80808080) >> 7));
    DWORD1(dest[4]) = v146 ^ DWORD1(dest[6]) ^ DWORD1(dest[5]) ^ DWORD1(dest[7]);
    DWORD1(dest[5]) = v145 ^ v153 ^ DWORD1(dest[7]) ^ DWORD1(dest[6]);
    DWORD1(dest[6]) = v144 ^ v149 ^ DWORD1(dest[7]);
    DWORD1(dest[7]) = v146 ^ v145 ^ v144 ^ v149 ^ v151;
    v143 = DWORD2(dest[4]);
    v142 = DWORD2(dest[5]);
    v141 = DWORD2(dest[6]);
    v140 = DWORD2(dest[7]);
    v139 = DWORD2(dest[5]) ^ DWORD2(dest[4]);
    v138 = DWORD2(dest[6]) ^ DWORD2(dest[5]);
    v137 = DWORD2(dest[7]) ^ DWORD2(dest[6]);
    v136 = (2 * (v139 & 0x7F7F7F7F)) ^ (27 * ((v139 & 0x80808080) >> 7));
    v135 = (2 * (v138 & 0x7F7F7F7F)) ^ (27 * ((v138 & 0x80808080) >> 7));
    v134 = (2 * (v137 & 0x7F7F7F7F)) ^ (27 * ((v137 & 0x80808080) >> 7));
    DWORD2(dest[4]) = v136 ^ DWORD2(dest[6]) ^ DWORD2(dest[5]) ^ DWORD2(dest[7]);
    DWORD2(dest[5]) = v135 ^ v143 ^ DWORD2(dest[7]) ^ DWORD2(dest[6]);
    DWORD2(dest[6]) = v134 ^ v139 ^ DWORD2(dest[7]);
    DWORD2(dest[7]) = v136 ^ v135 ^ v134 ^ v139 ^ v141;
    v133 = HIDWORD(dest[4]);
    v132 = v17;
    v131 = v37;
    v130 = HIDWORD(dest[7]);
    v129 = v17 ^ HIDWORD(dest[4]);
    v128 = v37 ^ v17;
    v127 = HIDWORD(dest[7]) ^ v37;
    v126 = (2 * (v129 & 0x7F7F7F7F)) ^ (27 * ((v129 & 0x80808080) >> 7));
    v125 = (2 * (v128 & 0x7F7F7F7F)) ^ (27 * ((v128 & 0x80808080) >> 7));
    v124 = (2 * (v127 & 0x7F7F7F7F)) ^ (27 * ((v127 & 0x80808080) >> 7));
    HIDWORD(dest[4]) = v126 ^ v37 ^ v17 ^ HIDWORD(dest[7]);
    HIDWORD(dest[5]) = v125 ^ v133 ^ HIDWORD(dest[7]) ^ v37;
    HIDWORD(dest[6]) = v124 ^ v129 ^ HIDWORD(dest[7]);
    HIDWORD(dest[7]) = v126 ^ v125 ^ v124 ^ v129 ^ v37;
    v123 = v10;
    v122 = v14;
    v121 = v18;
    v120 = v22;
    v119 = v14 ^ v10;
    v118 = v18 ^ v14;
    v117 = v22 ^ v18;
    v116 = (2 * (v119 & 0x7F7F7F7F)) ^ (27 * ((v119 & 0x80808080) >> 7));
    v115 = (2 * (v118 & 0x7F7F7F7F)) ^ (27 * ((v118 & 0x80808080) >> 7));
    v114 = (2 * (v117 & 0x7F7F7F7F)) ^ (27 * ((v117 & 0x80808080) >> 7));
    v10 = v116 ^ v18 ^ v14 ^ v22;
    v14 = v115 ^ v123 ^ v22 ^ v18;
    v18 = v114 ^ v119 ^ v22;
    v22 = v116 ^ v115 ^ v114 ^ v119 ^ v121;
    v113 = v11;
    v112 = v15;
    v111 = v19;
    v110 = v23;
    v109 = v15 ^ v11;
    v108 = v19 ^ v15;
    v107 = v23 ^ v19;
    v106 = (2 * (v109 & 0x7F7F7F7F)) ^ (27 * ((v109 & 0x80808080) >> 7));
    v105 = (2 * (v108 & 0x7F7F7F7F)) ^ (27 * ((v108 & 0x80808080) >> 7));
    v104 = (2 * (v107 & 0x7F7F7F7F)) ^ (27 * ((v107 & 0x80808080) >> 7));
    v11 = v106 ^ v19 ^ v15 ^ v23;
    v15 = v105 ^ v113 ^ v23 ^ v19;
    v19 = v104 ^ v109 ^ v23;
    v23 = v106 ^ v105 ^ v104 ^ v109 ^ v111;
    v103 = v12;
    v102 = v16;
    v101 = v20;
    v100 = v24;
    v99 = v16 ^ v12;
    v98 = v20 ^ v16;
    v97 = v24 ^ v20;
    v96 = (2 * (v99 & 0x7F7F7F7F)) ^ (27 * ((v99 & 0x80808080) >> 7));
    v95 = (2 * (v98 & 0x7F7F7F7F)) ^ (27 * ((v98 & 0x80808080) >> 7));
    v94 = (2 * (v97 & 0x7F7F7F7F)) ^ (27 * ((v97 & 0x80808080) >> 7));
    v12 = v96 ^ v20 ^ v16 ^ v24;
    v16 = v95 ^ v103 ^ v24 ^ v20;
    v20 = v94 ^ v99 ^ v24;
    v24 = v96 ^ v95 ^ v94 ^ v99 ^ v101;
    v93 = v13;
    v92 = v33;
    v91 = v21;
    v90 = v25;
    v89 = v33 ^ v13;
    v88 = v21 ^ v33;
    v87 = v25 ^ v21;
    v86 = (2 * (v89 & 0x7F7F7F7F)) ^ (27 * ((v89 & 0x80808080) >> 7));
    v85 = (2 * (v88 & 0x7F7F7F7F)) ^ (27 * ((v88 & 0x80808080) >> 7));
    v84 = (2 * (v87 & 0x7F7F7F7F)) ^ (27 * ((v87 & 0x80808080) >> 7));
    v13 = v86 ^ v21 ^ v33 ^ v25;
    v17 = v85 ^ v93 ^ v25 ^ v21;
    v21 = v84 ^ v89 ^ v25;
    v25 = v86 ^ v85 ^ v84 ^ v89 ^ v91;
    v83 = v26;
    v82 = v30;
    v81 = v34;
    v80 = v38;
    v79 = v30 ^ v26;
    v78 = v34 ^ v30;
    v77 = v38 ^ v34;
    v76 = (2 * (v79 & 0x7F7F7F7F)) ^ (27 * ((v79 & 0x80808080) >> 7));
    v75 = (2 * (v78 & 0x7F7F7F7F)) ^ (27 * ((v78 & 0x80808080) >> 7));
    v74 = (2 * (v77 & 0x7F7F7F7F)) ^ (27 * ((v77 & 0x80808080) >> 7));
    v26 = v76 ^ v34 ^ v30 ^ v38;
    v30 = v75 ^ v83 ^ v38 ^ v34;
    v34 = v74 ^ v79 ^ v38;
    v38 = v76 ^ v75 ^ v74 ^ v79 ^ v81;
    v73 = v27;
    v72 = v31;
    v71 = v35;
    v70 = v39;
    v69 = v31 ^ v27;
    v68 = v35 ^ v31;
    v67 = v39 ^ v35;
    v66 = (2 * (v69 & 0x7F7F7F7F)) ^ (27 * ((v69 & 0x80808080) >> 7));
    v65 = (2 * (v68 & 0x7F7F7F7F)) ^ (27 * ((v68 & 0x80808080) >> 7));
    v64 = (2 * (v67 & 0x7F7F7F7F)) ^ (27 * ((v67 & 0x80808080) >> 7));
    v27 = v66 ^ v35 ^ v31 ^ v39;
    v31 = v65 ^ v73 ^ v39 ^ v35;
    v35 = v64 ^ v69 ^ v39;
    v39 = v66 ^ v65 ^ v64 ^ v69 ^ v71;
    v63 = v28;
    v62 = v32;
    v61 = v36;
    v60 = v40;
    v59 = v32 ^ v28;
    v58 = v36 ^ v32;
    v57 = v40 ^ v36;
    v56 = (2 * (v59 & 0x7F7F7F7F)) ^ (27 * ((v59 & 0x80808080) >> 7));
    v55 = (2 * (v58 & 0x7F7F7F7F)) ^ (27 * ((v58 & 0x80808080) >> 7));
    v54 = (2 * (v57 & 0x7F7F7F7F)) ^ (27 * ((v57 & 0x80808080) >> 7));
    v28 = v56 ^ v36 ^ v32 ^ v40;
    v32 = v55 ^ v63 ^ v40 ^ v36;
    v36 = v54 ^ v59 ^ v40;
    v40 = v56 ^ v55 ^ v54 ^ v59 ^ v61;
    v53 = v29;
    v52 = v206;
    v51 = v205;
    v50 = v41;
    v49 = v206 ^ v29;
    v48 = v205 ^ v206;
    v47 = v41 ^ v205;
    v46 = (2 * (v49 & 0x7F7F7F7F)) ^ (27 * ((v49 & 0x80808080) >> 7));
    v45 = (2 * (v48 & 0x7F7F7F7F)) ^ (27 * ((v48 & 0x80808080) >> 7));
    v44 = (2 * ((v41 ^ v205) & 0x7F7F7F7F)) ^ (27 * (((v41 ^ v205) & 0x80808080) >> 7));
    v29 = v46 ^ v205 ^ v206 ^ v41;
    v33 = v45 ^ v53 ^ v41 ^ v205;
    v37 = v44 ^ v49 ^ v41;
    v41 = v46 ^ v45 ^ v44 ^ v49 ^ v205;
  }
  v43 = a1 + 34;
  v42 = dest;
  for ( k = 0; k <= 0x1F; ++k )
  {
    v6 = sub_1673D0((int)&a1[k]);
    v7 = v6 ^ *((_DWORD *)v42 + k) ^ *((_DWORD *)v42 + k + 32);
    result = v43;
    v43[k] ^= v7;
  }
  return result;
}
