int __fastcall scrypt_test(int a1, int a2, unsigned int a3)
{
  _BYTE v5[131596]; // [sp-20208h] [bp-20208h] BYREF
  unsigned int v6; // [sp+4h] [bp+4h]
  int v7; // [sp+8h] [bp+8h]
  int v8; // [sp+Ch] [bp+Ch]
  _DWORD v9[8]; // [sp+14h] [bp+14h] BYREF
  _DWORD v10[20]; // [sp+34h] [bp+34h] BYREF
  unsigned int v11; // [sp+84h] [bp+84h]
  _BYTE *v12; // [sp+88h] [bp+88h]
  unsigned int v13; // [sp+8Ch] [bp+8Ch]

  v8 = a1;
  v7 = a2;
  v6 = a3;
  v13 = *(_DWORD *)(a2 + 28);
  sub_FF634((unsigned int)v10, a1, 0x13u);
  v10[19] = sub_FF61C(v6);
  v12 = v5;
  sub_10366C(v10, (int)v5, v9);
  v11 = sub_FF61C(v9[7]);
  if ( v11 <= 0xFFFF )
    return v11 <= v13;
  else
    return -1;
}
