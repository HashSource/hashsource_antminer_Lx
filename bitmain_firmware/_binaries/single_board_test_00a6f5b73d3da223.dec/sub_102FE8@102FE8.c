int __fastcall sub_102FE8(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD dest[4]; // [sp+14h] [bp+14h] BYREF
  _DWORD v8[20]; // [sp+24h] [bp+24h] BYREF
  int v9; // [sp+74h] [bp+74h] BYREF
  int v10; // [sp+78h] [bp+78h]
  int v11; // [sp+7Ch] [bp+7Ch]
  int v12; // [sp+80h] [bp+80h]
  int v13; // [sp+84h] [bp+84h]
  int v14; // [sp+88h] [bp+88h]
  int v15; // [sp+8Ch] [bp+8Ch]
  int v16; // [sp+90h] [bp+90h]
  unsigned int i; // [sp+94h] [bp+94h]
  _DWORD vars0[4]; // [sp+98h] [bp+98h] BYREF

  sub_102CF4(&v9);
  sub_FF678(&v9, a1, 1);
  memcpy(dest, a1 + 16, sizeof(dest));
  memcpy(v8, &unk_1D3ED8, 0x30u);
  sub_FF678(&v9, dest, 1);
  v8[12] = v9;
  v8[13] = v10;
  v8[14] = v11;
  v8[15] = v12;
  v8[16] = v13;
  v8[17] = v14;
  v8[18] = v15;
  v8[19] = v16;
  sub_102CF4(a3);
  for ( i = 0; i <= 7; ++i )
    vars0[i - 33] = vars0[i - 17] ^ 0x5C5C5C5C;
  while ( i <= 0xF )
    vars0[i++ - 33] = 1549556828;
  sub_FF678(a3, dest, 0);
  sub_102CF4(&v9);
  for ( i = 0; i <= 7; ++i )
    vars0[i - 33] = vars0[i - 17] ^ 0x36363636;
  while ( i <= 0xF )
    vars0[i++ - 33] = 909522486;
  sub_FF678(&v9, dest, 0);
  sub_FF678(&v9, a2, 1);
  sub_FF678(&v9, a2 + 16, 1);
  sub_FF678(&v9, dword_1D3F58, 0);
  dest[0] = v9;
  dest[1] = v10;
  dest[2] = v11;
  dest[3] = v12;
  v8[0] = v13;
  v8[1] = v14;
  v8[2] = v15;
  v8[3] = v16;
  memcpy(&v8[4], &unk_1D3F08, 0x20u);
  return sub_FF678(a3, dest, 0);
}
