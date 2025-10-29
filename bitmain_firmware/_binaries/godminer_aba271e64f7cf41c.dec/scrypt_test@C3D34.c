int __fastcall scrypt_test(int a1, int a2, unsigned int a3)
{
  _BYTE v5[131596]; // [sp-20208h] [bp-2029Ch] BYREF
  unsigned int v6; // [sp+4h] [bp-90h]
  int v7; // [sp+8h] [bp-8Ch]
  int v8; // [sp+Ch] [bp-88h]
  _DWORD v9[8]; // [sp+14h] [bp-80h] BYREF
  _DWORD v10[20]; // [sp+34h] [bp-60h] BYREF
  unsigned int v11; // [sp+84h] [bp-10h]
  _BYTE *v12; // [sp+88h] [bp-Ch]
  unsigned int v13; // [sp+8Ch] [bp-8h]

  v8 = a1;
  v7 = a2;
  v6 = a3;
  v13 = convirt_total_rate(*(_DWORD *)(a2 + 28));
  sub_BF2A4((unsigned int)v10, v8, 0x13u);
  v10[19] = sub_BF258(v6);
  v12 = v5;
  sub_C38AC(v10, (int)v5, v9);
  v11 = sub_BF258(v9[7]);
  if ( v11 <= 0xFFFF )
    return v11 <= v13;
  else
    return -1;
}
