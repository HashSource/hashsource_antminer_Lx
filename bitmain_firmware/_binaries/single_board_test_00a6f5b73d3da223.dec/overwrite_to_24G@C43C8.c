int __fastcall overwrite_to_24G(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v10; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s core_id %02x ...", "overwrite_to_24G", (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "overwrite_to_24G",
    16,
    8217,
    60,
    &v9);
  v10 = a4;
  if ( a4 == 8 )
    v10 = 15;
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x8002u, 64);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 2, 0x20000);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -4);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 8, 2);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 8, 196608);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 3, 196608);
  serdes_apb_write(a1, a2, a3, 0x8001u, -786433);
  serdes_apb_write(a1, a2, a3, 0x803Eu, 786432);
  serdes_apb_write(a1, a2, a3, 0x8001u, -8388609);
  serdes_apb_write(a1, a2, a3, 0x8048u, 0x800000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -805306369);
  serdes_apb_write(a1, a2, a3, 0x804Cu, 805306368);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  serdes_apb_write(a1, a2, a3, 0xA001u, 0);
  return 0;
}
