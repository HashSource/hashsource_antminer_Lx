_DWORD *__fastcall sub_17738C(int a1, char a2, char a3, void *a4, size_t n)
{
  __int64 v5; // kr70_8
  __int64 v9; // [sp+380h] [bp+380h] BYREF
  __int64 v10; // [sp+388h] [bp+388h]
  __int64 v11; // [sp+390h] [bp+390h]
  __int64 v12; // [sp+398h] [bp+398h]
  __int64 v13; // [sp+3A0h] [bp+3A0h]
  __int64 v14; // [sp+3A8h] [bp+3A8h]
  __int64 v15; // [sp+3B0h] [bp+3B0h]
  __int64 v16; // [sp+3B8h] [bp+3B8h]
  __int64 v17; // [sp+3C0h] [bp+3C0h]
  __int64 v18; // [sp+3C8h] [bp+3C8h]
  __int64 v19; // [sp+3D0h] [bp+3D0h]
  __int64 v20; // [sp+3D8h] [bp+3D8h]
  __int64 v21; // [sp+3E0h] [bp+3E0h]
  __int64 v22; // [sp+3E8h] [bp+3E8h]
  __int64 v23; // [sp+3F0h] [bp+3F0h]
  __int64 v24; // [sp+3F8h] [bp+3F8h]
  _QWORD dest[8]; // [sp+400h] [bp+400h] BYREF
  char v26[72]; // [sp+444h] [bp+444h] BYREF
  int v27; // [sp+48Ch] [bp+48Ch]
  unsigned int v28; // [sp+490h] [bp+490h]
  int v29; // [sp+494h] [bp+494h]
  int i; // [sp+498h] [bp+498h]
  unsigned int j; // [sp+49Ch] [bp+49Ch]
  __int64 v32; // [sp+4A0h] [bp+4A0h]
  size_t v33; // [sp+4A8h] [bp+4A8h]
  unsigned int k; // [sp+4ACh] [bp+4ACh]
  _BYTE v35[4]; // [sp+4B0h] [bp+4B0h] BYREF

  v29 = a1;
  v28 = *(_DWORD *)(a1 + 64);
  v27 = 128 >> a3;
  v26[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v28 > 0x37 )
  {
    v33 = 128 - v28;
    v32 = *(_QWORD *)(a1 + 136) + 2LL;
  }
  else
  {
    v33 = 64 - v28;
    v32 = *(_QWORD *)(a1 + 136) + 1LL;
  }
  memset(&v26[1], 0, v33 - 9);
  sub_17209C(&v26[v33 - 8], (int)&v26[v33 - 8], v32, SHIDWORD(v32));
  sub_1722BC(a1, v26, v33);
  memcpy(dest, (const void *)(a1 + 72), sizeof(dest));
  v9 = dest[0];
  v10 = dest[1];
  v11 = dest[2];
  v12 = dest[3];
  v13 = dest[4];
  v14 = dest[5];
  v15 = dest[6];
  v16 = dest[7];
  for ( i = 0; i <= 9; i += 2 )
  {
    v9 ^= i;
    v10 ^= i + 16;
    v11 ^= i + 32;
    v12 ^= i + 48;
    v13 ^= i + 64;
    v14 ^= i + 80;
    v15 ^= i + 96;
    v16 ^= i + 112;
    v17 = qword_1DA568[HIBYTE(HIDWORD(v16))]
        ^ qword_1D6D68[(unsigned __int8)v9]
        ^ qword_1D7568[BYTE1(v10)]
        ^ qword_1D7D68[BYTE2(v11)]
        ^ qword_1D8568[BYTE3(v12)]
        ^ qword_1D8D68[BYTE4(v13)]
        ^ qword_1D9568[BYTE5(v14)]
        ^ qword_1D9D68[BYTE6(v15)];
    v18 = qword_1DA568[HIBYTE(HIDWORD(v9))]
        ^ qword_1D6D68[(unsigned __int8)v10]
        ^ qword_1D7568[BYTE1(v11)]
        ^ qword_1D7D68[BYTE2(v12)]
        ^ qword_1D8568[BYTE3(v13)]
        ^ qword_1D8D68[BYTE4(v14)]
        ^ qword_1D9568[BYTE5(v15)]
        ^ qword_1D9D68[BYTE6(v16)];
    v19 = qword_1DA568[HIBYTE(HIDWORD(v10))]
        ^ qword_1D6D68[(unsigned __int8)v11]
        ^ qword_1D7568[BYTE1(v12)]
        ^ qword_1D7D68[BYTE2(v13)]
        ^ qword_1D8568[BYTE3(v14)]
        ^ qword_1D8D68[BYTE4(v15)]
        ^ qword_1D9568[BYTE5(v16)]
        ^ qword_1D9D68[BYTE6(v9)];
    v20 = qword_1DA568[HIBYTE(HIDWORD(v11))]
        ^ qword_1D6D68[(unsigned __int8)v12]
        ^ qword_1D7568[BYTE1(v13)]
        ^ qword_1D7D68[BYTE2(v14)]
        ^ qword_1D8568[BYTE3(v15)]
        ^ qword_1D8D68[BYTE4(v16)]
        ^ qword_1D9568[BYTE5(v9)]
        ^ qword_1D9D68[BYTE6(v10)];
    v21 = qword_1DA568[HIBYTE(HIDWORD(v12))]
        ^ qword_1D6D68[(unsigned __int8)v13]
        ^ qword_1D7568[BYTE1(v14)]
        ^ qword_1D7D68[BYTE2(v15)]
        ^ qword_1D8568[BYTE3(v16)]
        ^ qword_1D8D68[BYTE4(v9)]
        ^ qword_1D9568[BYTE5(v10)]
        ^ qword_1D9D68[BYTE6(v11)];
    v22 = qword_1DA568[HIBYTE(HIDWORD(v13))]
        ^ qword_1D6D68[(unsigned __int8)v14]
        ^ qword_1D7568[BYTE1(v15)]
        ^ qword_1D7D68[BYTE2(v16)]
        ^ qword_1D8568[BYTE3(v9)]
        ^ qword_1D8D68[BYTE4(v10)]
        ^ qword_1D9568[BYTE5(v11)]
        ^ qword_1D9D68[BYTE6(v12)];
    v23 = qword_1DA568[HIBYTE(HIDWORD(v14))]
        ^ qword_1D6D68[(unsigned __int8)v15]
        ^ qword_1D7568[BYTE1(v16)]
        ^ qword_1D7D68[BYTE2(v9)]
        ^ qword_1D8568[BYTE3(v10)]
        ^ qword_1D8D68[BYTE4(v11)]
        ^ qword_1D9568[BYTE5(v12)]
        ^ qword_1D9D68[BYTE6(v13)];
    v24 = qword_1DA568[HIBYTE(HIDWORD(v15))]
        ^ qword_1D6D68[(unsigned __int8)v16]
        ^ qword_1D7568[BYTE1(v9)]
        ^ qword_1D7D68[BYTE2(v10)]
        ^ qword_1D8568[BYTE3(v11)]
        ^ qword_1D8D68[BYTE4(v12)]
        ^ qword_1D9568[BYTE5(v13)]
        ^ qword_1D9D68[BYTE6(v14)];
    v9 = v17 ^ (i + 1);
    v10 = v18 ^ (i + 17);
    v11 = v19 ^ (i + 33);
    v12 = v20 ^ (i + 49);
    v13 = v21 ^ (i + 65);
    v14 = v22 ^ (i + 81);
    v15 = v23 ^ (i + 97);
    v16 = v24 ^ (i + 113);
    v17 = qword_1DA568[HIBYTE(HIDWORD(v16))]
        ^ qword_1D6D68[(unsigned __int8)v9]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v18 ^ (i + 17)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v19 ^ (i + 33)) >> 16)]
        ^ qword_1D8568[((unsigned int)v20 ^ (i + 49)) >> 24]
        ^ qword_1D8D68[BYTE4(v13)]
        ^ qword_1D9568[BYTE5(v14)]
        ^ qword_1D9D68[BYTE6(v15)];
    v18 = qword_1DA568[HIBYTE(HIDWORD(v9))]
        ^ qword_1D6D68[(unsigned __int8)v10]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v19 ^ (i + 33)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v20 ^ (i + 49)) >> 16)]
        ^ qword_1D8568[((unsigned int)v21 ^ (i + 65)) >> 24]
        ^ qword_1D8D68[BYTE4(v14)]
        ^ qword_1D9568[BYTE5(v15)]
        ^ qword_1D9D68[BYTE6(v16)];
    v19 = qword_1DA568[HIBYTE(HIDWORD(v10))]
        ^ qword_1D6D68[(unsigned __int8)v11]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v20 ^ (i + 49)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v21 ^ (i + 65)) >> 16)]
        ^ qword_1D8568[((unsigned int)v22 ^ (i + 81)) >> 24]
        ^ qword_1D8D68[BYTE4(v15)]
        ^ qword_1D9568[BYTE5(v16)]
        ^ qword_1D9D68[BYTE6(v9)];
    v20 = qword_1DA568[HIBYTE(HIDWORD(v11))]
        ^ qword_1D6D68[(unsigned __int8)v12]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v21 ^ (i + 65)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v22 ^ (i + 81)) >> 16)]
        ^ qword_1D8568[((unsigned int)v23 ^ (i + 97)) >> 24]
        ^ qword_1D8D68[BYTE4(v16)]
        ^ qword_1D9568[BYTE5(v9)]
        ^ qword_1D9D68[BYTE6(v10)];
    v21 = qword_1DA568[HIBYTE(HIDWORD(v12))]
        ^ qword_1D6D68[(unsigned __int8)v13]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v22 ^ (i + 81)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v23 ^ (i + 97)) >> 16)]
        ^ qword_1D8568[((unsigned int)v24 ^ (i + 113)) >> 24]
        ^ qword_1D8D68[BYTE4(v9)]
        ^ qword_1D9568[BYTE5(v10)]
        ^ qword_1D9D68[BYTE6(v11)];
    v22 = qword_1DA568[HIBYTE(HIDWORD(v13))]
        ^ qword_1D6D68[(unsigned __int8)v14]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v23 ^ (i + 97)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v24 ^ (i + 113)) >> 16)]
        ^ qword_1D8568[BYTE3(v9)]
        ^ qword_1D8D68[BYTE4(v10)]
        ^ qword_1D9568[BYTE5(v11)]
        ^ qword_1D9D68[BYTE6(v12)];
    v23 = qword_1DA568[HIBYTE(HIDWORD(v14))]
        ^ qword_1D6D68[(unsigned __int8)v15]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v24 ^ (i + 113)) >> 8)]
        ^ qword_1D7D68[BYTE2(v9)]
        ^ qword_1D8568[BYTE3(v10)]
        ^ qword_1D8D68[BYTE4(v11)]
        ^ qword_1D9568[BYTE5(v12)]
        ^ qword_1D9D68[BYTE6(v13)];
    v24 = qword_1DA568[HIBYTE(HIDWORD(v15))]
        ^ qword_1D6D68[(unsigned __int8)v16]
        ^ qword_1D7568[BYTE1(v9)]
        ^ qword_1D7D68[BYTE2(v10)]
        ^ qword_1D8568[BYTE3(v11)]
        ^ qword_1D8D68[BYTE4(v12)]
        ^ qword_1D9568[BYTE5(v13)]
        ^ qword_1D9D68[BYTE6(v14)];
    v9 = v17;
    v10 = v18;
    v11 = v19;
    v12 = v20;
    v13 = v21;
    v14 = v22;
    v15 = v23;
    v16 = v24;
  }
  for ( j = 0; j <= 7; ++j )
    *(_QWORD *)&v35[8 * j - 176] ^= *(&v9 + j);
  for ( k = 0; k <= 3; ++k )
  {
    v5 = *(_QWORD *)&v35[8 * k - 144];
    sub_172158((int)&v26[8 * k], (int)&v26[8 * k], v5, SHIDWORD(v5));
  }
  memcpy(a4, &v26[32 - n], n);
  return sub_172230((_DWORD *)a1, 8 * n);
}
