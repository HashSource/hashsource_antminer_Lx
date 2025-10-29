int __fastcall set_core_bus_reset(int a1)
{
  int v2; // r4
  unsigned __int8 v3; // r1
  _DWORD v5[7]; // [sp+28h] [bp-20h] BYREF
  int v6; // [sp+44h] [bp-4h]
  char v7[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 140));
  v2 = 0;
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "set_core_bus_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "set_core_bus_reset",
    18,
    11695,
    60,
    v7);
  do
  {
    sub_5C8F0(a1, v2, 201, 0);
    usleep((__useconds_t)&stru_1869C.st_value);
    v3 = v2++;
    sub_5C8F0(a1, v3, 201, 1);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v2 != 16 );
  return 0;
}
