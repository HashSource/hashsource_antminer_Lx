__int64 *__fastcall sub_1997D0(int a1, int a2)
{
  __int64 *result; // r0
  int v3; // r4
  int *v4; // r3
  __int64 v5; // [sp+0h] [bp+0h]
  __int64 v6; // [sp+8h] [bp+8h]
  __int64 v7; // [sp+10h] [bp+10h]
  __int64 v8; // [sp+18h] [bp+18h]
  __int64 v9; // [sp+20h] [bp+20h]
  __int64 v10; // [sp+28h] [bp+28h]
  __int64 v11; // [sp+30h] [bp+30h]
  __int64 v12; // [sp+38h] [bp+38h]
  __int64 v13; // [sp+40h] [bp+40h]
  __int64 v14; // [sp+48h] [bp+48h]
  __int64 v15; // [sp+50h] [bp+50h]
  __int64 v16; // [sp+58h] [bp+58h]
  __int64 v17; // [sp+60h] [bp+60h]
  __int64 v18; // [sp+68h] [bp+68h]
  __int64 v19; // [sp+70h] [bp+70h]
  __int64 v20; // [sp+78h] [bp+78h]
  __int64 v21; // [sp+80h] [bp+80h]
  __int64 v22; // [sp+88h] [bp+88h]
  __int64 v23; // [sp+90h] [bp+90h]
  __int64 v24; // [sp+98h] [bp+98h]
  __int64 v25; // [sp+A0h] [bp+A0h]
  __int64 v26; // [sp+A8h] [bp+A8h]
  __int64 v27; // [sp+B0h] [bp+B0h]
  __int64 v28; // [sp+B8h] [bp+B8h]
  __int64 v29; // [sp+C0h] [bp+C0h]
  __int64 v30; // [sp+C8h] [bp+C8h]
  __int64 v31; // [sp+D0h] [bp+D0h]
  __int64 v32; // [sp+D8h] [bp+D8h]
  __int64 v33; // [sp+E0h] [bp+E0h]
  __int64 v34; // [sp+E8h] [bp+E8h]
  __int64 v35; // [sp+F0h] [bp+F0h]
  __int64 v36; // [sp+F8h] [bp+F8h]
  __int64 v37; // [sp+108h] [bp+108h]
  __int64 v38; // [sp+110h] [bp+110h]
  __int64 v39; // [sp+118h] [bp+118h]
  _QWORD v42[16]; // [sp+128h] [bp+128h] BYREF
  __int64 v43; // [sp+1A8h] [bp+1A8h] BYREF
  __int64 v44; // [sp+1B0h] [bp+1B0h]
  __int64 v45; // [sp+1B8h] [bp+1B8h]
  __int64 v46; // [sp+1C0h] [bp+1C0h]
  __int64 v47; // [sp+1C8h] [bp+1C8h]
  __int64 v48; // [sp+1D0h] [bp+1D0h]
  __int64 v49; // [sp+1D8h] [bp+1D8h]
  __int64 v50; // [sp+1E0h] [bp+1E0h]
  __int64 v51; // [sp+1E8h] [bp+1E8h]
  __int64 v52; // [sp+1F0h] [bp+1F0h]
  __int64 v53; // [sp+1F8h] [bp+1F8h]
  __int64 v54; // [sp+200h] [bp+200h]
  __int64 v55; // [sp+208h] [bp+208h]
  __int64 v56; // [sp+210h] [bp+210h]
  __int64 v57; // [sp+218h] [bp+218h]
  __int64 v58; // [sp+220h] [bp+220h]
  _BYTE dest[192]; // [sp+22Ch] [bp+22Ch] BYREF
  int i; // [sp+2ECh] [bp+2ECh]
  _BYTE v61[4]; // [sp+2F0h] [bp+2F0h] BYREF

  result = (__int64 *)memcpy(dest, &unk_1DBE68, sizeof(dest));
  for ( i = 0; i <= 7; ++i )
  {
    *(&v43 + i) = *(_QWORD *)(8 * (i + 16) + a1);
    result = &v43;
    *(&v43 + i + 8) = qword_1DBE28[i];
  }
  v55 ^= *(_QWORD *)(a1 + 192);
  v56 ^= *(_QWORD *)(a1 + 200);
  if ( a2 )
    v57 = ~v57;
  for ( i = 0; i <= 15; ++i )
  {
    HIDWORD(v39) = *(unsigned __int8 *)(a1 + 8 * i + 4);
    LODWORD(v39) = 0;
    HIDWORD(v38) = *(unsigned __int8 *)(a1 + 8 * i + 5) << 8;
    LODWORD(v38) = 0;
    HIDWORD(v37) = *(unsigned __int8 *)(a1 + 8 * i + 6) << 16;
    LODWORD(v37) = 0;
    v3 = (*(unsigned __int8 *)(a1 + 8 * i + 7) << 24)
       ^ ((v37
         ^ v38
         ^ v39
         ^ (unsigned __int64)(*(unsigned __int8 *)(a1 + 8 * i)
                            ^ (*(unsigned __int8 *)(a1 + 8 * i + 1) << 8)
                            ^ (*(unsigned __int8 *)(a1 + 8 * i + 2) << 16)
                            ^ (*(unsigned __int8 *)(a1 + 8 * i + 3) << 24))) >> 32);
    result = v42;
    v4 = (int *)&v42[i];
    *v4 = *(unsigned __int8 *)(a1 + 8 * i)
        ^ (*(unsigned __int8 *)(a1 + 8 * i + 1) << 8)
        ^ (*(unsigned __int8 *)(a1 + 8 * i + 2) << 16)
        ^ (*(unsigned __int8 *)(a1 + 8 * i + 3) << 24);
    v4[1] = v3;
  }
  for ( i = 0; i <= 11; ++i )
  {
    v43 += v47 + v42[(unsigned __int8)v61[16 * i - 196]];
    LODWORD(v36) = HIDWORD(v43) ^ HIDWORD(v55);
    HIDWORD(v36) = v43 ^ v55;
    v55 = v36;
    v51 += v36;
    LODWORD(v35) = (v51 ^ v47) >> 24;
    HIDWORD(v35) = ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v47)) >> 24) | (((unsigned int)v51 ^ (unsigned int)v47) << 8);
    v47 = v35;
    v43 += v35 + v42[(unsigned __int8)v61[16 * i - 195]];
    LODWORD(v34) = (v43 ^ v36) >> 16;
    HIDWORD(v34) = ((unsigned int)(HIDWORD(v43) ^ HIDWORD(v36)) >> 16) | (((unsigned int)v43 ^ (unsigned int)v36) << 16);
    v55 = v34;
    v51 += v34;
    HIDWORD(v33) = (v51 ^ v35) >> 31;
    LODWORD(v33) = (2 * (v51 ^ v35)) | ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v35)) >> 31);
    v47 = v33;
    v44 += v48 + v42[(unsigned __int8)v61[16 * i - 194]];
    LODWORD(v32) = HIDWORD(v44) ^ HIDWORD(v56);
    HIDWORD(v32) = v44 ^ v56;
    v56 = v32;
    v52 += v32;
    LODWORD(v31) = (v52 ^ v48) >> 24;
    HIDWORD(v31) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v48)) >> 24) | (((unsigned int)v52 ^ (unsigned int)v48) << 8);
    v48 = v31;
    v44 += v31 + v42[(unsigned __int8)v61[16 * i - 193]];
    LODWORD(v30) = (v44 ^ v32) >> 16;
    HIDWORD(v30) = ((unsigned int)(HIDWORD(v44) ^ HIDWORD(v32)) >> 16) | (((unsigned int)v44 ^ (unsigned int)v32) << 16);
    v56 = v30;
    v52 += v30;
    HIDWORD(v29) = (v52 ^ v31) >> 31;
    LODWORD(v29) = (2 * (v52 ^ v31)) | ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v31)) >> 31);
    v48 = v29;
    v45 += v49 + v42[(unsigned __int8)v61[16 * i - 192]];
    LODWORD(v28) = HIDWORD(v45) ^ HIDWORD(v57);
    HIDWORD(v28) = v45 ^ v57;
    v57 = v28;
    v53 += v28;
    LODWORD(v27) = (v53 ^ v49) >> 24;
    HIDWORD(v27) = ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v49)) >> 24) | (((unsigned int)v53 ^ (unsigned int)v49) << 8);
    v49 = v27;
    v45 += v27 + v42[(unsigned __int8)v61[16 * i - 191]];
    LODWORD(v26) = (v45 ^ v28) >> 16;
    HIDWORD(v26) = ((unsigned int)(HIDWORD(v45) ^ HIDWORD(v28)) >> 16) | (((unsigned int)v45 ^ (unsigned int)v28) << 16);
    v57 = v26;
    v53 += v26;
    HIDWORD(v25) = (v53 ^ v27) >> 31;
    LODWORD(v25) = (2 * (v53 ^ v27)) | ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v27)) >> 31);
    v49 = v25;
    v46 += v50 + v42[(unsigned __int8)v61[16 * i - 190]];
    LODWORD(v24) = HIDWORD(v46) ^ HIDWORD(v58);
    HIDWORD(v24) = v46 ^ v58;
    v58 = v24;
    v54 += v24;
    LODWORD(v23) = (v54 ^ v50) >> 24;
    HIDWORD(v23) = ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v50)) >> 24) | (((unsigned int)v54 ^ (unsigned int)v50) << 8);
    v50 = v23;
    v46 += v23 + v42[(unsigned __int8)v61[16 * i - 189]];
    LODWORD(v22) = (v46 ^ v24) >> 16;
    HIDWORD(v22) = ((unsigned int)(HIDWORD(v46) ^ HIDWORD(v24)) >> 16) | (((unsigned int)v46 ^ (unsigned int)v24) << 16);
    v58 = v22;
    v54 += v22;
    HIDWORD(v21) = (v54 ^ v23) >> 31;
    LODWORD(v21) = (2 * (v54 ^ v23)) | ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v23)) >> 31);
    v50 = v21;
    v43 += v29 + v42[(unsigned __int8)v61[16 * i - 188]];
    LODWORD(v20) = HIDWORD(v43) ^ HIDWORD(v22);
    HIDWORD(v20) = v43 ^ v22;
    v58 = v20;
    v53 += v20;
    LODWORD(v19) = (v53 ^ v29) >> 24;
    HIDWORD(v19) = ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v29)) >> 24) | (((unsigned int)v53 ^ (unsigned int)v29) << 8);
    v48 = v19;
    v43 += v19 + v42[(unsigned __int8)v61[16 * i - 187]];
    LODWORD(v18) = (v43 ^ v20) >> 16;
    HIDWORD(v18) = ((unsigned int)(HIDWORD(v43) ^ HIDWORD(v20)) >> 16) | (((unsigned int)v43 ^ (unsigned int)v20) << 16);
    v58 = v18;
    v53 += v18;
    HIDWORD(v17) = (v53 ^ v19) >> 31;
    LODWORD(v17) = (2 * (v53 ^ v19)) | ((unsigned int)(HIDWORD(v53) ^ HIDWORD(v19)) >> 31);
    v48 = v17;
    v44 += v25 + v42[(unsigned __int8)v61[16 * i - 186]];
    LODWORD(v16) = HIDWORD(v44) ^ HIDWORD(v34);
    HIDWORD(v16) = v44 ^ v34;
    v55 = v16;
    v54 += v16;
    LODWORD(v15) = (v54 ^ v25) >> 24;
    HIDWORD(v15) = ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v25)) >> 24) | (((unsigned int)v54 ^ (unsigned int)v25) << 8);
    v49 = v15;
    v44 += v15 + v42[(unsigned __int8)v61[16 * i - 185]];
    LODWORD(v14) = (v44 ^ v16) >> 16;
    HIDWORD(v14) = ((unsigned int)(HIDWORD(v44) ^ HIDWORD(v16)) >> 16) | (((unsigned int)v44 ^ (unsigned int)v16) << 16);
    v55 = v14;
    v54 += v14;
    HIDWORD(v13) = (v54 ^ v15) >> 31;
    LODWORD(v13) = (2 * (v54 ^ v15)) | ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v15)) >> 31);
    v49 = v13;
    v45 += v21 + v42[(unsigned __int8)v61[16 * i - 184]];
    LODWORD(v12) = HIDWORD(v45) ^ HIDWORD(v30);
    HIDWORD(v12) = v45 ^ v30;
    v56 = v12;
    v51 += v12;
    LODWORD(v11) = (v51 ^ v21) >> 24;
    HIDWORD(v11) = ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v21)) >> 24) | (((unsigned int)v51 ^ (unsigned int)v21) << 8);
    v50 = v11;
    v45 += v11 + v42[(unsigned __int8)v61[16 * i - 183]];
    LODWORD(v10) = (v45 ^ v12) >> 16;
    HIDWORD(v10) = ((unsigned int)(HIDWORD(v45) ^ HIDWORD(v12)) >> 16) | (((unsigned int)v45 ^ (unsigned int)v12) << 16);
    v56 = v10;
    v51 += v10;
    HIDWORD(v9) = (v51 ^ v11) >> 31;
    LODWORD(v9) = (2 * (v51 ^ v11)) | ((unsigned int)(HIDWORD(v51) ^ HIDWORD(v11)) >> 31);
    v50 = v9;
    v46 += v33 + v42[(unsigned __int8)v61[16 * i - 182]];
    LODWORD(v8) = HIDWORD(v46) ^ HIDWORD(v26);
    HIDWORD(v8) = v46 ^ v26;
    v57 = v8;
    v52 += v8;
    LODWORD(v7) = (v52 ^ v33) >> 24;
    HIDWORD(v7) = ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v33)) >> 24) | (((unsigned int)v52 ^ (unsigned int)v33) << 8);
    v47 = v7;
    result = (__int64 *)(v46 + v7);
    v46 += v7 + v42[(unsigned __int8)v61[16 * i - 181]];
    LODWORD(v6) = (v46 ^ v8) >> 16;
    HIDWORD(v6) = ((unsigned int)(HIDWORD(v46) ^ HIDWORD(v8)) >> 16) | (((unsigned int)v46 ^ (unsigned int)v8) << 16);
    v57 = v6;
    v52 += v6;
    HIDWORD(v5) = (v52 ^ v7) >> 31;
    LODWORD(v5) = (2 * (v52 ^ v7)) | ((unsigned int)(HIDWORD(v52) ^ HIDWORD(v7)) >> 31);
    v47 = v5;
  }
  for ( i = 0; i <= 7; ++i )
  {
    result = &v43;
    *(_QWORD *)(8 * (i + 16) + a1) ^= *(&v43 + i + 8) ^ *(&v43 + i);
  }
  return result;
}
