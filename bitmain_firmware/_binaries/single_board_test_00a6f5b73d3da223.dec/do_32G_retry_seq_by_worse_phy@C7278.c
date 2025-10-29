int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v8[16]; // [sp+101Ch] [bp+100Ch] BYREF
  _BYTE v9[1027]; // [sp+102Ch] [bp+101Ch] BYREF
  unsigned __int8 v10; // [sp+142Fh] [bp+141Fh]
  int v11; // [sp+1430h] [bp+1420h]
  unsigned __int8 j; // [sp+1436h] [bp+1426h]
  unsigned __int8 i; // [sp+1437h] [bp+1427h]
  char *v14; // [sp+1438h] [bp+1428h]
  int v15; // [sp+143Ch] [bp+142Ch]

  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s...", "do_32G_retry_seq_by_worse_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8627,
    60,
    &v7);
  memset(v9, 0, 0x400u);
  v15 = 0;
  v11 = sub_7936C(v8);
  v14 = v9;
  for ( i = 0; i <= 7u; ++i )
  {
    for ( j = 0; j < v11; ++j )
    {
      v10 = v8[j];
      V_LOCK();
      logfmt_raw(
        &v7,
        0x1000u,
        0,
        "%s chip %x core %x cmn status %x",
        "do_32G_retry_seq_by_worse_phy",
        i,
        v10,
        *(unsigned __int8 *)(a5 + v10 + 16 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8637,
        20,
        &v7);
      if ( *(_BYTE *)(a5 + v10 + 16 * i) )
      {
        V_LOCK();
        logfmt_raw(&v7, 0x1000u, 0, "do retry chip %02x core_id %02x", i, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "do_32G_retry_seq_by_worse_phy",
          29,
          8639,
          60,
          &v7);
        sprintf(v14, "%1x-%1x ", i, v10);
        v14 += 4;
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -131073);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Eu, 0x20000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -536870913);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Cu, 0x20000000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -131073);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Eu, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -536870913);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Cu, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -134217729);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Du, 0x8000000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -134217729);
        serdes_apb_write_1_chip(a1, i, v10, 0x801Du, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -8388609);
        serdes_apb_write_1_chip(a1, i, v10, 0x8049u, 0x800000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -33554433);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -33554433);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0x2000000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -33554433);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -268435457);
        serdes_apb_write_1_chip(a1, i, v10, 0x8049u, 0x10000000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -67108865);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -67108865);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0x4000000);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -67108865);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Du, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -257);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Cu, 256);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -3);
        serdes_apb_write_1_chip(a1, i, v10, 0x8050u, 2);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, 0);
        usleep((__useconds_t)&stru_1869C.st_value);
        check_cmn_calibration_status_1_phy(a1, i, v10);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -3);
        serdes_apb_write_1_chip(a1, i, v10, 0x8050u, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, -257);
        serdes_apb_write_1_chip(a1, i, v10, 0x804Cu, 0);
        serdes_apb_write_1_chip(a1, i, v10, 0x8001u, 0);
        ++v15;
      }
    }
  }
  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s (%d) %s", "do_32G_retry_seq_by_worse_phy", v15, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8689,
    60,
    &v7);
  return 0;
}
