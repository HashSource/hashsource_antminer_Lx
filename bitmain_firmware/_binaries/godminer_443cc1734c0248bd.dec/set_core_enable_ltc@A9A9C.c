int __fastcall set_core_enable_ltc(int a1, int a2, __useconds_t a3)
{
  int v3; // r5
  int v7; // r10
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    *(_BYTE *)(a2 + 12) = v3;
    *(_BYTE *)(a2 + 15) = 0;
    *(_DWORD *)a2 = 34047;
    *(_WORD *)(a2 + 10) = 0;
    *(_BYTE *)(a2 + 14) = 0;
    v7 = (*(int (__fastcall **)(int, int))(a1 + 164))(a1, a2);
    if ( v7 )
      break;
    usleep(a3);
    if ( *(unsigned __int8 *)(a2 + 13) <= ++v3 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "%s failed, reg:%02x, core_id:%d",
    "set_core_enable_ltc",
    *(unsigned __int16 *)(a2 + 10),
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_reg_io_ltc.c",
    158,
    "set_core_enable_ltc",
    19,
    408,
    100,
    v9);
  return v7;
}
