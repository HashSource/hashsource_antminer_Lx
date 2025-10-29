int __fastcall phy_reg_read(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  __int16 v8; // r6
  int v9; // r7
  __int16 v10; // r6
  int v11; // r7
  __int16 v12; // r6
  int v13; // r7
  __int16 v14; // r6
  int v15; // r3
  unsigned __int16 v16; // r6
  int v17; // r6
  __int16 v18; // r2
  int v19; // r7
  __int16 v20; // r6
  unsigned int v21; // r9
  unsigned __int16 v22; // r6
  unsigned __int16 v23; // r10
  unsigned __int16 v24; // r7
  int v25; // r6
  unsigned __int16 v26; // r11
  int v27; // r2
  int v28; // r8
  unsigned __int16 v29; // r7
  unsigned __int16 v30; // r6
  unsigned __int16 v31; // r7
  __int16 v32; // r6
  __int16 v34; // [sp+2Ch] [bp-1028h]
  _DWORD v35[7]; // [sp+30h] [bp-1024h] BYREF
  int v36; // [sp+4Ch] [bp-1008h]
  char v37[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v35, "chain", *(int *)(a1 + 148));
  logfmt_raw(v37, 0x1000u, 0, v36, v35[0], v35[1], v35[2], v35[3], v35[4], v35[5], v35[6], v36, "%s...", "phy_reg_read");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read",
    12,
    925,
    60,
    v37);
  if ( a4 )
  {
    LOWORD(v7) = 0;
    do
    {
      v8 = (_WORD)v7 << 12;
      v7 = (unsigned __int16)(v7 + 1);
      sub_5F3AC(a1, a3, v8 & 0xF000 | 2);
      sub_5F3AC(a1, a3, v8 & 0xF000 | 3);
      sub_5F3AC(a1, a3, v8 & 0xF000 | 8);
    }
    while ( v7 != a4 );
    LOWORD(v9) = 0;
    sub_5F3AC(a1, a3, 0x803Eu);
    do
    {
      v10 = (_WORD)v9 << 12;
      v9 = (unsigned __int16)(v9 + 1);
      sub_5F3AC(a1, a3, v10 & 0xF000 | 0x67);
      sub_5F3AC(a1, a3, v10 & 0xF000 | 0x96);
    }
    while ( v9 != a4 );
    LOWORD(v11) = 0;
    sub_5F3AC(a1, a3, 0x8051u);
    sub_5F3AC(a1, a3, 0x800Du);
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5F3AC(a1, a3, v12 & 0xF000 | 0x43);
      sub_5F3AC(a1, a3, v12 & 0xF000 | 0x75);
      sub_5F3AC(a1, a3, v12 & 0xF000 | 0x76);
      sub_5F3AC(a1, a3, v12 & 0xF000 | 0xB0);
    }
    while ( v11 != a4 );
    LOWORD(v13) = 0;
    sub_5F3AC(a1, a3, 0x8030u);
    sub_5F3AC(a1, a3, 0x803Bu);
    sub_5F3AC(a1, a3, 0x8044u);
    sub_5F3AC(a1, a3, 0x8060u);
    sub_5F3AC(a1, a3, 0x8008u);
    sub_5F3AC(a1, a3, 0x803Eu);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5F3AC(a1, a3, v14 & 0xF000 | 0x49);
      sub_5F3AC(a1, a3, v14 & 0xF000 | 0xF);
    }
    while ( v13 != a4 );
    sub_5F3AC(a1, a3, 0x805Fu);
    sub_5F3AC(a1, a3, 0x805Fu);
    sub_5F3AC(a1, a3, 0x803Eu);
    LOWORD(v15) = 0;
    do
    {
      v34 = v15;
      v16 = (_WORD)v15 << 12;
      sub_5F3AC(a1, a3, (unsigned __int16)((_WORD)v15 << 12) | 0x16);
      sub_5F3AC(a1, a3, v16 | 0xA9);
      sub_5F3AC(a1, a3, v16 | 0xA9);
      sub_5F3AC(a1, a3, v16 | 0xA9);
      sub_5F3AC(a1, a3, v16 | 0xA9);
      sub_5F3AC(a1, a3, v16 | 0xAA);
      sub_5F3AC(a1, a3, v16 | 0xAA);
      sub_5F3AC(a1, a3, v16 | 0xAA);
      sub_5F3AC(a1, a3, v16 | 0xAA);
      sub_5F3AC(a1, a3, v16 | 0xAA);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0xAB);
      sub_5F3AC(a1, a3, v16 | 0x9F);
      sub_5F3AC(a1, a3, v16 | 0x9F);
      sub_5F3AC(a1, a3, v16 | 0xA0);
      sub_5F3AC(a1, a3, v16 | 0xA0);
      sub_5F3AC(a1, a3, v16 | 0xA0);
      sub_5F3AC(a1, a3, v16 | 0xA0);
      sub_5F3AC(a1, a3, v16 | 0xA1);
      sub_5F3AC(a1, a3, v16 | 0xA1);
      sub_5F3AC(a1, a3, v16 | 0x75);
      sub_5F3AC(a1, a3, v16 | 0x75);
      sub_5F3AC(a1, a3, v16 | 0x76);
      sub_5F3AC(a1, a3, v16 | 0x76);
      sub_5F3AC(a1, a3, v16 | 0x76);
      sub_5F3AC(a1, a3, v16 | 0x76);
      sub_5F3AC(a1, a3, v16 | 0x77);
      sub_5F3AC(a1, a3, v16 | 0x77);
      sub_5F3AC(a1, a3, v16 | 0x77);
      sub_5F3AC(a1, a3, v16 | 0x77);
      sub_5F3AC(a1, a3, v16 | 0x78);
      sub_5F3AC(a1, a3, v16 | 0x78);
      sub_5F3AC(a1, a3, v16 | 0x78);
      sub_5F3AC(a1, a3, v16 | 0x78);
      sub_5F3AC(a1, a3, v16 | 0x79);
      sub_5F3AC(a1, a3, v16 | 0x79);
      sub_5F3AC(a1, a3, v16 | 0x25);
      sub_5F3AC(a1, a3, v16 | 0x25);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 | 0x27);
      sub_5F3AC(a1, a3, v16 | 0x27);
      sub_5F3AC(a1, a3, v16 | 0x27);
      sub_5F3AC(a1, a3, v16 | 0x27);
      sub_5F3AC(a1, a3, v16 | 0x27);
      sub_5F3AC(a1, a3, v16 | 0x28);
      sub_5F3AC(a1, a3, v16 | 0x28);
      sub_5F3AC(a1, a3, v16 | 0x28);
      sub_5F3AC(a1, a3, v16 | 0x28);
      sub_5F3AC(a1, a3, v16 | 0x28);
      sub_5F3AC(a1, a3, v16 | 0x29);
      sub_5F3AC(a1, a3, v16 | 0x29);
      sub_5F3AC(a1, a3, v16 | 0x29);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x24);
      sub_5F3AC(a1, a3, v16 | 0x25);
      sub_5F3AC(a1, a3, v16 | 0x26);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x56);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x7C);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x89);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x95);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0xA2);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x12);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x4A);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x85);
      sub_5F3AC(a1, a3, v16 | 0x9F);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x11);
      sub_5F3AC(a1, a3, v16 & 0xF000 | 0x13);
      v15 = (unsigned __int16)(v34 + 1);
    }
    while ( v15 != a4 );
    LOWORD(v17) = 0;
    sub_5F3AC(a1, a3, 0x8008u);
    sub_5F3AC(a1, a3, 0x8009u);
    sub_5F3AC(a1, a3, 0xA002u);
    sub_5F3AC(a1, a3, 0xA026u);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_5F3AC(a1, a3, v18 & 0xF000 | 0xD);
    }
    while ( v17 != a4 );
    LOWORD(v19) = 0;
    sub_5F3AC(a1, a3, 0x801Bu);
    sub_5F3AC(a1, a3, 0x801Cu);
    sub_5F3AC(a1, a3, 0x803Cu);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x19);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x22);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x74);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0xA1);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x88);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x12);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x4A);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0x7E);
      sub_5F3AC(a1, a3, v20 & 0xF000 | 0xB6);
    }
    while ( v19 != a4 );
    LOWORD(v21) = 0;
    sub_5F3AC(a1, a3, 0x8002u);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5F3AC(a1, a3, v22 & 0xF000 | 2);
      sub_5F3AC(a1, a3, v22 | 8);
      sub_5F3AC(a1, a3, v22 | 8);
      sub_5F3AC(a1, a3, v22 & 0xF000 | 3);
    }
    while ( v21 != a4 );
    v23 = 0;
    sub_5F3AC(a1, a3, 0x803Eu);
    do
    {
      v24 = v23++ << 12;
      v25 = v24 | 1;
      v26 = v24 | 0x6A;
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5F3AC(a1, a3, v24 | 0x6A);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5F3AC(a1, a3, v24 | 0x6A);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      sub_5F554(a1, (unsigned __int8)a3, v24 | 0x3A, 0x4000000);
      sub_5F554(a1, (unsigned __int8)a3, v25, -67108865);
      v27 = v24 | 0x3A;
      v28 = v24 | 0x5F;
      v24 |= 0x98u;
      sub_5F554(a1, (unsigned __int8)a3, v27, 0);
      sub_5F3AC(a1, a3, v26);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 128);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F3AC(a1, a3, v24);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 128);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F3AC(a1, a3, v24);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 128);
      sub_5F554(a1, (unsigned __int8)a3, v25, -129);
      sub_5F554(a1, (unsigned __int8)a3, v28, 0);
      sub_5F3AC(a1, a3, v24);
    }
    while ( v21 > v23 );
  }
  else
  {
    v21 = 0;
    sub_5F3AC(a1, a3, 0x803Eu);
    sub_5F3AC(a1, a3, 0x8051u);
    sub_5F3AC(a1, a3, 0x800Du);
    sub_5F3AC(a1, a3, 0x8030u);
    sub_5F3AC(a1, a3, 0x803Bu);
    sub_5F3AC(a1, a3, 0x8044u);
    sub_5F3AC(a1, a3, 0x8060u);
    sub_5F3AC(a1, a3, 0x8008u);
    sub_5F3AC(a1, a3, 0x803Eu);
    sub_5F3AC(a1, a3, 0x805Fu);
    sub_5F3AC(a1, a3, 0x805Fu);
    sub_5F3AC(a1, a3, 0x803Eu);
    sub_5F3AC(a1, a3, 0x8008u);
    sub_5F3AC(a1, a3, 0x8009u);
    sub_5F3AC(a1, a3, 0xA002u);
    sub_5F3AC(a1, a3, 0xA026u);
    sub_5F3AC(a1, a3, 0x801Bu);
    sub_5F3AC(a1, a3, 0x801Cu);
    sub_5F3AC(a1, a3, 0x803Cu);
    sub_5F3AC(a1, a3, 0x8002u);
    sub_5F3AC(a1, a3, 0x803Eu);
  }
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5F3AC(a1, a3, 0x805Fu);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5F3AC(a1, a3, 0x805Fu);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5F3AC(a1, a3, 0x805Fu);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DE08(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
  sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5F3AC(a1, a3, 0x8042u);
  if ( v21 )
  {
    v29 = 0;
    do
    {
      v30 = v29++ << 12;
      sub_5F554(a1, (unsigned __int8)a3, v30 | 1, 0);
      sub_5F554(a1, (unsigned __int8)a3, v30 | 1, -65521);
      sub_5F554(a1, (unsigned __int8)a3, v30 & 0xF000 | 2, 0x8000);
    }
    while ( v21 > v29 );
    sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
    v31 = 0;
    sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
    sub_5DE08(a1, (unsigned __int8)a3, 145, -2147442687);
    do
    {
      v32 = v31++ << 12;
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x1A);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x1D);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x1E);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x45);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x46);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x47);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x71);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 2);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x99);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x7F);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0xA5);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0xA6);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0xA7);
      sub_5F3AC(a1, a3, v32 & 0xF000 | 0x6F);
    }
    while ( v21 > v31 );
    return 0;
  }
  else
  {
    sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
    sub_5DE08(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_5DE08(a1, (unsigned __int8)a3, 144, 0);
    sub_5DE08(a1, (unsigned __int8)a3, 145, -2147442687);
    return 0;
  }
}
