int __fastcall phy_reg_read_0826(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r5
  __int16 v9; // r4
  int v10; // r5
  __int16 v11; // r4
  int v12; // r5
  __int16 v13; // r4
  int v14; // r8
  unsigned __int16 v15; // r4
  int v16; // r4
  __int16 v17; // r2
  int v18; // r5
  __int16 v19; // r4
  unsigned int v20; // r5
  unsigned __int16 v21; // r4
  unsigned int v22; // r8
  unsigned __int16 v23; // r7
  unsigned __int16 v24; // r4
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r5
  int v27; // r2
  int v28; // r6
  unsigned __int16 v29; // r7
  unsigned __int16 v30; // r4
  int v31; // r2
  unsigned int v32; // r4
  unsigned __int16 v33; // r4
  unsigned __int16 v34; // r4
  __int16 v35; // r2
  unsigned int v37; // [sp+14h] [bp-1020h]
  int v38; // [sp+18h] [bp-101Ch]
  unsigned int v39; // [sp+1Ch] [bp-1018h]
  char v40[4100]; // [sp+30h] [bp-1004h] BYREF

  v7 = a4;
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0826", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0826",
    17,
    2410,
    60,
    v40);
  if ( v7 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5D30C(a1, a3, v9 & 0xF000 | 0x67);
      sub_5D30C(a1, a3, v9 & 0xF000 | 0x96);
    }
    while ( v8 != v7 );
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
    while ( v10 != v7 );
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
    while ( v12 != v7 );
    LOWORD(v14) = 0;
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x803Eu);
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
    while ( v14 != v7 );
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
    while ( v16 != v7 );
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
    while ( v18 != v7 );
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
    while ( v20 != v7 );
    v39 = v20;
    sub_5D30C(a1, a3, 0x803Eu);
    v22 = v20;
    v23 = 0;
    do
    {
      v24 = v23++ << 12;
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x1A);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x1D);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x1E);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x45);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x46);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x47);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x71);
      sub_5D30C(a1, a3, v24 & 0xF000 | 2);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x99);
      v25 = v24 | 0x6A;
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x7F);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x13);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x14);
      sub_5D30C(a1, a3, v24 | 0x11);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x15);
      sub_5D30C(a1, a3, v24 | 0x11);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x16);
      sub_5D30C(a1, a3, v24 | 0x17);
      sub_5D30C(a1, a3, v24 | 0x17);
      sub_5D30C(a1, a3, v24 | 0xA5);
      sub_5D30C(a1, a3, v24 | 0xA5);
      sub_5D30C(a1, a3, v24 | 0xA6);
      sub_5D30C(a1, a3, v24 | 0xA6);
      sub_5D30C(a1, a3, v24 | 0xA6);
      sub_5D30C(a1, a3, v24 | 0xA6);
      sub_5D30C(a1, a3, v24 | 0xA7);
      sub_5D30C(a1, a3, v24 | 0xA7);
      sub_5D30C(a1, a3, v24 | 0xA7);
      v26 = v24 | 1;
      sub_5D30C(a1, a3, v24 | 0xA7);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x4A);
      sub_5D30C(a1, a3, v24 & 0xF000 | 0x90);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5D30C(a1, a3, v24 | 0x6A);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5D30C(a1, a3, v24 | 0x6A);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5D4B4(a1, (unsigned __int8)a3, v24 | 1, -67108865);
      v27 = v24 | 0x3A;
      v28 = v24 | 0x5F;
      v24 |= 0x98u;
      sub_5D4B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5D30C(a1, a3, v25);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D30C(a1, a3, v24);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D30C(a1, a3, v24);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 128);
      sub_5D4B4(a1, (unsigned __int8)a3, v26, -129);
      sub_5D4B4(a1, (unsigned __int8)a3, v28, 0);
      sub_5D30C(a1, a3, v24);
    }
    while ( v22 > v23 );
  }
  else
  {
    v39 = 0;
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
  sub_5D30C(a1, a3, 0x8057u);
  sub_5D30C(a1, a3, 0x8058u);
  sub_5D30C(a1, a3, 0x8058u);
  sub_5D30C(a1, a3, 0x8048u);
  sub_5D30C(a1, a3, 0x804Cu);
  if ( v39 )
  {
    v29 = 0;
    do
    {
      v30 = v29++ << 12;
      sub_5D30C(a1, a3, v30 | 0x11);
      sub_5D30C(a1, a3, v30 | 0x11);
      sub_5D30C(a1, a3, v30 | 0x9A);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x65);
      sub_5D30C(a1, a3, v30 | 0x9A);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x27);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x96);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x7C);
      sub_5D30C(a1, a3, v30 | 0xBE);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0xA6);
      sub_5D30C(a1, a3, v30 | 0xBE);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x8B);
      sub_5D30C(a1, a3, v30 | 0x8C);
      sub_5D30C(a1, a3, v30 | 0x8C);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x46);
      sub_5D30C(a1, a3, v30 | 0x4A);
      sub_5D30C(a1, a3, v30 | 0x4A);
      sub_5D30C(a1, a3, v30 | 0x4B);
      sub_5D30C(a1, a3, v30 | 0x4B);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x56);
      sub_5D30C(a1, a3, v30 | 0x4B);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x53);
      sub_5D30C(a1, a3, v30 | 0x1A);
      sub_5D30C(a1, a3, v30 | 0x1A);
      sub_5D30C(a1, a3, v30 | 0x1A);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x73);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x84);
      sub_5D30C(a1, a3, v30 | 0x24);
      sub_5D30C(a1, a3, v30 | 0x25);
      sub_5D30C(a1, a3, v30 | 0xE);
      sub_5D30C(a1, a3, v30 | 0xE);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x85);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x86);
      sub_5D30C(a1, a3, v30 | 0x11);
      sub_5D30C(a1, a3, v30 | 0x11);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0xF);
      sub_5D30C(a1, a3, v30 | 0x91);
      sub_5D30C(a1, a3, v30 | 0x77);
      sub_5D30C(a1, a3, v30 & 0xF000 | 2);
      sub_5D30C(a1, a3, v30 | 0x91);
      sub_5D30C(a1, a3, v30 | 0x77);
      sub_5D30C(a1, a3, v30 | 0x24);
      sub_5D30C(a1, a3, v30 | 0x25);
      sub_5D30C(a1, a3, v30 | 0x60);
      sub_5D30C(a1, a3, v30 | 0x60);
      sub_5D30C(a1, a3, v30 | 0x24);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x41);
      sub_5D30C(a1, a3, v30 | 0x7B);
      sub_5D30C(a1, a3, v30 | 0x7B);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x88);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x89);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x94);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0x95);
      sub_5D30C(a1, a3, v30 & 0xF000 | 0xA1);
      v31 = v30 & 0xF000;
      v32 = v30 | 0x6E;
      sub_5D30C(a1, a3, v31 | 0xA4);
      sub_5D30C(a1, a3, v32);
      sub_5D30C(a1, a3, v32);
    }
    while ( v39 > v29 );
    v38 = 0;
    sub_5D30C(a1, a3, 0x804Au);
    sub_5D30C(a1, a3, 0x804Fu);
    sub_5D30C(a1, a3, 0x803Du);
    sub_5D30C(a1, a3, 0x8041u);
    sub_5D30C(a1, a3, 0x8002u);
    sub_5D30C(a1, a3, 0x8014u);
    do
    {
      v33 = (_WORD)v38++ << 12;
      sub_5D30C(a1, a3, v33 | 0x69);
      sub_5D30C(a1, a3, v33 | 0x48);
      sub_5D30C(a1, a3, v33 | 2);
      sub_5D30C(a1, a3, v33 | 6);
      v37 = v33 | 0x2C;
      sub_5D30C(a1, a3, v37);
      sub_5D30C(a1, a3, v33 | 0x27);
      sub_5D30C(a1, a3, v33 | 0x27);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x2A);
      sub_5D30C(a1, a3, v33 | 0x2A);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v37);
      sub_5D30C(a1, a3, v33 | 0x69);
      sub_5D30C(a1, a3, v33 | 0x48);
      sub_5D30C(a1, a3, v33 | 2);
      sub_5D30C(a1, a3, v33 | 6);
      sub_5D30C(a1, a3, v37);
      sub_5D30C(a1, a3, v33 | 0x27);
      sub_5D30C(a1, a3, v33 | 0x27);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x28);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x29);
      sub_5D30C(a1, a3, v33 | 0x2A);
      sub_5D30C(a1, a3, v33 | 0x2A);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v33 | 0x2B);
      sub_5D30C(a1, a3, v37);
      sub_5D30C(a1, a3, v33 & 0xF000 | 3);
    }
    while ( v39 > (unsigned __int16)v38 );
  }
  else
  {
    sub_5D30C(a1, a3, 0x804Au);
    sub_5D30C(a1, a3, 0x804Fu);
    sub_5D30C(a1, a3, 0x803Du);
    sub_5D30C(a1, a3, 0x8041u);
    sub_5D30C(a1, a3, 0x8002u);
    sub_5D30C(a1, a3, 0x8014u);
  }
  sub_5D30C(a1, a3, 0x801Du);
  sub_5D30C(a1, a3, 0x8023u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -17);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -17);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 16);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -17);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5D30C(a1, a3, 0x8024u);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0x200000);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5BD68(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5D30C(a1, a3, 0x8026u);
  sub_5D30C(a1, a3, 0x8046u);
  sub_5D30C(a1, a3, 0x8061u);
  if ( v39 )
  {
    v34 = 0;
    do
    {
      v35 = v34++ << 12;
      sub_5D4B4(a1, (unsigned __int8)a3, v35 & 0xF000 | 1, 0);
    }
    while ( v39 > v34 );
  }
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  return 0;
}
