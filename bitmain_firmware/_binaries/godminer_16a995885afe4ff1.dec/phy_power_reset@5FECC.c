int __fastcall phy_power_reset(int a1)
{
  int v2; // r8
  char v3; // r4
  char v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 140));
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s...", "phy_power_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "phy_power_reset",
    15,
    628,
    60,
    v8);
  sub_5C898(a1, 80, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  do
  {
    v3 = v2;
    v4 = v2++;
    sub_5C944(a1, v4, 1u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 2u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 5u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 6u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 9u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0xAu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0xDu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0xEu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 3u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 7u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 8u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0xBu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C944(a1, v3, 0xFu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v2 != 8 );
  return 0;
}
