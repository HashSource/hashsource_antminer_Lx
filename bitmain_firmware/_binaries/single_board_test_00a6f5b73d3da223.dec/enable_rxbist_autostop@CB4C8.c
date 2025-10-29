int __fastcall enable_rxbist_autostop(int a1, unsigned __int8 a2, char a3, char a4, char a5)
{
  _BYTE v10[8]; // [sp+18h] [bp+8h] BYREF
  int v11; // [sp+1018h] [bp+1008h]
  __int16 v12; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "enable_rxbist_autostop");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "enable_rxbist_autostop",
    22,
    9205,
    60,
    v10);
  v11 = ((a5 & 0x3F) << 20) & 0x3F00000;
  v12 = 0;
  if ( a4 == 8 )
    v12 = 15;
  serdes_apb_write(a1, a2, a3, (v12 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (v12 << 12) | 0x11, 4);
  serdes_apb_write(a1, a2, a3, (v12 << 12) | 1, -66060289);
  serdes_apb_write(a1, a2, a3, (v12 << 12) | 0x13, v11);
  serdes_apb_write(a1, a2, a3, (v12 << 12) | 1, 0);
  return 0;
}
