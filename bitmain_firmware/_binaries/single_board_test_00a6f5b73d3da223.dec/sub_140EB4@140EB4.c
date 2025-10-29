unsigned __int8 *__fastcall sub_140EB4(unsigned __int8 *result, int a2, int *a3)
{
  int v3; // [sp+10h] [bp+10h]
  int v4; // [sp+10h] [bp+10h]
  int v5; // [sp+10h] [bp+10h]
  int v6; // [sp+10h] [bp+10h]
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+18h] [bp+18h]
  int v10; // [sp+18h] [bp+18h]
  int v11; // [sp+18h] [bp+18h]
  int v12; // [sp+18h] [bp+18h]
  int v13; // [sp+1Ch] [bp+1Ch]
  int v14; // [sp+1Ch] [bp+1Ch]
  int v15; // [sp+1Ch] [bp+1Ch]
  int v16; // [sp+1Ch] [bp+1Ch]
  int v17; // [sp+20h] [bp+20h]
  int v18; // [sp+24h] [bp+24h]
  int v19; // [sp+24h] [bp+24h]
  int v20; // [sp+24h] [bp+24h]
  int v21; // [sp+24h] [bp+24h]
  int v22; // [sp+24h] [bp+24h]
  int v23; // [sp+2Ch] [bp+2Ch]
  int v24; // [sp+34h] [bp+34h]
  int v25; // [sp+3Ch] [bp+3Ch]
  int v26; // [sp+44h] [bp+44h]
  int v27; // [sp+48h] [bp+48h]
  int v28; // [sp+4Ch] [bp+4Ch]
  int v29; // [sp+50h] [bp+50h]
  int v30; // [sp+58h] [bp+58h]
  int v31; // [sp+60h] [bp+60h]
  int v32; // [sp+68h] [bp+68h]
  int v33; // [sp+6Ch] [bp+6Ch]
  int v34; // [sp+70h] [bp+70h]
  int v35; // [sp+74h] [bp+74h]
  int v36; // [sp+7Ch] [bp+7Ch]
  int v37; // [sp+84h] [bp+84h]
  int v38; // [sp+8Ch] [bp+8Ch]
  int v39; // [sp+94h] [bp+94h]
  int v40; // [sp+98h] [bp+98h]
  int v41; // [sp+9Ch] [bp+9Ch]
  int v42; // [sp+A0h] [bp+A0h]
  int v43; // [sp+A8h] [bp+A8h]
  int v44; // [sp+B0h] [bp+B0h]
  int v45; // [sp+B8h] [bp+B8h]
  int v46; // [sp+BCh] [bp+BCh]
  int v47; // [sp+C0h] [bp+C0h]
  int v48; // [sp+C4h] [bp+C4h]
  int v49; // [sp+CCh] [bp+CCh]
  int v50; // [sp+D4h] [bp+D4h]
  int v51; // [sp+DCh] [bp+DCh]
  int v52; // [sp+E4h] [bp+E4h]
  int v53; // [sp+E8h] [bp+E8h]
  int v54; // [sp+ECh] [bp+ECh]
  int v55; // [sp+F0h] [bp+F0h]
  int v56; // [sp+F8h] [bp+F8h]
  int v57; // [sp+100h] [bp+100h]
  int v58; // [sp+108h] [bp+108h]
  int v59; // [sp+10Ch] [bp+10Ch]
  int v60; // [sp+110h] [bp+110h]
  int v61; // [sp+114h] [bp+114h]
  int v62; // [sp+11Ch] [bp+11Ch]
  int v63; // [sp+124h] [bp+124h]
  int v64; // [sp+12Ch] [bp+12Ch]
  int v65; // [sp+134h] [bp+134h]
  int v66; // [sp+138h] [bp+138h]
  int v67; // [sp+13Ch] [bp+13Ch]
  int v68; // [sp+140h] [bp+140h]
  int v69; // [sp+148h] [bp+148h]
  int v70; // [sp+150h] [bp+150h]
  int v71; // [sp+158h] [bp+158h]
  int v72; // [sp+15Ch] [bp+15Ch]
  int v73; // [sp+160h] [bp+160h]
  int v74; // [sp+164h] [bp+164h]
  int v75; // [sp+168h] [bp+168h]
  int v76; // [sp+168h] [bp+168h]
  int v77; // [sp+168h] [bp+168h]
  int v78; // [sp+168h] [bp+168h]
  int v79; // [sp+16Ch] [bp+16Ch]
  int v80; // [sp+170h] [bp+170h]
  int v81; // [sp+170h] [bp+170h]
  int v82; // [sp+170h] [bp+170h]
  int v83; // [sp+170h] [bp+170h]
  int v84; // [sp+170h] [bp+170h]
  int v85; // [sp+178h] [bp+178h]
  int v86; // [sp+180h] [bp+180h]
  int v87; // [sp+188h] [bp+188h]
  int v88; // [sp+190h] [bp+190h]
  int v89; // [sp+194h] [bp+194h]
  int v90; // [sp+198h] [bp+198h]
  int v91; // [sp+19Ch] [bp+19Ch]
  int v92; // [sp+1A4h] [bp+1A4h]
  int v93; // [sp+1ACh] [bp+1ACh]
  int v94; // [sp+1B4h] [bp+1B4h]
  int v95; // [sp+1B8h] [bp+1B8h]
  int v96; // [sp+1BCh] [bp+1BCh]
  int v97; // [sp+1C0h] [bp+1C0h]
  int v98; // [sp+1C8h] [bp+1C8h]
  int v99; // [sp+1D0h] [bp+1D0h]
  int v100; // [sp+1D8h] [bp+1D8h]
  int v101; // [sp+1E0h] [bp+1E0h]
  int v102; // [sp+1E4h] [bp+1E4h]
  int v103; // [sp+1E8h] [bp+1E8h]
  int v104; // [sp+1ECh] [bp+1ECh]
  int v105; // [sp+1F4h] [bp+1F4h]
  int v106; // [sp+1FCh] [bp+1FCh]
  int v107; // [sp+204h] [bp+204h]
  int v108; // [sp+208h] [bp+208h]
  int v109; // [sp+20Ch] [bp+20Ch]
  int v110; // [sp+210h] [bp+210h]
  int v111; // [sp+218h] [bp+218h]
  int v112; // [sp+220h] [bp+220h]
  int v113; // [sp+228h] [bp+228h]
  int v114; // [sp+230h] [bp+230h]
  int v115; // [sp+234h] [bp+234h]
  int v116; // [sp+238h] [bp+238h]
  int v117; // [sp+23Ch] [bp+23Ch]
  int v118; // [sp+244h] [bp+244h]
  int v119; // [sp+24Ch] [bp+24Ch]
  int v120; // [sp+254h] [bp+254h]
  int v121; // [sp+258h] [bp+258h]
  int v122; // [sp+25Ch] [bp+25Ch]
  int v123; // [sp+260h] [bp+260h]
  int v124; // [sp+268h] [bp+268h]
  int v125; // [sp+270h] [bp+270h]
  int v126; // [sp+278h] [bp+278h]
  int v127; // [sp+280h] [bp+280h]
  int v128; // [sp+284h] [bp+284h]
  int v129; // [sp+288h] [bp+288h]
  int v130; // [sp+28Ch] [bp+28Ch]
  int v131; // [sp+294h] [bp+294h]
  int v132; // [sp+29Ch] [bp+29Ch]
  int v133; // [sp+2A4h] [bp+2A4h]
  int v134; // [sp+2A8h] [bp+2A8h]
  int v135; // [sp+2ACh] [bp+2ACh]
  int v136; // [sp+2B0h] [bp+2B0h]
  int v137; // [sp+2B8h] [bp+2B8h]
  unsigned int k; // [sp+2BCh] [bp+2BCh]
  int v139; // [sp+2C0h] [bp+2C0h]
  unsigned int j; // [sp+2C4h] [bp+2C4h]
  int v141; // [sp+2C8h] [bp+2C8h]
  unsigned int i; // [sp+2CCh] [bp+2CCh]

  v136 = *result;
  v135 = result[8 * a2];
  v134 = result[16 * a2];
  v133 = result[24 * a2];
  v132 = v136 + 16 * v134;
  v131 = v136 - 16 * v134;
  v130 = (unsigned __int8)(((_BYTE)v133 << 6) + 4 * v135) - (((v133 << 6) + 4 * v135) >> 8);
  v129 = 16 * v135 - 16 * v133;
  v128 = (unsigned __int8)(4 * v133 + ((_BYTE)v135 << 6)) - ((4 * v133 + (v135 << 6)) >> 8);
  v127 = v133 + v135 + v134 + v136;
  v126 = v129 + v136 - v134;
  v125 = v134 + v136 - (v133 + v135);
  v124 = v136 - v134 - v129;
  v123 = result[4 * a2];
  v122 = result[12 * a2];
  v121 = result[20 * a2];
  v120 = result[28 * a2];
  v119 = v123 + 16 * v121;
  v118 = v123 - 16 * v121;
  v117 = (unsigned __int8)(((_BYTE)v120 << 6) + 4 * v122) - (((v120 << 6) + 4 * v122) >> 8);
  v116 = 16 * v122 - 16 * v120;
  v115 = (unsigned __int8)(4 * v120 + ((_BYTE)v122 << 6)) - ((4 * v120 + (v122 << 6)) >> 8);
  v114 = v120 + v122 + v121 + v123;
  v113 = v116 + v123 - v121;
  v112 = v121 + v123 - (v120 + v122);
  v111 = v123 - v121 - v116;
  *a3 = v127 + v114;
  a3[1] = v130 + v132 + 2 * (v117 + v119);
  a3[2] = v126 + 4 * v113;
  a3[3] = v128 + v131 + 8 * (v115 + v118);
  a3[4] = v125 + 16 * v112;
  a3[5] = v132 - v130 + 32 * (v119 - v117);
  a3[6] = v124 + (v111 << 6);
  a3[7] = v131 - v128 + ((v118 - v115) << 7);
  a3[8] = v127 - v114;
  a3[9] = v130 + v132 - 2 * (v117 + v119);
  a3[10] = v126 - 4 * v113;
  a3[11] = v128 + v131 - 8 * (v115 + v118);
  a3[12] = v125 - 16 * v112;
  a3[13] = v132 - v130 - 32 * (v119 - v117);
  a3[14] = v124 - (v111 << 6);
  a3[15] = v131 - v128 - ((v118 - v115) << 7);
  v110 = result[2 * a2];
  v109 = result[10 * a2];
  v108 = result[18 * a2];
  v107 = result[26 * a2];
  v106 = v110 + 16 * v108;
  v105 = v110 - 16 * v108;
  v104 = (unsigned __int8)(((_BYTE)v107 << 6) + 4 * v109) - (((v107 << 6) + 4 * v109) >> 8);
  v103 = 16 * v109 - 16 * v107;
  v102 = (unsigned __int8)(4 * v107 + ((_BYTE)v109 << 6)) - ((4 * v107 + (v109 << 6)) >> 8);
  v101 = v107 + v109 + v108 + v110;
  v100 = v103 + v110 - v108;
  v99 = v108 + v110 - (v107 + v109);
  v98 = v110 - v108 - v103;
  v97 = result[6 * a2];
  v96 = result[14 * a2];
  v95 = result[22 * a2];
  v94 = result[30 * a2];
  v93 = v97 + 16 * v95;
  v92 = v97 - 16 * v95;
  v91 = (unsigned __int8)(((_BYTE)v94 << 6) + 4 * v96) - (((v94 << 6) + 4 * v96) >> 8);
  v90 = 16 * v96 - 16 * v94;
  v89 = (unsigned __int8)(4 * v94 + ((_BYTE)v96 << 6)) - ((4 * v94 + (v96 << 6)) >> 8);
  v88 = v94 + v96 + v95 + v97;
  v87 = v90 + v97 - v95;
  v86 = v95 + v97 - (v94 + v96);
  v85 = v97 - v95 - v90;
  a3[16] = v88 + v101;
  a3[17] = v104 + v106 + 2 * (v91 + v93);
  a3[18] = v100 + 4 * v87;
  a3[19] = v102 + v105 + 8 * (v89 + v92);
  a3[20] = v99 + 16 * v86;
  a3[21] = v106 - v104 + 32 * (v93 - v91);
  a3[22] = v98 + (v85 << 6);
  a3[23] = v105 - v102 + ((v92 - v89) << 7);
  a3[24] = v101 - v88;
  a3[25] = v104 + v106 - 2 * (v91 + v93);
  a3[26] = v100 - 4 * v87;
  a3[27] = v102 + v105 - 8 * (v89 + v92);
  a3[28] = v99 - 16 * v86;
  a3[29] = v106 - v104 - 32 * (v93 - v91);
  a3[30] = v98 - (v85 << 6);
  a3[31] = v105 - v102 - ((v92 - v89) << 7);
  v80 = *a3;
  v79 = a3[16];
  *a3 += v79;
  a3[16] = v80 - v79;
  v141 = 0;
  for ( i = 0; ; a3[i + 16] = v81 - v75 )
  {
    v82 = a3[i + 1];
    v76 = ((a3[i + 17] * dword_1D48C8[v141 + 8]) >> 16) + (unsigned __int16)(a3[i + 17] * dword_1D48C8[v141 + 8]);
    a3[i + 1] = v76 + v82;
    a3[i + 17] = v82 - v76;
    v83 = a3[i + 2];
    v77 = ((a3[i + 18] * dword_1D48C8[v141 + 16]) >> 16) + (unsigned __int16)(a3[i + 18] * dword_1D48C8[v141 + 16]);
    a3[i + 2] = v77 + v83;
    a3[i + 18] = v83 - v77;
    v84 = a3[i + 3];
    v78 = ((a3[i + 19] * dword_1D48C8[v141 + 24]) >> 16) + (unsigned __int16)(a3[i + 19] * dword_1D48C8[v141 + 24]);
    a3[i + 3] = v78 + v84;
    a3[i + 19] = v84 - v78;
    i += 4;
    v141 += 32;
    if ( i > 0xF )
      break;
    v81 = a3[i];
    v75 = ((a3[i + 16] * dword_1D48C8[v141]) >> 16) + (unsigned __int16)(a3[i + 16] * dword_1D48C8[v141]);
    a3[i] = v75 + v81;
  }
  v74 = result[a2];
  v73 = result[9 * a2];
  v72 = result[17 * a2];
  v71 = result[25 * a2];
  v70 = v74 + 16 * v72;
  v69 = v74 - 16 * v72;
  v68 = (unsigned __int8)(((_BYTE)v71 << 6) + 4 * v73) - (((v71 << 6) + 4 * v73) >> 8);
  v67 = 16 * v73 - 16 * v71;
  v66 = (unsigned __int8)(4 * v71 + ((_BYTE)v73 << 6)) - ((4 * v71 + (v73 << 6)) >> 8);
  v65 = v71 + v73 + v72 + v74;
  v64 = v67 + v74 - v72;
  v63 = v72 + v74 - (v71 + v73);
  v62 = v74 - v72 - v67;
  v61 = result[5 * a2];
  v60 = result[13 * a2];
  v59 = result[21 * a2];
  v58 = result[29 * a2];
  v57 = v61 + 16 * v59;
  v56 = v61 - 16 * v59;
  v55 = (unsigned __int8)(((_BYTE)v58 << 6) + 4 * v60) - (((v58 << 6) + 4 * v60) >> 8);
  v54 = 16 * v60 - 16 * v58;
  v53 = (unsigned __int8)(4 * v58 + ((_BYTE)v60 << 6)) - ((4 * v58 + (v60 << 6)) >> 8);
  v52 = v58 + v60 + v59 + v61;
  v51 = v54 + v61 - v59;
  v50 = v59 + v61 - (v58 + v60);
  v49 = v61 - v59 - v54;
  a3[32] = v52 + v65;
  a3[33] = v68 + v70 + 2 * (v55 + v57);
  a3[34] = v64 + 4 * v51;
  a3[35] = v66 + v69 + 8 * (v53 + v56);
  a3[36] = v63 + 16 * v50;
  a3[37] = v70 - v68 + 32 * (v57 - v55);
  a3[38] = v62 + (v49 << 6);
  a3[39] = v69 - v66 + ((v56 - v53) << 7);
  a3[40] = v65 - v52;
  a3[41] = v68 + v70 - 2 * (v55 + v57);
  a3[42] = v64 - 4 * v51;
  a3[43] = v66 + v69 - 8 * (v53 + v56);
  a3[44] = v63 - 16 * v50;
  a3[45] = v70 - v68 - 32 * (v57 - v55);
  a3[46] = v62 - (v49 << 6);
  a3[47] = v69 - v66 - ((v56 - v53) << 7);
  v48 = result[3 * a2];
  v47 = result[11 * a2];
  v46 = result[19 * a2];
  v45 = result[27 * a2];
  v44 = v48 + 16 * v46;
  v43 = v48 - 16 * v46;
  v42 = (unsigned __int8)(((_BYTE)v45 << 6) + 4 * v47) - (((v45 << 6) + 4 * v47) >> 8);
  v41 = 16 * v47 - 16 * v45;
  v40 = (unsigned __int8)(4 * v45 + ((_BYTE)v47 << 6)) - ((4 * v45 + (v47 << 6)) >> 8);
  v39 = v45 + v47 + v46 + v48;
  v38 = v41 + v48 - v46;
  v37 = v46 + v48 - (v45 + v47);
  v36 = v48 - v46 - v41;
  v35 = result[7 * a2];
  v34 = result[15 * a2];
  v33 = result[23 * a2];
  v32 = result[31 * a2];
  v31 = v35 + 16 * v33;
  v30 = v35 - 16 * v33;
  v29 = (unsigned __int8)(((_BYTE)v32 << 6) + 4 * v34) - (((v32 << 6) + 4 * v34) >> 8);
  v28 = 16 * v34 - 16 * v32;
  v27 = (unsigned __int8)(4 * v32 + ((_BYTE)v34 << 6)) - ((4 * v32 + (v34 << 6)) >> 8);
  v26 = v32 + v34 + v33 + v35;
  v25 = v28 + v35 - v33;
  v24 = v33 + v35 - (v32 + v34);
  v23 = v35 - v33 - v28;
  a3[48] = v26 + v39;
  a3[49] = v42 + v44 + 2 * (v29 + v31);
  a3[50] = v38 + 4 * v25;
  a3[51] = v40 + v43 + 8 * (v27 + v30);
  a3[52] = v37 + 16 * v24;
  a3[53] = v44 - v42 + 32 * (v31 - v29);
  a3[54] = v36 + (v23 << 6);
  a3[55] = v43 - v40 + ((v30 - v27) << 7);
  a3[56] = v39 - v26;
  a3[57] = v42 + v44 - 2 * (v29 + v31);
  a3[58] = v38 - 4 * v25;
  a3[59] = v40 + v43 - 8 * (v27 + v30);
  a3[60] = v37 - 16 * v24;
  a3[61] = v44 - v42 - 32 * (v31 - v29);
  a3[62] = v36 - (v23 << 6);
  a3[63] = v43 - v40 - ((v30 - v27) << 7);
  v18 = a3[32];
  v17 = a3[48];
  a3[32] = v17 + v18;
  a3[48] = v18 - v17;
  v139 = 0;
  for ( j = 0; ; a3[j + 48] = v19 - v13 )
  {
    v20 = a3[j + 33];
    v14 = ((a3[j + 49] * dword_1D48C8[v139 + 8]) >> 16) + (unsigned __int16)(a3[j + 49] * dword_1D48C8[v139 + 8]);
    a3[j + 33] = v14 + v20;
    a3[j + 49] = v20 - v14;
    v21 = a3[j + 34];
    v15 = ((a3[j + 50] * dword_1D48C8[v139 + 16]) >> 16) + (unsigned __int16)(a3[j + 50] * dword_1D48C8[v139 + 16]);
    a3[j + 34] = v15 + v21;
    a3[j + 50] = v21 - v15;
    v22 = a3[j + 35];
    v16 = ((a3[j + 51] * dword_1D48C8[v139 + 24]) >> 16) + (unsigned __int16)(a3[j + 51] * dword_1D48C8[v139 + 24]);
    a3[j + 35] = v16 + v22;
    a3[j + 51] = v22 - v16;
    j += 4;
    v139 += 32;
    if ( j > 0xF )
      break;
    v19 = a3[j + 32];
    v13 = ((a3[j + 48] * dword_1D48C8[v139]) >> 16) + (unsigned __int16)(a3[j + 48] * dword_1D48C8[v139]);
    a3[j + 32] = v13 + v19;
  }
  v8 = *a3;
  v7 = a3[32];
  *a3 += v7;
  a3[32] = v8 - v7;
  v137 = 0;
  for ( k = 0; ; a3[k + 32] = v9 - v3 )
  {
    v10 = a3[k + 1];
    v4 = ((a3[k + 33] * dword_1D48C8[v137 + 4]) >> 16) + (unsigned __int16)(a3[k + 33] * dword_1D48C8[v137 + 4]);
    a3[k + 1] = v4 + v10;
    a3[k + 33] = v10 - v4;
    v11 = a3[k + 2];
    v5 = ((a3[k + 34] * dword_1D48C8[v137 + 8]) >> 16) + (unsigned __int16)(a3[k + 34] * dword_1D48C8[v137 + 8]);
    a3[k + 2] = v5 + v11;
    a3[k + 34] = v11 - v5;
    v12 = a3[k + 3];
    v6 = ((a3[k + 35] * dword_1D48C8[v137 + 12]) >> 16) + (unsigned __int16)(a3[k + 35] * dword_1D48C8[v137 + 12]);
    a3[k + 3] = v6 + v12;
    a3[k + 35] = v12 - v6;
    k += 4;
    v137 += 16;
    if ( k > 0x1F )
      break;
    v9 = a3[k];
    v3 = ((a3[k + 32] * dword_1D48C8[v137]) >> 16) + (unsigned __int16)(a3[k + 32] * dword_1D48C8[v137]);
    a3[k] = v3 + v9;
  }
  return result;
}
