int __fastcall phy_reg_read(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int16 i; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s...", "phy_reg_read");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "phy_reg_read",
    12,
    954,
    60,
    &v9);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 3);
    serdes_apb_read(a1, a2, a3, (i << 12) | 8);
  }
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x67);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x96);
  }
  serdes_apb_read(a1, a2, a3, 0x8051u);
  serdes_apb_read(a1, a2, a3, 0x800Du);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x43);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xB0);
  }
  serdes_apb_read(a1, a2, a3, 0x8030u);
  serdes_apb_read(a1, a2, a3, 0x803Bu);
  serdes_apb_read(a1, a2, a3, 0x8044u);
  serdes_apb_read(a1, a2, a3, 0x8060u);
  serdes_apb_read(a1, a2, a3, 0x8008u);
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xF);
  }
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x16);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA9);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAB);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x75);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x76);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x77);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x78);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x79);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x79);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x24);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x25);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x26);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x56);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x7C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x89);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x95);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x85);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x11);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x13);
  }
  serdes_apb_read(a1, a2, a3, 0x8008u);
  serdes_apb_read(a1, a2, a3, 0x8009u);
  serdes_apb_read(a1, a2, a3, 0xA002u);
  serdes_apb_read(a1, a2, a3, 0xA026u);
  for ( i = 0; i < (unsigned int)a4; ++i )
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xD);
  serdes_apb_read(a1, a2, a3, 0x801Bu);
  serdes_apb_read(a1, a2, a3, 0x801Cu);
  serdes_apb_read(a1, a2, a3, 0x803Cu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x19);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x22);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x74);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA1);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x88);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x7E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xB6);
  }
  serdes_apb_read(a1, a2, a3, 0x8002u);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 8);
    serdes_apb_read(a1, a2, a3, (i << 12) | 8);
    serdes_apb_read(a1, a2, a3, (i << 12) | 3);
  }
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0x4000000);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0x4000000);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0x4000000);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -67108865);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x3A, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 128);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x98);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 128);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x98);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 128);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -129);
    serdes_apb_write(a1, a2, a3, (i << 12) | 0x5F, 0);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x98);
  }
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
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, 0);
    serdes_apb_write(a1, a2, a3, (i << 12) | 1, -65521);
    serdes_apb_write(a1, a2, a3, (i << 12) | 2, 0x8000);
  }
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  serdes_apb_write(a1, a2, a3, 0xA001u, 0);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1D);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x45);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x71);
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x99);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x7F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA5);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA7);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6F);
  }
  return 0;
}
