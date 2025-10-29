int __fastcall serdes_phy_bist_internal_serial(int a1, unsigned __int8 a2, char a3, char a4, char a5)
{
  _DWORD v10[1025]; // [sp+18h] [bp+8h] BYREF
  __int16 v11; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "serdes_phy_bist_internal_serial");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_phy_bist_internal_serial",
    31,
    9297,
    60,
    v10);
  v11 = 0;
  if ( a4 == 8 )
    v11 = 15;
  v10[1024] = a5 & 7
            | ((a5 & 7) << 28)
            | ((a5 & 7) << 24)
            | ((a5 & 7) << 20)
            | ((a5 & 7) << 16)
            | ((a5 & 7) << 12)
            | ((a5 & 7) << 8)
            | (16 * (a5 & 7));
  sub_789C4(
    a1,
    a3,
    97,
    a5 & 7
  | (((a5 & 7) << 28)
   | ((a5 & 7) << 24)
   | ((a5 & 7) << 20)
   | ((a5 & 7) << 16)
   | ((a5 & 7) << 12)
   | ((a5 & 7) << 8)
   | (16 * (a5 & 7)))
  & 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -15);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x12, 2 * (a5 & 7));
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  sub_789C4(a1, a3, 98, 255);
  check_bist_tx_running(a1, a2, a3, a4);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -13);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0xE, 12);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  config_rxifrx_sigdet_ovr(a1, a2, a3, a4);
  read_rx_debug_reg2(a1, a2, a3, a4);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x91, 8);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -1073741825);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x77, 0x40000000);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, a3, a4);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x91, 0);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  check_ref_clock_ready(a1, a2, a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, a3, a4);
  enable_rx_equalizer_tuning(a1, a2, a3, a4);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x91, 8);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -1073741825);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x77, 0x40000000);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, a3, a4);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, -9);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 0x91, 0);
  serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
  sub_789C4(a1, a3, 98, 0);
  check_ref_clock_ready(a1, a2, a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, a3, a4);
  return 0;
}
