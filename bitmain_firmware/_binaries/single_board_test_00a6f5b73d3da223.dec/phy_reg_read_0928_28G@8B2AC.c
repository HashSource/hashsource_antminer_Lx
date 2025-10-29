int __fastcall phy_reg_read_0928_28G(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int8 m; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 k; // [sp+101Dh] [bp+100Dh]
  unsigned __int8 j; // [sp+101Eh] [bp+100Eh]
  unsigned __int8 i; // [sp+101Fh] [bp+100Fh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0928_28G", a2, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "phy_reg_read_0928_28G",
    21,
    2369,
    60,
    &v9);
  serdes_apb_read(a1, a2, a3, 0xF013u);
  serdes_apb_read(a1, a2, a3, 0xF014u);
  serdes_apb_read(a1, a2, a3, 0xF015u);
  serdes_apb_read(a1, a2, a3, 0xF016u);
  serdes_apb_read(a1, a2, a3, 0xF017u);
  serdes_apb_read(a1, a2, a3, 0xF016u);
  serdes_apb_read(a1, a2, a3, 0xF017u);
  serdes_apb_read(a1, a2, a3, 0xF017u);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  for ( i = 0; i < (unsigned int)a4; ++i )
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 128);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  for ( j = 0; j < (unsigned int)a4; ++j )
    serdes_apb_read(a1, a2, a3, (j << 12) | 0x98);
  serdes_apb_write(a1, a2, a3, 0x8001u, -17);
  serdes_apb_write(a1, a2, a3, 0x8026u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -17);
  serdes_apb_write(a1, a2, a3, 0x8026u, 16);
  serdes_apb_write(a1, a2, a3, 0x8001u, -17);
  serdes_apb_write(a1, a2, a3, 0x8026u, 0);
  serdes_apb_read(a1, a2, a3, 0x8024u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -2097153);
  serdes_apb_write(a1, a2, a3, 0x8023u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -2097153);
  serdes_apb_write(a1, a2, a3, 0x8023u, 0x200000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -2097153);
  serdes_apb_write(a1, a2, a3, 0x8023u, 0);
  serdes_apb_read(a1, a2, a3, 0x8026u);
  for ( k = 0; k < (unsigned int)a4; ++k )
  {
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x1A);
  }
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  for ( m = 0; m < (unsigned int)a4; ++m )
    serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_write(a1, a2, a3, 0xF001u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  return 0;
}
