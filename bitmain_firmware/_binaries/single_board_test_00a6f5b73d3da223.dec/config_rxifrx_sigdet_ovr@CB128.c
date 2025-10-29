int __fastcall config_rxifrx_sigdet_ovr(int a1, unsigned __int8 a2, char a3, char a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v10; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s...", "config_rxifrx_sigdet_ovr");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "config_rxifrx_sigdet_ovr",
    24,
    9177,
    60,
    &v9);
  v10 = 0;
  if ( a4 == 8 )
    v10 = 15;
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -134217729);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x99, 0x8000000);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x7F, 0x80000000);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0);
  return 0;
}
