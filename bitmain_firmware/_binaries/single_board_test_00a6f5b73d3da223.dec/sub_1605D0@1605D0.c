unsigned int __fastcall sub_1605D0(int *a1, char a2, char a3, _BYTE *a4)
{
  int v4; // r3
  unsigned int result; // r0
  int v7; // [sp+10h] [bp+10h]
  int v8; // [sp+10h] [bp+10h]
  int v9; // [sp+14h] [bp+14h]
  int v10; // [sp+14h] [bp+14h]
  int v11; // [sp+18h] [bp+18h]
  int v12; // [sp+18h] [bp+18h]
  int v13; // [sp+1Ch] [bp+1Ch]
  int v14; // [sp+1Ch] [bp+1Ch]
  int v15; // [sp+20h] [bp+20h]
  int v16; // [sp+20h] [bp+20h]
  int v17; // [sp+24h] [bp+24h]
  int v18; // [sp+24h] [bp+24h]
  int v19; // [sp+28h] [bp+28h]
  int v20; // [sp+28h] [bp+28h]
  int v21; // [sp+2Ch] [bp+2Ch]
  int v22; // [sp+2Ch] [bp+2Ch]
  int v23; // [sp+3Ch] [bp+3Ch]
  int v24; // [sp+40h] [bp+40h]
  int v25; // [sp+44h] [bp+44h]
  int v26; // [sp+4Ch] [bp+4Ch]
  int v27; // [sp+50h] [bp+50h]
  int v28; // [sp+54h] [bp+54h]
  int v29; // [sp+58h] [bp+58h]
  int v30; // [sp+5Ch] [bp+5Ch]
  int v31; // [sp+60h] [bp+60h]
  int v32; // [sp+64h] [bp+64h]
  int v33; // [sp+68h] [bp+68h]
  int v34; // [sp+6Ch] [bp+6Ch]
  int v35; // [sp+70h] [bp+70h]
  int v36; // [sp+74h] [bp+74h]
  int v37; // [sp+78h] [bp+78h]
  int v38; // [sp+7Ch] [bp+7Ch]
  int v39; // [sp+80h] [bp+80h]
  int v40; // [sp+84h] [bp+84h]
  int v41; // [sp+88h] [bp+88h]
  unsigned int v42; // [sp+94h] [bp+94h]
  unsigned int v43; // [sp+98h] [bp+98h]
  unsigned int v44; // [sp+9Ch] [bp+9Ch]
  unsigned int v45; // [sp+A0h] [bp+A0h]
  unsigned int v46; // [sp+A4h] [bp+A4h]
  unsigned int v47; // [sp+A8h] [bp+A8h]
  unsigned int v48; // [sp+ACh] [bp+ACh]
  int j; // [sp+C0h] [bp+C0h]
  int k; // [sp+C0h] [bp+C0h]
  int m; // [sp+C0h] [bp+C0h]
  int n; // [sp+C0h] [bp+C0h]
  int v55; // [sp+C4h] [bp+C4h]
  int v56; // [sp+C4h] [bp+C4h]
  int v57; // [sp+C4h] [bp+C4h]
  int v58; // [sp+C4h] [bp+C4h]
  int v59; // [sp+C4h] [bp+C4h]
  int v60; // [sp+C4h] [bp+C4h]
  int v61; // [sp+C4h] [bp+C4h]
  int v62; // [sp+C4h] [bp+C4h]
  int v63; // [sp+C4h] [bp+C4h]
  int v64; // [sp+C8h] [bp+C8h]
  int v65; // [sp+C8h] [bp+C8h]
  int v66; // [sp+C8h] [bp+C8h]
  int v67; // [sp+C8h] [bp+C8h]
  int v68; // [sp+C8h] [bp+C8h]
  int v69; // [sp+C8h] [bp+C8h]
  int v70; // [sp+C8h] [bp+C8h]
  int v71; // [sp+C8h] [bp+C8h]
  int v72; // [sp+C8h] [bp+C8h]
  int v73; // [sp+CCh] [bp+CCh]
  int v74; // [sp+CCh] [bp+CCh]
  int v75; // [sp+CCh] [bp+CCh]
  int v76; // [sp+CCh] [bp+CCh]
  int v77; // [sp+CCh] [bp+CCh]
  int v78; // [sp+CCh] [bp+CCh]
  int v79; // [sp+CCh] [bp+CCh]
  int v80; // [sp+D0h] [bp+D0h]
  int v81; // [sp+D0h] [bp+D0h]
  int v82; // [sp+D0h] [bp+D0h]
  int v83; // [sp+D0h] [bp+D0h]
  int v84; // [sp+D0h] [bp+D0h]
  int v85; // [sp+D0h] [bp+D0h]
  int v86; // [sp+D0h] [bp+D0h]
  int v87; // [sp+D0h] [bp+D0h]
  int v88; // [sp+D0h] [bp+D0h]
  int v89; // [sp+D4h] [bp+D4h]
  int v90; // [sp+D4h] [bp+D4h]
  int v91; // [sp+D4h] [bp+D4h]
  int v92; // [sp+D4h] [bp+D4h]
  int v93; // [sp+D4h] [bp+D4h]
  int v94; // [sp+D4h] [bp+D4h]
  int v95; // [sp+D4h] [bp+D4h]
  int v96; // [sp+D4h] [bp+D4h]
  int v97; // [sp+D8h] [bp+D8h]
  int v98; // [sp+D8h] [bp+D8h]
  int v99; // [sp+D8h] [bp+D8h]
  int v100; // [sp+D8h] [bp+D8h]
  int v101; // [sp+D8h] [bp+D8h]
  int v102; // [sp+D8h] [bp+D8h]
  int v103; // [sp+D8h] [bp+D8h]
  int v104; // [sp+D8h] [bp+D8h]
  int v105; // [sp+DCh] [bp+DCh]
  int v106; // [sp+DCh] [bp+DCh]
  int v107; // [sp+DCh] [bp+DCh]
  int v108; // [sp+DCh] [bp+DCh]
  int v109; // [sp+DCh] [bp+DCh]
  int v110; // [sp+DCh] [bp+DCh]
  int v111; // [sp+DCh] [bp+DCh]
  int v112; // [sp+DCh] [bp+DCh]
  int v113; // [sp+E0h] [bp+E0h]
  int v114; // [sp+E0h] [bp+E0h]
  int v115; // [sp+E0h] [bp+E0h]
  int v116; // [sp+E0h] [bp+E0h]
  int v117; // [sp+E0h] [bp+E0h]
  int v118; // [sp+E4h] [bp+E4h]
  int v119; // [sp+E4h] [bp+E4h]
  int v120; // [sp+E4h] [bp+E4h]
  int v121; // [sp+E4h] [bp+E4h]
  int v122; // [sp+E4h] [bp+E4h]
  int v123; // [sp+E4h] [bp+E4h]
  int v124; // [sp+E4h] [bp+E4h]
  int v125; // [sp+E4h] [bp+E4h]
  int v126; // [sp+E4h] [bp+E4h]
  int v127; // [sp+E8h] [bp+E8h]
  int v128; // [sp+E8h] [bp+E8h]
  int v129; // [sp+E8h] [bp+E8h]
  int v130; // [sp+E8h] [bp+E8h]
  int v131; // [sp+E8h] [bp+E8h]
  int v132; // [sp+E8h] [bp+E8h]
  int v133; // [sp+E8h] [bp+E8h]
  int v134; // [sp+E8h] [bp+E8h]
  int v135; // [sp+E8h] [bp+E8h]
  int v136; // [sp+ECh] [bp+ECh]
  int v137; // [sp+ECh] [bp+ECh]
  int v138; // [sp+ECh] [bp+ECh]
  int v139; // [sp+ECh] [bp+ECh]
  int v140; // [sp+ECh] [bp+ECh]
  int v141; // [sp+ECh] [bp+ECh]
  int v142; // [sp+ECh] [bp+ECh]
  int v143; // [sp+F0h] [bp+F0h]
  int v144; // [sp+F0h] [bp+F0h]
  int v145; // [sp+F0h] [bp+F0h]
  int v146; // [sp+F0h] [bp+F0h]
  int v147; // [sp+F0h] [bp+F0h]
  int v148; // [sp+F0h] [bp+F0h]
  int v149; // [sp+F0h] [bp+F0h]
  int v150; // [sp+F0h] [bp+F0h]
  int v151; // [sp+F0h] [bp+F0h]
  int v152; // [sp+F4h] [bp+F4h]
  int v153; // [sp+F4h] [bp+F4h]
  int v154; // [sp+F4h] [bp+F4h]
  int v155; // [sp+F4h] [bp+F4h]
  int v156; // [sp+F4h] [bp+F4h]
  int v157; // [sp+F4h] [bp+F4h]
  int v158; // [sp+F4h] [bp+F4h]
  int v159; // [sp+F4h] [bp+F4h]
  int v160; // [sp+F8h] [bp+F8h]
  int v161; // [sp+F8h] [bp+F8h]
  int v162; // [sp+F8h] [bp+F8h]
  int v163; // [sp+F8h] [bp+F8h]
  int v164; // [sp+F8h] [bp+F8h]
  int v165; // [sp+F8h] [bp+F8h]
  int v166; // [sp+F8h] [bp+F8h]
  int v167; // [sp+F8h] [bp+F8h]
  int v168; // [sp+FCh] [bp+FCh]
  int v169; // [sp+FCh] [bp+FCh]
  int v170; // [sp+FCh] [bp+FCh]
  int v171; // [sp+FCh] [bp+FCh]
  int v172; // [sp+FCh] [bp+FCh]
  int v173; // [sp+FCh] [bp+FCh]
  int v174; // [sp+FCh] [bp+FCh]
  int v175; // [sp+FCh] [bp+FCh]
  int v176; // [sp+100h] [bp+100h]
  int v177; // [sp+100h] [bp+100h]
  int v178; // [sp+100h] [bp+100h]
  int v179; // [sp+100h] [bp+100h]
  int v180; // [sp+100h] [bp+100h]
  int v181; // [sp+104h] [bp+104h]
  int v182; // [sp+104h] [bp+104h]
  int v183; // [sp+104h] [bp+104h]
  int v184; // [sp+104h] [bp+104h]
  int v185; // [sp+104h] [bp+104h]
  int v186; // [sp+104h] [bp+104h]
  int v187; // [sp+104h] [bp+104h]
  int v188; // [sp+104h] [bp+104h]
  int v189; // [sp+104h] [bp+104h]
  int v190; // [sp+108h] [bp+108h]
  int v191; // [sp+108h] [bp+108h]
  int v192; // [sp+108h] [bp+108h]
  int v193; // [sp+108h] [bp+108h]
  int v194; // [sp+108h] [bp+108h]
  int v195; // [sp+108h] [bp+108h]
  int v196; // [sp+108h] [bp+108h]
  int v197; // [sp+108h] [bp+108h]
  int v198; // [sp+108h] [bp+108h]
  int v199; // [sp+10Ch] [bp+10Ch]
  int v200; // [sp+10Ch] [bp+10Ch]
  int v201; // [sp+10Ch] [bp+10Ch]
  int v202; // [sp+10Ch] [bp+10Ch]
  int v203; // [sp+10Ch] [bp+10Ch]
  int v204; // [sp+10Ch] [bp+10Ch]
  int v205; // [sp+10Ch] [bp+10Ch]
  int v206; // [sp+110h] [bp+110h]
  int v207; // [sp+110h] [bp+110h]
  int v208; // [sp+110h] [bp+110h]
  int v209; // [sp+110h] [bp+110h]
  int v210; // [sp+110h] [bp+110h]
  int v211; // [sp+110h] [bp+110h]
  int v212; // [sp+110h] [bp+110h]
  int v213; // [sp+110h] [bp+110h]
  int v214; // [sp+110h] [bp+110h]
  int v215; // [sp+114h] [bp+114h]
  int v216; // [sp+114h] [bp+114h]
  int v217; // [sp+114h] [bp+114h]
  int v218; // [sp+114h] [bp+114h]
  int v219; // [sp+114h] [bp+114h]
  int v220; // [sp+114h] [bp+114h]
  int v221; // [sp+114h] [bp+114h]
  int v222; // [sp+114h] [bp+114h]
  int v223; // [sp+118h] [bp+118h]
  int v224; // [sp+118h] [bp+118h]
  int v225; // [sp+118h] [bp+118h]
  int v226; // [sp+118h] [bp+118h]
  int v227; // [sp+118h] [bp+118h]
  int v228; // [sp+118h] [bp+118h]
  int v229; // [sp+118h] [bp+118h]
  int v230; // [sp+118h] [bp+118h]
  int v231; // [sp+11Ch] [bp+11Ch]
  int v232; // [sp+11Ch] [bp+11Ch]
  int v233; // [sp+11Ch] [bp+11Ch]
  int v234; // [sp+11Ch] [bp+11Ch]
  int v235; // [sp+11Ch] [bp+11Ch]
  int v236; // [sp+11Ch] [bp+11Ch]
  int v237; // [sp+11Ch] [bp+11Ch]
  int v238; // [sp+11Ch] [bp+11Ch]
  int v239; // [sp+120h] [bp+120h]
  int v240; // [sp+120h] [bp+120h]
  int v241; // [sp+120h] [bp+120h]
  int v242; // [sp+120h] [bp+120h]
  int v243; // [sp+120h] [bp+120h]
  unsigned int v244; // [sp+124h] [bp+124h]
  int v245; // [sp+124h] [bp+124h]
  int v246; // [sp+124h] [bp+124h]
  int v247; // [sp+124h] [bp+124h]
  int v248; // [sp+124h] [bp+124h]
  int v249; // [sp+124h] [bp+124h]
  int v250; // [sp+128h] [bp+128h]
  int v251; // [sp+128h] [bp+128h]
  int v252; // [sp+128h] [bp+128h]
  int v253; // [sp+128h] [bp+128h]
  int v254; // [sp+128h] [bp+128h]
  int v255; // [sp+128h] [bp+128h]
  int v256; // [sp+128h] [bp+128h]
  int v257; // [sp+12Ch] [bp+12Ch]
  int v258; // [sp+12Ch] [bp+12Ch]
  int v259; // [sp+12Ch] [bp+12Ch]
  int v260; // [sp+12Ch] [bp+12Ch]
  int v261; // [sp+12Ch] [bp+12Ch]
  int v262; // [sp+130h] [bp+130h]
  int v263; // [sp+130h] [bp+130h]
  int v264; // [sp+130h] [bp+130h]
  int v265; // [sp+130h] [bp+130h]
  int v266; // [sp+130h] [bp+130h]
  int v267; // [sp+130h] [bp+130h]
  int v268; // [sp+130h] [bp+130h]
  int v269; // [sp+134h] [bp+134h]
  int v270; // [sp+134h] [bp+134h]
  int v271; // [sp+134h] [bp+134h]
  int v272; // [sp+134h] [bp+134h]
  int v273; // [sp+134h] [bp+134h]
  int v274; // [sp+134h] [bp+134h]
  int v275; // [sp+138h] [bp+138h]
  int v276; // [sp+138h] [bp+138h]
  int v277; // [sp+138h] [bp+138h]
  int v278; // [sp+138h] [bp+138h]
  int v279; // [sp+138h] [bp+138h]
  int v280; // [sp+138h] [bp+138h]
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
  int i; // [sp+144h] [bp+144h]

  v4 = a1[8];
  *((_BYTE *)a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  result = (unsigned int)memset((char *)a1 + v4 + 1, 0, 31 - v4);
  v287 = a1[9];
  v281 = a1[10];
  v275 = a1[11];
  v269 = a1[12];
  v262 = a1[13];
  v257 = a1[14];
  v250 = a1[15];
  v244 = a1[16];
  v239 = a1[17];
  v231 = a1[18];
  v223 = a1[19];
  v215 = a1[20];
  v206 = a1[21];
  v199 = a1[22];
  v190 = a1[23];
  v181 = a1[24];
  v176 = a1[25];
  v168 = a1[26];
  v160 = a1[27];
  v152 = a1[28];
  v143 = a1[29];
  v136 = a1[30];
  v127 = a1[31];
  v118 = a1[32];
  v113 = a1[33];
  v105 = a1[34];
  v97 = a1[35];
  v89 = a1[36];
  v80 = a1[37];
  v73 = a1[38];
  v64 = a1[39];
  v55 = a1[40];
  for ( i = 0; i <= 2; ++i )
  {
    v48 = sub_15CA34(a1);
    v47 = sub_15CA34(a1 + 1);
    v46 = sub_15CA34(a1 + 2);
    v45 = sub_15CA34(a1 + 3);
    v44 = sub_15CA34(a1 + 4);
    v43 = sub_15CA34(a1 + 5);
    v42 = sub_15CA34(a1 + 6);
    result = sub_15CA34(a1 + 7);
    v26 = v55 ^ v118 ^ v181 ^ v244;
    v35 = v64 ^ v127 ^ v190 ^ v250;
    v36 = v73 ^ v136 ^ v199 ^ v257;
    v37 = v80 ^ v143 ^ v206 ^ v262;
    v38 = v26 ^ v89 ^ v152 ^ v215 ^ v269;
    v39 = v26 ^ v97 ^ v160 ^ v223 ^ v275;
    v40 = v105 ^ v168 ^ v231 ^ v281;
    v41 = v26 ^ v113 ^ v176 ^ v239 ^ v287;
    v288 = v26 ^ v287;
    v282 = v41 ^ v281;
    v276 = v40 ^ v275;
    v270 = v39 ^ v269;
    v263 = v38 ^ v262;
    v258 = v37 ^ v257;
    v251 = v36 ^ v250;
    v240 = v26 ^ v239;
    v232 = v41 ^ v231;
    v224 = v40 ^ v223;
    v216 = v39 ^ v215;
    v207 = v38 ^ v206;
    v200 = v37 ^ v199;
    v191 = v36 ^ v190;
    v182 = v35 ^ v181;
    v177 = v26 ^ v176;
    v169 = v41 ^ v168;
    v161 = v40 ^ v160;
    v153 = v39 ^ v152;
    v144 = v38 ^ v143;
    v137 = v37 ^ v136;
    v128 = v36 ^ v127;
    v119 = v35 ^ v118;
    v114 = v26 ^ v113;
    v106 = v41 ^ v105;
    v98 = v40 ^ v97;
    v90 = v39 ^ v89;
    v81 = v38 ^ v80;
    v74 = v37 ^ v73;
    v65 = v36 ^ v64;
    v56 = v35 ^ v55;
    v34 = v114 ^ v35 ^ v244;
    v33 = v106 ^ v35 ^ v244 ^ v288;
    v32 = v98 ^ v282;
    v31 = v90 ^ v35 ^ v244 ^ v276;
    v30 = v81 ^ v35 ^ v244 ^ v270;
    v29 = v74 ^ v263;
    v28 = v65 ^ v258;
    v27 = v56 ^ v251;
    v25 = v56;
    v57 = v65;
    v66 = v74;
    v75 = v81;
    v82 = v25 ^ v90;
    v91 = v25 ^ v98;
    v99 = v106;
    v107 = v25 ^ v114;
    v115 = v177 ^ v25;
    v108 = v169 ^ v107;
    v100 = v161 ^ v99;
    v92 = v153 ^ v91;
    v83 = v144 ^ v82;
    v76 = v137 ^ v75;
    v67 = v128 ^ v66;
    v58 = v119 ^ v57;
    v24 = v119;
    v120 = v128;
    v129 = v137;
    v138 = v144;
    v145 = v24 ^ v153;
    v154 = v24 ^ v161;
    v162 = v169;
    v170 = v24 ^ v177;
    v178 = v240 ^ v24;
    v171 = v232 ^ v170;
    v163 = v224 ^ v162;
    v155 = v216 ^ v154;
    v146 = v207 ^ v145;
    v139 = v200 ^ v138;
    v130 = v191 ^ v129;
    v121 = v182 ^ v120;
    v23 = v182;
    v183 = v191;
    v192 = v200;
    v201 = v207;
    v208 = v23 ^ v216;
    v217 = v23 ^ v224;
    v225 = v232;
    v233 = v23 ^ v240;
    v241 = v288 ^ v23;
    v234 = v282 ^ v233;
    v226 = v276 ^ v225;
    v218 = v270 ^ v217;
    v209 = v263 ^ v208;
    v202 = v258 ^ v201;
    v193 = v251 ^ v192;
    v184 = v35 ^ v244 ^ v183;
    v287 = v48 ^ v34;
    v281 = v47 ^ v33;
    v275 = v46 ^ v32;
    v269 = v45 ^ v31;
    v262 = v44 ^ v30;
    v257 = v43 ^ v29;
    v250 = v42 ^ v28;
    v244 = result ^ v27;
    v239 = result ^ v241;
    v231 = result ^ v48 ^ v234;
    v223 = v47 ^ v226;
    v215 = result ^ v46 ^ v218;
    v176 = v42 ^ v178;
    v168 = v42 ^ result ^ v171;
    v160 = result ^ v48 ^ v163;
    v152 = v42 ^ v47 ^ v155;
    v113 = v43 ^ v115;
    v105 = v43 ^ v42 ^ v108;
    v97 = v42 ^ result ^ v100;
    v89 = v43 ^ result ^ v48 ^ v92;
    v206 = __ROR4__(result ^ v45 ^ v209, 31);
    v199 = __ROR4__(v44 ^ v202, 31);
    v190 = __ROR4__(v43 ^ v193, 31);
    v181 = __ROR4__(v42 ^ v184, 31);
    v143 = __ROR4__(v42 ^ result ^ v46 ^ v146, 30);
    v136 = __ROR4__(result ^ v45 ^ v139, 30);
    v127 = __ROR4__(v44 ^ v130, 30);
    v118 = __ROR4__(v43 ^ v121, 30);
    v80 = __ROR4__(v43 ^ v42 ^ v47 ^ v83, 29);
    v73 = __ROR4__(v42 ^ result ^ v46 ^ v76, 29);
    v64 = __ROR4__(result ^ v45 ^ v67, 29);
    v55 = __ROR4__(v44 ^ v58, 29);
    for ( j = 0; j <= 7; ++j )
    {
      v21 = v287;
      v277 = v269 ^ v275;
      v289 = v269 ^ (v281 | v287);
      v271 = v21 & v269;
      v283 = v271 ^ ~v281;
      v272 = v277 ^ v271;
      v278 = v283 ^ v289 & v277;
      v284 = v272 | v283;
      v22 = v284 ^ v21;
      v273 = v278 ^ v272;
      v279 = v284 & v278;
      v285 = ~v289 ^ v284;
      v19 = v257;
      v245 = v262 ^ v244;
      v259 = v262 ^ (v250 | v257);
      v264 = v19 & v262;
      v252 = v264 ^ ~v250;
      v265 = v245 ^ v264;
      v246 = v252 ^ v259 & v245;
      v253 = v265 | v252;
      v20 = v253 ^ v19;
      v266 = v246 ^ v265;
      v247 = v253 & v246;
      v254 = ~v259 ^ v253;
      v267 = v22 ^ v266;
      v290 = v267 ^ __ROR4__(v22, 30);
      v268 = v290 ^ __ROR4__(v267, 18);
      v260 = v285 ^ v20;
      v286 = v285 ^ v20 ^ __ROR4__(v285, 30);
      v261 = v286 ^ __ROR4__(v260, 18);
      v281 = v261 ^ __ROR4__(v286, 22);
      v257 = __ROR4__(v261, 31);
      v255 = v279 ^ v254;
      v280 = v255 ^ __ROR4__(v279, 30);
      v256 = v280 ^ __ROR4__(v255, 18);
      v275 = v256 ^ __ROR4__(v280, 22);
      v250 = __ROR4__(v256, 31);
      v248 = v273 ^ v247;
      v274 = v248 ^ __ROR4__(v273, 30);
      v249 = v274 ^ __ROR4__(v248, 18);
      v269 = v249 ^ __ROR4__(v274, 22);
      v244 = __ROR4__(v249, 31);
      v287 = dword_1D5C28[j] ^ v268 ^ __ROR4__(v290, 22);
      v262 = dword_1D5C48[j] ^ __ROR4__(v268, 31);
    }
    for ( k = 0; k <= 7; ++k )
    {
      v17 = v239;
      v227 = v215 ^ v223;
      v242 = v215 ^ (v231 | v239);
      v219 = v17 & v215;
      v235 = v219 ^ ~v231;
      v220 = v227 ^ v219;
      v228 = v235 ^ v242 & v227;
      v236 = v220 | v235;
      v18 = v236 ^ v17;
      v221 = v228 ^ v220;
      v229 = v236 & v228;
      v237 = ~v242 ^ v236;
      v15 = v199;
      v185 = v206 ^ v181;
      v203 = v206 ^ (v190 | v199);
      v210 = v15 & v206;
      v194 = v210 ^ ~v190;
      v211 = v185 ^ v210;
      v186 = v194 ^ v203 & v185;
      v195 = v211 | v194;
      v16 = v195 ^ v15;
      v212 = v186 ^ v211;
      v187 = v195 & v186;
      v196 = ~v203 ^ v195;
      v213 = v18 ^ v212;
      v243 = v213 ^ __ROR4__(v18, 30);
      v214 = v243 ^ __ROR4__(v213, 18);
      v204 = v237 ^ v16;
      v238 = v237 ^ v16 ^ __ROR4__(v237, 30);
      v205 = v238 ^ __ROR4__(v204, 18);
      v231 = v205 ^ __ROR4__(v238, 22);
      v199 = __ROR4__(v205, 31);
      v197 = v229 ^ v196;
      v230 = v197 ^ __ROR4__(v229, 30);
      v198 = v230 ^ __ROR4__(v197, 18);
      v223 = v198 ^ __ROR4__(v230, 22);
      v190 = __ROR4__(v198, 31);
      v188 = v221 ^ v187;
      v222 = v188 ^ __ROR4__(v221, 30);
      v189 = v222 ^ __ROR4__(v188, 18);
      v215 = v189 ^ __ROR4__(v222, 22);
      v181 = __ROR4__(v189, 31);
      v239 = dword_1D5C68[k] ^ v214 ^ __ROR4__(v243, 22);
      v206 = dword_1D5C88[k] ^ __ROR4__(v214, 31);
    }
    for ( m = 0; m <= 7; ++m )
    {
      v13 = v176;
      v164 = v152 ^ v160;
      v179 = v152 ^ (v168 | v176);
      v156 = v13 & v152;
      v172 = v156 ^ ~v168;
      v157 = v164 ^ v156;
      v165 = v172 ^ v179 & v164;
      v173 = v157 | v172;
      v14 = v173 ^ v13;
      v158 = v165 ^ v157;
      v166 = v173 & v165;
      v174 = ~v179 ^ v173;
      v11 = v136;
      v122 = v143 ^ v118;
      v140 = v143 ^ (v127 | v136);
      v147 = v11 & v143;
      v131 = v147 ^ ~v127;
      v148 = v122 ^ v147;
      v123 = v131 ^ v140 & v122;
      v132 = v148 | v131;
      v12 = v132 ^ v11;
      v149 = v123 ^ v148;
      v124 = v132 & v123;
      v133 = ~v140 ^ v132;
      v150 = v14 ^ v149;
      v180 = v150 ^ __ROR4__(v14, 30);
      v151 = v180 ^ __ROR4__(v150, 18);
      v141 = v174 ^ v12;
      v175 = v174 ^ v12 ^ __ROR4__(v174, 30);
      v142 = v175 ^ __ROR4__(v141, 18);
      v168 = v142 ^ __ROR4__(v175, 22);
      v136 = __ROR4__(v142, 31);
      v134 = v166 ^ v133;
      v167 = v134 ^ __ROR4__(v166, 30);
      v135 = v167 ^ __ROR4__(v134, 18);
      v160 = v135 ^ __ROR4__(v167, 22);
      v127 = __ROR4__(v135, 31);
      v125 = v158 ^ v124;
      v159 = v125 ^ __ROR4__(v158, 30);
      v126 = v159 ^ __ROR4__(v125, 18);
      v152 = v126 ^ __ROR4__(v159, 22);
      v118 = __ROR4__(v126, 31);
      v176 = dword_1D5CA8[m] ^ v151 ^ __ROR4__(v180, 22);
      v143 = dword_1D5CC8[m] ^ __ROR4__(v151, 31);
    }
    for ( n = 0; n <= 7; ++n )
    {
      v9 = v113;
      v101 = v89 ^ v97;
      v116 = v89 ^ (v105 | v113);
      v93 = v9 & v89;
      v109 = v93 ^ ~v105;
      v94 = v101 ^ v93;
      v102 = v109 ^ v116 & v101;
      v110 = v94 | v109;
      v10 = v110 ^ v9;
      v95 = v102 ^ v94;
      v103 = v110 & v102;
      v111 = ~v116 ^ v110;
      v7 = v73;
      v59 = v80 ^ v55;
      v77 = v80 ^ (v64 | v73);
      v84 = v7 & v80;
      v68 = v84 ^ ~v64;
      v85 = v59 ^ v84;
      v60 = v68 ^ v77 & v59;
      v69 = v85 | v68;
      v8 = v69 ^ v7;
      v86 = v60 ^ v85;
      v61 = v69 & v60;
      v70 = ~v77 ^ v69;
      v87 = v10 ^ v86;
      v117 = v87 ^ __ROR4__(v10, 30);
      v88 = v117 ^ __ROR4__(v87, 18);
      v78 = v111 ^ v8;
      v112 = v111 ^ v8 ^ __ROR4__(v111, 30);
      v79 = v112 ^ __ROR4__(v78, 18);
      v105 = v79 ^ __ROR4__(v112, 22);
      v73 = __ROR4__(v79, 31);
      v71 = v103 ^ v70;
      v104 = v71 ^ __ROR4__(v103, 30);
      v72 = v104 ^ __ROR4__(v71, 18);
      v97 = v72 ^ __ROR4__(v104, 22);
      v64 = __ROR4__(v72, 31);
      v62 = v95 ^ v61;
      v96 = v62 ^ __ROR4__(v95, 30);
      v63 = v96 ^ __ROR4__(v62, 18);
      v89 = v63 ^ __ROR4__(v96, 22);
      v55 = __ROR4__(v63, 31);
      v113 = dword_1D5CE8[n] ^ v88 ^ __ROR4__(v117, 22);
      v80 = dword_1D5D08[n] ^ __ROR4__(v88, 31);
    }
    switch ( i )
    {
      case 1:
        sub_15C9F0(a4, v113 ^ v287 ^ v239 ^ v176);
        sub_15C9F0(a4 + 4, v105 ^ v281 ^ v231 ^ v168);
        sub_15C9F0(a4 + 8, v97 ^ v275 ^ v223 ^ v160);
        sub_15C9F0(a4 + 12, v89 ^ v269 ^ v215 ^ v152);
        sub_15C9F0(a4 + 16, v80 ^ v262 ^ v206 ^ v143);
        sub_15C9F0(a4 + 20, v73 ^ v257 ^ v199 ^ v136);
        sub_15C9F0(a4 + 24, v64 ^ v250 ^ v190 ^ v127);
        result = (unsigned int)sub_15C9F0(a4 + 28, v55 ^ v244 ^ v181 ^ v118);
        break;
      case 2:
        sub_15C9F0(a4 + 32, v113 ^ v287 ^ v239 ^ v176);
        sub_15C9F0(a4 + 36, v105 ^ v281 ^ v231 ^ v168);
        sub_15C9F0(a4 + 40, v97 ^ v275 ^ v223 ^ v160);
        result = (unsigned int)sub_15C9F0(a4 + 44, v89 ^ v269 ^ v215 ^ v152);
        break;
      case 0:
        result = (unsigned int)memset(a1, 0, 0x20u);
        break;
    }
  }
  return result;
}
