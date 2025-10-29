int __fastcall phy_reg_read_0922(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _WORD v9[2049]; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int16 i7; // [sp+101Eh] [bp+100Eh]
  unsigned __int16 i6; // [sp+1020h] [bp+1010h]
  unsigned __int16 i5; // [sp+1022h] [bp+1012h]
  unsigned __int16 i4; // [sp+1024h] [bp+1014h]
  unsigned __int16 i3; // [sp+1026h] [bp+1016h]
  unsigned __int16 i2; // [sp+1028h] [bp+1018h]
  unsigned __int16 i1; // [sp+102Ah] [bp+101Ah]
  unsigned __int16 nn; // [sp+102Ch] [bp+101Ch]
  unsigned __int16 mm; // [sp+102Eh] [bp+101Eh]
  unsigned __int16 kk; // [sp+1030h] [bp+1020h]
  unsigned __int16 jj; // [sp+1032h] [bp+1022h]
  unsigned __int16 ii; // [sp+1034h] [bp+1024h]
  unsigned __int16 n; // [sp+1036h] [bp+1026h]
  unsigned __int16 m; // [sp+1038h] [bp+1028h]
  unsigned __int16 k; // [sp+103Ah] [bp+102Ah]
  unsigned __int16 j; // [sp+103Ch] [bp+102Ch]
  unsigned __int16 i; // [sp+103Eh] [bp+102Eh]

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0922", a2, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "phy_reg_read_0922",
    17,
    1498,
    60,
    v9);
  v9[2048] = 0;
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x67);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x96);
  }
  serdes_apb_read(a1, a2, a3, 0x8051u);
  serdes_apb_read(a1, a2, a3, 0x800Du);
  for ( j = 0; j < (unsigned int)a4; ++j )
  {
    serdes_apb_read(a1, a2, a3, (j << 12) | 0x43);
    serdes_apb_read(a1, a2, a3, (j << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (j << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (j << 12) | 0xB0);
  }
  serdes_apb_read(a1, a2, a3, 0x8030u);
  serdes_apb_read(a1, a2, a3, 0x803Bu);
  serdes_apb_read(a1, a2, a3, 0x8044u);
  serdes_apb_read(a1, a2, a3, 0x8060u);
  serdes_apb_read(a1, a2, a3, 0x8008u);
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( k = 0; k < (unsigned int)a4; ++k )
  {
    serdes_apb_read(a1, a2, a3, (k << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (k << 12) | 0xF);
  }
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( m = 0; m < (unsigned int)a4; ++m )
  {
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x16);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xAB);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x79);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x79);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x24);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x7C);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x89);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x95);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0xA2);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x85);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (m << 12) | 0x13);
  }
  serdes_apb_read(a1, a2, a3, 0x8008u);
  serdes_apb_read(a1, a2, a3, 0x8009u);
  serdes_apb_read(a1, a2, a3, 0xA002u);
  serdes_apb_read(a1, a2, a3, 0xA026u);
  for ( n = 0; n < (unsigned int)a4; ++n )
    serdes_apb_read(a1, a2, a3, (n << 12) | 0xD);
  serdes_apb_read(a1, a2, a3, 0x801Bu);
  serdes_apb_read(a1, a2, a3, 0x801Cu);
  serdes_apb_read(a1, a2, a3, 0x803Cu);
  for ( ii = 0; ii < (unsigned int)a4; ++ii )
  {
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x19);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x22);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x74);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x88);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0x7E);
    serdes_apb_read(a1, a2, a3, (ii << 12) | 0xB6);
  }
  serdes_apb_read(a1, a2, a3, 0x8002u);
  for ( jj = 0; jj < (unsigned int)a4; ++jj )
  {
    serdes_apb_read(a1, a2, a3, (jj << 12) | 2);
    serdes_apb_read(a1, a2, a3, (jj << 12) | 8);
    serdes_apb_read(a1, a2, a3, (jj << 12) | 8);
    serdes_apb_read(a1, a2, a3, (jj << 12) | 3);
  }
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( kk = 0; kk < (unsigned int)a4; ++kk )
  {
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x1D);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x1E);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x45);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x71);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 2);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x99);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x7F);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x13);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x14);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x15);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x16);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x17);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x17);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA5);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA5);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA7);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA7);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA7);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0xA7);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (kk << 12) | 0x90);
  }
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  for ( mm = 0; mm < (unsigned int)a4; ++mm )
    serdes_apb_read(a1, a2, a3, (mm << 12) | 0x6A);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  for ( nn = 0; nn < (unsigned int)a4; ++nn )
    serdes_apb_read(a1, a2, a3, (nn << 12) | 0x6A);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0xF001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0xF03Au, 0);
  for ( i1 = 0; i1 < (unsigned int)a4; ++i1 )
    serdes_apb_read(a1, a2, a3, (i1 << 12) | 0x6A);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 128);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  for ( i2 = 0; i2 < (unsigned int)a4; ++i2 )
    serdes_apb_read(a1, a2, a3, (i2 << 12) | 0x98);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 128);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  for ( i3 = 0; i3 < (unsigned int)a4; ++i3 )
    serdes_apb_read(a1, a2, a3, (i3 << 12) | 0x98);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 128);
  serdes_apb_write(a1, a2, a3, 0xF001u, -129);
  serdes_apb_write(a1, a2, a3, 0xF05Fu, 0);
  for ( i4 = 0; i4 < (unsigned int)a4; ++i4 )
    serdes_apb_read(a1, a2, a3, (i4 << 12) | 0x98);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -67108865);
  serdes_apb_write(a1, a2, a3, 0x8041u, 0);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0x1000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -16777217);
  serdes_apb_write(a1, a2, a3, 0x8043u, 0);
  serdes_apb_read(a1, a2, a3, 0x8042u);
  serdes_apb_read(a1, a2, a3, 0x8057u);
  serdes_apb_read(a1, a2, a3, 0x8058u);
  serdes_apb_read(a1, a2, a3, 0x8058u);
  serdes_apb_read(a1, a2, a3, 0x8048u);
  serdes_apb_read(a1, a2, a3, 0x804Cu);
  for ( i5 = 0; i5 < (unsigned int)a4; ++i5 )
  {
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x9A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x65);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x9A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x96);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x7C);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xBE);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xBE);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x8B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x8C);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x8C);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x4B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x53);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x73);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x84);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x24);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xE);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xE);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x85);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x86);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xF);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x91);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x91);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x24);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x60);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x60);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x24);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x41);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x7B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x7B);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x88);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x89);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x94);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x95);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0xA4);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x6E);
    serdes_apb_read(a1, a2, a3, (i5 << 12) | 0x6E);
  }
  serdes_apb_read(a1, a2, a3, 0x804Au);
  serdes_apb_read(a1, a2, a3, 0x804Fu);
  serdes_apb_read(a1, a2, a3, 0x803Du);
  serdes_apb_read(a1, a2, a3, 0x8041u);
  serdes_apb_read(a1, a2, a3, 0x8002u);
  serdes_apb_read(a1, a2, a3, 0x8014u);
  for ( i6 = 0; i6 < (unsigned int)a4; ++i6 )
  {
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x69);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 6);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2C);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2A);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2A);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i6 << 12) | 0x2C);
  }
  serdes_apb_read(a1, a2, a3, 0x801Du);
  serdes_apb_read(a1, a2, a3, 0x8023u);
  serdes_apb_read(a1, a2, a3, 0x8024u);
  serdes_apb_read(a1, a2, a3, 0x8046u);
  serdes_apb_read(a1, a2, a3, 0x8061u);
  for ( i7 = 0; i7 < (unsigned int)a4; ++i7 )
  {
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 6);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5B);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5B);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x57);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x58);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5D);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5D);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5D);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x5E);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x34);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x60);
    serdes_apb_read(a1, a2, a3, (i7 << 12) | 0x61);
  }
  serdes_apb_write(a1, a2, a3, 0xF001u, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  serdes_apb_write(a1, a2, a3, 0xA001u, 0);
  return 0;
}
