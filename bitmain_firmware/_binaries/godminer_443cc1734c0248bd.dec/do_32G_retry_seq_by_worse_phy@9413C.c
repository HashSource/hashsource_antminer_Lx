int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  _WORD *v6; // r9
  int v7; // r4
  int v8; // t1
  int v10; // [sp+28h] [bp-1454h]
  int v11; // [sp+38h] [bp-1444h]
  char *v12; // [sp+40h] [bp-143Ch]
  _DWORD v13[4]; // [sp+44h] [bp-1438h] BYREF
  __int16 v14; // [sp+54h] [bp-1428h] BYREF
  _DWORD v15[7]; // [sp+58h] [bp-1424h] BYREF
  int v16; // [sp+74h] [bp-1408h]
  _BYTE s[1024]; // [sp+78h] [bp-1404h] BYREF
  char _478[4104]; // [sp+478h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v15, "chain", *(int *)(a1 + 140));
  v10 = 0;
  v12 = s;
  logfmt_raw(
    _478,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s...",
    "do_32G_retry_seq_by_worse_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8569,
    60,
    _478);
  memset(s, 0, sizeof(s));
  v13[0] = 0;
  v13[1] = 100991489;
  v13[2] = 235735561;
  v13[3] = 134677248;
  v14 = 3851;
  do
  {
    v6 = (_WORD *)((char *)v13 + 3);
    v11 = 16 * v10;
    do
    {
      while ( 1 )
      {
        v8 = *((unsigned __int8 *)v6 + 1);
        v6 = (_WORD *)((char *)v6 + 1);
        v7 = v8;
        V_LOCK();
        logfmt_raw(
          _478,
          0x1000u,
          0,
          "%s chip %x core %x cmn status %x",
          "do_32G_retry_seq_by_worse_phy",
          v10,
          v7,
          *(unsigned __int8 *)(a5 + v7 + v11));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "do_32G_retry_seq_by_worse_phy",
          29,
          8579,
          20,
          _478);
        if ( *(_BYTE *)(a5 + v8 + v11) )
          break;
        if ( (__int16 *)((char *)&v14 + 1) == v6 )
          goto LABEL_6;
      }
      V_LOCK();
      logfmt_raw(_478, 0x1000u, 0, "do retry chip %02x core_id %02x", v10, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8581,
        60,
        _478);
      sprintf(v12, "%1x-%1x ", v10, v7);
      ++v13[0];
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -131073);
      serdes_apb_write_1_chip(a1, v10, v7, 32798, 0x20000);
      v12 += 4;
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v10, v7, 32796, 0x20000000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -131073);
      serdes_apb_write_1_chip(a1, v10, v7, 32798, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v10, v7, 32796, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v10, v7, 32797, 0x8000000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v10, v7, 32797, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -8388609);
      serdes_apb_write_1_chip(a1, v10, v7, 32841, 0x800000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0x2000000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -268435457);
      serdes_apb_write_1_chip(a1, v10, v7, 32841, 0x10000000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0x4000000);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v10, v7, 32845, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -257);
      serdes_apb_write_1_chip(a1, v10, v7, 32844, 256);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -3);
      serdes_apb_write_1_chip(a1, v10, v7, 32848, 2);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, 0);
      usleep((__useconds_t)&stru_18694.st_info);
      check_cmn_calibration_status_1_phy(a1, v10, v7);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -3);
      serdes_apb_write_1_chip(a1, v10, v7, 32848, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, -257);
      serdes_apb_write_1_chip(a1, v10, v7, 32844, 0);
      serdes_apb_write_1_chip(a1, v10, v7, 32769, 0);
    }
    while ( (__int16 *)((char *)&v14 + 1) != v6 );
LABEL_6:
    ++v10;
  }
  while ( v10 != 8 );
  V_LOCK();
  logfmt_raw(_478, 0x1000u, 0, "%s (%d) %s", "do_32G_retry_seq_by_worse_phy", v13[0], s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8631,
    60,
    _478);
  return 0;
}
