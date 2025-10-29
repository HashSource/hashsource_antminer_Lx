int __fastcall check_d54_one_lane(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r5
  int v9; // r2
  int back_1_chip; // r0
  int v11; // r3
  int v14; // [sp+44h] [bp-1070h]
  char v15; // [sp+48h] [bp-106Ch]
  _DWORD v16[7]; // [sp+50h] [bp-1064h] BYREF
  int v17; // [sp+6Ch] [bp-1048h]
  unsigned __int8 v18; // [sp+70h] [bp-1044h] BYREF
  unsigned __int8 v19; // [sp+71h] [bp-1043h]
  int v20; // [sp+74h] [bp-1040h]
  char var1004[4112]; // [sp+B0h] [bp-1004h] BYREF

  v15 = a2;
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %1x exp %1x",
    "check_d54_one_lane",
    a2,
    a3,
    a4,
    a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_d54_one_lane",
    18,
    3430,
    60,
    var1004);
  v8 = 21;
  v9 = a5;
  if ( a5 )
    v9 = 1;
  v14 = v9;
  do
  {
    usleep((__useconds_t)&stru_1869C.st_value);
    back_1_chip = serdes_apb_read_back_1_chip(a1, v15, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v18);
    v11 = v14;
    if ( !back_1_chip )
      v11 = 0;
    if ( v11 )
    {
      if ( (a5 & ~v20) != 0 )
        goto LABEL_8;
    }
    else if ( a5 || (v20 & 8) != 0 )
    {
LABEL_8:
      V_LOCK();
      V_INT((int)v16, "chain", *(int *)(a1 + 140));
      logfmt_raw(
        var1004,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
        a4,
        v18,
        v19,
        v20,
        a5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_eth/backend_eth.c",
        169,
        "check_d54_one_lane",
        18,
        3443,
        100,
        var1004);
      return 0;
    }
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d", a4, v18, v19, a5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_eth/backend_eth.c",
      169,
      "check_d54_one_lane",
      18,
      3440,
      20,
      var1004);
    --v8;
  }
  while ( v8 );
  return 0;
}
