int __fastcall sub_1093A4(__int64 a1, size_t a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r8
  __int64 v5; // [sp+0h] [bp+0h]
  unsigned __int64 v6; // [sp+8h] [bp+8h]
  __int64 v7; // [sp+10h] [bp+10h]
  unsigned __int64 v8; // [sp+18h] [bp+18h]
  __int64 v9; // [sp+20h] [bp+20h]
  unsigned __int64 v10; // [sp+28h] [bp+28h]
  __int64 v11; // [sp+30h] [bp+30h]
  unsigned __int64 v12; // [sp+38h] [bp+38h]
  __int64 v13; // [sp+40h] [bp+40h]
  unsigned __int64 v14; // [sp+48h] [bp+48h]
  __int64 v15; // [sp+50h] [bp+50h]
  unsigned __int64 v16; // [sp+58h] [bp+58h]
  __int64 v17; // [sp+60h] [bp+60h]
  unsigned __int64 v18; // [sp+68h] [bp+68h]
  __int64 v19; // [sp+70h] [bp+70h]
  unsigned __int64 v20; // [sp+78h] [bp+78h]
  __int64 v21; // [sp+80h] [bp+80h]
  unsigned __int64 v22; // [sp+88h] [bp+88h]
  __int64 v23; // [sp+90h] [bp+90h]
  unsigned __int64 v24; // [sp+98h] [bp+98h]
  __int64 v25; // [sp+A0h] [bp+A0h]
  unsigned __int64 v26; // [sp+A8h] [bp+A8h]
  __int64 v27; // [sp+B0h] [bp+B0h]
  unsigned __int64 v28; // [sp+B8h] [bp+B8h]
  __int64 v29; // [sp+C0h] [bp+C0h]
  unsigned __int64 v30; // [sp+C8h] [bp+C8h]
  __int64 v31; // [sp+D0h] [bp+D0h]
  unsigned __int64 v32; // [sp+D8h] [bp+D8h]
  __int64 v33; // [sp+E0h] [bp+E0h]
  unsigned __int64 v34; // [sp+E8h] [bp+E8h]
  unsigned int v35; // [sp+F4h] [bp+F4h]
  char *v36; // [sp+F8h] [bp+F8h]
  int v37; // [sp+FCh] [bp+FCh]
  _QWORD v38[16]; // [sp+100h] [bp+100h] BYREF
  __int64 v39; // [sp+180h] [bp+180h]
  __int64 v40; // [sp+188h] [bp+188h]
  __int64 v41; // [sp+190h] [bp+190h]
  __int64 v42; // [sp+198h] [bp+198h]
  int *v43; // [sp+1A0h] [bp+1A0h]
  unsigned int i; // [sp+1A4h] [bp+1A4h]
  unsigned __int64 v45; // [sp+1A8h] [bp+1A8h]
  unsigned __int64 v46; // [sp+1B0h] [bp+1B0h]
  unsigned __int64 v47; // [sp+1B8h] [bp+1B8h]
  unsigned __int64 v48; // [sp+1C0h] [bp+1C0h]
  unsigned __int64 v49; // [sp+1C8h] [bp+1C8h]
  unsigned __int64 v50; // [sp+1D0h] [bp+1D0h]
  unsigned __int64 v51; // [sp+1D8h] [bp+1D8h]
  unsigned __int64 v52; // [sp+1E0h] [bp+1E0h]
  __int64 v53; // [sp+1E8h] [bp+1E8h]
  __int64 v54; // [sp+1F0h] [bp+1F0h]
  __int64 v55; // [sp+1F8h] [bp+1F8h]
  __int64 v56; // [sp+200h] [bp+200h]
  __int64 v57; // [sp+208h] [bp+208h]
  __int64 v58; // [sp+210h] [bp+210h]
  __int64 v59; // [sp+218h] [bp+218h]
  __int64 v60; // [sp+220h] [bp+220h]
  size_t n; // [sp+22Ch] [bp+22Ch]
  __int64 v62; // [sp+230h] [bp+230h]
  unsigned __int64 v63; // [sp+238h] [bp+238h]
  __int64 v64; // [sp+240h] [bp+240h]
  __int64 v65; // [sp+248h] [bp+248h]
  __int64 v66; // [sp+250h] [bp+250h]
  __int64 v67; // [sp+258h] [bp+258h]
  __int64 v68; // [sp+260h] [bp+260h]
  __int64 v69; // [sp+268h] [bp+268h]
  __int64 v70; // [sp+270h] [bp+270h]
  __int64 v71; // [sp+278h] [bp+278h]
  int v72; // [sp+284h] [bp+284h]

  v36 = (char *)HIDWORD(a1);
  v37 = a1;
  v35 = a2;
  v43 = (int *)a1;
  v72 = *(_DWORD *)(a1 + 128);
  if ( 128 - v72 <= a2 )
  {
    v71 = *(_QWORD *)(a1 + 136);
    v70 = *(_QWORD *)(a1 + 144);
    v69 = *(_QWORD *)(a1 + 152);
    v68 = *(_QWORD *)(a1 + 160);
    v67 = *(_QWORD *)(a1 + 168);
    v66 = *(_QWORD *)(a1 + 176);
    v65 = *(_QWORD *)(a1 + 184);
    v64 = *(_QWORD *)(a1 + 192);
    v42 = *(_QWORD *)(a1 + 200);
    v41 = *(_QWORD *)(a1 + 208);
    v40 = *(_QWORD *)(a1 + 216);
    v39 = *(_QWORD *)(a1 + 224);
    v63 = *(_QWORD *)(a1 + 232);
    v62 = *(_QWORD *)(a1 + 240);
    while ( v35 )
    {
      n = 128 - v72;
      if ( 128 - v72 > v35 )
        n = v35;
      LODWORD(a1) = memcpy((char *)v43 + v72, v36, n);
      v72 += n;
      v36 += n;
      v35 -= n;
      if ( v72 == 128 )
      {
        v63 += 1024LL;
        if ( v63 <= 0x3FF )
          ++v62;
        v60 = v71;
        v59 = v70;
        v58 = v69;
        v57 = v68;
        v56 = v67;
        v55 = v66;
        v54 = v65;
        v53 = v64;
        v52 = __PAIR64__(loc_1098E4, loc_1098E0) ^ v42;
        v51 = __PAIR64__(loc_1098EC, loc_1098E8) ^ v41;
        v50 = __PAIR64__(loc_1098F4, loc_1098F0) ^ v40;
        v49 = __PAIR64__(*(unsigned int *)((char *)&loc_1098FA + 2), loc_1098F8) ^ v39;
        v48 = __PAIR64__(loc_109904, loc_109900) ^ v63;
        v47 = __PAIR64__(loc_10990C, loc_109908) ^ v63;
        v46 = __PAIR64__(loc_109914, loc_109910) ^ v62;
        v45 = __PAIR64__(loc_10991C, loc_109918) ^ v62;
        v38[0] = sub_1050BC(v43);
        v38[1] = sub_1050BC(v43 + 2);
        v38[2] = sub_1050BC(v43 + 4);
        v38[3] = sub_1050BC(v43 + 6);
        v38[4] = sub_1050BC(v43 + 8);
        v38[5] = sub_1050BC(v43 + 10);
        v38[6] = sub_1050BC(v43 + 12);
        v38[7] = sub_1050BC(v43 + 14);
        v38[8] = sub_1050BC(v43 + 16);
        v38[9] = sub_1050BC(v43 + 18);
        v38[10] = sub_1050BC(v43 + 20);
        v38[11] = sub_1050BC(v43 + 22);
        v38[12] = sub_1050BC(v43 + 24);
        v38[13] = sub_1050BC(v43 + 26);
        v38[14] = sub_1050BC(v43 + 28);
        a1 = sub_1050BC(v43 + 30);
        v38[15] = a1;
        for ( i = 0; i <= 0xF; ++i )
        {
          v60 += (qword_1D45A0[dword_1D41A0[16 * i + 1]] ^ v38[dword_1D41A0[16 * i]]) + v56;
          LODWORD(v34) = HIDWORD(v60) ^ HIDWORD(v48);
          HIDWORD(v34) = v60 ^ v48;
          v48 = v34;
          v52 += v34;
          LODWORD(v33) = (__int64)(v52 ^ v56) >> 25;
          HIDWORD(v33) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v56)) >> 25)
                       | (((unsigned int)v52 ^ (unsigned int)v56) << 7);
          v56 = v33;
          v60 += (qword_1D45A0[dword_1D41A0[16 * i]] ^ v38[dword_1D41A0[16 * i + 1]]) + v33;
          LODWORD(v32) = (__int64)(v60 ^ v34) >> 16;
          HIDWORD(v32) = ((unsigned int)(HIDWORD(v60) ^ HIDWORD(v34)) >> 16)
                       | (((unsigned int)v60 ^ (unsigned int)v34) << 16);
          v48 = v32;
          v52 += v32;
          LODWORD(v31) = (__int64)(v52 ^ v33) >> 11;
          HIDWORD(v31) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v33)) >> 11)
                       | (((unsigned int)v52 ^ (unsigned int)v33) << 21);
          v56 = v31;
          v59 += (qword_1D45A0[dword_1D41A0[16 * i + 3]] ^ v38[dword_1D41A0[16 * i + 2]]) + v55;
          LODWORD(v30) = HIDWORD(v59) ^ HIDWORD(v47);
          HIDWORD(v30) = v59 ^ v47;
          v47 = v30;
          v51 += v30;
          LODWORD(v29) = (__int64)(v51 ^ v55) >> 25;
          HIDWORD(v29) = ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v55)) >> 25)
                       | (((unsigned int)v51 ^ (unsigned int)v55) << 7);
          v55 = v29;
          v59 += (qword_1D45A0[dword_1D41A0[16 * i + 2]] ^ v38[dword_1D41A0[16 * i + 3]]) + v29;
          LODWORD(v28) = (__int64)(v59 ^ v30) >> 16;
          HIDWORD(v28) = ((unsigned int)(HIDWORD(v59) ^ HIDWORD(v30)) >> 16)
                       | (((unsigned int)v59 ^ (unsigned int)v30) << 16);
          v47 = v28;
          v51 += v28;
          LODWORD(v27) = (__int64)(v51 ^ v29) >> 11;
          HIDWORD(v27) = ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v29)) >> 11)
                       | (((unsigned int)v51 ^ (unsigned int)v29) << 21);
          v55 = v27;
          v58 += (qword_1D45A0[dword_1D41A0[16 * i + 5]] ^ v38[dword_1D41A0[16 * i + 4]]) + v54;
          LODWORD(v26) = HIDWORD(v58) ^ HIDWORD(v46);
          HIDWORD(v26) = v58 ^ v46;
          v46 = v26;
          v50 += v26;
          LODWORD(v25) = (__int64)(v50 ^ v54) >> 25;
          HIDWORD(v25) = ((unsigned int)(HIDWORD(v50) ^ HIDWORD(v54)) >> 25)
                       | (((unsigned int)v50 ^ (unsigned int)v54) << 7);
          v54 = v25;
          v58 += (qword_1D45A0[dword_1D41A0[16 * i + 4]] ^ v38[dword_1D41A0[16 * i + 5]]) + v25;
          LODWORD(v24) = (__int64)(v58 ^ v26) >> 16;
          HIDWORD(v24) = ((unsigned int)(HIDWORD(v58) ^ HIDWORD(v26)) >> 16)
                       | (((unsigned int)v58 ^ (unsigned int)v26) << 16);
          v46 = v24;
          v50 += v24;
          LODWORD(v23) = (__int64)(v50 ^ v25) >> 11;
          HIDWORD(v23) = ((unsigned int)(HIDWORD(v50) ^ HIDWORD(v25)) >> 11)
                       | (((unsigned int)v50 ^ (unsigned int)v25) << 21);
          v54 = v23;
          v57 += (qword_1D45A0[dword_1D41A0[16 * i + 7]] ^ v38[dword_1D41A0[16 * i + 6]]) + v53;
          LODWORD(v22) = HIDWORD(v57) ^ HIDWORD(v45);
          HIDWORD(v22) = v57 ^ v45;
          v45 = v22;
          v49 += v22;
          LODWORD(v21) = (__int64)(v49 ^ v53) >> 25;
          HIDWORD(v21) = ((unsigned int)(HIDWORD(v49) ^ HIDWORD(v53)) >> 25)
                       | (((unsigned int)v49 ^ (unsigned int)v53) << 7);
          v53 = v21;
          v57 += (qword_1D45A0[dword_1D41A0[16 * i + 6]] ^ v38[dword_1D41A0[16 * i + 7]]) + v21;
          LODWORD(v20) = (__int64)(v57 ^ v22) >> 16;
          HIDWORD(v20) = ((unsigned int)(HIDWORD(v57) ^ HIDWORD(v22)) >> 16)
                       | (((unsigned int)v57 ^ (unsigned int)v22) << 16);
          v45 = v20;
          v49 += v20;
          LODWORD(v19) = (__int64)(v49 ^ v21) >> 11;
          HIDWORD(v19) = ((unsigned int)(HIDWORD(v49) ^ HIDWORD(v21)) >> 11)
                       | (((unsigned int)v49 ^ (unsigned int)v21) << 21);
          v53 = v19;
          v60 += (qword_1D45A0[dword_1D41A0[16 * i + 9]] ^ v38[dword_1D41A0[16 * i + 8]]) + v27;
          LODWORD(v18) = HIDWORD(v60) ^ HIDWORD(v20);
          HIDWORD(v18) = v60 ^ v20;
          v45 = v18;
          v50 += v18;
          LODWORD(v17) = (__int64)(v50 ^ v27) >> 25;
          HIDWORD(v17) = ((unsigned int)(HIDWORD(v50) ^ HIDWORD(v27)) >> 25)
                       | (((unsigned int)v50 ^ (unsigned int)v27) << 7);
          v55 = v17;
          v60 += (qword_1D45A0[dword_1D41A0[16 * i + 8]] ^ v38[dword_1D41A0[16 * i + 9]]) + v17;
          LODWORD(v16) = (__int64)(v60 ^ v18) >> 16;
          HIDWORD(v16) = ((unsigned int)(HIDWORD(v60) ^ HIDWORD(v18)) >> 16)
                       | (((unsigned int)v60 ^ (unsigned int)v18) << 16);
          v45 = v16;
          v50 += v16;
          LODWORD(v15) = (__int64)(v50 ^ v17) >> 11;
          HIDWORD(v15) = ((unsigned int)(HIDWORD(v50) ^ HIDWORD(v17)) >> 11)
                       | (((unsigned int)v50 ^ (unsigned int)v17) << 21);
          v55 = v15;
          v59 += (qword_1D45A0[dword_1D41A0[16 * i + 11]] ^ v38[dword_1D41A0[16 * i + 10]]) + v23;
          LODWORD(v14) = HIDWORD(v59) ^ HIDWORD(v32);
          HIDWORD(v14) = v59 ^ v32;
          v48 = v14;
          v49 += v14;
          LODWORD(v13) = (__int64)(v49 ^ v23) >> 25;
          HIDWORD(v13) = ((unsigned int)(HIDWORD(v49) ^ HIDWORD(v23)) >> 25)
                       | (((unsigned int)v49 ^ (unsigned int)v23) << 7);
          v54 = v13;
          v59 += (qword_1D45A0[dword_1D41A0[16 * i + 10]] ^ v38[dword_1D41A0[16 * i + 11]]) + v13;
          LODWORD(v12) = (__int64)(v59 ^ v14) >> 16;
          HIDWORD(v12) = ((unsigned int)(HIDWORD(v59) ^ HIDWORD(v14)) >> 16)
                       | (((unsigned int)v59 ^ (unsigned int)v14) << 16);
          v48 = v12;
          v49 += v12;
          LODWORD(v11) = (__int64)(v49 ^ v13) >> 11;
          HIDWORD(v11) = ((unsigned int)(HIDWORD(v49) ^ HIDWORD(v13)) >> 11)
                       | (((unsigned int)v49 ^ (unsigned int)v13) << 21);
          v54 = v11;
          v58 += (qword_1D45A0[dword_1D41A0[16 * i + 13]] ^ v38[dword_1D41A0[16 * i + 12]]) + v19;
          LODWORD(v10) = HIDWORD(v58) ^ HIDWORD(v28);
          HIDWORD(v10) = v58 ^ v28;
          v47 = v10;
          v52 += v10;
          LODWORD(v9) = (__int64)(v52 ^ v19) >> 25;
          HIDWORD(v9) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v19)) >> 25)
                      | (((unsigned int)v52 ^ (unsigned int)v19) << 7);
          v53 = v9;
          v58 += (qword_1D45A0[dword_1D41A0[16 * i + 12]] ^ v38[dword_1D41A0[16 * i + 13]]) + v9;
          LODWORD(v8) = (__int64)(v58 ^ v10) >> 16;
          HIDWORD(v8) = ((unsigned int)(HIDWORD(v58) ^ HIDWORD(v10)) >> 16)
                      | (((unsigned int)v58 ^ (unsigned int)v10) << 16);
          v47 = v8;
          v52 += v8;
          LODWORD(v7) = (__int64)(v52 ^ v9) >> 11;
          HIDWORD(v7) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v9)) >> 11)
                      | (((unsigned int)v52 ^ (unsigned int)v9) << 21);
          v53 = v7;
          v57 += (qword_1D45A0[dword_1D41A0[16 * i + 15]] ^ v38[dword_1D41A0[16 * i + 14]]) + v31;
          LODWORD(v6) = HIDWORD(v57) ^ HIDWORD(v24);
          HIDWORD(v6) = v57 ^ v24;
          v46 = v6;
          v51 += v6;
          LODWORD(v5) = (__int64)(v51 ^ v31) >> 25;
          HIDWORD(v5) = ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v31)) >> 25)
                      | (((unsigned int)v51 ^ (unsigned int)v31) << 7);
          v56 = v5;
          a1 = v38[dword_1D41A0[16 * i + 15]];
          v57 += (qword_1D45A0[dword_1D41A0[16 * i + 14]] ^ a1) + v5;
          LODWORD(v2) = (__int64)(v57 ^ v6) >> 16;
          HIDWORD(v2) = (((unsigned int)v57 ^ (unsigned int)v6) << 16)
                      | ((unsigned int)(HIDWORD(v57) ^ HIDWORD(v6)) >> 16);
          v46 = v2;
          v51 += v2;
          LODWORD(v3) = (__int64)(v51 ^ v5) >> 11;
          HIDWORD(v3) = (((unsigned int)v51 ^ (unsigned int)v5) << 21)
                      | ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v5)) >> 11);
          v56 = v3;
        }
        v71 ^= v42 ^ v60 ^ v52;
        v70 ^= v41 ^ v59 ^ v51;
        v69 ^= v40 ^ v58 ^ v50;
        v68 ^= v39 ^ v57 ^ v49;
        v67 ^= v42 ^ v56 ^ v48;
        v66 ^= v41 ^ v55 ^ v47;
        v65 ^= v40 ^ v54 ^ v46;
        v64 ^= v39 ^ v53 ^ v45;
        v72 = 0;
      }
    }
    *(_QWORD *)(v37 + 136) = v71;
    *(_QWORD *)(v37 + 144) = v70;
    *(_QWORD *)(v37 + 152) = v69;
    *(_QWORD *)(v37 + 160) = v68;
    *(_QWORD *)(v37 + 168) = v67;
    *(_QWORD *)(v37 + 176) = v66;
    *(_QWORD *)(v37 + 184) = v65;
    *(_QWORD *)(v37 + 192) = v64;
    *(_QWORD *)(v37 + 200) = v42;
    *(_QWORD *)(v37 + 208) = v41;
    *(_QWORD *)(v37 + 216) = v40;
    *(_QWORD *)(v37 + 224) = v39;
    *(_QWORD *)(v37 + 232) = v63;
    *(_QWORD *)(v37 + 240) = v62;
    *(_DWORD *)(v37 + 128) = v72;
  }
  else
  {
    LODWORD(a1) = memcpy((char *)v43 + v72, (const void *)HIDWORD(a1), a2);
    *(_DWORD *)(v37 + 128) = v35 + v72;
  }
  return a1;
}
