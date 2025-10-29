int __fastcall check_phy_reg_0917(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int16 i; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s chip_id %02x core_id %02x", "check_phy_reg_0917", a2, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_phy_reg_0917",
    18,
    1241,
    60,
    &v9);
  for ( i = 0; i < (unsigned int)a4; ++i )
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6E);
  serdes_apb_read(a1, a2, a3, 0xB03Fu);
  serdes_apb_read(a1, a2, a3, 0xC03Fu);
  serdes_apb_read(a1, a2, a3, 0xB03Eu);
  serdes_apb_read(a1, a2, a3, 0xC03Eu);
  serdes_apb_read(a1, a2, a3, 0xB03Fu);
  serdes_apb_read(a1, a2, a3, 0xC03Fu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6E);
  }
  serdes_apb_read(a1, a2, a3, 0xB002u);
  serdes_apb_read(a1, a2, a3, 0xB002u);
  serdes_apb_read(a1, a2, a3, 0xB003u);
  serdes_apb_read(a1, a2, a3, 0xC003u);
  serdes_apb_read(a1, a2, a3, 0xB005u);
  serdes_apb_read(a1, a2, a3, 0xC005u);
  serdes_apb_read(a1, a2, a3, 0xB006u);
  serdes_apb_read(a1, a2, a3, 0xC006u);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x30);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x19);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1D);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x1A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
  }
  serdes_apb_read(a1, a2, a3, 0x8008u);
  serdes_apb_read(a1, a2, a3, 0x8009u);
  for ( i = 0; i < (unsigned int)a4; ++i )
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x20);
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x7E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xB6);
  }
  serdes_apb_read(a1, a2, a3, 0x805Du);
  serdes_apb_read(a1, a2, a3, 0x805Du);
  serdes_apb_read(a1, a2, a3, 0x805Du);
  serdes_apb_read(a1, a2, a3, 0x805Du);
  serdes_apb_read(a1, a2, a3, 0x805Eu);
  serdes_apb_read(a1, a2, a3, 0x805Eu);
  serdes_apb_read(a1, a2, a3, 0x805Eu);
  serdes_apb_read(a1, a2, a3, 0x805Eu);
  serdes_apb_read(a1, a2, a3, 0x805Eu);
  serdes_apb_read(a1, a2, a3, 0x805Fu);
  serdes_apb_read(a1, a2, a3, 0x8041u);
  serdes_apb_read(a1, a2, a3, 0x8002u);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 8);
    serdes_apb_read(a1, a2, a3, (i << 12) | 3);
  }
  serdes_apb_read(a1, a2, a3, 0x803Eu);
  serdes_apb_read(a1, a2, a3, 0x8002u);
  serdes_apb_read(a1, a2, a3, 0x8048u);
  serdes_apb_read(a1, a2, a3, 0x804Cu);
  serdes_apb_read(a1, a2, a3, 0x800Cu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x96);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x7C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xBE);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA6);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xBE);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x8B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x8C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x8C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x69);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
  }
  serdes_apb_read(a1, a2, a3, 0x8002u);
  serdes_apb_read(a1, a2, a3, 0x803Cu);
  serdes_apb_read(a1, a2, a3, 0x801Bu);
  serdes_apb_read(a1, a2, a3, 0x801Cu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x19);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x22);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x74);
  }
  serdes_apb_read(a1, a2, a3, 0x8014u);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 6);
    serdes_apb_read(a1, a2, a3, (i << 12) | 2);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x50);
    serdes_apb_read(a1, a2, a3, (i << 12) | 5);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x50);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xAF);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9D);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9D);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9C);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9F);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x96);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x97);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x97);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x98);
  }
  serdes_apb_read(a1, a2, a3, 0xB03Bu);
  serdes_apb_read(a1, a2, a3, 0xC03Bu);
  serdes_apb_read(a1, a2, a3, 0xB03Cu);
  serdes_apb_read(a1, a2, a3, 0xC03Cu);
  serdes_apb_read(a1, a2, a3, 0xB03Cu);
  serdes_apb_read(a1, a2, a3, 0xC03Cu);
  serdes_apb_read(a1, a2, a3, 0xB03Cu);
  serdes_apb_read(a1, a2, a3, 0xC03Cu);
  serdes_apb_read(a1, a2, a3, 0xB03Du);
  serdes_apb_read(a1, a2, a3, 0xC03Du);
  serdes_apb_read(a1, a2, a3, 0xB03Du);
  serdes_apb_read(a1, a2, a3, 0xC03Du);
  serdes_apb_read(a1, a2, a3, 0xB03Du);
  serdes_apb_read(a1, a2, a3, 0xC03Du);
  serdes_apb_read(a1, a2, a3, 0xB01Cu);
  serdes_apb_read(a1, a2, a3, 0xC01Cu);
  serdes_apb_read(a1, a2, a3, 0xB01Cu);
  serdes_apb_read(a1, a2, a3, 0xC01Cu);
  serdes_apb_read(a1, a2, a3, 0xB01Du);
  serdes_apb_read(a1, a2, a3, 0xC01Du);
  serdes_apb_read(a1, a2, a3, 0xB01Du);
  serdes_apb_read(a1, a2, a3, 0xC01Du);
  serdes_apb_read(a1, a2, a3, 0xB01Du);
  serdes_apb_read(a1, a2, a3, 0xC01Du);
  serdes_apb_read(a1, a2, a3, 0xB01Du);
  serdes_apb_read(a1, a2, a3, 0xC01Du);
  serdes_apb_read(a1, a2, a3, 0xB01Eu);
  serdes_apb_read(a1, a2, a3, 0xC01Eu);
  serdes_apb_read(a1, a2, a3, 0xB01Eu);
  serdes_apb_read(a1, a2, a3, 0xC01Eu);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0xA);
    serdes_apb_read(a1, a2, a3, (i << 12) | 9);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x12);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x13);
  }
  serdes_apb_read(a1, a2, a3, 0xA005u);
  serdes_apb_read(a1, a2, a3, 0xA007u);
  serdes_apb_read(a1, a2, a3, 0xB025u);
  serdes_apb_read(a1, a2, a3, 0xC025u);
  serdes_apb_read(a1, a2, a3, 0xB025u);
  serdes_apb_read(a1, a2, a3, 0xC025u);
  serdes_apb_read(a1, a2, a3, 0xB028u);
  serdes_apb_read(a1, a2, a3, 0xC028u);
  serdes_apb_read(a1, a2, a3, 0xB029u);
  serdes_apb_read(a1, a2, a3, 0xC029u);
  serdes_apb_read(a1, a2, a3, 0xB029u);
  serdes_apb_read(a1, a2, a3, 0xC029u);
  serdes_apb_read(a1, a2, a3, 0xB029u);
  serdes_apb_read(a1, a2, a3, 0xC029u);
  serdes_apb_read(a1, a2, a3, 0xB02Du);
  serdes_apb_read(a1, a2, a3, 0xC02Du);
  serdes_apb_read(a1, a2, a3, 0xB02Du);
  serdes_apb_read(a1, a2, a3, 0xC02Du);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 8);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9D);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x9E);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x50);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x6A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x53);
  }
  serdes_apb_read(a1, a2, a3, 0x803Du);
  serdes_apb_read(a1, a2, a3, 0x803Du);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x46);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x47);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x48);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x49);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x4A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x27);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x28);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x29);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2A);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2B);
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x2C);
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
    serdes_apb_read(a1, a2, a3, (i << 12) | 0x96);
  }
  return 0;
}
