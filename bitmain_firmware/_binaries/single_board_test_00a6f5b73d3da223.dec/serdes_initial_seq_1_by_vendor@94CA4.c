int __fastcall serdes_initial_seq_1_by_vendor(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int16 i; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_initial_seq_1_by_vendor",
    30,
    3328,
    60,
    &v9);
  serdes_apb_write(a1, a2, a3, 0xB03Fu, 252182532);
  serdes_apb_write(a1, a2, a3, 0xB002u, 839027724);
  serdes_apb_write(a1, a2, a3, 0xB003u, -1073676160);
  serdes_apb_write(a1, a2, a3, 0xC03Fu, 252182532);
  serdes_apb_write(a1, a2, a3, 0xC002u, 839027724);
  serdes_apb_write(a1, a2, a3, 0xC003u, -1073676160);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x6E, 17694978);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x1D, 134283265);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x2A, 504234034);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x19, 267913217);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x1A, -1610579952);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x47, 338179136);
  }
  return 0;
}
