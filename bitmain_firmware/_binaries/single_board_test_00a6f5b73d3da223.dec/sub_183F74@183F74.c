_DWORD *__fastcall sub_183F74(int a1, char a2, char a3, void *a4, size_t n)
{
  _QWORD v8[16]; // [sp+700h] [bp+700h] BYREF
  __int64 v9; // [sp+780h] [bp+780h]
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
  _QWORD dest[16]; // [sp+800h] [bp+800h] BYREF
  char v26[136]; // [sp+884h] [bp+884h] BYREF
  int v27; // [sp+90Ch] [bp+90Ch]
  unsigned int v28; // [sp+910h] [bp+910h]
  int v29; // [sp+914h] [bp+914h]
  int i; // [sp+918h] [bp+918h]
  unsigned int j; // [sp+91Ch] [bp+91Ch]
  __int64 v32; // [sp+920h] [bp+920h]
  unsigned int k; // [sp+928h] [bp+928h]
  size_t v34; // [sp+92Ch] [bp+92Ch]

  v29 = a1;
  v28 = *(_DWORD *)(a1 + 128);
  v27 = 128 >> a3;
  v26[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v28 > 0x77 )
  {
    v34 = 256 - v28;
    v32 = *(_QWORD *)(a1 + 264) + 2LL;
  }
  else
  {
    v34 = 128 - v28;
    v32 = *(_QWORD *)(a1 + 264) + 1LL;
  }
  memset(&v26[1], 0, v34 - 9);
  sub_17209C(&v26[v34 - 8], (int)&v26[v34 - 8], v32, SHIDWORD(v32));
  sub_179BCC(a1, v26, v34);
  memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
  memcpy(v8, dest, sizeof(v8));
  for ( i = 0; i <= 13; i += 2 )
  {
    v8[0] ^= i;
    v8[1] ^= i + 16;
    v8[2] ^= i + 32;
    v8[3] ^= i + 48;
    v8[4] ^= i + 64;
    v8[5] ^= i + 80;
    v8[6] ^= i + 96;
    v8[7] ^= i + 112;
    v8[8] ^= i + 128;
    v8[9] ^= i + 144;
    v8[10] ^= i + 160;
    v8[11] ^= i + 176;
    v8[12] ^= i + 192;
    v8[13] ^= i + 208;
    v8[14] ^= i + 224;
    v8[15] ^= i + 240;
    v9 = qword_1D6D68[LOBYTE(v8[0])]
       ^ qword_1D7568[BYTE1(v8[1])]
       ^ qword_1D7D68[BYTE2(v8[2])]
       ^ qword_1D8568[BYTE3(v8[3])]
       ^ qword_1D8D68[BYTE4(v8[4])]
       ^ qword_1D9568[BYTE5(v8[5])]
       ^ qword_1D9D68[BYTE6(v8[6])]
       ^ qword_1DA568[HIBYTE(HIDWORD(v8[11]))];
    v10 = qword_1D6D68[LOBYTE(v8[1])]
        ^ qword_1D7568[BYTE1(v8[2])]
        ^ qword_1D7D68[BYTE2(v8[3])]
        ^ qword_1D8568[BYTE3(v8[4])]
        ^ qword_1D8D68[BYTE4(v8[5])]
        ^ qword_1D9568[BYTE5(v8[6])]
        ^ qword_1D9D68[BYTE6(v8[7])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[12]))];
    v11 = qword_1D6D68[LOBYTE(v8[2])]
        ^ qword_1D7568[BYTE1(v8[3])]
        ^ qword_1D7D68[BYTE2(v8[4])]
        ^ qword_1D8568[BYTE3(v8[5])]
        ^ qword_1D8D68[BYTE4(v8[6])]
        ^ qword_1D9568[BYTE5(v8[7])]
        ^ qword_1D9D68[BYTE6(v8[8])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[13]))];
    v12 = qword_1D6D68[LOBYTE(v8[3])]
        ^ qword_1D7568[BYTE1(v8[4])]
        ^ qword_1D7D68[BYTE2(v8[5])]
        ^ qword_1D8568[BYTE3(v8[6])]
        ^ qword_1D8D68[BYTE4(v8[7])]
        ^ qword_1D9568[BYTE5(v8[8])]
        ^ qword_1D9D68[BYTE6(v8[9])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[14]))];
    v13 = qword_1D6D68[LOBYTE(v8[4])]
        ^ qword_1D7568[BYTE1(v8[5])]
        ^ qword_1D7D68[BYTE2(v8[6])]
        ^ qword_1D8568[BYTE3(v8[7])]
        ^ qword_1D8D68[BYTE4(v8[8])]
        ^ qword_1D9568[BYTE5(v8[9])]
        ^ qword_1D9D68[BYTE6(v8[10])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[15]))];
    v14 = qword_1D6D68[LOBYTE(v8[5])]
        ^ qword_1D7568[BYTE1(v8[6])]
        ^ qword_1D7D68[BYTE2(v8[7])]
        ^ qword_1D8568[BYTE3(v8[8])]
        ^ qword_1D8D68[BYTE4(v8[9])]
        ^ qword_1D9568[BYTE5(v8[10])]
        ^ qword_1D9D68[BYTE6(v8[11])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[0]))];
    v15 = qword_1D6D68[LOBYTE(v8[6])]
        ^ qword_1D7568[BYTE1(v8[7])]
        ^ qword_1D7D68[BYTE2(v8[8])]
        ^ qword_1D8568[BYTE3(v8[9])]
        ^ qword_1D8D68[BYTE4(v8[10])]
        ^ qword_1D9568[BYTE5(v8[11])]
        ^ qword_1D9D68[BYTE6(v8[12])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[1]))];
    v16 = qword_1D6D68[LOBYTE(v8[7])]
        ^ qword_1D7568[BYTE1(v8[8])]
        ^ qword_1D7D68[BYTE2(v8[9])]
        ^ qword_1D8568[BYTE3(v8[10])]
        ^ qword_1D8D68[BYTE4(v8[11])]
        ^ qword_1D9568[BYTE5(v8[12])]
        ^ qword_1D9D68[BYTE6(v8[13])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[2]))];
    v17 = qword_1D6D68[LOBYTE(v8[8])]
        ^ qword_1D7568[BYTE1(v8[9])]
        ^ qword_1D7D68[BYTE2(v8[10])]
        ^ qword_1D8568[BYTE3(v8[11])]
        ^ qword_1D8D68[BYTE4(v8[12])]
        ^ qword_1D9568[BYTE5(v8[13])]
        ^ qword_1D9D68[BYTE6(v8[14])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[3]))];
    v18 = qword_1D6D68[LOBYTE(v8[9])]
        ^ qword_1D7568[BYTE1(v8[10])]
        ^ qword_1D7D68[BYTE2(v8[11])]
        ^ qword_1D8568[BYTE3(v8[12])]
        ^ qword_1D8D68[BYTE4(v8[13])]
        ^ qword_1D9568[BYTE5(v8[14])]
        ^ qword_1D9D68[BYTE6(v8[15])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[4]))];
    v19 = qword_1D6D68[LOBYTE(v8[10])]
        ^ qword_1D7568[BYTE1(v8[11])]
        ^ qword_1D7D68[BYTE2(v8[12])]
        ^ qword_1D8568[BYTE3(v8[13])]
        ^ qword_1D8D68[BYTE4(v8[14])]
        ^ qword_1D9568[BYTE5(v8[15])]
        ^ qword_1D9D68[BYTE6(v8[0])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[5]))];
    v20 = qword_1D6D68[LOBYTE(v8[11])]
        ^ qword_1D7568[BYTE1(v8[12])]
        ^ qword_1D7D68[BYTE2(v8[13])]
        ^ qword_1D8568[BYTE3(v8[14])]
        ^ qword_1D8D68[BYTE4(v8[15])]
        ^ qword_1D9568[BYTE5(v8[0])]
        ^ qword_1D9D68[BYTE6(v8[1])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[6]))];
    v21 = qword_1D6D68[LOBYTE(v8[12])]
        ^ qword_1D7568[BYTE1(v8[13])]
        ^ qword_1D7D68[BYTE2(v8[14])]
        ^ qword_1D8568[BYTE3(v8[15])]
        ^ qword_1D8D68[BYTE4(v8[0])]
        ^ qword_1D9568[BYTE5(v8[1])]
        ^ qword_1D9D68[BYTE6(v8[2])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[7]))];
    v22 = qword_1D6D68[LOBYTE(v8[13])]
        ^ qword_1D7568[BYTE1(v8[14])]
        ^ qword_1D7D68[BYTE2(v8[15])]
        ^ qword_1D8568[BYTE3(v8[0])]
        ^ qword_1D8D68[BYTE4(v8[1])]
        ^ qword_1D9568[BYTE5(v8[2])]
        ^ qword_1D9D68[BYTE6(v8[3])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[8]))];
    v23 = qword_1D6D68[LOBYTE(v8[14])]
        ^ qword_1D7568[BYTE1(v8[15])]
        ^ qword_1D7D68[BYTE2(v8[0])]
        ^ qword_1D8568[BYTE3(v8[1])]
        ^ qword_1D8D68[BYTE4(v8[2])]
        ^ qword_1D9568[BYTE5(v8[3])]
        ^ qword_1D9D68[BYTE6(v8[4])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[9]))];
    v24 = qword_1D6D68[LOBYTE(v8[15])]
        ^ qword_1D7568[BYTE1(v8[0])]
        ^ qword_1D7D68[BYTE2(v8[1])]
        ^ qword_1D8568[BYTE3(v8[2])]
        ^ qword_1D8D68[BYTE4(v8[3])]
        ^ qword_1D9568[BYTE5(v8[4])]
        ^ qword_1D9D68[BYTE6(v8[5])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[10]))];
    v8[0] = v9 ^ (i + 1);
    v8[1] = v10 ^ (i + 17);
    v8[2] = v11 ^ (i + 33);
    v8[3] = v12 ^ (i + 49);
    v8[4] = v13 ^ (i + 65);
    v8[5] = v14 ^ (i + 81);
    v8[6] = v15 ^ (i + 97);
    v8[7] = v16 ^ (i + 113);
    v8[8] = v17 ^ (i + 129);
    v8[9] = v18 ^ (i + 145);
    v8[10] = v19 ^ (i + 161);
    v8[11] = v20 ^ (i + 177);
    v8[12] = v21 ^ (i + 193);
    v8[13] = v22 ^ (i + 209);
    v8[14] = v23 ^ (i + 225);
    v8[15] = v24 ^ (i + 241);
    v9 = qword_1D6D68[LOBYTE(v8[0])]
       ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v10 ^ (i + 17)) >> 8)]
       ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v11 ^ (i + 33)) >> 16)]
       ^ qword_1D8568[((unsigned int)v12 ^ (i + 49)) >> 24]
       ^ qword_1D8D68[BYTE4(v8[4])]
       ^ qword_1D9568[BYTE5(v8[5])]
       ^ qword_1D9D68[BYTE6(v8[6])]
       ^ qword_1DA568[HIBYTE(HIDWORD(v8[11]))];
    v10 = qword_1D6D68[LOBYTE(v8[1])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v11 ^ (i + 33)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v12 ^ (i + 49)) >> 16)]
        ^ qword_1D8568[((unsigned int)v13 ^ (i + 65)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[5])]
        ^ qword_1D9568[BYTE5(v8[6])]
        ^ qword_1D9D68[BYTE6(v8[7])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[12]))];
    v11 = qword_1D6D68[LOBYTE(v8[2])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v12 ^ (i + 49)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v13 ^ (i + 65)) >> 16)]
        ^ qword_1D8568[((unsigned int)v14 ^ (i + 81)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[6])]
        ^ qword_1D9568[BYTE5(v8[7])]
        ^ qword_1D9D68[BYTE6(v8[8])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[13]))];
    v12 = qword_1D6D68[LOBYTE(v8[3])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v13 ^ (i + 65)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v14 ^ (i + 81)) >> 16)]
        ^ qword_1D8568[((unsigned int)v15 ^ (i + 97)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[7])]
        ^ qword_1D9568[BYTE5(v8[8])]
        ^ qword_1D9D68[BYTE6(v8[9])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[14]))];
    v13 = qword_1D6D68[LOBYTE(v8[4])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v14 ^ (i + 81)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v15 ^ (i + 97)) >> 16)]
        ^ qword_1D8568[((unsigned int)v16 ^ (i + 113)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[8])]
        ^ qword_1D9568[BYTE5(v8[9])]
        ^ qword_1D9D68[BYTE6(v8[10])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[15]))];
    v14 = qword_1D6D68[LOBYTE(v8[5])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v15 ^ (i + 97)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v16 ^ (i + 113)) >> 16)]
        ^ qword_1D8568[((unsigned int)v17 ^ (i + 129)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[9])]
        ^ qword_1D9568[BYTE5(v8[10])]
        ^ qword_1D9D68[BYTE6(v8[11])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[0]))];
    v15 = qword_1D6D68[LOBYTE(v8[6])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v16 ^ (i + 113)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v17 ^ (i + 129)) >> 16)]
        ^ qword_1D8568[((unsigned int)v18 ^ (i + 145)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[10])]
        ^ qword_1D9568[BYTE5(v8[11])]
        ^ qword_1D9D68[BYTE6(v8[12])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[1]))];
    v16 = qword_1D6D68[LOBYTE(v8[7])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v17 ^ (i + 129)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v18 ^ (i + 145)) >> 16)]
        ^ qword_1D8568[((unsigned int)v19 ^ (i + 161)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[11])]
        ^ qword_1D9568[BYTE5(v8[12])]
        ^ qword_1D9D68[BYTE6(v8[13])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[2]))];
    v17 = qword_1D6D68[LOBYTE(v8[8])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v18 ^ (i + 145)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v19 ^ (i + 161)) >> 16)]
        ^ qword_1D8568[((unsigned int)v20 ^ (i + 177)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[12])]
        ^ qword_1D9568[BYTE5(v8[13])]
        ^ qword_1D9D68[BYTE6(v8[14])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[3]))];
    v18 = qword_1D6D68[LOBYTE(v8[9])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v19 ^ (i + 161)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v20 ^ (i + 177)) >> 16)]
        ^ qword_1D8568[((unsigned int)v21 ^ (i + 193)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[13])]
        ^ qword_1D9568[BYTE5(v8[14])]
        ^ qword_1D9D68[BYTE6(v8[15])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[4]))];
    v19 = qword_1D6D68[LOBYTE(v8[10])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v20 ^ (i + 177)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v21 ^ (i + 193)) >> 16)]
        ^ qword_1D8568[((unsigned int)v22 ^ (i + 209)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[14])]
        ^ qword_1D9568[BYTE5(v8[15])]
        ^ qword_1D9D68[BYTE6(v8[0])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[5]))];
    v20 = qword_1D6D68[LOBYTE(v8[11])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v21 ^ (i + 193)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v22 ^ (i + 209)) >> 16)]
        ^ qword_1D8568[((unsigned int)v23 ^ (i + 225)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[15])]
        ^ qword_1D9568[BYTE5(v8[0])]
        ^ qword_1D9D68[BYTE6(v8[1])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[6]))];
    v21 = qword_1D6D68[LOBYTE(v8[12])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v22 ^ (i + 209)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v23 ^ (i + 225)) >> 16)]
        ^ qword_1D8568[((unsigned int)v24 ^ (i + 241)) >> 24]
        ^ qword_1D8D68[BYTE4(v8[0])]
        ^ qword_1D9568[BYTE5(v8[1])]
        ^ qword_1D9D68[BYTE6(v8[2])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[7]))];
    v22 = qword_1D6D68[LOBYTE(v8[13])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v23 ^ (i + 225)) >> 8)]
        ^ qword_1D7D68[(unsigned __int8)(((unsigned int)v24 ^ (i + 241)) >> 16)]
        ^ qword_1D8568[BYTE3(v8[0])]
        ^ qword_1D8D68[BYTE4(v8[1])]
        ^ qword_1D9568[BYTE5(v8[2])]
        ^ qword_1D9D68[BYTE6(v8[3])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[8]))];
    v23 = qword_1D6D68[LOBYTE(v8[14])]
        ^ qword_1D7568[(unsigned __int8)((unsigned __int16)(v24 ^ (i + 241)) >> 8)]
        ^ qword_1D7D68[BYTE2(v8[0])]
        ^ qword_1D8568[BYTE3(v8[1])]
        ^ qword_1D8D68[BYTE4(v8[2])]
        ^ qword_1D9568[BYTE5(v8[3])]
        ^ qword_1D9D68[BYTE6(v8[4])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[9]))];
    v24 = qword_1D6D68[LOBYTE(v8[15])]
        ^ qword_1D7568[BYTE1(v8[0])]
        ^ qword_1D7D68[BYTE2(v8[1])]
        ^ qword_1D8568[BYTE3(v8[2])]
        ^ qword_1D8D68[BYTE4(v8[3])]
        ^ qword_1D9568[BYTE5(v8[4])]
        ^ qword_1D9D68[BYTE6(v8[5])]
        ^ qword_1DA568[HIBYTE(HIDWORD(v8[10]))];
    v8[0] = v9;
    v8[1] = v10;
    v8[2] = v11;
    v8[3] = v12;
    v8[4] = v13;
    v8[5] = v14;
    v8[6] = v15;
    v8[7] = v16;
    v8[8] = v17;
    v8[9] = v18;
    v8[10] = v19;
    v8[11] = v20;
    v8[12] = v21;
    v8[13] = v22;
    v8[14] = v23;
    v8[15] = v24;
  }
  for ( j = 0; j <= 0xF; ++j )
    dest[j] ^= v8[j];
  for ( k = 0; k <= 7; ++k )
    sub_172158((int)&v26[8 * k], (int)&v26[8 * k], dest[k + 8], HIDWORD(dest[k + 8]));
  memcpy(a4, &v26[64 - n], n);
  return sub_179B38((_DWORD *)a1, 8 * n);
}
