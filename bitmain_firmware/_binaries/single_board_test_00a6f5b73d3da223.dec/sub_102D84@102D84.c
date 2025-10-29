void *__fastcall sub_102D84(_DWORD *a1, int a2)
{
  void *result; // r0
  int v5; // [sp+Ch] [bp+Ch] BYREF
  int v6; // [sp+10h] [bp+10h]
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+1Ch] [bp+1Ch]
  int v10; // [sp+20h] [bp+20h]
  int v11; // [sp+24h] [bp+24h]
  int v12; // [sp+28h] [bp+28h]
  _DWORD v13[8]; // [sp+2Ch] [bp+2Ch] BYREF
  _DWORD dest[4]; // [sp+4Ch] [bp+4Ch] BYREF
  _BYTE v15[48]; // [sp+5Ch] [bp+5Ch] BYREF
  _DWORD v16[8]; // [sp+8Ch] [bp+8Ch]
  _DWORD v17[8]; // [sp+ACh] [bp+ACh] BYREF
  _DWORD v18[8]; // [sp+CCh] [bp+CCh] BYREF
  _DWORD v19[8]; // [sp+ECh] [bp+ECh] BYREF
  _BYTE v20[32]; // [sp+10Ch] [bp+10Ch] BYREF
  _DWORD v21[8]; // [sp+12Ch] [bp+12Ch] BYREF
  _DWORD v22[5]; // [sp+14Ch] [bp+14Ch] BYREF
  int v23; // [sp+160h] [bp+160h] BYREF
  unsigned int i; // [sp+18Ch] [bp+18Ch]

  sub_102CF4(v17);
  sub_FF678(v17, a1, 1);
  memcpy(dest, a1 + 16, sizeof(dest));
  memcpy(v15, &unk_1D3ED8, sizeof(v15));
  sub_FF678(v17, dest, 1);
  v16[0] = v17[0];
  v16[1] = v17[1];
  v16[2] = v17[2];
  v16[3] = v17[3];
  v16[4] = v17[4];
  v16[5] = v17[5];
  v16[6] = v17[6];
  v16[7] = v17[7];
  sub_102CF4(v21);
  for ( i = 0; i <= 7; ++i )
    dest[i] = v16[i] ^ 0x36363636;
  while ( i <= 0xF )
    dest[i++] = 909522486;
  sub_FF678(v21, dest, 0);
  sub_FF678(v21, a1, 1);
  sub_FF634((unsigned int)v22, (int)(a1 + 16), 4u);
  sub_FF634((unsigned int)&v23, (int)&unk_1D3F2C, 0xBu);
  sub_102CF4(v18);
  for ( i = 0; i <= 7; ++i )
    dest[i] = v16[i] ^ 0x5C5C5C5C;
  while ( i <= 0xF )
    dest[i++] = 1549556828;
  sub_FF678(v18, dest, 0);
  result = memcpy(v20, &unk_1D3F08, sizeof(v20));
  for ( i = 0; i <= 3; ++i )
  {
    v5 = v21[0];
    v6 = v21[1];
    v7 = v21[2];
    v8 = v21[3];
    v9 = v21[4];
    v10 = v21[5];
    v11 = v21[6];
    v12 = v21[7];
    v22[4] = i + 1;
    sub_FF678(&v5, v22, 0);
    v19[0] = v5;
    v19[1] = v6;
    v19[2] = v7;
    v19[3] = v8;
    v19[4] = v9;
    v19[5] = v10;
    v19[6] = v11;
    v19[7] = v12;
    v13[0] = v18[0];
    v13[1] = v18[1];
    v13[2] = v18[2];
    v13[3] = v18[3];
    v13[4] = v18[4];
    v13[5] = v18[5];
    v13[6] = v18[6];
    v13[7] = v18[7];
    sub_FF678(v13, v19, 0);
    result = (void *)sub_FF634(32 * i + a2, (int)v13, 8u);
  }
  return result;
}
