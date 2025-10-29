__int64 *__fastcall sub_F953C(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9; // kr18_8
  __int64 v10; // kr20_8
  __int64 v11; // kr30_8
  __int64 v12; // kr38_8
  __int64 v13; // r10
  __int64 v14; // kr40_8
  __int64 v15; // kr48_8
  __int64 v16; // r8
  __int64 *result; // r0
  __int64 v18; // kr50_8
  __int64 v19; // kr58_8
  unsigned __int64 v20; // kr60_8
  __int64 v21; // kr68_8
  __int64 v22; // r8
  int v23; // r5
  int v24; // r6
  __int64 v25; // r8
  __int64 v26; // kr78_8
  __int64 v27; // kr80_8
  __int64 v28; // kr88_8
  unsigned __int64 v29; // kr90_8
  __int64 v30; // kr98_8
  __int64 v31; // r8
  int v32; // r5
  int v33; // r6
  __int64 v34; // r8
  __int64 v35; // krA8_8
  __int64 v36; // [sp+0h] [bp+0h]
  __int64 v37; // [sp+8h] [bp+8h]

  *(_QWORD *)(a1 + 8 * a2) = *(_QWORD *)(8 * a2 + a1) + *(_QWORD *)(8 * a3 + a1) + (a6 ^ a8);
  *(_QWORD *)(a1 + 8 * a5) = *(_QWORD *)(8 * a2 + a1) ^ *(_QWORD *)(8 * a5 + a1);
  HIDWORD(v37) = *(__int64 *)(8 * a5 + a1) >> 28;
  LODWORD(v37) = (16 * *(_DWORD *)(8 * a5 + a1)) | (*(_DWORD *)(8 * a5 + a1 + 4) >> 28);
  *(_QWORD *)(a1 + 8 * a5) = v37;
  *(_QWORD *)(a1 + 8 * a4) = *(_QWORD *)(8 * a5 + a1) + *(_QWORD *)(8 * a4 + a1);
  v9 = *(_QWORD *)(8 * a3 + a1);
  v10 = *(_QWORD *)(8 * a4 + a1);
  HIDWORD(v36) = (v10 ^ v9) >> 11;
  LODWORD(v36) = (((unsigned int)v10 ^ (unsigned int)v9) << 21) | ((unsigned int)(HIDWORD(v10) ^ HIDWORD(v9)) >> 11);
  *(_QWORD *)(a1 + 8 * a3) = v36;
  *(_QWORD *)(a1 + 8 * a2) = (a9 ^ a7) + *(_QWORD *)(8 * a2 + a1) + *(_QWORD *)(8 * a3 + a1);
  v11 = *(_QWORD *)(8 * a5 + a1);
  v12 = *(_QWORD *)(8 * a2 + a1);
  LODWORD(v13) = (v12 ^ v11) >> 5;
  HIDWORD(v13) = (((unsigned int)v12 ^ (unsigned int)v11) << 27) | ((unsigned int)(HIDWORD(v12) ^ HIDWORD(v11)) >> 5);
  *(_QWORD *)(a1 + 8 * a5) = v13;
  *(_QWORD *)(a1 + 8 * a4) = *(_QWORD *)(8 * a5 + a1) + *(_QWORD *)(8 * a4 + a1);
  v14 = *(_QWORD *)(8 * a3 + a1);
  v15 = *(_QWORD *)(8 * a4 + a1);
  LODWORD(v16) = (v15 ^ v14) >> 18;
  HIDWORD(v16) = (((unsigned int)v15 ^ (unsigned int)v14) << 14) | ((unsigned int)(HIDWORD(v15) ^ HIDWORD(v14)) >> 18);
  *(_QWORD *)(a1 + 8 * a3) = v16;
  result = (__int64 *)(a1 + 8 * a5);
  v18 = *result;
  v19 = *(_QWORD *)(8 * a2 + a1);
  v20 = *(_QWORD *)(8 * a3 + a1);
  v21 = *(_QWORD *)(8 * a4 + a1);
  v22 = ~v19 & v20;
  v23 = ~(v21 | v19 | v20) | v21 & v22;
  v24 = ~(HIDWORD(v21) | HIDWORD(v19) | HIDWORD(v20)) | HIDWORD(v21) & HIDWORD(v22);
  v25 = v19 & ~v20;
  v26 = v21;
  *(_DWORD *)result ^= ~(_DWORD)v26 & v19 & v20 | v23 | v26 & v25;
  *((_DWORD *)result + 1) = (~HIDWORD(v26) & ((v19 & v20) >> 32) | v24 | HIDWORD(v26) & HIDWORD(v25)) ^ HIDWORD(v18);
  v27 = *result;
  v28 = *(_QWORD *)(8 * a2 + a1);
  v29 = *(_QWORD *)(8 * a3 + a1);
  v30 = *(_QWORD *)(8 * a4 + a1);
  v31 = ~v28 & v29;
  v32 = ~(v29 | v28) & v30 | ~(_DWORD)v30 & v31;
  v33 = ~(HIDWORD(v29) | HIDWORD(v28)) & HIDWORD(v30) | ~HIDWORD(v30) & HIDWORD(v31);
  v34 = v28 & ~v29;
  v35 = v30;
  *(_DWORD *)result ^= v35 & v28 & v29 | v32 | ~(_DWORD)v35 & v34;
  *((_DWORD *)result + 1) = (HIDWORD(v35) & ((v28 & v29) >> 32) | v33 | ~HIDWORD(v35) & HIDWORD(v34)) ^ HIDWORD(v27);
  return result;
}
