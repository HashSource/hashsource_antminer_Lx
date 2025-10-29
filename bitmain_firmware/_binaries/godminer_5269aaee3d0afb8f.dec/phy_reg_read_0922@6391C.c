int __fastcall phy_reg_read_0922(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r8
  __int16 v12; // r6
  int v13; // r8
  __int16 v14; // r6
  int v15; // r8
  __int16 v16; // r6
  int v17; // r3
  unsigned __int16 v18; // r6
  int v19; // r6
  __int16 v20; // r2
  int v21; // r8
  __int16 v22; // r6
  int v23; // r8
  unsigned __int16 v24; // r6
  unsigned int v25; // r8
  unsigned __int16 v26; // r6
  unsigned __int16 v27; // r6
  __int16 v28; // r2
  unsigned __int16 v29; // r6
  __int16 v30; // r2
  unsigned __int16 v31; // r6
  __int16 v32; // r2
  unsigned __int16 v33; // r6
  __int16 v34; // r2
  unsigned __int16 v35; // r6
  __int16 v36; // r2
  unsigned __int16 v37; // r6
  __int16 v38; // r2
  unsigned __int16 v39; // r10
  unsigned __int16 v40; // r6
  int v41; // r2
  unsigned int v42; // r6
  unsigned __int16 v43; // r10
  unsigned __int16 v44; // r6
  unsigned int v45; // r9
  unsigned int v46; // r2
  unsigned int v47; // r7
  unsigned __int16 v48; // r9
  unsigned __int16 v49; // r6
  __int16 v51; // [sp+14h] [bp-1008h]
  char v52[4100]; // [sp+18h] [bp-1004h] BYREF

  v7 = a4;
  V_LOCK();
  LOWORD(v8) = -22464;
  HIWORD(v8) = (unsigned int)"ic_config_20210911" >> 16;
  logfmt_raw(v52, 0x1000u, 0, v8, "phy_reg_read_0922", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14756;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -23296;
  HIWORD(v10) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v9, v10, 154, "phy_reg_read_0922", 17, 1469, 60, v52);
  if ( v7 )
  {
    LOWORD(v11) = 0;
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5E124(a1, a3, v12 & 0xF000 | 0x67);
      sub_5E124(a1, a3, v12 & 0xF000 | 0x96);
    }
    while ( v11 != v7 );
    LOWORD(v13) = 0;
    sub_5E124(a1, a3, 0x8051u);
    sub_5E124(a1, a3, 0x800Du);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5E124(a1, a3, v14 & 0xF000 | 0x43);
      sub_5E124(a1, a3, v14 & 0xF000 | 0x75);
      sub_5E124(a1, a3, v14 & 0xF000 | 0x76);
      sub_5E124(a1, a3, v14 & 0xF000 | 0xB0);
    }
    while ( v13 != v7 );
    LOWORD(v15) = 0;
    sub_5E124(a1, a3, 0x8030u);
    sub_5E124(a1, a3, 0x803Bu);
    sub_5E124(a1, a3, 0x8044u);
    sub_5E124(a1, a3, 0x8060u);
    sub_5E124(a1, a3, 0x8008u);
    sub_5E124(a1, a3, 0x803Eu);
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_5E124(a1, a3, v16 & 0xF000 | 0x49);
      sub_5E124(a1, a3, v16 & 0xF000 | 0xF);
    }
    while ( v15 != v7 );
    sub_5E124(a1, a3, 0x805Fu);
    sub_5E124(a1, a3, 0x805Fu);
    sub_5E124(a1, a3, 0x803Eu);
    LOWORD(v17) = 0;
    do
    {
      v51 = v17;
      v18 = (_WORD)v17 << 12;
      sub_5E124(a1, a3, (unsigned __int16)((_WORD)v17 << 12) | 0x16);
      sub_5E124(a1, a3, v18 | 0xA9);
      sub_5E124(a1, a3, v18 | 0xA9);
      sub_5E124(a1, a3, v18 | 0xA9);
      sub_5E124(a1, a3, v18 | 0xA9);
      sub_5E124(a1, a3, v18 | 0xAA);
      sub_5E124(a1, a3, v18 | 0xAA);
      sub_5E124(a1, a3, v18 | 0xAA);
      sub_5E124(a1, a3, v18 | 0xAA);
      sub_5E124(a1, a3, v18 | 0xAA);
      sub_5E124(a1, a3, v18 & 0xF000 | 0xAB);
      sub_5E124(a1, a3, v18 | 0x9F);
      sub_5E124(a1, a3, v18 | 0x9F);
      sub_5E124(a1, a3, v18 | 0xA0);
      sub_5E124(a1, a3, v18 | 0xA0);
      sub_5E124(a1, a3, v18 | 0xA0);
      sub_5E124(a1, a3, v18 | 0xA0);
      sub_5E124(a1, a3, v18 | 0xA1);
      sub_5E124(a1, a3, v18 | 0xA1);
      sub_5E124(a1, a3, v18 | 0x75);
      sub_5E124(a1, a3, v18 | 0x75);
      sub_5E124(a1, a3, v18 | 0x76);
      sub_5E124(a1, a3, v18 | 0x76);
      sub_5E124(a1, a3, v18 | 0x76);
      sub_5E124(a1, a3, v18 | 0x76);
      sub_5E124(a1, a3, v18 | 0x77);
      sub_5E124(a1, a3, v18 | 0x77);
      sub_5E124(a1, a3, v18 | 0x77);
      sub_5E124(a1, a3, v18 | 0x77);
      sub_5E124(a1, a3, v18 | 0x78);
      sub_5E124(a1, a3, v18 | 0x78);
      sub_5E124(a1, a3, v18 | 0x78);
      sub_5E124(a1, a3, v18 | 0x78);
      sub_5E124(a1, a3, v18 | 0x79);
      sub_5E124(a1, a3, v18 | 0x79);
      sub_5E124(a1, a3, v18 | 0x25);
      sub_5E124(a1, a3, v18 | 0x25);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 | 0x27);
      sub_5E124(a1, a3, v18 | 0x27);
      sub_5E124(a1, a3, v18 | 0x27);
      sub_5E124(a1, a3, v18 | 0x27);
      sub_5E124(a1, a3, v18 | 0x27);
      sub_5E124(a1, a3, v18 | 0x28);
      sub_5E124(a1, a3, v18 | 0x28);
      sub_5E124(a1, a3, v18 | 0x28);
      sub_5E124(a1, a3, v18 | 0x28);
      sub_5E124(a1, a3, v18 | 0x28);
      sub_5E124(a1, a3, v18 | 0x29);
      sub_5E124(a1, a3, v18 | 0x29);
      sub_5E124(a1, a3, v18 | 0x29);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x24);
      sub_5E124(a1, a3, v18 | 0x25);
      sub_5E124(a1, a3, v18 | 0x26);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x56);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x7C);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x89);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x95);
      sub_5E124(a1, a3, v18 & 0xF000 | 0xA2);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x12);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x4A);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x85);
      sub_5E124(a1, a3, v18 | 0x9F);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x11);
      sub_5E124(a1, a3, v18 & 0xF000 | 0x13);
      v17 = (unsigned __int16)(v51 + 1);
    }
    while ( v17 != v7 );
    LOWORD(v19) = 0;
    sub_5E124(a1, a3, 0x8008u);
    sub_5E124(a1, a3, 0x8009u);
    sub_5E124(a1, a3, 0xA002u);
    sub_5E124(a1, a3, 0xA026u);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_5E124(a1, a3, v20 & 0xF000 | 0xD);
    }
    while ( v19 != v7 );
    LOWORD(v21) = 0;
    sub_5E124(a1, a3, 0x801Bu);
    sub_5E124(a1, a3, 0x801Cu);
    sub_5E124(a1, a3, 0x803Cu);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x19);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x22);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x74);
      sub_5E124(a1, a3, v22 & 0xF000 | 0xA1);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x88);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x12);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x4A);
      sub_5E124(a1, a3, v22 & 0xF000 | 0x7E);
      sub_5E124(a1, a3, v22 & 0xF000 | 0xB6);
    }
    while ( v21 != v7 );
    LOWORD(v23) = 0;
    sub_5E124(a1, a3, 0x8002u);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_5E124(a1, a3, v24 & 0xF000 | 2);
      sub_5E124(a1, a3, v24 | 8);
      sub_5E124(a1, a3, v24 | 8);
      sub_5E124(a1, a3, v24 & 0xF000 | 3);
    }
    while ( v23 != v7 );
    LOWORD(v25) = 0;
    sub_5E124(a1, a3, 0x803Eu);
    do
    {
      v26 = (_WORD)v25 << 12;
      v25 = (unsigned __int16)(v25 + 1);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x1A);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x1D);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x1E);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x45);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x46);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x47);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x71);
      sub_5E124(a1, a3, v26 & 0xF000 | 2);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x99);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x7F);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x13);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x14);
      sub_5E124(a1, a3, v26 | 0x11);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x15);
      sub_5E124(a1, a3, v26 | 0x11);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x16);
      sub_5E124(a1, a3, v26 | 0x17);
      sub_5E124(a1, a3, v26 | 0x17);
      sub_5E124(a1, a3, v26 | 0xA5);
      sub_5E124(a1, a3, v26 | 0xA5);
      sub_5E124(a1, a3, v26 | 0xA6);
      sub_5E124(a1, a3, v26 | 0xA6);
      sub_5E124(a1, a3, v26 | 0xA6);
      sub_5E124(a1, a3, v26 | 0xA6);
      sub_5E124(a1, a3, v26 | 0xA7);
      sub_5E124(a1, a3, v26 | 0xA7);
      sub_5E124(a1, a3, v26 | 0xA7);
      sub_5E124(a1, a3, v26 | 0xA7);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x4A);
      sub_5E124(a1, a3, v26 & 0xF000 | 0x90);
    }
    while ( v25 != v7 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    v27 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v28 = v27++ << 12;
      sub_5E124(a1, a3, v28 & 0xF000 | 0x6A);
    }
    while ( v25 > v27 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    v29 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v30 = v29++ << 12;
      sub_5E124(a1, a3, v30 & 0xF000 | 0x6A);
    }
    while ( v25 > v29 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    v31 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    do
    {
      v32 = v31++ << 12;
      sub_5E124(a1, a3, v32 & 0xF000 | 0x6A);
    }
    while ( v25 > v31 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    v33 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v34 = v33++ << 12;
      sub_5E124(a1, a3, v34 & 0xF000 | 0x98);
    }
    while ( v25 > v33 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    v35 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v36 = v35++ << 12;
      sub_5E124(a1, a3, v36 & 0xF000 | 0x98);
    }
    while ( v25 > v35 );
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    v37 = 0;
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v38 = v37++ << 12;
      sub_5E124(a1, a3, v38 & 0xF000 | 0x98);
    }
    while ( v25 > v37 );
  }
  else
  {
    v25 = 0;
    sub_5E124(a1, a3, 0x8051u);
    sub_5E124(a1, a3, 0x800Du);
    sub_5E124(a1, a3, 0x8030u);
    sub_5E124(a1, a3, 0x803Bu);
    sub_5E124(a1, a3, 0x8044u);
    sub_5E124(a1, a3, 0x8060u);
    sub_5E124(a1, a3, 0x8008u);
    sub_5E124(a1, a3, 0x803Eu);
    sub_5E124(a1, a3, 0x805Fu);
    sub_5E124(a1, a3, 0x805Fu);
    sub_5E124(a1, a3, 0x803Eu);
    sub_5E124(a1, a3, 0x8008u);
    sub_5E124(a1, a3, 0x8009u);
    sub_5E124(a1, a3, 0xA002u);
    sub_5E124(a1, a3, 0xA026u);
    sub_5E124(a1, a3, 0x801Bu);
    sub_5E124(a1, a3, 0x801Cu);
    sub_5E124(a1, a3, 0x803Cu);
    sub_5E124(a1, a3, 0x8002u);
    sub_5E124(a1, a3, 0x803Eu);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422150);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 128);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5CB80(a1, (unsigned __int8)a3, 144, -129);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
    sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422113);
  }
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5E124(a1, a3, 0x805Fu);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5E124(a1, a3, 0x805Fu);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5E124(a1, a3, 0x805Fu);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5CB80(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5E124(a1, a3, 0x8042u);
  sub_5E124(a1, a3, 0x8057u);
  sub_5E124(a1, a3, 0x8058u);
  sub_5E124(a1, a3, 0x8058u);
  sub_5E124(a1, a3, 0x8048u);
  sub_5E124(a1, a3, 0x804Cu);
  if ( v25 )
  {
    v39 = 0;
    do
    {
      v40 = v39++ << 12;
      sub_5E124(a1, a3, v40 | 0x11);
      sub_5E124(a1, a3, v40 | 0x11);
      sub_5E124(a1, a3, v40 | 0x9A);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x65);
      sub_5E124(a1, a3, v40 | 0x9A);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x27);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x96);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x7C);
      sub_5E124(a1, a3, v40 | 0xBE);
      sub_5E124(a1, a3, v40 & 0xF000 | 0xA6);
      sub_5E124(a1, a3, v40 | 0xBE);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x8B);
      sub_5E124(a1, a3, v40 | 0x8C);
      sub_5E124(a1, a3, v40 | 0x8C);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x46);
      sub_5E124(a1, a3, v40 | 0x4A);
      sub_5E124(a1, a3, v40 | 0x4A);
      sub_5E124(a1, a3, v40 | 0x4B);
      sub_5E124(a1, a3, v40 | 0x4B);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x56);
      sub_5E124(a1, a3, v40 | 0x4B);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x53);
      sub_5E124(a1, a3, v40 | 0x1A);
      sub_5E124(a1, a3, v40 | 0x1A);
      sub_5E124(a1, a3, v40 | 0x1A);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x73);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x84);
      sub_5E124(a1, a3, v40 | 0x24);
      sub_5E124(a1, a3, v40 | 0x25);
      sub_5E124(a1, a3, v40 | 0xE);
      sub_5E124(a1, a3, v40 | 0xE);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x85);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x86);
      sub_5E124(a1, a3, v40 | 0x11);
      sub_5E124(a1, a3, v40 | 0x11);
      sub_5E124(a1, a3, v40 & 0xF000 | 0xF);
      sub_5E124(a1, a3, v40 | 0x91);
      sub_5E124(a1, a3, v40 | 0x77);
      sub_5E124(a1, a3, v40 & 0xF000 | 2);
      sub_5E124(a1, a3, v40 | 0x91);
      sub_5E124(a1, a3, v40 | 0x77);
      sub_5E124(a1, a3, v40 | 0x24);
      sub_5E124(a1, a3, v40 | 0x25);
      sub_5E124(a1, a3, v40 | 0x60);
      sub_5E124(a1, a3, v40 | 0x60);
      sub_5E124(a1, a3, v40 | 0x24);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x41);
      sub_5E124(a1, a3, v40 | 0x7B);
      sub_5E124(a1, a3, v40 | 0x7B);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x88);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x89);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x94);
      sub_5E124(a1, a3, v40 & 0xF000 | 0x95);
      sub_5E124(a1, a3, v40 & 0xF000 | 0xA1);
      v41 = v40 & 0xF000;
      v42 = v40 | 0x6E;
      sub_5E124(a1, a3, v41 | 0xA4);
      sub_5E124(a1, a3, v42);
      sub_5E124(a1, a3, v42);
    }
    while ( v39 < v25 );
    v43 = 0;
    sub_5E124(a1, a3, 0x804Au);
    sub_5E124(a1, a3, 0x804Fu);
    sub_5E124(a1, a3, 0x803Du);
    sub_5E124(a1, a3, 0x8041u);
    sub_5E124(a1, a3, 0x8002u);
    sub_5E124(a1, a3, 0x8014u);
    do
    {
      v44 = v43++ << 12;
      v45 = v44 | 0x2C;
      sub_5E124(a1, a3, v44 & 0xF000 | 0x69);
      sub_5E124(a1, a3, v44 & 0xF000 | 0x48);
      sub_5E124(a1, a3, v44 & 0xF000 | 2);
      sub_5E124(a1, a3, v44 & 0xF000 | 6);
      sub_5E124(a1, a3, v45);
      sub_5E124(a1, a3, v44 | 0x27);
      sub_5E124(a1, a3, v44 | 0x27);
      sub_5E124(a1, a3, v44 | 0x28);
      sub_5E124(a1, a3, v44 | 0x28);
      sub_5E124(a1, a3, v44 | 0x28);
      sub_5E124(a1, a3, v44 | 0x28);
      sub_5E124(a1, a3, v44 | 0x29);
      sub_5E124(a1, a3, v44 | 0x29);
      v46 = v44 | 0x29;
      v47 = v44 | 0x2A;
      v44 |= 0x2Bu;
      sub_5E124(a1, a3, v46);
      sub_5E124(a1, a3, v47);
      sub_5E124(a1, a3, v47);
      sub_5E124(a1, a3, v44);
      sub_5E124(a1, a3, v44);
      sub_5E124(a1, a3, v44);
      sub_5E124(a1, a3, v44);
      sub_5E124(a1, a3, v45);
    }
    while ( v25 > v43 );
    v48 = 0;
    sub_5E124(a1, a3, 0x801Du);
    sub_5E124(a1, a3, 0x8023u);
    sub_5E124(a1, a3, 0x8024u);
    sub_5E124(a1, a3, 0x8046u);
    sub_5E124(a1, a3, 0x8061u);
    do
    {
      v49 = v48++ << 12;
      sub_5E124(a1, a3, v49 & 0xF000 | 6);
      sub_5E124(a1, a3, v49 & 0xF000 | 2);
      sub_5E124(a1, a3, v49 | 0x5B);
      sub_5E124(a1, a3, v49 | 0x5B);
      sub_5E124(a1, a3, v49 | 0x56);
      sub_5E124(a1, a3, v49 | 0x56);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x57);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x58);
      sub_5E124(a1, a3, v49 | 0x5D);
      sub_5E124(a1, a3, v49 | 0x5D);
      sub_5E124(a1, a3, v49 | 0x5D);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x5E);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x34);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x60);
      sub_5E124(a1, a3, v49 & 0xF000 | 0x61);
    }
    while ( v25 > v48 );
  }
  else
  {
    sub_5E124(a1, a3, 0x804Au);
    sub_5E124(a1, a3, 0x804Fu);
    sub_5E124(a1, a3, 0x803Du);
    sub_5E124(a1, a3, 0x8041u);
    sub_5E124(a1, a3, 0x8002u);
    sub_5E124(a1, a3, 0x8014u);
    sub_5E124(a1, a3, 0x801Du);
    sub_5E124(a1, a3, 0x8023u);
    sub_5E124(a1, a3, 0x8024u);
    sub_5E124(a1, a3, 0x8046u);
    sub_5E124(a1, a3, 0x8061u);
  }
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5CB80(a1, (unsigned __int8)a3, 144, 0);
  sub_5CB80(a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
