int __fastcall enable_rx_equalizer_tuning(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v10; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s...", "enable_rx_equalizer_tuning");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "enable_rx_equalizer_tuning",
    26,
    3482,
    60,
    &v9);
  v10 = 0;
  if ( a4 == 8 )
    v10 = 15;
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -4194305);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x2F, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -4194305);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x2F, 0x400000);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -4194305);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x2F, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -2049);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x37, 2048);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -1073741825);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x7E, 0x40000000);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -16777217);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x98, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -16777217);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x98, 0x1000000);
  check_d54(a1, a2, a3, a4, 8u);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -16777217);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x98, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0);
  check_d54(a1, a2, a3, a4, 0);
  return 0;
}
