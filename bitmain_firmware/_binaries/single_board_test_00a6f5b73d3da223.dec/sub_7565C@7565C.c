int __fastcall sub_7565C(const void *a1, const void *a2, const void *a3, int a4)
{
  _BYTE dest[32]; // [sp+10h] [bp+10h] BYREF
  _BYTE v9[8]; // [sp+30h] [bp+30h] BYREF
  _BYTE v10[32]; // [sp+50h] [bp+50h] BYREF

  memcpy(dest, a1, sizeof(dest));
  memcpy(v9, a2, sizeof(v9));
  sub_7563C((int)dest, (int)dest, 0x28u);
  memcpy(v10, a3, sizeof(v10));
  return sub_7561C(a4, (int)dest, 0x60u);
}
