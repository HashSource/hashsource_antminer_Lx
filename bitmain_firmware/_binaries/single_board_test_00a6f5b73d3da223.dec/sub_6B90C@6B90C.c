int __fastcall sub_6B90C(int a1)
{
  _BYTE v3[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v4[5]; // [sp+101Ch] [bp+100Ch] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_GRIN29", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_software_reset_GRIN29",
    33,
    108,
    20,
    v3);
  memset(v4, 0, 0x10u);
  v4[2] = 4456449;
  v4[0] = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
