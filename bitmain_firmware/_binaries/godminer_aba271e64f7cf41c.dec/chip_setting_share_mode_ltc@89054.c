int __fastcall chip_setting_share_mode_ltc(int a1)
{
  _DWORD s[5]; // [sp+Ch] [bp-18h] BYREF

  memset(s, 0, 0x10u);
  s[2] = 257;
  s[0] = 1279;
  LOBYTE(s[3]) = -1;
  BYTE2(s[3]) = 1;
  s[4] = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  usleep(0x3E8u);
  return 0;
}
