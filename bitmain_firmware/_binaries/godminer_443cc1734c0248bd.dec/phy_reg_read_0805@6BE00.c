int __fastcall phy_reg_read_0805(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v8; // r7
  __int16 v9; // r6
  int v10; // r7
  __int16 v11; // r6
  int v12; // r7
  __int16 v13; // r6
  int v14; // r9
  unsigned __int16 v15; // r6
  int v16; // r6
  __int16 v17; // r2
  int v18; // r7
  __int16 v19; // r6
  int v20; // r7
  unsigned __int16 v21; // r6
  unsigned int v22; // r9
  unsigned __int16 v23; // r6
  unsigned __int16 v24; // r11
  unsigned __int16 v25; // r7
  int v26; // r6
  unsigned __int16 v27; // r10
  int v28; // r2
  int v29; // r8
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // r6
  char v33[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0805", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0805",
    17,
    2905,
    60,
    v33);
  if ( a4 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5D30C(a1, a3, v9 & 0xF000 | 0x67);
      sub_5D30C(a1, a3, v9 & 0xF000 | 0x96);
    }
    while ( v8 != a4 );
    LOWORD(v10) = 0;
    sub_5D30C(a1, a3, 0x8051u);
    sub_5D30C(a1, a3, 0x800Du);
    do
    {
      v11 = (_WORD)v10 << 12;
      v10 = (unsigned __int16)(v10 + 1);
      sub_5D30C(a1, a3, v11 & 0xF000 | 0x43);
      sub_5D30C(a1, a3, v11 & 0xF000 | 0x75);
      sub_5D30C(a1, a3, v11 & 0xF000 | 0x76);
      sub_5D30C(a1, a3, v11 & 0xF000 | 0xB0);
    }
    while ( v10 != a4 );
    LOWORD(v12) = 0;
    sub_5D30C(a1, a3, 0x8030u);
    sub_5D30C(a1, a3, 0x803Bu);
    sub_5D30C(a1, a3, 0x8044u);
    sub_5D30C(a1, a3, 0x8060u);
    sub_5D30C(a1, a3, 0x8008u);
    sub_5D30C(a1, a3, 0x803Eu);
    do
    {
      v13 = (_WORD)v12 << 12;
      v12 = (unsigned __int16)(v12 + 1);
      sub_5D30C(a1, a3, v13 & 0xF000 | 0x49);
      sub_5D30C(a1, a3, v13 & 0xF000 | 0xF);
    }
    while ( v12 != a4 );
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x803Eu);
    LOWORD(v14) = 0;
    do
    {
      v15 = (_WORD)v14 << 12;
      v14 = (unsigned __int16)(v14 + 1);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x16);
      sub_5D30C(a1, a3, v15 | 0xA9);
      sub_5D30C(a1, a3, v15 | 0xA9);
      sub_5D30C(a1, a3, v15 | 0xA9);
      sub_5D30C(a1, a3, v15 | 0xA9);
      sub_5D30C(a1, a3, v15 | 0xAA);
      sub_5D30C(a1, a3, v15 | 0xAA);
      sub_5D30C(a1, a3, v15 | 0xAA);
      sub_5D30C(a1, a3, v15 | 0xAA);
      sub_5D30C(a1, a3, v15 | 0xAA);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0xAB);
      sub_5D30C(a1, a3, v15 | 0x9F);
      sub_5D30C(a1, a3, v15 | 0x9F);
      sub_5D30C(a1, a3, v15 | 0xA0);
      sub_5D30C(a1, a3, v15 | 0xA0);
      sub_5D30C(a1, a3, v15 | 0xA0);
      sub_5D30C(a1, a3, v15 | 0xA0);
      sub_5D30C(a1, a3, v15 | 0xA1);
      sub_5D30C(a1, a3, v15 | 0xA1);
      sub_5D30C(a1, a3, v15 | 0x75);
      sub_5D30C(a1, a3, v15 | 0x75);
      sub_5D30C(a1, a3, v15 | 0x76);
      sub_5D30C(a1, a3, v15 | 0x76);
      sub_5D30C(a1, a3, v15 | 0x76);
      sub_5D30C(a1, a3, v15 | 0x76);
      sub_5D30C(a1, a3, v15 | 0x77);
      sub_5D30C(a1, a3, v15 | 0x77);
      sub_5D30C(a1, a3, v15 | 0x77);
      sub_5D30C(a1, a3, v15 | 0x77);
      sub_5D30C(a1, a3, v15 | 0x78);
      sub_5D30C(a1, a3, v15 | 0x78);
      sub_5D30C(a1, a3, v15 | 0x78);
      sub_5D30C(a1, a3, v15 | 0x78);
      sub_5D30C(a1, a3, v15 | 0x79);
      sub_5D30C(a1, a3, v15 | 0x79);
      sub_5D30C(a1, a3, v15 | 0x25);
      sub_5D30C(a1, a3, v15 | 0x25);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 | 0x27);
      sub_5D30C(a1, a3, v15 | 0x27);
      sub_5D30C(a1, a3, v15 | 0x27);
      sub_5D30C(a1, a3, v15 | 0x27);
      sub_5D30C(a1, a3, v15 | 0x27);
      sub_5D30C(a1, a3, v15 | 0x28);
      sub_5D30C(a1, a3, v15 | 0x28);
      sub_5D30C(a1, a3, v15 | 0x28);
      sub_5D30C(a1, a3, v15 | 0x28);
      sub_5D30C(a1, a3, v15 | 0x28);
      sub_5D30C(a1, a3, v15 | 0x29);
      sub_5D30C(a1, a3, v15 | 0x29);
      sub_5D30C(a1, a3, v15 | 0x29);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x24);
      sub_5D30C(a1, a3, v15 | 0x25);
      sub_5D30C(a1, a3, v15 | 0x26);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x56);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x7C);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x89);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x95);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0xA2);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x12);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x4A);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x85);
      sub_5D30C(a1, a3, v15 | 0x9F);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x11);
      sub_5D30C(a1, a3, v15 & 0xF000 | 0x13);
    }
    while ( v14 != a4 );
    sub_5D30C(a1, a3, 0x8008u);
    LOWORD(v16) = 0;
    sub_5D30C(a1, a3, 0x8009u);
    sub_5D30C(a1, a3, 0xA002u);
    sub_5D30C(a1, a3, 0xA026u);
    do
    {
      v17 = (_WORD)v16 << 12;
      v16 = (unsigned __int16)(v16 + 1);
      sub_5D30C(a1, a3, v17 & 0xF000 | 0xD);
    }
    while ( v16 != a4 );
    LOWORD(v18) = 0;
    sub_5D30C(a1, a3, 0x801Bu);
    sub_5D30C(a1, a3, 0x801Cu);
    sub_5D30C(a1, a3, 0x803Cu);
    do
    {
      v19 = (_WORD)v18 << 12;
      v18 = (unsigned __int16)(v18 + 1);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x19);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x22);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x74);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0xA1);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x88);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x12);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x4A);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0x7E);
      sub_5D30C(a1, a3, v19 & 0xF000 | 0xB6);
    }
    while ( v18 != a4 );
    LOWORD(v20) = 0;
    sub_5D30C(a1, a3, 0x8002u);
    do
    {
      v21 = (_WORD)v20 << 12;
      v20 = (unsigned __int16)(v20 + 1);
      sub_5D30C(a1, a3, v21 & 0xF000 | 2);
      sub_5D30C(a1, a3, v21 | 8);
      sub_5D30C(a1, a3, v21 | 8);
      sub_5D30C(a1, a3, v21 & 0xF000 | 3);
    }
    while ( v20 != a4 );
    LOWORD(v22) = 0;
    sub_5D30C(a1, a3, 0x803Eu);
    do
    {
      v23 = (_WORD)v22 << 12;
      v22 = (unsigned __int16)(v22 + 1);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x1A);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x1D);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x1E);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x45);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x46);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x47);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x71);
      sub_5D30C(a1, a3, v23 & 0xF000 | 2);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x99);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x7F);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x13);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x14);
      sub_5D30C(a1, a3, v23 | 0x11);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x15);
      sub_5D30C(a1, a3, v23 | 0x11);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x16);
      sub_5D30C(a1, a3, v23 | 0x17);
      sub_5D30C(a1, a3, v23 | 0x17);
      sub_5D30C(a1, a3, v23 | 0xA5);
      sub_5D30C(a1, a3, v23 | 0xA5);
      sub_5D30C(a1, a3, v23 | 0xA6);
      sub_5D30C(a1, a3, v23 | 0xA6);
      sub_5D30C(a1, a3, v23 | 0xA6);
      sub_5D30C(a1, a3, v23 | 0xA6);
      sub_5D30C(a1, a3, v23 | 0xA7);
      sub_5D30C(a1, a3, v23 | 0xA7);
      sub_5D30C(a1, a3, v23 | 0xA7);
      sub_5D30C(a1, a3, v23 | 0xA7);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x4A);
      sub_5D30C(a1, a3, v23 & 0xF000 | 0x90);
    }
    while ( v22 != a4 );
    v24 = 0;
    do
    {
      v25 = v24++ << 12;
      v26 = v25 | 1;
      v27 = v25 | 0x6A;
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0);
      sub_5D30C(a1, a3, v25 | 0x6A);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0);
      sub_5D30C(a1, a3, v25 | 0x6A);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v25 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -67108865);
      v28 = v25 | 0x3A;
      v29 = v25 | 0x5F;
      v25 |= 0x98u;
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D30C(a1, a3, v27);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D30C(a1, a3, v25);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D30C(a1, a3, v25);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v29, 0);
      sub_5D30C(a1, a3, v25);
    }
    while ( v22 > v24 );
  }
  else
  {
    v22 = 0;
    sub_5D30C(a1, a3, 0x8051u);
    sub_5D30C(a1, a3, 0x800Du);
    sub_5D30C(a1, a3, 0x8030u);
    sub_5D30C(a1, a3, 0x803Bu);
    sub_5D30C(a1, a3, 0x8044u);
    sub_5D30C(a1, a3, 0x8060u);
    sub_5D30C(a1, a3, 0x8008u);
    sub_5D30C(a1, a3, 0x803Eu);
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x803Eu);
    sub_5D30C(a1, a3, 0x8008u);
    sub_5D30C(a1, a3, 0x8009u);
    sub_5D30C(a1, a3, 0xA002u);
    sub_5D30C(a1, a3, 0xA026u);
    sub_5D30C(a1, a3, 0x801Bu);
    sub_5D30C(a1, a3, 0x801Cu);
    sub_5D30C(a1, a3, 0x803Cu);
    sub_5D30C(a1, a3, 0x8002u);
    sub_5D30C(a1, a3, 0x803Eu);
  }
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D30C(a1, a3, 0x805Fu);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D30C(a1, a3, 0x805Fu);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D30C(a1, a3, 0x805Fu);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D30C(a1, a3, 0x8042u);
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "%s change list 20210807", "phy_reg_read_0805");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0805",
    17,
    3218,
    60,
    v33);
  sub_5D30C(a1, a3, 0x8057u);
  sub_5D30C(a1, a3, 0x8058u);
  sub_5D30C(a1, a3, 0x8058u);
  sub_5D30C(a1, a3, 0x8048u);
  sub_5D30C(a1, a3, 0x804Cu);
  if ( v22 )
  {
    v30 = 0;
    do
    {
      v31 = v30++ << 12;
      sub_5D30C(a1, a3, v31 | 0x11);
      sub_5D30C(a1, a3, v31 | 0x11);
      sub_5D30C(a1, a3, v31 | 0x9A);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x65);
      sub_5D30C(a1, a3, v31 | 0x9A);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x27);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x96);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x7C);
      sub_5D30C(a1, a3, v31 | 0xBE);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0xA6);
      sub_5D30C(a1, a3, v31 | 0xBE);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x8B);
      sub_5D30C(a1, a3, v31 | 0x8C);
      sub_5D30C(a1, a3, v31 | 0x8C);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x46);
      sub_5D30C(a1, a3, v31 | 0x4A);
      sub_5D30C(a1, a3, v31 | 0x4A);
      sub_5D30C(a1, a3, v31 | 0x4B);
      sub_5D30C(a1, a3, v31 | 0x4B);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x56);
      sub_5D30C(a1, a3, v31 | 0x4B);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x53);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x73);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x84);
      sub_5D30C(a1, a3, v31 | 0x24);
      sub_5D30C(a1, a3, v31 | 0x25);
      sub_5D30C(a1, a3, v31 | 0xE);
      sub_5D30C(a1, a3, v31 | 0xE);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x85);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x86);
      sub_5D30C(a1, a3, v31 | 0x11);
      sub_5D30C(a1, a3, v31 | 0x11);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0xF);
      sub_5D30C(a1, a3, v31 | 0x91);
      sub_5D30C(a1, a3, v31 | 0x77);
      sub_5D30C(a1, a3, v31 & 0xF000 | 2);
      sub_5D30C(a1, a3, v31 | 0x91);
      sub_5D30C(a1, a3, v31 | 0x77);
      sub_5D30C(a1, a3, v31 | 0x24);
      sub_5D30C(a1, a3, v31 | 0x25);
      sub_5D30C(a1, a3, v31 | 0x60);
      sub_5D30C(a1, a3, v31 | 0x60);
      sub_5D30C(a1, a3, v31 | 0x24);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x41);
      sub_5D30C(a1, a3, v31 | 0x7B);
      sub_5D30C(a1, a3, v31 | 0x7B);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x88);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x89);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x94);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x95);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0xA1);
      sub_5D30C(a1, a3, v31 & 0xF000 | 0xA4);
      sub_5D30C(a1, a3, v31 | 0x6E);
      sub_5D30C(a1, a3, v31 | 0x6E);
      sub_5D4B4(a1, (unsigned __int8)a3, v31 & 0xF000 | 1, 0);
    }
    while ( v22 > v30 );
  }
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
