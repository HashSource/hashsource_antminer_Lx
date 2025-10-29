void *__fastcall sub_179BCC(int a1, char *a2, size_t a3)
{
  void *result; // r0
  __int64 v4; // r0
  __int16 v5; // r2
  unsigned int v6; // [sp+EF4h] [bp+EF4h]
  char *v7; // [sp+EF8h] [bp+EF8h]
  __int64 v9; // [sp+F00h] [bp+F00h] BYREF
  __int64 v10; // [sp+F08h] [bp+F08h]
  __int64 v11; // [sp+F10h] [bp+F10h]
  __int64 v12; // [sp+F18h] [bp+F18h]
  __int64 v13; // [sp+F20h] [bp+F20h]
  __int64 v14; // [sp+F28h] [bp+F28h]
  __int64 v15; // [sp+F30h] [bp+F30h]
  __int64 v16; // [sp+F38h] [bp+F38h]
  __int64 v17; // [sp+F40h] [bp+F40h]
  __int64 v18; // [sp+F48h] [bp+F48h]
  __int64 v19; // [sp+F50h] [bp+F50h]
  __int64 v20; // [sp+F58h] [bp+F58h]
  __int64 v21; // [sp+F60h] [bp+F60h]
  __int64 v22; // [sp+F68h] [bp+F68h]
  __int64 v23; // [sp+F70h] [bp+F70h]
  __int64 v24; // [sp+F78h] [bp+F78h]
  __int64 v25; // [sp+F80h] [bp+F80h] BYREF
  __int64 v26; // [sp+F88h] [bp+F88h]
  __int64 v27; // [sp+F90h] [bp+F90h]
  __int64 v28; // [sp+F98h] [bp+F98h]
  __int64 v29; // [sp+FA0h] [bp+FA0h]
  __int64 v30; // [sp+FA8h] [bp+FA8h]
  __int64 v31; // [sp+FB0h] [bp+FB0h]
  __int64 v32; // [sp+FB8h] [bp+FB8h]
  __int64 v33; // [sp+FC0h] [bp+FC0h]
  __int64 v34; // [sp+FC8h] [bp+FC8h]
  __int64 v35; // [sp+FD0h] [bp+FD0h]
  __int64 v36; // [sp+FD8h] [bp+FD8h]
  __int64 v37; // [sp+FE0h] [bp+FE0h]
  __int64 v38; // [sp+FE8h] [bp+FE8h]
  __int64 v39; // [sp+FF0h] [bp+FF0h]
  __int64 v40; // [sp+FF8h] [bp+FF8h]
  __int64 v41; // [sp+1000h] [bp+1000h]
  __int64 v42; // [sp+1008h] [bp+1008h]
  __int64 v43; // [sp+1010h] [bp+1010h]
  __int64 v44; // [sp+1018h] [bp+1018h]
  __int64 v45; // [sp+1020h] [bp+1020h]
  __int64 v46; // [sp+1028h] [bp+1028h]
  __int64 v47; // [sp+1030h] [bp+1030h]
  __int64 v48; // [sp+1038h] [bp+1038h]
  __int64 v49; // [sp+1040h] [bp+1040h]
  __int64 v50; // [sp+1048h] [bp+1048h]
  __int64 v51; // [sp+1050h] [bp+1050h]
  __int64 v52; // [sp+1058h] [bp+1058h]
  __int64 v53; // [sp+1060h] [bp+1060h]
  __int64 v54; // [sp+1068h] [bp+1068h]
  __int64 v55; // [sp+1070h] [bp+1070h]
  __int64 v56; // [sp+1078h] [bp+1078h]
  _BYTE dest[128]; // [sp+1080h] [bp+1080h] BYREF
  int v58; // [sp+1100h] [bp+1100h]
  int k; // [sp+1104h] [bp+1104h]
  int j; // [sp+1108h] [bp+1108h]
  unsigned int i; // [sp+110Ch] [bp+110Ch]
  size_t v62; // [sp+1110h] [bp+1110h]
  int v63; // [sp+1114h] [bp+1114h]
  int v64; // [sp+1118h] [bp+1118h] BYREF

  v7 = a2;
  v6 = a3;
  v58 = a1;
  v63 = *(_DWORD *)(a1 + 128);
  if ( 128 - v63 <= a3 )
  {
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    while ( v6 )
    {
      v62 = 128 - v63;
      if ( 128 - v63 > v6 )
        v62 = v6;
      memcpy((void *)(v58 + v63), v7, v62);
      v63 += v62;
      v7 += v62;
      v6 -= v62;
      if ( v63 == 128 )
      {
        for ( i = 0; i <= 0xF; ++i )
        {
          v4 = sub_172214(v58 + 8 * i);
          *(&v25 + i) = v4;
          *(&v9 + i) = *(&v25 + i) ^ *((_QWORD *)&v64 + i - 19);
        }
        for ( j = 0; j <= 13; j += 2 )
        {
          v9 ^= j;
          v10 ^= j + 16;
          v11 ^= j + 32;
          v12 ^= j + 48;
          v13 ^= j + 64;
          v14 ^= j + 80;
          v15 ^= j + 96;
          v16 ^= j + 112;
          v17 ^= j + 128;
          v18 ^= j + 144;
          v19 ^= j + 160;
          v20 ^= j + 176;
          v21 ^= j + 192;
          v22 ^= j + 208;
          v23 ^= j + 224;
          v24 ^= j + 240;
          v41 = qword_1D6D68[(unsigned __int8)v9]
              ^ qword_1D7568[BYTE1(v10)]
              ^ qword_1D7D68[BYTE2(v11)]
              ^ qword_1D8568[BYTE3(v12)]
              ^ qword_1D8D68[BYTE4(v13)]
              ^ qword_1D9568[BYTE5(v14)]
              ^ qword_1D9D68[BYTE6(v15)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v20))];
          v42 = qword_1D6D68[(unsigned __int8)v10]
              ^ qword_1D7568[BYTE1(v11)]
              ^ qword_1D7D68[BYTE2(v12)]
              ^ qword_1D8568[BYTE3(v13)]
              ^ qword_1D8D68[BYTE4(v14)]
              ^ qword_1D9568[BYTE5(v15)]
              ^ qword_1D9D68[BYTE6(v16)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v21))];
          v43 = qword_1D6D68[(unsigned __int8)v11]
              ^ qword_1D7568[BYTE1(v12)]
              ^ qword_1D7D68[BYTE2(v13)]
              ^ qword_1D8568[BYTE3(v14)]
              ^ qword_1D8D68[BYTE4(v15)]
              ^ qword_1D9568[BYTE5(v16)]
              ^ qword_1D9D68[BYTE6(v17)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v22))];
          v44 = qword_1D6D68[(unsigned __int8)v12]
              ^ qword_1D7568[BYTE1(v13)]
              ^ qword_1D7D68[BYTE2(v14)]
              ^ qword_1D8568[BYTE3(v15)]
              ^ qword_1D8D68[BYTE4(v16)]
              ^ qword_1D9568[BYTE5(v17)]
              ^ qword_1D9D68[BYTE6(v18)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v23))];
          v45 = qword_1D6D68[(unsigned __int8)v13]
              ^ qword_1D7568[BYTE1(v14)]
              ^ qword_1D7D68[BYTE2(v15)]
              ^ qword_1D8568[BYTE3(v16)]
              ^ qword_1D8D68[BYTE4(v17)]
              ^ qword_1D9568[BYTE5(v18)]
              ^ qword_1D9D68[BYTE6(v19)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v24))];
          v46 = qword_1D6D68[(unsigned __int8)v14]
              ^ qword_1D7568[BYTE1(v15)]
              ^ qword_1D7D68[BYTE2(v16)]
              ^ qword_1D8568[BYTE3(v17)]
              ^ qword_1D8D68[BYTE4(v18)]
              ^ qword_1D9568[BYTE5(v19)]
              ^ qword_1D9D68[BYTE6(v20)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v9))];
          v47 = qword_1D6D68[(unsigned __int8)v15]
              ^ qword_1D7568[BYTE1(v16)]
              ^ qword_1D7D68[BYTE2(v17)]
              ^ qword_1D8568[BYTE3(v18)]
              ^ qword_1D8D68[BYTE4(v19)]
              ^ qword_1D9568[BYTE5(v20)]
              ^ qword_1D9D68[BYTE6(v21)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v10))];
          v48 = qword_1D6D68[(unsigned __int8)v16]
              ^ qword_1D7568[BYTE1(v17)]
              ^ qword_1D7D68[BYTE2(v18)]
              ^ qword_1D8568[BYTE3(v19)]
              ^ qword_1D8D68[BYTE4(v20)]
              ^ qword_1D9568[BYTE5(v21)]
              ^ qword_1D9D68[BYTE6(v22)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v11))];
          v49 = qword_1D6D68[(unsigned __int8)v17]
              ^ qword_1D7568[BYTE1(v18)]
              ^ qword_1D7D68[BYTE2(v19)]
              ^ qword_1D8568[BYTE3(v20)]
              ^ qword_1D8D68[BYTE4(v21)]
              ^ qword_1D9568[BYTE5(v22)]
              ^ qword_1D9D68[BYTE6(v23)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v12))];
          v50 = qword_1D6D68[(unsigned __int8)v18]
              ^ qword_1D7568[BYTE1(v19)]
              ^ qword_1D7D68[BYTE2(v20)]
              ^ qword_1D8568[BYTE3(v21)]
              ^ qword_1D8D68[BYTE4(v22)]
              ^ qword_1D9568[BYTE5(v23)]
              ^ qword_1D9D68[BYTE6(v24)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v13))];
          v51 = qword_1D6D68[(unsigned __int8)v19]
              ^ qword_1D7568[BYTE1(v20)]
              ^ qword_1D7D68[BYTE2(v21)]
              ^ qword_1D8568[BYTE3(v22)]
              ^ qword_1D8D68[BYTE4(v23)]
              ^ qword_1D9568[BYTE5(v24)]
              ^ qword_1D9D68[BYTE6(v9)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v14))];
          v52 = qword_1D6D68[(unsigned __int8)v20]
              ^ qword_1D7568[BYTE1(v21)]
              ^ qword_1D7D68[BYTE2(v22)]
              ^ qword_1D8568[BYTE3(v23)]
              ^ qword_1D8D68[BYTE4(v24)]
              ^ qword_1D9568[BYTE5(v9)]
              ^ qword_1D9D68[BYTE6(v10)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v15))];
          v53 = qword_1D6D68[(unsigned __int8)v21]
              ^ qword_1D7568[BYTE1(v22)]
              ^ qword_1D7D68[BYTE2(v23)]
              ^ qword_1D8568[BYTE3(v24)]
              ^ qword_1D8D68[BYTE4(v9)]
              ^ qword_1D9568[BYTE5(v10)]
              ^ qword_1D9D68[BYTE6(v11)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v16))];
          v54 = qword_1D6D68[(unsigned __int8)v22]
              ^ qword_1D7568[BYTE1(v23)]
              ^ qword_1D7D68[BYTE2(v24)]
              ^ qword_1D8568[BYTE3(v9)]
              ^ qword_1D8D68[BYTE4(v10)]
              ^ qword_1D9568[BYTE5(v11)]
              ^ qword_1D9D68[BYTE6(v12)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v17))];
          v55 = qword_1D6D68[(unsigned __int8)v23]
              ^ qword_1D7568[BYTE1(v24)]
              ^ qword_1D7D68[BYTE2(v9)]
              ^ qword_1D8568[BYTE3(v10)]
              ^ qword_1D8D68[BYTE4(v11)]
              ^ qword_1D9568[BYTE5(v12)]
              ^ qword_1D9D68[BYTE6(v13)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v18))];
          v56 = qword_1D6D68[(unsigned __int8)v24]
              ^ qword_1D7568[BYTE1(v9)]
              ^ qword_1D7D68[BYTE2(v10)]
              ^ qword_1D8568[BYTE3(v11)]
              ^ qword_1D8D68[BYTE4(v12)]
              ^ qword_1D9568[BYTE5(v13)]
              ^ qword_1D9D68[BYTE6(v14)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v19))];
          v9 = v41 ^ (j + 1);
          v10 = v42 ^ (j + 17);
          v11 = v43 ^ (j + 33);
          v12 = v44 ^ (j + 49);
          v13 = v45 ^ (j + 65);
          v14 = v46 ^ (j + 81);
          v15 = v47 ^ (j + 97);
          v16 = v48 ^ (j + 113);
          v17 = v49 ^ (j + 129);
          v18 = v50 ^ (j + 145);
          v19 = v51 ^ (j + 161);
          v20 = v52 ^ (j + 177);
          v21 = v53 ^ (j + 193);
          v22 = v54 ^ (j + 209);
          v23 = v55 ^ (j + 225);
          v24 = v56 ^ (j + 241);
          v41 = qword_1D6D68[(unsigned __int8)v9]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v42 ^ (j + 17)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v43 ^ (j + 33)) >> 16)]
              ^ qword_1D8568[((unsigned int)v44 ^ (j + 49)) >> 24]
              ^ qword_1D8D68[BYTE4(v13)]
              ^ qword_1D9568[BYTE5(v14)]
              ^ qword_1D9D68[BYTE6(v15)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v20))];
          v42 = qword_1D6D68[(unsigned __int8)v10]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v43 ^ (j + 33)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v44 ^ (j + 49)) >> 16)]
              ^ qword_1D8568[((unsigned int)v45 ^ (j + 65)) >> 24]
              ^ qword_1D8D68[BYTE4(v14)]
              ^ qword_1D9568[BYTE5(v15)]
              ^ qword_1D9D68[BYTE6(v16)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v21))];
          v43 = qword_1D6D68[(unsigned __int8)v11]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v44 ^ (j + 49)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v45 ^ (j + 65)) >> 16)]
              ^ qword_1D8568[((unsigned int)v46 ^ (j + 81)) >> 24]
              ^ qword_1D8D68[BYTE4(v15)]
              ^ qword_1D9568[BYTE5(v16)]
              ^ qword_1D9D68[BYTE6(v17)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v22))];
          v44 = qword_1D6D68[(unsigned __int8)v12]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v45 ^ (j + 65)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v46 ^ (j + 81)) >> 16)]
              ^ qword_1D8568[((unsigned int)v47 ^ (j + 97)) >> 24]
              ^ qword_1D8D68[BYTE4(v16)]
              ^ qword_1D9568[BYTE5(v17)]
              ^ qword_1D9D68[BYTE6(v18)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v23))];
          v45 = qword_1D6D68[(unsigned __int8)v13]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v46 ^ (j + 81)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v47 ^ (j + 97)) >> 16)]
              ^ qword_1D8568[((unsigned int)v48 ^ (j + 113)) >> 24]
              ^ qword_1D8D68[BYTE4(v17)]
              ^ qword_1D9568[BYTE5(v18)]
              ^ qword_1D9D68[BYTE6(v19)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v24))];
          v46 = qword_1D6D68[(unsigned __int8)v14]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v47 ^ (j + 97)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v48 ^ (j + 113)) >> 16)]
              ^ qword_1D8568[((unsigned int)v49 ^ (j + 129)) >> 24]
              ^ qword_1D8D68[BYTE4(v18)]
              ^ qword_1D9568[BYTE5(v19)]
              ^ qword_1D9D68[BYTE6(v20)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v9))];
          v47 = qword_1D6D68[(unsigned __int8)v15]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v48 ^ (j + 113)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v49 ^ (j + 129)) >> 16)]
              ^ qword_1D8568[((unsigned int)v50 ^ (j + 145)) >> 24]
              ^ qword_1D8D68[BYTE4(v19)]
              ^ qword_1D9568[BYTE5(v20)]
              ^ qword_1D9D68[BYTE6(v21)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v10))];
          v48 = qword_1D6D68[(unsigned __int8)v16]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v49 ^ (j + 129)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v50 ^ (j + 145)) >> 16)]
              ^ qword_1D8568[((unsigned int)v51 ^ (j + 161)) >> 24]
              ^ qword_1D8D68[BYTE4(v20)]
              ^ qword_1D9568[BYTE5(v21)]
              ^ qword_1D9D68[BYTE6(v22)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v11))];
          v49 = qword_1D6D68[(unsigned __int8)v17]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v50 ^ (j + 145)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v51 ^ (j + 161)) >> 16)]
              ^ qword_1D8568[((unsigned int)v52 ^ (j + 177)) >> 24]
              ^ qword_1D8D68[BYTE4(v21)]
              ^ qword_1D9568[BYTE5(v22)]
              ^ qword_1D9D68[BYTE6(v23)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v12))];
          v50 = qword_1D6D68[(unsigned __int8)v18]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v51 ^ (j + 161)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v52 ^ (j + 177)) >> 16)]
              ^ qword_1D8568[((unsigned int)v53 ^ (j + 193)) >> 24]
              ^ qword_1D8D68[BYTE4(v22)]
              ^ qword_1D9568[BYTE5(v23)]
              ^ qword_1D9D68[BYTE6(v24)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v13))];
          v51 = qword_1D6D68[(unsigned __int8)v19]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v52 ^ (j + 177)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v53 ^ (j + 193)) >> 16)]
              ^ qword_1D8568[((unsigned int)v54 ^ (j + 209)) >> 24]
              ^ qword_1D8D68[BYTE4(v23)]
              ^ qword_1D9568[BYTE5(v24)]
              ^ qword_1D9D68[BYTE6(v9)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v14))];
          v52 = qword_1D6D68[(unsigned __int8)v20]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v53 ^ (j + 193)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v54 ^ (j + 209)) >> 16)]
              ^ qword_1D8568[((unsigned int)v55 ^ (j + 225)) >> 24]
              ^ qword_1D8D68[BYTE4(v24)]
              ^ qword_1D9568[BYTE5(v9)]
              ^ qword_1D9D68[BYTE6(v10)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v15))];
          v53 = qword_1D6D68[(unsigned __int8)v21]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v54 ^ (j + 209)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v55 ^ (j + 225)) >> 16)]
              ^ qword_1D8568[((unsigned int)v56 ^ (j + 241)) >> 24]
              ^ qword_1D8D68[BYTE4(v9)]
              ^ qword_1D9568[BYTE5(v10)]
              ^ qword_1D9D68[BYTE6(v11)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v16))];
          v54 = qword_1D6D68[(unsigned __int8)v22]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v55 ^ (j + 225)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v56 ^ (j + 241)) >> 16)]
              ^ qword_1D8568[BYTE3(v9)]
              ^ qword_1D8D68[BYTE4(v10)]
              ^ qword_1D9568[BYTE5(v11)]
              ^ qword_1D9D68[BYTE6(v12)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v17))];
          v55 = qword_1D6D68[(unsigned __int8)v23]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v56 ^ (j + 241)) >> 8)]
              ^ qword_1D7D68[BYTE2(v9)]
              ^ qword_1D8568[BYTE3(v10)]
              ^ qword_1D8D68[BYTE4(v11)]
              ^ qword_1D9568[BYTE5(v12)]
              ^ qword_1D9D68[BYTE6(v13)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v18))];
          v56 = qword_1D6D68[(unsigned __int8)v24]
              ^ qword_1D7568[BYTE1(v9)]
              ^ qword_1D7D68[BYTE2(v10)]
              ^ qword_1D8568[BYTE3(v11)]
              ^ qword_1D8D68[BYTE4(v12)]
              ^ qword_1D9568[BYTE5(v13)]
              ^ qword_1D9D68[BYTE6(v14)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v19))];
          v9 = v41;
          v10 = v42;
          v11 = v43;
          v12 = v44;
          v13 = v45;
          v14 = v46;
          v15 = v47;
          v16 = v48;
          v17 = v49;
          v18 = v50;
          v19 = v51;
          v20 = v52;
          v21 = v53;
          v22 = v54;
          v23 = v55;
          v24 = v56;
        }
        for ( k = 0; k <= 13; k += 2 )
        {
          LODWORD(v25) = ~(_DWORD)v25;
          HIDWORD(v25) ^= ~(k << 24);
          LODWORD(v26) = ~(_DWORD)v26;
          HIDWORD(v26) ^= (k << 24) ^ 0xEFFFFFFF;
          LODWORD(v27) = ~(_DWORD)v27;
          HIDWORD(v27) ^= (k << 24) ^ 0xDFFFFFFF;
          LODWORD(v28) = ~(_DWORD)v28;
          HIDWORD(v28) ^= (k << 24) ^ 0xCFFFFFFF;
          LODWORD(v29) = ~(_DWORD)v29;
          HIDWORD(v29) ^= (k << 24) ^ 0xBFFFFFFF;
          LODWORD(v30) = ~(_DWORD)v30;
          HIDWORD(v30) ^= (k << 24) ^ 0xAFFFFFFF;
          LODWORD(v31) = ~(_DWORD)v31;
          HIDWORD(v31) ^= (k << 24) ^ 0x9FFFFFFF;
          LODWORD(v32) = ~(_DWORD)v32;
          HIDWORD(v32) ^= (k << 24) ^ 0x8FFFFFFF;
          LODWORD(v33) = ~(_DWORD)v33;
          HIDWORD(v33) ^= (k << 24) ^ 0x7FFFFFFF;
          LODWORD(v34) = ~(_DWORD)v34;
          HIDWORD(v34) ^= (k << 24) ^ 0x6FFFFFFF;
          LODWORD(v35) = ~(_DWORD)v35;
          HIDWORD(v35) ^= (k << 24) ^ 0x5FFFFFFF;
          LODWORD(v36) = ~(_DWORD)v36;
          HIDWORD(v36) ^= (k << 24) ^ 0x4FFFFFFF;
          LODWORD(v37) = ~(_DWORD)v37;
          HIDWORD(v37) ^= (k << 24) ^ 0x3FFFFFFF;
          LODWORD(v38) = ~(_DWORD)v38;
          HIDWORD(v38) ^= (k << 24) ^ 0x2FFFFFFF;
          LODWORD(v39) = ~(_DWORD)v39;
          HIDWORD(v39) ^= (k << 24) ^ 0x1FFFFFFF;
          v5 = WORD2(v40);
          LODWORD(v40) = ~(_DWORD)v40;
          HIDWORD(v40) ^= (k << 24) ^ 0xFFFFFFF;
          v41 = qword_1D6D68[(unsigned __int8)v26]
              ^ qword_1D7568[BYTE1(v28)]
              ^ qword_1D7D68[BYTE2(v30)]
              ^ qword_1D8568[BYTE3(v36)]
              ^ qword_1D8D68[BYTE4(v25)]
              ^ qword_1D9568[BYTE5(v27)]
              ^ qword_1D9D68[BYTE6(v29)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v31))];
          v42 = qword_1D6D68[(unsigned __int8)v27]
              ^ qword_1D7568[BYTE1(v29)]
              ^ qword_1D7D68[BYTE2(v31)]
              ^ qword_1D8568[BYTE3(v37)]
              ^ qword_1D8D68[BYTE4(v26)]
              ^ qword_1D9568[BYTE5(v28)]
              ^ qword_1D9D68[BYTE6(v30)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v32))];
          v43 = qword_1D6D68[(unsigned __int8)v28]
              ^ qword_1D7568[BYTE1(v30)]
              ^ qword_1D7D68[BYTE2(v32)]
              ^ qword_1D8568[BYTE3(v38)]
              ^ qword_1D8D68[BYTE4(v27)]
              ^ qword_1D9568[BYTE5(v29)]
              ^ qword_1D9D68[BYTE6(v31)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v33))];
          v44 = qword_1D6D68[(unsigned __int8)v29]
              ^ qword_1D7568[BYTE1(v31)]
              ^ qword_1D7D68[BYTE2(v33)]
              ^ qword_1D8568[BYTE3(v39)]
              ^ qword_1D8D68[BYTE4(v28)]
              ^ qword_1D9568[BYTE5(v30)]
              ^ qword_1D9D68[BYTE6(v32)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v34))];
          v45 = qword_1D6D68[(unsigned __int8)v30]
              ^ qword_1D7568[BYTE1(v32)]
              ^ qword_1D7D68[BYTE2(v34)]
              ^ qword_1D8568[BYTE3(v40)]
              ^ qword_1D8D68[BYTE4(v29)]
              ^ qword_1D9568[BYTE5(v31)]
              ^ qword_1D9D68[BYTE6(v33)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v35))];
          v46 = qword_1D6D68[(unsigned __int8)v31]
              ^ qword_1D7568[BYTE1(v33)]
              ^ qword_1D7D68[BYTE2(v35)]
              ^ qword_1D8568[BYTE3(v25)]
              ^ qword_1D8D68[BYTE4(v30)]
              ^ qword_1D9568[BYTE5(v32)]
              ^ qword_1D9D68[BYTE6(v34)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v36))];
          v47 = qword_1D6D68[(unsigned __int8)v32]
              ^ qword_1D7568[BYTE1(v34)]
              ^ qword_1D7D68[BYTE2(v36)]
              ^ qword_1D8568[BYTE3(v26)]
              ^ qword_1D8D68[BYTE4(v31)]
              ^ qword_1D9568[BYTE5(v33)]
              ^ qword_1D9D68[BYTE6(v35)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v37))];
          v48 = qword_1D6D68[(unsigned __int8)v33]
              ^ qword_1D7568[BYTE1(v35)]
              ^ qword_1D7D68[BYTE2(v37)]
              ^ qword_1D8568[BYTE3(v27)]
              ^ qword_1D8D68[BYTE4(v32)]
              ^ qword_1D9568[BYTE5(v34)]
              ^ qword_1D9D68[BYTE6(v36)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v38))];
          v49 = qword_1D6D68[(unsigned __int8)v34]
              ^ qword_1D7568[BYTE1(v36)]
              ^ qword_1D7D68[BYTE2(v38)]
              ^ qword_1D8568[BYTE3(v28)]
              ^ qword_1D8D68[BYTE4(v33)]
              ^ qword_1D9568[BYTE5(v35)]
              ^ qword_1D9D68[BYTE6(v37)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v39))];
          v50 = qword_1D6D68[(unsigned __int8)v35]
              ^ qword_1D7568[BYTE1(v37)]
              ^ qword_1D7D68[BYTE2(v39)]
              ^ qword_1D8568[BYTE3(v29)]
              ^ qword_1D8D68[BYTE4(v34)]
              ^ qword_1D9568[BYTE5(v36)]
              ^ qword_1D9D68[BYTE6(v38)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v40))];
          v51 = qword_1D6D68[(unsigned __int8)v36]
              ^ qword_1D7568[BYTE1(v38)]
              ^ qword_1D7D68[BYTE2(v40)]
              ^ qword_1D8568[BYTE3(v30)]
              ^ qword_1D8D68[BYTE4(v35)]
              ^ qword_1D9568[BYTE5(v37)]
              ^ qword_1D9D68[BYTE6(v39)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v25))];
          v52 = qword_1D6D68[(unsigned __int8)v37]
              ^ qword_1D7568[BYTE1(v39)]
              ^ qword_1D7D68[BYTE2(v25)]
              ^ qword_1D8568[BYTE3(v31)]
              ^ qword_1D8D68[BYTE4(v36)]
              ^ qword_1D9568[BYTE5(v38)]
              ^ qword_1D9D68[BYTE6(v40)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v26))];
          v53 = qword_1D6D68[(unsigned __int8)v38]
              ^ qword_1D7568[BYTE1(v40)]
              ^ qword_1D7D68[BYTE2(v26)]
              ^ qword_1D8568[BYTE3(v32)]
              ^ qword_1D8D68[BYTE4(v37)]
              ^ qword_1D9568[BYTE5(v39)]
              ^ qword_1D9D68[BYTE6(v25)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v27))];
          v54 = qword_1D6D68[(unsigned __int8)v39]
              ^ qword_1D7568[BYTE1(v25)]
              ^ qword_1D7D68[BYTE2(v27)]
              ^ qword_1D8568[BYTE3(v33)]
              ^ qword_1D8D68[BYTE4(v38)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~v5 >> 8)]
              ^ qword_1D9D68[BYTE6(v26)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v28))];
          v55 = qword_1D6D68[(unsigned __int8)v40]
              ^ qword_1D7568[BYTE1(v26)]
              ^ qword_1D7D68[BYTE2(v28)]
              ^ qword_1D8568[BYTE3(v34)]
              ^ qword_1D8D68[BYTE4(v39)]
              ^ qword_1D9568[BYTE5(v25)]
              ^ qword_1D9D68[BYTE6(v27)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v29))];
          v56 = qword_1D6D68[(unsigned __int8)v25]
              ^ qword_1D7568[BYTE1(v27)]
              ^ qword_1D7D68[BYTE2(v29)]
              ^ qword_1D8568[BYTE3(v35)]
              ^ qword_1D8D68[(unsigned __int8)~(_BYTE)v5]
              ^ qword_1D9568[BYTE5(v26)]
              ^ qword_1D9D68[BYTE6(v28)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v30))];
          LODWORD(v25) = ~(_DWORD)v41;
          HIDWORD(v25) = HIDWORD(v41) ^ ~((k + 1) << 24);
          LODWORD(v26) = ~(_DWORD)v42;
          HIDWORD(v26) = ((k + 1) << 24) ^ HIDWORD(v42) ^ 0xEFFFFFFF;
          LODWORD(v27) = ~(_DWORD)v43;
          HIDWORD(v27) = ((k + 1) << 24) ^ HIDWORD(v43) ^ 0xDFFFFFFF;
          LODWORD(v28) = ~(_DWORD)v44;
          HIDWORD(v28) = ((k + 1) << 24) ^ HIDWORD(v44) ^ 0xCFFFFFFF;
          LODWORD(v29) = ~(_DWORD)v45;
          HIDWORD(v29) = ((k + 1) << 24) ^ HIDWORD(v45) ^ 0xBFFFFFFF;
          LODWORD(v30) = ~(_DWORD)v46;
          HIDWORD(v30) = ((k + 1) << 24) ^ HIDWORD(v46) ^ 0xAFFFFFFF;
          LODWORD(v31) = ~(_DWORD)v47;
          HIDWORD(v31) = ((k + 1) << 24) ^ HIDWORD(v47) ^ 0x9FFFFFFF;
          LODWORD(v32) = ~(_DWORD)v48;
          HIDWORD(v32) = ((k + 1) << 24) ^ HIDWORD(v48) ^ 0x8FFFFFFF;
          LODWORD(v33) = ~(_DWORD)v49;
          HIDWORD(v33) = ((k + 1) << 24) ^ HIDWORD(v49) ^ 0x7FFFFFFF;
          LODWORD(v34) = ~(_DWORD)v50;
          HIDWORD(v34) = ((k + 1) << 24) ^ HIDWORD(v50) ^ 0x6FFFFFFF;
          LODWORD(v35) = ~(_DWORD)v51;
          HIDWORD(v35) = ((k + 1) << 24) ^ HIDWORD(v51) ^ 0x5FFFFFFF;
          LODWORD(v36) = ~(_DWORD)v52;
          HIDWORD(v36) = ((k + 1) << 24) ^ HIDWORD(v52) ^ 0x4FFFFFFF;
          LODWORD(v37) = ~(_DWORD)v53;
          HIDWORD(v37) = ((k + 1) << 24) ^ HIDWORD(v53) ^ 0x3FFFFFFF;
          LODWORD(v38) = ~(_DWORD)v54;
          HIDWORD(v38) = ((k + 1) << 24) ^ HIDWORD(v54) ^ 0x2FFFFFFF;
          LODWORD(v39) = ~(_DWORD)v55;
          HIDWORD(v39) = ((k + 1) << 24) ^ HIDWORD(v55) ^ 0x1FFFFFFF;
          LODWORD(v40) = ~(_DWORD)v56;
          HIDWORD(v40) = ((k + 1) << 24) ^ HIDWORD(v56) ^ 0xFFFFFFF;
          v41 = qword_1D6D68[(unsigned __int8)~(_BYTE)v42]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v44 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v46 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v52 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v41)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v43) >> 8)]
              ^ qword_1D9D68[BYTE6(v29)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v31))];
          v42 = qword_1D6D68[(unsigned __int8)~(_BYTE)v43]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v45 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v47 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v53 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v42)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v44) >> 8)]
              ^ qword_1D9D68[BYTE6(v30)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v32))];
          v43 = qword_1D6D68[(unsigned __int8)~(_BYTE)v44]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v46 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v48 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v54 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v43)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v45) >> 8)]
              ^ qword_1D9D68[BYTE6(v31)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v33))];
          v44 = qword_1D6D68[(unsigned __int8)~(_BYTE)v45]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v47 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v49 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v55 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v44)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v46) >> 8)]
              ^ qword_1D9D68[BYTE6(v32)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v34))];
          v45 = qword_1D6D68[(unsigned __int8)~(_BYTE)v46]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v48 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v50 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v56 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v45)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v47) >> 8)]
              ^ qword_1D9D68[BYTE6(v33)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v35))];
          v46 = qword_1D6D68[(unsigned __int8)~(_BYTE)v47]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v49 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v51 >> 16)]
              ^ qword_1D8568[BYTE3(v25)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v46)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v48) >> 8)]
              ^ qword_1D9D68[BYTE6(v34)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v36))];
          v47 = qword_1D6D68[(unsigned __int8)~(_BYTE)v48]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v50 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v52 >> 16)]
              ^ qword_1D8568[BYTE3(v26)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v47)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v49) >> 8)]
              ^ qword_1D9D68[BYTE6(v35)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v37))];
          v48 = qword_1D6D68[(unsigned __int8)~(_BYTE)v49]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v51 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v53 >> 16)]
              ^ qword_1D8568[BYTE3(v27)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v48)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v50) >> 8)]
              ^ qword_1D9D68[BYTE6(v36)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v38))];
          v49 = qword_1D6D68[(unsigned __int8)~(_BYTE)v50]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v52 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v54 >> 16)]
              ^ qword_1D8568[BYTE3(v28)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v49)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v51) >> 8)]
              ^ qword_1D9D68[BYTE6(v37)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v39))];
          v50 = qword_1D6D68[(unsigned __int8)~(_BYTE)v51]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v53 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v55 >> 16)]
              ^ qword_1D8568[BYTE3(v29)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v50)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v52) >> 8)]
              ^ qword_1D9D68[BYTE6(v38)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v40))];
          v51 = qword_1D6D68[(unsigned __int8)~(_BYTE)v52]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v54 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v56 >> 16)]
              ^ qword_1D8568[BYTE3(v30)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v51)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v53) >> 8)]
              ^ qword_1D9D68[BYTE6(v39)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v25))];
          v52 = qword_1D6D68[(unsigned __int8)~(_BYTE)v53]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v55 >> 8)]
              ^ qword_1D7D68[BYTE2(v25)]
              ^ qword_1D8568[BYTE3(v31)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v52)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v54) >> 8)]
              ^ qword_1D9D68[BYTE6(v40)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v26))];
          v53 = qword_1D6D68[(unsigned __int8)~(_BYTE)v54]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v56 >> 8)]
              ^ qword_1D7D68[BYTE2(v26)]
              ^ qword_1D8568[BYTE3(v32)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v53)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v55) >> 8)]
              ^ qword_1D9D68[BYTE6(v25)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v27))];
          v54 = qword_1D6D68[(unsigned __int8)~(_BYTE)v55]
              ^ qword_1D7568[BYTE1(v25)]
              ^ qword_1D7D68[BYTE2(v27)]
              ^ qword_1D8568[BYTE3(v33)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v54)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v56) >> 8)]
              ^ qword_1D9D68[BYTE6(v26)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v28))];
          v55 = qword_1D6D68[(unsigned __int8)~(_BYTE)v56]
              ^ qword_1D7568[BYTE1(v26)]
              ^ qword_1D7D68[BYTE2(v28)]
              ^ qword_1D8568[BYTE3(v34)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v55)]
              ^ qword_1D9568[BYTE5(v25)]
              ^ qword_1D9D68[BYTE6(v27)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v29))];
          v56 = qword_1D6D68[(unsigned __int8)v25]
              ^ qword_1D7568[BYTE1(v27)]
              ^ qword_1D7D68[BYTE2(v29)]
              ^ qword_1D8568[BYTE3(v35)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v56)]
              ^ qword_1D9568[BYTE5(v26)]
              ^ qword_1D9D68[BYTE6(v28)]
              ^ qword_1DA568[HIBYTE(HIDWORD(v30))];
          v25 = v41;
          v26 = v42;
          v27 = v43;
          v28 = v44;
          v29 = v45;
          v30 = v46;
          v31 = v47;
          v32 = v48;
          v33 = v49;
          v34 = v50;
          v35 = v51;
          v36 = v52;
          v37 = v53;
          v38 = v54;
          v39 = v55;
          v40 = v56;
        }
        for ( i = 0; i <= 0xF; ++i )
          *((_QWORD *)&v64 + i - 19) ^= *(&v25 + i) ^ *(&v9 + i);
        ++*(_QWORD *)(a1 + 264);
        v63 = 0;
      }
    }
    result = memcpy((void *)(a1 + 136), dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v63;
  }
  else
  {
    result = memcpy((void *)(v58 + v63), a2, a3);
    *(_DWORD *)(a1 + 128) = v6 + v63;
  }
  return result;
}
