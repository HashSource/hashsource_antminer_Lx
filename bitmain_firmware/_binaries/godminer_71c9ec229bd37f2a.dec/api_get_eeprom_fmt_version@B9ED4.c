int __fastcall api_get_eeprom_fmt_version(int a1)
{
  unsigned __int8 v2; // [sp+7h] [bp-5h] BYREF

  v2 = 0;
  sub_B8218(dword_16E49C[a1 + 2], &v2);
  return v2;
}
