void *__fastcall sub_1722BC(int a1, char *a2, size_t a3)
{
  void *result; // r0
  __int64 v4; // r0
  __int16 v5; // r2
  unsigned int v6; // [sp+774h] [bp+774h]
  char *v7; // [sp+778h] [bp+778h]
  __int64 v9; // [sp+780h] [bp+780h] BYREF
  __int64 v10; // [sp+788h] [bp+788h]
  __int64 v11; // [sp+790h] [bp+790h]
  __int64 v12; // [sp+798h] [bp+798h]
  __int64 v13; // [sp+7A0h] [bp+7A0h]
  __int64 v14; // [sp+7A8h] [bp+7A8h]
  __int64 v15; // [sp+7B0h] [bp+7B0h]
  __int64 v16; // [sp+7B8h] [bp+7B8h]
  __int64 v17; // [sp+7C0h] [bp+7C0h]
  __int64 v18; // [sp+7C8h] [bp+7C8h]
  __int64 v19; // [sp+7D0h] [bp+7D0h]
  __int64 v20; // [sp+7D8h] [bp+7D8h]
  __int64 v21; // [sp+7E0h] [bp+7E0h]
  __int64 v22; // [sp+7E8h] [bp+7E8h]
  __int64 v23; // [sp+7F0h] [bp+7F0h]
  __int64 v24; // [sp+7F8h] [bp+7F8h]
  __int64 v25; // [sp+800h] [bp+800h]
  __int64 v26; // [sp+808h] [bp+808h]
  __int64 v27; // [sp+810h] [bp+810h]
  __int64 v28; // [sp+818h] [bp+818h]
  __int64 v29; // [sp+820h] [bp+820h]
  __int64 v30; // [sp+828h] [bp+828h]
  __int64 v31; // [sp+830h] [bp+830h]
  __int64 v32; // [sp+838h] [bp+838h]
  _BYTE dest[64]; // [sp+840h] [bp+840h] BYREF
  int v34; // [sp+880h] [bp+880h]
  int k; // [sp+884h] [bp+884h]
  int j; // [sp+888h] [bp+888h]
  unsigned int i; // [sp+88Ch] [bp+88Ch]
  size_t n; // [sp+890h] [bp+890h]
  int v39; // [sp+894h] [bp+894h]
  _BYTE v40[4]; // [sp+898h] [bp+898h] BYREF

  v7 = a2;
  v6 = a3;
  v34 = a1;
  v39 = *(_DWORD *)(a1 + 64);
  if ( 64 - v39 <= a3 )
  {
    memcpy(dest, (const void *)(a1 + 72), sizeof(dest));
    while ( v6 )
    {
      n = 64 - v39;
      if ( 64 - v39 > v6 )
        n = v6;
      memcpy((void *)(v34 + v39), v7, n);
      v39 += n;
      v7 += n;
      v6 -= n;
      if ( v39 == 64 )
      {
        for ( i = 0; i <= 7; ++i )
        {
          v4 = sub_172214(v34 + 8 * i);
          *(_QWORD *)&v40[8 * i - 216] = v4;
          *(&v9 + i) = *(_QWORD *)&v40[8 * i - 216] ^ *(_QWORD *)&v40[8 * i - 88];
        }
        for ( j = 0; j <= 9; j += 2 )
        {
          v9 ^= j;
          v10 ^= j + 16;
          v11 ^= j + 32;
          v12 ^= j + 48;
          v13 ^= j + 64;
          v14 ^= j + 80;
          v15 ^= j + 96;
          v16 ^= j + 112;
          v25 = qword_1DA568[HIBYTE(HIDWORD(v16))]
              ^ qword_1D6D68[(unsigned __int8)v9]
              ^ qword_1D7568[BYTE1(v10)]
              ^ qword_1D7D68[BYTE2(v11)]
              ^ qword_1D8568[BYTE3(v12)]
              ^ qword_1D8D68[BYTE4(v13)]
              ^ qword_1D9568[BYTE5(v14)]
              ^ qword_1D9D68[BYTE6(v15)];
          v26 = qword_1DA568[HIBYTE(HIDWORD(v9))]
              ^ qword_1D6D68[(unsigned __int8)v10]
              ^ qword_1D7568[BYTE1(v11)]
              ^ qword_1D7D68[BYTE2(v12)]
              ^ qword_1D8568[BYTE3(v13)]
              ^ qword_1D8D68[BYTE4(v14)]
              ^ qword_1D9568[BYTE5(v15)]
              ^ qword_1D9D68[BYTE6(v16)];
          v27 = qword_1DA568[HIBYTE(HIDWORD(v10))]
              ^ qword_1D6D68[(unsigned __int8)v11]
              ^ qword_1D7568[BYTE1(v12)]
              ^ qword_1D7D68[BYTE2(v13)]
              ^ qword_1D8568[BYTE3(v14)]
              ^ qword_1D8D68[BYTE4(v15)]
              ^ qword_1D9568[BYTE5(v16)]
              ^ qword_1D9D68[BYTE6(v9)];
          v28 = qword_1DA568[HIBYTE(HIDWORD(v11))]
              ^ qword_1D6D68[(unsigned __int8)v12]
              ^ qword_1D7568[BYTE1(v13)]
              ^ qword_1D7D68[BYTE2(v14)]
              ^ qword_1D8568[BYTE3(v15)]
              ^ qword_1D8D68[BYTE4(v16)]
              ^ qword_1D9568[BYTE5(v9)]
              ^ qword_1D9D68[BYTE6(v10)];
          v29 = qword_1DA568[HIBYTE(HIDWORD(v12))]
              ^ qword_1D6D68[(unsigned __int8)v13]
              ^ qword_1D7568[BYTE1(v14)]
              ^ qword_1D7D68[BYTE2(v15)]
              ^ qword_1D8568[BYTE3(v16)]
              ^ qword_1D8D68[BYTE4(v9)]
              ^ qword_1D9568[BYTE5(v10)]
              ^ qword_1D9D68[BYTE6(v11)];
          v30 = qword_1DA568[HIBYTE(HIDWORD(v13))]
              ^ qword_1D6D68[(unsigned __int8)v14]
              ^ qword_1D7568[BYTE1(v15)]
              ^ qword_1D7D68[BYTE2(v16)]
              ^ qword_1D8568[BYTE3(v9)]
              ^ qword_1D8D68[BYTE4(v10)]
              ^ qword_1D9568[BYTE5(v11)]
              ^ qword_1D9D68[BYTE6(v12)];
          v31 = qword_1DA568[HIBYTE(HIDWORD(v14))]
              ^ qword_1D6D68[(unsigned __int8)v15]
              ^ qword_1D7568[BYTE1(v16)]
              ^ qword_1D7D68[BYTE2(v9)]
              ^ qword_1D8568[BYTE3(v10)]
              ^ qword_1D8D68[BYTE4(v11)]
              ^ qword_1D9568[BYTE5(v12)]
              ^ qword_1D9D68[BYTE6(v13)];
          v32 = qword_1DA568[HIBYTE(HIDWORD(v15))]
              ^ qword_1D6D68[(unsigned __int8)v16]
              ^ qword_1D7568[BYTE1(v9)]
              ^ qword_1D7D68[BYTE2(v10)]
              ^ qword_1D8568[BYTE3(v11)]
              ^ qword_1D8D68[BYTE4(v12)]
              ^ qword_1D9568[BYTE5(v13)]
              ^ qword_1D9D68[BYTE6(v14)];
          v9 = v25 ^ (j + 1);
          v10 = v26 ^ (j + 17);
          v11 = v27 ^ (j + 33);
          v12 = v28 ^ (j + 49);
          v13 = v29 ^ (j + 65);
          v14 = v30 ^ (j + 81);
          v15 = v31 ^ (j + 97);
          v16 = v32 ^ (j + 113);
          v25 = qword_1DA568[HIBYTE(HIDWORD(v16))]
              ^ qword_1D6D68[(unsigned __int8)v9]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v26 ^ (j + 17)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v27 ^ (j + 33)) >> 16)]
              ^ qword_1D8568[((unsigned int)v28 ^ (j + 49)) >> 24]
              ^ qword_1D8D68[BYTE4(v13)]
              ^ qword_1D9568[BYTE5(v14)]
              ^ qword_1D9D68[BYTE6(v15)];
          v26 = qword_1DA568[HIBYTE(HIDWORD(v9))]
              ^ qword_1D6D68[(unsigned __int8)v10]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v27 ^ (j + 33)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v28 ^ (j + 49)) >> 16)]
              ^ qword_1D8568[((unsigned int)v29 ^ (j + 65)) >> 24]
              ^ qword_1D8D68[BYTE4(v14)]
              ^ qword_1D9568[BYTE5(v15)]
              ^ qword_1D9D68[BYTE6(v16)];
          v27 = qword_1DA568[HIBYTE(HIDWORD(v10))]
              ^ qword_1D6D68[(unsigned __int8)v11]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v28 ^ (j + 49)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v29 ^ (j + 65)) >> 16)]
              ^ qword_1D8568[((unsigned int)v30 ^ (j + 81)) >> 24]
              ^ qword_1D8D68[BYTE4(v15)]
              ^ qword_1D9568[BYTE5(v16)]
              ^ qword_1D9D68[BYTE6(v9)];
          v28 = qword_1DA568[HIBYTE(HIDWORD(v11))]
              ^ qword_1D6D68[(unsigned __int8)v12]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v29 ^ (j + 65)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v30 ^ (j + 81)) >> 16)]
              ^ qword_1D8568[((unsigned int)v31 ^ (j + 97)) >> 24]
              ^ qword_1D8D68[BYTE4(v16)]
              ^ qword_1D9568[BYTE5(v9)]
              ^ qword_1D9D68[BYTE6(v10)];
          v29 = qword_1DA568[HIBYTE(HIDWORD(v12))]
              ^ qword_1D6D68[(unsigned __int8)v13]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v30 ^ (j + 81)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v31 ^ (j + 97)) >> 16)]
              ^ qword_1D8568[((unsigned int)v32 ^ (j + 113)) >> 24]
              ^ qword_1D8D68[BYTE4(v9)]
              ^ qword_1D9568[BYTE5(v10)]
              ^ qword_1D9D68[BYTE6(v11)];
          v30 = qword_1DA568[HIBYTE(HIDWORD(v13))]
              ^ qword_1D6D68[(unsigned __int8)v14]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v31 ^ (j + 97)) >> 8)]
              ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v32 ^ (j + 113)) >> 16)]
              ^ qword_1D8568[BYTE3(v9)]
              ^ qword_1D8D68[BYTE4(v10)]
              ^ qword_1D9568[BYTE5(v11)]
              ^ qword_1D9D68[BYTE6(v12)];
          v31 = qword_1DA568[HIBYTE(HIDWORD(v14))]
              ^ qword_1D6D68[(unsigned __int8)v15]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v32 ^ (j + 113)) >> 8)]
              ^ qword_1D7D68[BYTE2(v9)]
              ^ qword_1D8568[BYTE3(v10)]
              ^ qword_1D8D68[BYTE4(v11)]
              ^ qword_1D9568[BYTE5(v12)]
              ^ qword_1D9D68[BYTE6(v13)];
          v32 = qword_1DA568[HIBYTE(HIDWORD(v15))]
              ^ qword_1D6D68[(unsigned __int8)v16]
              ^ qword_1D7568[BYTE1(v9)]
              ^ qword_1D7D68[BYTE2(v10)]
              ^ qword_1D8568[BYTE3(v11)]
              ^ qword_1D8D68[BYTE4(v12)]
              ^ qword_1D9568[BYTE5(v13)]
              ^ qword_1D9D68[BYTE6(v14)];
          v9 = v25;
          v10 = v26;
          v11 = v27;
          v12 = v28;
          v13 = v29;
          v14 = v30;
          v15 = v31;
          v16 = v32;
        }
        for ( k = 0; k <= 9; k += 2 )
        {
          LODWORD(v17) = ~(_DWORD)v17;
          HIDWORD(v17) ^= ~(k << 24);
          LODWORD(v18) = ~(_DWORD)v18;
          HIDWORD(v18) ^= (k << 24) ^ 0xEFFFFFFF;
          LODWORD(v19) = ~(_DWORD)v19;
          HIDWORD(v19) ^= (k << 24) ^ 0xDFFFFFFF;
          LODWORD(v20) = ~(_DWORD)v20;
          HIDWORD(v20) ^= (k << 24) ^ 0xCFFFFFFF;
          LODWORD(v21) = ~(_DWORD)v21;
          HIDWORD(v21) ^= (k << 24) ^ 0xBFFFFFFF;
          LODWORD(v22) = ~(_DWORD)v22;
          HIDWORD(v22) ^= (k << 24) ^ 0xAFFFFFFF;
          LODWORD(v23) = ~(_DWORD)v23;
          HIDWORD(v23) ^= (k << 24) ^ 0x9FFFFFFF;
          v5 = WORD2(v24);
          LODWORD(v24) = ~(_DWORD)v24;
          HIDWORD(v24) ^= (k << 24) ^ 0x8FFFFFFF;
          v25 = qword_1DA568[HIBYTE(HIDWORD(v23))]
              ^ qword_1D6D68[(unsigned __int8)v18]
              ^ qword_1D7568[BYTE1(v20)]
              ^ qword_1D7D68[BYTE2(v22)]
              ^ qword_1D8568[BYTE3(v24)]
              ^ qword_1D8D68[BYTE4(v17)]
              ^ qword_1D9568[BYTE5(v19)]
              ^ qword_1D9D68[BYTE6(v21)];
          v26 = qword_1DA568[HIBYTE(HIDWORD(v24))]
              ^ qword_1D6D68[(unsigned __int8)v19]
              ^ qword_1D7568[BYTE1(v21)]
              ^ qword_1D7D68[BYTE2(v23)]
              ^ qword_1D8568[BYTE3(v17)]
              ^ qword_1D8D68[BYTE4(v18)]
              ^ qword_1D9568[BYTE5(v20)]
              ^ qword_1D9D68[BYTE6(v22)];
          v27 = qword_1DA568[HIBYTE(HIDWORD(v17))]
              ^ qword_1D6D68[(unsigned __int8)v20]
              ^ qword_1D7568[BYTE1(v22)]
              ^ qword_1D7D68[BYTE2(v24)]
              ^ qword_1D8568[BYTE3(v18)]
              ^ qword_1D8D68[BYTE4(v19)]
              ^ qword_1D9568[BYTE5(v21)]
              ^ qword_1D9D68[BYTE6(v23)];
          v28 = qword_1DA568[HIBYTE(HIDWORD(v18))]
              ^ qword_1D6D68[(unsigned __int8)v21]
              ^ qword_1D7568[BYTE1(v23)]
              ^ qword_1D7D68[BYTE2(v17)]
              ^ qword_1D8568[BYTE3(v19)]
              ^ qword_1D8D68[BYTE4(v20)]
              ^ qword_1D9568[BYTE5(v22)]
              ^ qword_1D9D68[BYTE6(v24)];
          v29 = qword_1DA568[HIBYTE(HIDWORD(v19))]
              ^ qword_1D6D68[(unsigned __int8)v22]
              ^ qword_1D7568[BYTE1(v24)]
              ^ qword_1D7D68[BYTE2(v18)]
              ^ qword_1D8568[BYTE3(v20)]
              ^ qword_1D8D68[BYTE4(v21)]
              ^ qword_1D9568[BYTE5(v23)]
              ^ qword_1D9D68[BYTE6(v17)];
          v30 = qword_1DA568[HIBYTE(HIDWORD(v20))]
              ^ qword_1D6D68[(unsigned __int8)v23]
              ^ qword_1D7568[BYTE1(v17)]
              ^ qword_1D7D68[BYTE2(v19)]
              ^ qword_1D8568[BYTE3(v21)]
              ^ qword_1D8D68[BYTE4(v22)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~v5 >> 8)]
              ^ qword_1D9D68[BYTE6(v18)];
          v31 = qword_1DA568[HIBYTE(HIDWORD(v21))]
              ^ qword_1D6D68[(unsigned __int8)v24]
              ^ qword_1D7568[BYTE1(v18)]
              ^ qword_1D7D68[BYTE2(v20)]
              ^ qword_1D8568[BYTE3(v22)]
              ^ qword_1D8D68[BYTE4(v23)]
              ^ qword_1D9568[BYTE5(v17)]
              ^ qword_1D9D68[BYTE6(v19)];
          v32 = qword_1DA568[HIBYTE(HIDWORD(v22))]
              ^ qword_1D6D68[(unsigned __int8)v17]
              ^ qword_1D7568[BYTE1(v19)]
              ^ qword_1D7D68[BYTE2(v21)]
              ^ qword_1D8568[BYTE3(v23)]
              ^ qword_1D8D68[(unsigned __int8)~(_BYTE)v5]
              ^ qword_1D9568[BYTE5(v18)]
              ^ qword_1D9D68[BYTE6(v20)];
          LODWORD(v17) = ~(_DWORD)v25;
          HIDWORD(v17) = ~((k + 1) << 24) ^ HIDWORD(v25);
          LODWORD(v18) = ~(_DWORD)v26;
          HIDWORD(v18) = ((k + 1) << 24) ^ HIDWORD(v26) ^ 0xEFFFFFFF;
          LODWORD(v19) = ~(_DWORD)v27;
          HIDWORD(v19) = ((k + 1) << 24) ^ HIDWORD(v27) ^ 0xDFFFFFFF;
          LODWORD(v20) = ~(_DWORD)v28;
          HIDWORD(v20) = ((k + 1) << 24) ^ HIDWORD(v28) ^ 0xCFFFFFFF;
          LODWORD(v21) = ~(_DWORD)v29;
          HIDWORD(v21) = ((k + 1) << 24) ^ HIDWORD(v29) ^ 0xBFFFFFFF;
          LODWORD(v22) = ~(_DWORD)v30;
          HIDWORD(v22) = ((k + 1) << 24) ^ HIDWORD(v30) ^ 0xAFFFFFFF;
          LODWORD(v23) = ~(_DWORD)v31;
          HIDWORD(v23) = ((k + 1) << 24) ^ HIDWORD(v31) ^ 0x9FFFFFFF;
          LODWORD(v24) = ~(_DWORD)v32;
          HIDWORD(v24) = ((k + 1) << 24) ^ HIDWORD(v32) ^ 0x8FFFFFFF;
          v25 = qword_1DA568[HIBYTE(HIDWORD(v23))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v26]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v28 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v30 >> 16)]
              ^ qword_1D8568[(unsigned int)~(_DWORD)v32 >> 24]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v25)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v27) >> 8)]
              ^ qword_1D9D68[BYTE6(v21)];
          v26 = qword_1DA568[HIBYTE(HIDWORD(v24))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v27]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v29 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v31 >> 16)]
              ^ qword_1D8568[BYTE3(v17)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v26)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v28) >> 8)]
              ^ qword_1D9D68[BYTE6(v22)];
          v27 = qword_1DA568[HIBYTE(HIDWORD(v17))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v28]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v30 >> 8)]
              ^ qword_1D7D68[(unsigned __int8)((unsigned int)~(_DWORD)v32 >> 16)]
              ^ qword_1D8568[BYTE3(v18)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v27)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v29) >> 8)]
              ^ qword_1D9D68[BYTE6(v23)];
          v28 = qword_1DA568[HIBYTE(HIDWORD(v18))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v29]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v31 >> 8)]
              ^ qword_1D7D68[BYTE2(v17)]
              ^ qword_1D8568[BYTE3(v19)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v28)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v30) >> 8)]
              ^ qword_1D9D68[BYTE6(v24)];
          v29 = qword_1DA568[HIBYTE(HIDWORD(v19))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v30]
              ^ qword_1D7568[(unsigned __int8)((unsigned __int16)~(_WORD)v32 >> 8)]
              ^ qword_1D7D68[BYTE2(v18)]
              ^ qword_1D8568[BYTE3(v20)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v29)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v31) >> 8)]
              ^ qword_1D9D68[BYTE6(v17)];
          v30 = qword_1DA568[HIBYTE(HIDWORD(v20))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v31]
              ^ qword_1D7568[BYTE1(v17)]
              ^ qword_1D7D68[BYTE2(v19)]
              ^ qword_1D8568[BYTE3(v21)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v30)]
              ^ qword_1D9568[(unsigned __int8)((unsigned __int16)~WORD2(v32) >> 8)]
              ^ qword_1D9D68[BYTE6(v18)];
          v31 = qword_1DA568[HIBYTE(HIDWORD(v21))]
              ^ qword_1D6D68[(unsigned __int8)~(_BYTE)v32]
              ^ qword_1D7568[BYTE1(v18)]
              ^ qword_1D7D68[BYTE2(v20)]
              ^ qword_1D8568[BYTE3(v22)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v31)]
              ^ qword_1D9568[BYTE5(v17)]
              ^ qword_1D9D68[BYTE6(v19)];
          v32 = qword_1DA568[HIBYTE(HIDWORD(v22))]
              ^ qword_1D6D68[(unsigned __int8)v17]
              ^ qword_1D7568[BYTE1(v19)]
              ^ qword_1D7D68[BYTE2(v21)]
              ^ qword_1D8568[BYTE3(v23)]
              ^ qword_1D8D68[(unsigned __int8)~BYTE4(v32)]
              ^ qword_1D9568[BYTE5(v18)]
              ^ qword_1D9D68[BYTE6(v20)];
          v17 = v25;
          v18 = v26;
          v19 = v27;
          v20 = v28;
          v21 = v29;
          v22 = v30;
          v23 = v31;
          v24 = v32;
        }
        for ( i = 0; i <= 7; ++i )
          *(_QWORD *)&v40[8 * i - 88] ^= *(_QWORD *)&v40[8 * i - 216] ^ *(&v9 + i);
        ++*(_QWORD *)(a1 + 136);
        v39 = 0;
      }
    }
    result = memcpy((void *)(a1 + 72), dest, 0x40u);
    *(_DWORD *)(a1 + 64) = v39;
  }
  else
  {
    result = memcpy((void *)(v34 + v39), a2, a3);
    *(_DWORD *)(a1 + 64) = v6 + v39;
  }
  return result;
}
