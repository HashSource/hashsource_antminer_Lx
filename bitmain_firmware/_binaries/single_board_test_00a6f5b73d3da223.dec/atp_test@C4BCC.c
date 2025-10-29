int __fastcall atp_test(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[4100]; // [sp+18h] [bp+8h] BYREF

  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -520093697);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x89, 251658240);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vdda please", "atp_test", a4, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "atp_test",
    8,
    8328,
    60,
    v9);
  while ( getchar() != 10 )
    ;
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x89, 385875968);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vddhv please", "atp_test", a4, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "atp_test",
    8,
    8332,
    60,
    v9);
  getchar();
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s reset atp address", "atp_test");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "atp_test",
    8,
    8335,
    60,
    v9);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x89, 0);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0);
  return 0;
}
