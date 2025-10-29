int __fastcall scrypt_regenhash(_DWORD *a1, int a2)
{
  _BYTE v3[131584]; // [sp+10h] [bp-2025Ch] BYREF
  _DWORD v4[20]; // [sp+20210h] [bp-5Ch] BYREF
  _DWORD *v5; // [sp+20260h] [bp-Ch]
  unsigned int *v6; // [sp+20264h] [bp-8h]

  memset(v3, 0, sizeof(v3));
  v6 = (unsigned int *)(a2 + 76);
  v5 = a1;
  sub_BF2A4((unsigned int)v4, a2, 0x13u);
  v4[19] = sub_BF258(*v6);
  sub_C38AC(v4, (int)v3, v5);
  return sub_C3B68((int)v5, (int)v5);
}
