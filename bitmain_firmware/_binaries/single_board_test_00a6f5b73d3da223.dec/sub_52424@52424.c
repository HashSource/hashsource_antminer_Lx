int __fastcall sub_52424(int a1, char a2, int a3)
{
  _BYTE v7[16]; // [sp+20h] [bp+10h] BYREF
  _DWORD v8[5]; // [sp+1020h] [bp+1010h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_CKB", 20, 80, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_open_cores_CKB",
    26,
    315,
    40,
    v7);
  memset(v8, 0, 0x10u);
  v8[2] = 5242881;
  v8[0] = a3;
  BYTE1(v8[3]) = 20;
  LOBYTE(v8[3]) = a2;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v8, 20000, 0);
}
