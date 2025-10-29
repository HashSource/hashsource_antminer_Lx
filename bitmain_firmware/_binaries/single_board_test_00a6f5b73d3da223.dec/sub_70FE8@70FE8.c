int __fastcall sub_70FE8(int a1, char a2)
{
  _BYTE v5[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[5]; // [sp+101Ch] [bp+100Ch] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_one_asic_AE", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_software_reset_one_asic_AE",
    38,
    121,
    20,
    v5);
  memset(v6, 0, 0x10u);
  LOBYTE(v6[2]) = 0;
  BYTE1(v6[2]) = *(_DWORD *)(a1 + 240) * a2;
  HIWORD(v6[2]) = 68;
  v6[0] = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
