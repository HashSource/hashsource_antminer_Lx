int __fastcall enable_rxbist_autostop_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4, char a5)
{
  int v10; // [sp+1Ch] [bp+Ch] BYREF
  int v11; // [sp+101Ch] [bp+100Ch]

  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "%s...", "enable_rxbist_autostop_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "enable_rxbist_autostop_one_lane",
    31,
    9222,
    60,
    &v10);
  v11 = ((a5 & 0x3F) << 20) & 0x3F00000;
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x11, 4);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, -66060289);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 0x13, v11);
  serdes_apb_write(a1, a2, a3, (a4 << 12) | 1, 0);
  return 0;
}
