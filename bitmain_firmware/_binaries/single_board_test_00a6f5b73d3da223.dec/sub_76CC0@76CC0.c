int __fastcall sub_76CC0(int a1, char a2)
{
  _BYTE v5[16]; // [sp+18h] [bp+8h] BYREF
  _DWORD v6[5]; // [sp+1018h] [bp+1008h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s", "ChipSetting_close_cores_ETH");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_close_cores_ETH",
    27,
    329,
    20,
    v5);
  memset(v6, 0, 0x10u);
  v6[2] = 851969;
  v6[0] = 0;
  BYTE1(v6[3]) = 16;
  LOBYTE(v6[3]) = a2;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v6, 20000, 0);
}
