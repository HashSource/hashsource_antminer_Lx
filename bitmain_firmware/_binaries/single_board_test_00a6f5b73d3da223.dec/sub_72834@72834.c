int __fastcall sub_72834(int a1, int a2)
{
  _BYTE v5[24]; // [sp+18h] [bp+8h] BYREF
  _DWORD v6[6]; // [sp+1018h] [bp+1008h] BYREF

  memset(v6, 0, 0x10u);
  v6[2] = 4194305;
  v6[4] = a2;
  v6[0] = a2;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set analog value %08x", v6[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_analog_mux_AE",
    25,
    480,
    60,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
