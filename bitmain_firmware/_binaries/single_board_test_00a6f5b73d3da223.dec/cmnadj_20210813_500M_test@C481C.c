int __fastcall cmnadj_20210813_500M_test(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4, int a5)
{
  int v10; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v11; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "%s%d core_id %02x ...", "cmnadj_20210813_500M_test", a5, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "cmnadj_20210813_500M_test",
    25,
    8280,
    60,
    &v10);
  v11 = a4;
  if ( a4 == 8 )
    v11 = 15;
  switch ( a5 )
  {
    case 1:
      serdes_apb_write(a1, a2, a3, 0x8001u, -97);
      serdes_apb_write(a1, a2, a3, 0x800Cu, 64);
      serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
      serdes_apb_write(a1, a2, a3, 0x8001u, 0);
      serdes_apb_write(a1, a2, a3, 0xA001u, 0);
      break;
    case 2:
      serdes_apb_write(a1, a2, a3, 0x8001u, -97);
      serdes_apb_write(a1, a2, a3, 0x800Cu, 96);
      serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
      serdes_apb_write(a1, a2, a3, 0x8001u, 0);
      serdes_apb_write(a1, a2, a3, 0xA001u, 0);
      break;
    case 3:
      serdes_apb_write(a1, a2, a3, 0x8001u, -97);
      serdes_apb_write(a1, a2, a3, 0x800Cu, 96);
      serdes_apb_write(a1, a2, a3, 0x8001u, -805306369);
      serdes_apb_write(a1, a2, a3, 0x804Cu, 0x10000000);
      serdes_apb_write(a1, a2, a3, (v11 << 12) | 1, 0);
      serdes_apb_write(a1, a2, a3, 0x8001u, 0);
      serdes_apb_write(a1, a2, a3, 0xA001u, 0);
      break;
  }
  return 0;
}
