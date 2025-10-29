int __fastcall phy_reg_read_0922(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r8
  __int16 v9; // r6
  int v10; // r8
  __int16 v11; // r6
  int v12; // r8
  __int16 v13; // r6
  int v14; // r3
  unsigned __int16 v15; // r6
  int v16; // r6
  __int16 v17; // r2
  int v18; // r8
  __int16 v19; // r6
  int v20; // r8
  unsigned __int16 v21; // r6
  unsigned int v22; // r8
  unsigned __int16 v23; // r6
  unsigned __int16 v24; // r6
  __int16 v25; // r2
  unsigned __int16 v26; // r6
  __int16 v27; // r2
  unsigned __int16 v28; // r6
  __int16 v29; // r2
  unsigned __int16 v30; // r6
  __int16 v31; // r2
  unsigned __int16 v32; // r6
  __int16 v33; // r2
  unsigned __int16 v34; // r6
  __int16 v35; // r2
  unsigned __int16 v36; // r10
  unsigned __int16 v37; // r6
  int v38; // r2
  unsigned int v39; // r6
  unsigned __int16 v40; // r10
  unsigned __int16 v41; // r6
  unsigned int v42; // r9
  unsigned int v43; // r2
  unsigned int v44; // r7
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // r6
  __int16 v48; // [sp+14h] [bp-1008h]
  char v49[4100]; // [sp+18h] [bp-1004h] BYREF

  v7 = a4;
  V_LOCK();
  logfmt_raw(v49, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0922", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0922",
    17,
    1469,
    60,
    v49);
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
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x805Fu);
    sub_5D30C(a1, a3, 0x803Eu);
    LOWORD(v14) = 0;
    do
    {
      v48 = v14;
      v15 = (_WORD)v14 << 12;
      sub_5D30C(a1, a3, (unsigned __int16)((_WORD)v14 << 12) | 0x16);
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
      v14 = (unsigned __int16)(v48 + 1);
    }
    while ( v14 != v7 );
    LOWORD(v16) = 0;
    sub_5D30C(a1, a3, 0x8008u);
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
    while ( v22 != v7 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    v24 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v25 = v24++ << 12;
      sub_5D30C(a1, a3, v25 & 0xF000 | 0x6A);
    }
    while ( v22 > v24 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    v26 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v27 = v26++ << 12;
      sub_5D30C(a1, a3, v27 & 0xF000 | 0x6A);
    }
    while ( v22 > v26 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    v28 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v29 = v28++ << 12;
      sub_5D30C(a1, a3, v29 & 0xF000 | 0x6A);
    }
    while ( v22 > v28 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    v30 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v31 = v30++ << 12;
      sub_5D30C(a1, a3, v31 & 0xF000 | 0x98);
    }
    while ( v22 > v30 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    v32 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v33 = v32++ << 12;
      sub_5D30C(a1, a3, v33 & 0xF000 | 0x98);
    }
    while ( v22 > v32 );
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    v34 = 0;
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v35 = v34++ << 12;
      sub_5D30C(a1, a3, v35 & 0xF000 | 0x98);
    }
    while ( v22 > v34 );
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
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 128);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5BD68(a1, (unsigned __int8)a3, 144, -129);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
    sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422113);
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
  if ( v22 )
  {
    v36 = 0;
    do
    {
      v37 = v36++ << 12;
      sub_5D30C(a1, a3, v37 | 0x11);
      sub_5D30C(a1, a3, v37 | 0x11);
      sub_5D30C(a1, a3, v37 | 0x9A);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x65);
      sub_5D30C(a1, a3, v37 | 0x9A);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x27);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x96);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x7C);
      sub_5D30C(a1, a3, v37 | 0xBE);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0xA6);
      sub_5D30C(a1, a3, v37 | 0xBE);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x8B);
      sub_5D30C(a1, a3, v37 | 0x8C);
      sub_5D30C(a1, a3, v37 | 0x8C);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x46);
      sub_5D30C(a1, a3, v37 | 0x4A);
      sub_5D30C(a1, a3, v37 | 0x4A);
      sub_5D30C(a1, a3, v37 | 0x4B);
      sub_5D30C(a1, a3, v37 | 0x4B);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x56);
      sub_5D30C(a1, a3, v37 | 0x4B);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x53);
      sub_5D30C(a1, a3, v37 | 0x1A);
      sub_5D30C(a1, a3, v37 | 0x1A);
      sub_5D30C(a1, a3, v37 | 0x1A);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x73);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x84);
      sub_5D30C(a1, a3, v37 | 0x24);
      sub_5D30C(a1, a3, v37 | 0x25);
      sub_5D30C(a1, a3, v37 | 0xE);
      sub_5D30C(a1, a3, v37 | 0xE);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x85);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x86);
      sub_5D30C(a1, a3, v37 | 0x11);
      sub_5D30C(a1, a3, v37 | 0x11);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0xF);
      sub_5D30C(a1, a3, v37 | 0x91);
      sub_5D30C(a1, a3, v37 | 0x77);
      sub_5D30C(a1, a3, v37 & 0xF000 | 2);
      sub_5D30C(a1, a3, v37 | 0x91);
      sub_5D30C(a1, a3, v37 | 0x77);
      sub_5D30C(a1, a3, v37 | 0x24);
      sub_5D30C(a1, a3, v37 | 0x25);
      sub_5D30C(a1, a3, v37 | 0x60);
      sub_5D30C(a1, a3, v37 | 0x60);
      sub_5D30C(a1, a3, v37 | 0x24);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x41);
      sub_5D30C(a1, a3, v37 | 0x7B);
      sub_5D30C(a1, a3, v37 | 0x7B);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x88);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x89);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x94);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0x95);
      sub_5D30C(a1, a3, v37 & 0xF000 | 0xA1);
      v38 = v37 & 0xF000;
      v39 = v37 | 0x6E;
      sub_5D30C(a1, a3, v38 | 0xA4);
      sub_5D30C(a1, a3, v39);
      sub_5D30C(a1, a3, v39);
    }
    while ( v36 < v22 );
    v40 = 0;
    sub_5D30C(a1, a3, 0x804Au);
    sub_5D30C(a1, a3, 0x804Fu);
    sub_5D30C(a1, a3, 0x803Du);
    sub_5D30C(a1, a3, 0x8041u);
    sub_5D30C(a1, a3, 0x8002u);
    sub_5D30C(a1, a3, 0x8014u);
    do
    {
      v41 = v40++ << 12;
      v42 = v41 | 0x2C;
      sub_5D30C(a1, a3, v41 & 0xF000 | 0x69);
      sub_5D30C(a1, a3, v41 & 0xF000 | 0x48);
      sub_5D30C(a1, a3, v41 & 0xF000 | 2);
      sub_5D30C(a1, a3, v41 & 0xF000 | 6);
      sub_5D30C(a1, a3, v42);
      sub_5D30C(a1, a3, v41 | 0x27);
      sub_5D30C(a1, a3, v41 | 0x27);
      sub_5D30C(a1, a3, v41 | 0x28);
      sub_5D30C(a1, a3, v41 | 0x28);
      sub_5D30C(a1, a3, v41 | 0x28);
      sub_5D30C(a1, a3, v41 | 0x28);
      sub_5D30C(a1, a3, v41 | 0x29);
      sub_5D30C(a1, a3, v41 | 0x29);
      v43 = v41 | 0x29;
      v44 = v41 | 0x2A;
      v41 |= 0x2Bu;
      sub_5D30C(a1, a3, v43);
      sub_5D30C(a1, a3, v44);
      sub_5D30C(a1, a3, v44);
      sub_5D30C(a1, a3, v41);
      sub_5D30C(a1, a3, v41);
      sub_5D30C(a1, a3, v41);
      sub_5D30C(a1, a3, v41);
      sub_5D30C(a1, a3, v42);
    }
    while ( v22 > v40 );
    v45 = 0;
    sub_5D30C(a1, a3, 0x801Du);
    sub_5D30C(a1, a3, 0x8023u);
    sub_5D30C(a1, a3, 0x8024u);
    sub_5D30C(a1, a3, 0x8046u);
    sub_5D30C(a1, a3, 0x8061u);
    do
    {
      v46 = v45++ << 12;
      sub_5D30C(a1, a3, v46 & 0xF000 | 6);
      sub_5D30C(a1, a3, v46 & 0xF000 | 2);
      sub_5D30C(a1, a3, v46 | 0x5B);
      sub_5D30C(a1, a3, v46 | 0x5B);
      sub_5D30C(a1, a3, v46 | 0x56);
      sub_5D30C(a1, a3, v46 | 0x56);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x57);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x58);
      sub_5D30C(a1, a3, v46 | 0x5D);
      sub_5D30C(a1, a3, v46 | 0x5D);
      sub_5D30C(a1, a3, v46 | 0x5D);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x5E);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x34);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x60);
      sub_5D30C(a1, a3, v46 & 0xF000 | 0x61);
    }
    while ( v22 > v45 );
  }
  else
  {
    sub_5D30C(a1, a3, 0x804Au);
    sub_5D30C(a1, a3, 0x804Fu);
    sub_5D30C(a1, a3, 0x803Du);
    sub_5D30C(a1, a3, 0x8041u);
    sub_5D30C(a1, a3, 0x8002u);
    sub_5D30C(a1, a3, 0x8014u);
    sub_5D30C(a1, a3, 0x801Du);
    sub_5D30C(a1, a3, 0x8023u);
    sub_5D30C(a1, a3, 0x8024u);
    sub_5D30C(a1, a3, 0x8046u);
    sub_5D30C(a1, a3, 0x8061u);
  }
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5BD68(a1, (unsigned __int8)a3, 144, 0);
  sub_5BD68(a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
