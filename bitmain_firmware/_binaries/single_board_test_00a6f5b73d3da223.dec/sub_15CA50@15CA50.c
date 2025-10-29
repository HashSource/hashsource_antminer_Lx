unsigned int __fastcall sub_15CA50(unsigned int result, char *a2, size_t a3)
{
  size_t n; // [sp+4h] [bp+4h]
  char *src; // [sp+8h] [bp+8h]
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
  int v18; // [sp+34h] [bp+34h]
  int v19; // [sp+38h] [bp+38h]
  int v20; // [sp+3Ch] [bp+3Ch]
  int v21; // [sp+40h] [bp+40h]
  int v22; // [sp+44h] [bp+44h]
  int v23; // [sp+48h] [bp+48h]
  int v24; // [sp+4Ch] [bp+4Ch]
  int v25; // [sp+50h] [bp+50h]
  unsigned int v26; // [sp+5Ch] [bp+5Ch]
  unsigned int v27; // [sp+60h] [bp+60h]
  unsigned int v28; // [sp+64h] [bp+64h]
  unsigned int v29; // [sp+68h] [bp+68h]
  unsigned int v30; // [sp+6Ch] [bp+6Ch]
  unsigned int v31; // [sp+70h] [bp+70h]
  unsigned int v32; // [sp+74h] [bp+74h]
  int *v33; // [sp+78h] [bp+78h]
  int i; // [sp+7Ch] [bp+7Ch]
  int j; // [sp+7Ch] [bp+7Ch]
  int k; // [sp+7Ch] [bp+7Ch]
  size_t v37; // [sp+80h] [bp+80h]
  int v38; // [sp+84h] [bp+84h]
  int v39; // [sp+84h] [bp+84h]
  int v40; // [sp+84h] [bp+84h]
  int v41; // [sp+84h] [bp+84h]
  int v42; // [sp+84h] [bp+84h]
  int v43; // [sp+84h] [bp+84h]
  int v44; // [sp+88h] [bp+88h]
  int v45; // [sp+88h] [bp+88h]
  int v46; // [sp+88h] [bp+88h]
  int v47; // [sp+88h] [bp+88h]
  int v48; // [sp+88h] [bp+88h]
  int v49; // [sp+88h] [bp+88h]
  int v50; // [sp+8Ch] [bp+8Ch]
  int v51; // [sp+8Ch] [bp+8Ch]
  int v52; // [sp+8Ch] [bp+8Ch]
  int v53; // [sp+8Ch] [bp+8Ch]
  int v54; // [sp+90h] [bp+90h]
  int v55; // [sp+90h] [bp+90h]
  int v56; // [sp+90h] [bp+90h]
  int v57; // [sp+90h] [bp+90h]
  int v58; // [sp+90h] [bp+90h]
  int v59; // [sp+90h] [bp+90h]
  int v60; // [sp+94h] [bp+94h]
  int v61; // [sp+94h] [bp+94h]
  int v62; // [sp+94h] [bp+94h]
  int v63; // [sp+94h] [bp+94h]
  int v64; // [sp+94h] [bp+94h]
  int v65; // [sp+98h] [bp+98h]
  int v66; // [sp+98h] [bp+98h]
  int v67; // [sp+98h] [bp+98h]
  int v68; // [sp+98h] [bp+98h]
  int v69; // [sp+98h] [bp+98h]
  int v70; // [sp+9Ch] [bp+9Ch]
  int v71; // [sp+9Ch] [bp+9Ch]
  int v72; // [sp+9Ch] [bp+9Ch]
  int v73; // [sp+9Ch] [bp+9Ch]
  int v74; // [sp+9Ch] [bp+9Ch]
  int v75; // [sp+A0h] [bp+A0h]
  int v76; // [sp+A0h] [bp+A0h]
  int v77; // [sp+A0h] [bp+A0h]
  int v78; // [sp+A4h] [bp+A4h]
  int v79; // [sp+A4h] [bp+A4h]
  int v80; // [sp+A4h] [bp+A4h]
  int v81; // [sp+A4h] [bp+A4h]
  int v82; // [sp+A4h] [bp+A4h]
  int v83; // [sp+A4h] [bp+A4h]
  int v84; // [sp+A8h] [bp+A8h]
  int v85; // [sp+A8h] [bp+A8h]
  int v86; // [sp+A8h] [bp+A8h]
  int v87; // [sp+A8h] [bp+A8h]
  int v88; // [sp+A8h] [bp+A8h]
  int v89; // [sp+A8h] [bp+A8h]
  int v90; // [sp+ACh] [bp+ACh]
  int v91; // [sp+ACh] [bp+ACh]
  int v92; // [sp+ACh] [bp+ACh]
  int v93; // [sp+ACh] [bp+ACh]
  int v94; // [sp+B0h] [bp+B0h]
  int v95; // [sp+B0h] [bp+B0h]
  int v96; // [sp+B0h] [bp+B0h]
  int v97; // [sp+B0h] [bp+B0h]
  int v98; // [sp+B0h] [bp+B0h]
  int v99; // [sp+B0h] [bp+B0h]
  int v100; // [sp+B4h] [bp+B4h]
  int v101; // [sp+B4h] [bp+B4h]
  int v102; // [sp+B4h] [bp+B4h]
  int v103; // [sp+B4h] [bp+B4h]
  int v104; // [sp+B4h] [bp+B4h]
  int v105; // [sp+B8h] [bp+B8h]
  int v106; // [sp+B8h] [bp+B8h]
  int v107; // [sp+B8h] [bp+B8h]
  int v108; // [sp+B8h] [bp+B8h]
  int v109; // [sp+B8h] [bp+B8h]
  int v110; // [sp+BCh] [bp+BCh]
  int v111; // [sp+BCh] [bp+BCh]
  int v112; // [sp+BCh] [bp+BCh]
  int v113; // [sp+BCh] [bp+BCh]
  int v114; // [sp+BCh] [bp+BCh]
  int v115; // [sp+C0h] [bp+C0h]
  int v116; // [sp+C0h] [bp+C0h]
  int v117; // [sp+C0h] [bp+C0h]
  int v118; // [sp+C4h] [bp+C4h]
  int v119; // [sp+C4h] [bp+C4h]
  int v120; // [sp+C4h] [bp+C4h]
  int v121; // [sp+C4h] [bp+C4h]
  int v122; // [sp+C4h] [bp+C4h]
  int v123; // [sp+C4h] [bp+C4h]
  int v124; // [sp+C8h] [bp+C8h]
  int v125; // [sp+C8h] [bp+C8h]
  int v126; // [sp+C8h] [bp+C8h]
  int v127; // [sp+C8h] [bp+C8h]
  int v128; // [sp+C8h] [bp+C8h]
  int v129; // [sp+C8h] [bp+C8h]
  int v130; // [sp+CCh] [bp+CCh]
  int v131; // [sp+CCh] [bp+CCh]
  int v132; // [sp+CCh] [bp+CCh]
  int v133; // [sp+CCh] [bp+CCh]
  int v134; // [sp+D0h] [bp+D0h]
  int v135; // [sp+D0h] [bp+D0h]
  int v136; // [sp+D0h] [bp+D0h]
  int v137; // [sp+D0h] [bp+D0h]
  int v138; // [sp+D0h] [bp+D0h]
  int v139; // [sp+D0h] [bp+D0h]
  int v140; // [sp+D4h] [bp+D4h]
  int v141; // [sp+D4h] [bp+D4h]
  int v142; // [sp+D4h] [bp+D4h]
  int v143; // [sp+D4h] [bp+D4h]
  int v144; // [sp+D4h] [bp+D4h]
  int v145; // [sp+D8h] [bp+D8h]
  int v146; // [sp+D8h] [bp+D8h]
  int v147; // [sp+D8h] [bp+D8h]
  int v148; // [sp+D8h] [bp+D8h]
  int v149; // [sp+D8h] [bp+D8h]
  int v150; // [sp+DCh] [bp+DCh]
  int v151; // [sp+DCh] [bp+DCh]
  int v152; // [sp+DCh] [bp+DCh]
  int v153; // [sp+DCh] [bp+DCh]
  int v154; // [sp+DCh] [bp+DCh]
  int v155; // [sp+E0h] [bp+E0h]
  int v156; // [sp+E0h] [bp+E0h]
  int v157; // [sp+E0h] [bp+E0h]
  int v158; // [sp+E4h] [bp+E4h]

  v5 = (_DWORD *)result;
  src = a2;
  n = a3;
  v33 = (int *)result;
  v158 = *(_DWORD *)(result + 32);
  if ( 32 - v158 <= a3 )
  {
    v155 = *(_DWORD *)(result + 36);
    v150 = *(_DWORD *)(result + 40);
    v145 = *(_DWORD *)(result + 44);
    v140 = *(_DWORD *)(result + 48);
    v134 = *(_DWORD *)(result + 52);
    v130 = *(_DWORD *)(result + 56);
    v124 = *(_DWORD *)(result + 60);
    v118 = *(_DWORD *)(result + 64);
    v115 = *(_DWORD *)(result + 68);
    v110 = *(_DWORD *)(result + 72);
    v105 = *(_DWORD *)(result + 76);
    v100 = *(_DWORD *)(result + 80);
    v94 = *(_DWORD *)(result + 84);
    v90 = *(_DWORD *)(result + 88);
    v84 = *(_DWORD *)(result + 92);
    v78 = *(_DWORD *)(result + 96);
    v75 = *(_DWORD *)(result + 100);
    v70 = *(_DWORD *)(result + 104);
    v65 = *(_DWORD *)(result + 108);
    v60 = *(_DWORD *)(result + 112);
    v54 = *(_DWORD *)(result + 116);
    v50 = *(_DWORD *)(result + 120);
    v44 = *(_DWORD *)(result + 124);
    v38 = *(_DWORD *)(result + 128);
    while ( n )
    {
      v37 = 32 - v158;
      if ( 32 - v158 > n )
        v37 = n;
      result = (unsigned int)memcpy((char *)v33 + v158, src, v37);
      v158 += v37;
      src += v37;
      n -= v37;
      if ( v158 == 32 )
      {
        v32 = sub_15CA34(v33);
        v31 = sub_15CA34(v33 + 1);
        v30 = sub_15CA34(v33 + 2);
        v29 = sub_15CA34(v33 + 3);
        v28 = sub_15CA34(v33 + 4);
        v27 = sub_15CA34(v33 + 5);
        v26 = sub_15CA34(v33 + 6);
        result = sub_15CA34(v33 + 7);
        v18 = v38 ^ v78 ^ v118;
        v19 = v44 ^ v84 ^ v124;
        v20 = v50 ^ v90 ^ v130;
        v21 = v54 ^ v94 ^ v134;
        v22 = v18 ^ v60 ^ v100 ^ v140;
        v23 = v18 ^ v65 ^ v105 ^ v145;
        v24 = v70 ^ v110 ^ v150;
        v25 = v18 ^ v75 ^ v115 ^ v155;
        v155 ^= v32 ^ v18;
        v150 ^= v31 ^ v25;
        v145 ^= v30 ^ v24;
        v140 ^= v29 ^ v23;
        v134 ^= v28 ^ v22;
        v130 ^= v27 ^ v21;
        v124 ^= v26 ^ v20;
        v118 ^= result ^ v19;
        v115 ^= result ^ v18;
        v110 ^= result ^ v32 ^ v25;
        v105 ^= v31 ^ v24;
        v100 ^= result ^ v30 ^ v23;
        v75 ^= v26 ^ v18;
        v70 ^= v26 ^ result ^ v25;
        v65 ^= result ^ v32 ^ v24;
        v60 ^= v26 ^ v31 ^ v23;
        v94 = __ROR4__(result ^ v29 ^ v22 ^ v94, 31);
        v90 = __ROR4__(v28 ^ v21 ^ v90, 31);
        v84 = __ROR4__(v27 ^ v20 ^ v84, 31);
        v78 = __ROR4__(v26 ^ v19 ^ v78, 31);
        v54 = __ROR4__(v26 ^ result ^ v30 ^ v22 ^ v54, 30);
        v50 = __ROR4__(result ^ v29 ^ v21 ^ v50, 30);
        v44 = __ROR4__(v28 ^ v20 ^ v44, 30);
        v38 = __ROR4__(v27 ^ v19 ^ v38, 30);
        for ( i = 0; i <= 7; ++i )
        {
          v16 = v155;
          v146 = v140 ^ v145;
          v156 = v140 ^ (v150 | v155);
          v141 = v16 & v140;
          v151 = v141 ^ ~v150;
          v142 = v146 ^ v141;
          v147 = v151 ^ v156 & v146;
          v152 = v142 | v151;
          v17 = v152 ^ v16;
          v143 = v147 ^ v142;
          v148 = v152 & v147;
          v153 = ~v156 ^ v152;
          v14 = v130;
          v119 = v134 ^ v118;
          v131 = v134 ^ (v124 | v130);
          v135 = v14 & v134;
          v125 = v135 ^ ~v124;
          v136 = v119 ^ v135;
          v120 = v125 ^ v131 & v119;
          v126 = v136 | v125;
          v15 = v126 ^ v14;
          v137 = v120 ^ v136;
          v121 = v126 & v120;
          v127 = ~v131 ^ v126;
          v138 = v17 ^ v137;
          v157 = v138 ^ __ROR4__(v17, 30);
          v139 = v157 ^ __ROR4__(v138, 18);
          v132 = v153 ^ v15;
          v154 = v153 ^ v15 ^ __ROR4__(v153, 30);
          v133 = v154 ^ __ROR4__(v132, 18);
          v150 = v133 ^ __ROR4__(v154, 22);
          v130 = __ROR4__(v133, 31);
          v128 = v148 ^ v127;
          v149 = v128 ^ __ROR4__(v148, 30);
          v129 = v149 ^ __ROR4__(v128, 18);
          v145 = v129 ^ __ROR4__(v149, 22);
          v124 = __ROR4__(v129, 31);
          v122 = v143 ^ v121;
          v144 = v122 ^ __ROR4__(v143, 30);
          v123 = v144 ^ __ROR4__(v122, 18);
          v140 = v123 ^ __ROR4__(v144, 22);
          v118 = __ROR4__(v123, 31);
          v155 = dword_1D5C28[i] ^ v139 ^ __ROR4__(v157, 22);
          v134 = dword_1D5C48[i] ^ __ROR4__(v139, 31);
        }
        for ( j = 0; j <= 7; ++j )
        {
          v12 = v115;
          v106 = v100 ^ v105;
          v116 = v100 ^ (v110 | v115);
          v101 = v12 & v100;
          v111 = v101 ^ ~v110;
          v102 = v106 ^ v101;
          v107 = v111 ^ v116 & v106;
          v112 = v102 | v111;
          v13 = v112 ^ v12;
          v103 = v107 ^ v102;
          v108 = v112 & v107;
          v113 = ~v116 ^ v112;
          v10 = v90;
          v79 = v94 ^ v78;
          v91 = v94 ^ (v84 | v90);
          v95 = v10 & v94;
          v85 = v95 ^ ~v84;
          v96 = v79 ^ v95;
          v80 = v85 ^ v91 & v79;
          v86 = v96 | v85;
          v11 = v86 ^ v10;
          v97 = v80 ^ v96;
          v81 = v86 & v80;
          v87 = ~v91 ^ v86;
          v98 = v13 ^ v97;
          v117 = v98 ^ __ROR4__(v13, 30);
          v99 = v117 ^ __ROR4__(v98, 18);
          v92 = v113 ^ v11;
          v114 = v113 ^ v11 ^ __ROR4__(v113, 30);
          v93 = v114 ^ __ROR4__(v92, 18);
          v110 = v93 ^ __ROR4__(v114, 22);
          v90 = __ROR4__(v93, 31);
          v88 = v108 ^ v87;
          v109 = v88 ^ __ROR4__(v108, 30);
          v89 = v109 ^ __ROR4__(v88, 18);
          v105 = v89 ^ __ROR4__(v109, 22);
          v84 = __ROR4__(v89, 31);
          v82 = v103 ^ v81;
          v104 = v82 ^ __ROR4__(v103, 30);
          v83 = v104 ^ __ROR4__(v82, 18);
          v100 = v83 ^ __ROR4__(v104, 22);
          v78 = __ROR4__(v83, 31);
          v115 = dword_1D5C68[j] ^ v99 ^ __ROR4__(v117, 22);
          v94 = dword_1D5C88[j] ^ __ROR4__(v99, 31);
        }
        for ( k = 0; k <= 7; ++k )
        {
          v8 = v75;
          v66 = v60 ^ v65;
          v76 = v60 ^ (v70 | v75);
          v61 = v8 & v60;
          v71 = v61 ^ ~v70;
          v62 = v66 ^ v61;
          v67 = v71 ^ v76 & v66;
          v72 = v62 | v71;
          v9 = v72 ^ v8;
          v63 = v67 ^ v62;
          v68 = v72 & v67;
          v73 = ~v76 ^ v72;
          v6 = v50;
          v39 = v54 ^ v38;
          v51 = v54 ^ (v44 | v50);
          v55 = v6 & v54;
          v45 = v55 ^ ~v44;
          v56 = v39 ^ v55;
          v40 = v45 ^ v51 & v39;
          v46 = v56 | v45;
          v7 = v46 ^ v6;
          v57 = v40 ^ v56;
          v41 = v46 & v40;
          v47 = ~v51 ^ v46;
          v58 = v9 ^ v57;
          v77 = v58 ^ __ROR4__(v9, 30);
          v59 = v77 ^ __ROR4__(v58, 18);
          v52 = v73 ^ v7;
          v74 = v73 ^ v7 ^ __ROR4__(v73, 30);
          v53 = v74 ^ __ROR4__(v52, 18);
          v70 = v53 ^ __ROR4__(v74, 22);
          v50 = __ROR4__(v53, 31);
          v48 = v68 ^ v47;
          v69 = v48 ^ __ROR4__(v68, 30);
          v49 = v69 ^ __ROR4__(v48, 18);
          v65 = v49 ^ __ROR4__(v69, 22);
          v44 = __ROR4__(v49, 31);
          v42 = v63 ^ v41;
          v64 = v42 ^ __ROR4__(v63, 30);
          v43 = v64 ^ __ROR4__(v42, 18);
          v60 = v43 ^ __ROR4__(v64, 22);
          v38 = __ROR4__(v43, 31);
          v75 = dword_1D5CA8[k] ^ v59 ^ __ROR4__(v77, 22);
          v54 = dword_1D5CC8[k] ^ __ROR4__(v59, 31);
        }
        v158 = 0;
      }
    }
    v5[9] = v155;
    v5[10] = v150;
    v5[11] = v145;
    v5[12] = v140;
    v5[13] = v134;
    v5[14] = v130;
    v5[15] = v124;
    v5[16] = v118;
    v5[17] = v115;
    v5[18] = v110;
    v5[19] = v105;
    v5[20] = v100;
    v5[21] = v94;
    v5[22] = v90;
    v5[23] = v84;
    v5[24] = v78;
    v5[25] = v75;
    v5[26] = v70;
    v5[27] = v65;
    v5[28] = v60;
    v5[29] = v54;
    v5[30] = v50;
    v5[31] = v44;
    v5[32] = v38;
    v5[8] = v158;
  }
  else
  {
    result = (unsigned int)memcpy((void *)(v158 + result), a2, a3);
    v5[8] = n + v158;
  }
  return result;
}
