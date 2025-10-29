int __fastcall chip_setting_misc_dcr(int a1)
{
  _BYTE v3[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v4[5]; // [sp+101Ch] [bp+100Ch] BYREF
  char v5; // [sp+1037h] [bp+1027h]

  v5 = 26;
  memset(v4, 0, 0x10u);
  v4[2] = 1835009;
  v4[4] = 5381904;
  v4[0] = 5381904;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "set_misc value %08x", v4[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/chip_setting_dcr.c",
    88,
    "chip_setting_misc_dcr",
    21,
    93,
    60,
    v3);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
