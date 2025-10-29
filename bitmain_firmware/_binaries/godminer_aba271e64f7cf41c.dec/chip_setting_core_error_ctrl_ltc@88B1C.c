int __fastcall chip_setting_core_error_ctrl_ltc(int a1)
{
  _DWORD s[4]; // [sp+Ch] [bp-18h] BYREF
  int v4; // [sp+1Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  puts("chip_setting_core_error_ctrl_ltc");
  s[2] = 11010049;
  s[0] = -2140927048;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x3E8u);
  return v4;
}
