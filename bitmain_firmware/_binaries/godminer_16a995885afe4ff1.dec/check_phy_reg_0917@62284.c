int __fastcall check_phy_reg_0917(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r8
  int v8; // r6
  __int16 v9; // r2
  int v10; // r7
  unsigned __int16 v11; // r6
  unsigned int v12; // r9
  int v13; // r7
  unsigned __int16 v14; // r6
  int v15; // r6
  __int16 v16; // r2
  int v17; // r7
  __int16 v18; // r6
  int v19; // r7
  __int16 v20; // r6
  int v21; // r7
  unsigned __int16 v22; // r6
  unsigned int v23; // r7
  __int16 v24; // r6
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r6
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // r6
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r6
  unsigned __int16 v31; // r9
  unsigned __int16 v32; // r6
  unsigned __int16 v33; // r8
  __int16 v34; // r6
  unsigned __int16 v35; // r8
  __int16 v36; // r6
  char v38[4100]; // [sp+10h] [bp+0h] BYREF

  v7 = a4;
  V_LOCK();
  logfmt_raw(v38, 0x1000u, 0, "%s chip_id %02x core_id %02x", "check_phy_reg_0917", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_phy_reg_0917",
    18,
    1212,
    60,
    v38);
  if ( v7 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5DE94(a1, a3, v9 & 0xF000 | 0x6E);
    }
    while ( v8 != v7 );
    LOWORD(v10) = 0;
    sub_5DE94(a1, a3, 0xB03Fu);
    sub_5DE94(a1, a3, 0xC03Fu);
    sub_5DE94(a1, a3, 0xB03Eu);
    sub_5DE94(a1, a3, 0xC03Eu);
    sub_5DE94(a1, a3, 0xB03Fu);
    sub_5DE94(a1, a3, 0xC03Fu);
    do
    {
      v11 = (_WORD)v10 << 12;
      v10 = (unsigned __int16)(v10 + 1);
      v12 = v11 | 0x6E;
      sub_5DE94(a1, a3, v12);
      sub_5DE94(a1, a3, v11 & 0xF000 | 0x6F);
      sub_5DE94(a1, a3, v12);
      sub_5DE94(a1, a3, v12);
    }
    while ( v10 != v7 );
    LOWORD(v13) = 0;
    sub_5DE94(a1, a3, 0xB002u);
    sub_5DE94(a1, a3, 0xB002u);
    sub_5DE94(a1, a3, 0xB003u);
    sub_5DE94(a1, a3, 0xC003u);
    sub_5DE94(a1, a3, 0xB005u);
    sub_5DE94(a1, a3, 0xC005u);
    sub_5DE94(a1, a3, 0xB006u);
    sub_5DE94(a1, a3, 0xC006u);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x2A);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x2F);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x30);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x19);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x1B);
      sub_5DE94(a1, a3, v14 | 0x1A);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x1D);
      sub_5DE94(a1, a3, v14 | 0x1A);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x47);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x12);
      sub_5DE94(a1, a3, v14 & 0xF000 | 0x4A);
    }
    while ( v13 != v7 );
    LOWORD(v15) = 0;
    sub_5DE94(a1, a3, 0x8008u);
    sub_5DE94(a1, a3, 0x8009u);
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_5DE94(a1, a3, v16 & 0xF000 | 0x20);
    }
    while ( v15 != v7 );
    LOWORD(v17) = 0;
    sub_5DE94(a1, a3, 0x803Eu);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_5DE94(a1, a3, v18 & 0xF000 | 0x7E);
      sub_5DE94(a1, a3, v18 & 0xF000 | 0xB6);
    }
    while ( v17 != v7 );
    LOWORD(v19) = 0;
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Fu);
    sub_5DE94(a1, a3, 0x8041u);
    sub_5DE94(a1, a3, 0x8002u);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_5DE94(a1, a3, v20 & 0xF000 | 2);
      sub_5DE94(a1, a3, v20 & 0xF000 | 8);
      sub_5DE94(a1, a3, v20 & 0xF000 | 3);
    }
    while ( v19 != v7 );
    LOWORD(v21) = 0;
    sub_5DE94(a1, a3, 0x803Eu);
    sub_5DE94(a1, a3, 0x8002u);
    sub_5DE94(a1, a3, 0x8048u);
    sub_5DE94(a1, a3, 0x804Cu);
    sub_5DE94(a1, a3, 0x800Cu);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0x96);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0x7C);
      sub_5DE94(a1, a3, v22 | 0xBE);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0xA6);
      sub_5DE94(a1, a3, v22 | 0xBE);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0x8B);
      sub_5DE94(a1, a3, v22 | 0x8C);
      sub_5DE94(a1, a3, v22 | 0x8C);
      sub_5DE94(a1, a3, v22 & 0xF000 | 2);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0x69);
      sub_5DE94(a1, a3, v22 & 0xF000 | 0x48);
    }
    while ( v21 != v7 );
    LOWORD(v23) = 0;
    sub_5DE94(a1, a3, 0x8002u);
    sub_5DE94(a1, a3, 0x803Cu);
    sub_5DE94(a1, a3, 0x801Bu);
    sub_5DE94(a1, a3, 0x801Cu);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_5DE94(a1, a3, v24 & 0xF000 | 0x19);
      sub_5DE94(a1, a3, v24 & 0xF000 | 0x22);
      sub_5DE94(a1, a3, v24 & 0xF000 | 0x74);
    }
    while ( v23 != v7 );
    v25 = 0;
    sub_5DE94(a1, a3, 0x8014u);
    do
    {
      v26 = v25++ << 12;
      sub_5DE94(a1, a3, v26 & 0xF000 | 6);
      sub_5DE94(a1, a3, v26 & 0xF000 | 2);
      sub_5DE94(a1, a3, v26 | 0x50);
      sub_5DE94(a1, a3, v26 & 0xF000 | 5);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0xA);
      sub_5DE94(a1, a3, v26 | 0x50);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0xAF);
      sub_5DE94(a1, a3, v26 | 0x9D);
      sub_5DE94(a1, a3, v26 | 0x9D);
      sub_5DE94(a1, a3, v26 | 0x9C);
      sub_5DE94(a1, a3, v26 | 0x9C);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0x9E);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0x9F);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0x96);
      sub_5DE94(a1, a3, v26 | 0x97);
      sub_5DE94(a1, a3, v26 | 0x97);
      sub_5DE94(a1, a3, v26 & 0xF000 | 0x98);
    }
    while ( v23 > v25 );
  }
  else
  {
    v23 = 0;
    sub_5DE94(a1, a3, 0xB03Fu);
    sub_5DE94(a1, a3, 0xC03Fu);
    sub_5DE94(a1, a3, 0xB03Eu);
    sub_5DE94(a1, a3, 0xC03Eu);
    sub_5DE94(a1, a3, 0xB03Fu);
    sub_5DE94(a1, a3, 0xC03Fu);
    sub_5DE94(a1, a3, 0xB002u);
    sub_5DE94(a1, a3, 0xB002u);
    sub_5DE94(a1, a3, 0xB003u);
    sub_5DE94(a1, a3, 0xC003u);
    sub_5DE94(a1, a3, 0xB005u);
    sub_5DE94(a1, a3, 0xC005u);
    sub_5DE94(a1, a3, 0xB006u);
    sub_5DE94(a1, a3, 0xC006u);
    sub_5DE94(a1, a3, 0x8008u);
    sub_5DE94(a1, a3, 0x8009u);
    sub_5DE94(a1, a3, 0x803Eu);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Du);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Eu);
    sub_5DE94(a1, a3, 0x805Fu);
    sub_5DE94(a1, a3, 0x8041u);
    sub_5DE94(a1, a3, 0x8002u);
    sub_5DE94(a1, a3, 0x803Eu);
    sub_5DE94(a1, a3, 0x8002u);
    sub_5DE94(a1, a3, 0x8048u);
    sub_5DE94(a1, a3, 0x804Cu);
    sub_5DE94(a1, a3, 0x800Cu);
    sub_5DE94(a1, a3, 0x8002u);
    sub_5DE94(a1, a3, 0x803Cu);
    sub_5DE94(a1, a3, 0x801Bu);
    sub_5DE94(a1, a3, 0x801Cu);
    sub_5DE94(a1, a3, 0x8014u);
  }
  sub_5DE94(a1, a3, 0xB03Bu);
  sub_5DE94(a1, a3, 0xC03Bu);
  sub_5DE94(a1, a3, 0xB03Cu);
  sub_5DE94(a1, a3, 0xC03Cu);
  sub_5DE94(a1, a3, 0xB03Cu);
  sub_5DE94(a1, a3, 0xC03Cu);
  sub_5DE94(a1, a3, 0xB03Cu);
  sub_5DE94(a1, a3, 0xC03Cu);
  sub_5DE94(a1, a3, 0xB03Du);
  sub_5DE94(a1, a3, 0xC03Du);
  sub_5DE94(a1, a3, 0xB03Du);
  sub_5DE94(a1, a3, 0xC03Du);
  sub_5DE94(a1, a3, 0xB03Du);
  sub_5DE94(a1, a3, 0xC03Du);
  sub_5DE94(a1, a3, 0xB01Cu);
  sub_5DE94(a1, a3, 0xC01Cu);
  sub_5DE94(a1, a3, 0xB01Cu);
  sub_5DE94(a1, a3, 0xC01Cu);
  sub_5DE94(a1, a3, 0xB01Du);
  sub_5DE94(a1, a3, 0xC01Du);
  sub_5DE94(a1, a3, 0xB01Du);
  sub_5DE94(a1, a3, 0xC01Du);
  sub_5DE94(a1, a3, 0xB01Du);
  sub_5DE94(a1, a3, 0xC01Du);
  sub_5DE94(a1, a3, 0xB01Du);
  sub_5DE94(a1, a3, 0xC01Du);
  sub_5DE94(a1, a3, 0xB01Eu);
  sub_5DE94(a1, a3, 0xC01Eu);
  sub_5DE94(a1, a3, 0xB01Eu);
  sub_5DE94(a1, a3, 0xC01Eu);
  if ( v23 )
  {
    v27 = 0;
    do
    {
      v28 = v27++ << 12;
      sub_5DE94(a1, a3, v28 | 0xA);
      sub_5DE94(a1, a3, v28 | 0xA);
      sub_5DE94(a1, a3, v28 & 0xF000 | 9);
      sub_5DE94(a1, a3, v28 | 0x12);
      sub_5DE94(a1, a3, v28 | 0x12);
      sub_5DE94(a1, a3, v28 & 0xF000 | 0x13);
    }
    while ( v27 < v23 );
  }
  sub_5DE94(a1, a3, 0xA005u);
  sub_5DE94(a1, a3, 0xA007u);
  sub_5DE94(a1, a3, 0xB025u);
  sub_5DE94(a1, a3, 0xC025u);
  sub_5DE94(a1, a3, 0xB025u);
  sub_5DE94(a1, a3, 0xC025u);
  sub_5DE94(a1, a3, 0xB028u);
  sub_5DE94(a1, a3, 0xC028u);
  sub_5DE94(a1, a3, 0xB029u);
  sub_5DE94(a1, a3, 0xC029u);
  sub_5DE94(a1, a3, 0xB029u);
  sub_5DE94(a1, a3, 0xC029u);
  sub_5DE94(a1, a3, 0xB029u);
  sub_5DE94(a1, a3, 0xC029u);
  sub_5DE94(a1, a3, 0xB02Du);
  sub_5DE94(a1, a3, 0xC02Du);
  sub_5DE94(a1, a3, 0xB02Du);
  sub_5DE94(a1, a3, 0xC02Du);
  if ( v23 )
  {
    v29 = 0;
    do
    {
      v30 = v29++ << 12;
      sub_5DE94(a1, a3, v30 & 0xF000 | 8);
      sub_5DE94(a1, a3, v30 & 0xF000 | 0x6B);
      sub_5DE94(a1, a3, v30 & 0xF000 | 0x9D);
      sub_5DE94(a1, a3, v30 & 0xF000 | 0x9E);
      sub_5DE94(a1, a3, v30 | 0x6A);
      sub_5DE94(a1, a3, v30 & 0xF000 | 0x50);
      sub_5DE94(a1, a3, v30 | 0x6A);
      sub_5DE94(a1, a3, v30 & 0xF000 | 0x53);
    }
    while ( v29 < v23 );
    v31 = 0;
    sub_5DE94(a1, a3, 0x803Du);
    sub_5DE94(a1, a3, 0x803Du);
    do
    {
      v32 = v31++ << 12;
      sub_5DE94(a1, a3, v32 | 0x46);
      sub_5DE94(a1, a3, v32 | 0x46);
      sub_5DE94(a1, a3, v32 | 0x47);
      sub_5DE94(a1, a3, v32 | 0x47);
      sub_5DE94(a1, a3, v32 | 0x47);
      sub_5DE94(a1, a3, v32 | 0x47);
      sub_5DE94(a1, a3, v32 | 0x47);
      sub_5DE94(a1, a3, v32 | 0x48);
      sub_5DE94(a1, a3, v32 | 0x48);
      sub_5DE94(a1, a3, v32 | 0x48);
      sub_5DE94(a1, a3, v32 | 0x48);
      sub_5DE94(a1, a3, v32 | 0x48);
      sub_5DE94(a1, a3, v32 | 0x49);
      sub_5DE94(a1, a3, v32 | 0x49);
      sub_5DE94(a1, a3, v32 | 0x49);
      sub_5DE94(a1, a3, v32 | 0x49);
      sub_5DE94(a1, a3, v32 | 0x49);
      sub_5DE94(a1, a3, v32 | 0x4A);
      sub_5DE94(a1, a3, v32 | 0x4A);
      sub_5DE94(a1, a3, v32 | 0x4A);
      sub_5DE94(a1, a3, v32 | 0x27);
      sub_5DE94(a1, a3, v32 | 0x27);
      sub_5DE94(a1, a3, v32 | 0x28);
      sub_5DE94(a1, a3, v32 | 0x28);
      sub_5DE94(a1, a3, v32 | 0x28);
      sub_5DE94(a1, a3, v32 | 0x28);
      sub_5DE94(a1, a3, v32 | 0x29);
      sub_5DE94(a1, a3, v32 | 0x29);
      sub_5DE94(a1, a3, v32 | 0x29);
      sub_5DE94(a1, a3, v32 | 0x2A);
      sub_5DE94(a1, a3, v32 | 0x2A);
      sub_5DE94(a1, a3, v32 | 0x2B);
      sub_5DE94(a1, a3, v32 | 0x2B);
      sub_5DE94(a1, a3, v32 | 0x2B);
      sub_5DE94(a1, a3, v32 | 0x2B);
      sub_5DE94(a1, a3, v32 & 0xF000 | 0x2C);
      sub_5DE94(a1, a3, v32 & 0xF000 | 0x67);
      sub_5DE94(a1, a3, v32 & 0xF000 | 0x96);
    }
    while ( v23 > v31 );
    v33 = 0;
    sub_5DE94(a1, a3, 0x8051u);
    sub_5DE94(a1, a3, 0x800Du);
    do
    {
      v34 = v33++ << 12;
      sub_5DE94(a1, a3, v34 & 0xF000 | 0x43);
      sub_5DE94(a1, a3, v34 & 0xF000 | 0x75);
      sub_5DE94(a1, a3, v34 & 0xF000 | 0x76);
      sub_5DE94(a1, a3, v34 & 0xF000 | 0xB0);
    }
    while ( v23 > v33 );
    v35 = 0;
    sub_5DE94(a1, a3, 0x8030u);
    sub_5DE94(a1, a3, 0x803Bu);
    sub_5DE94(a1, a3, 0x8044u);
    sub_5DE94(a1, a3, 0x8060u);
    sub_5DE94(a1, a3, 0x8008u);
    sub_5DE94(a1, a3, 0x803Eu);
    do
    {
      v36 = v35++ << 12;
      sub_5DE94(a1, a3, v36 & 0xF000 | 0x49);
      sub_5DE94(a1, a3, v36 & 0xF000 | 0xF);
      sub_5DE94(a1, a3, v36 & 0xF000 | 0x96);
    }
    while ( v23 > v35 );
    return 0;
  }
  else
  {
    sub_5DE94(a1, a3, 0x803Du);
    sub_5DE94(a1, a3, 0x803Du);
    sub_5DE94(a1, a3, 0x8051u);
    sub_5DE94(a1, a3, 0x800Du);
    sub_5DE94(a1, a3, 0x8030u);
    sub_5DE94(a1, a3, 0x803Bu);
    sub_5DE94(a1, a3, 0x8044u);
    sub_5DE94(a1, a3, 0x8060u);
    sub_5DE94(a1, a3, 0x8008u);
    sub_5DE94(a1, a3, 0x803Eu);
    return 0;
  }
}
