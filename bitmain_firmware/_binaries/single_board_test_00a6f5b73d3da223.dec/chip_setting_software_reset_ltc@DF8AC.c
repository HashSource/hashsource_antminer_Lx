int __fastcall chip_setting_software_reset_ltc(int a1)
{
  _BYTE v3[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v4[5]; // [sp+101Ch] [bp+100Ch] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v3);
  memset(v4, 0, 0x10u);
  v4[2] = 3407873;
  v4[0] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
