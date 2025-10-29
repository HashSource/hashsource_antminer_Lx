int __fastcall scrypt_regenhash(_DWORD *a1, int a2)
{
  _DWORD v5[150]; // [sp+10h] [bp+10h] BYREF
  _DWORD v6[20]; // [sp+20210h] [bp+20210h] BYREF
  _DWORD *v7; // [sp+20260h] [bp+20260h]
  unsigned int *v8; // [sp+20264h] [bp+20264h]

  v5[0] = 0;
  memset(&v5[1], 0, (size_t)&stru_201FC);
  v8 = (unsigned int *)(a2 + 76);
  v7 = a1;
  sub_FF634((unsigned int)v6, a2, 0x13u);
  v6[19] = sub_FF61C(*v8);
  sub_10366C(v6, (int)v5, v7);
  return sub_10388C((int)v7, (int)v7);
}
