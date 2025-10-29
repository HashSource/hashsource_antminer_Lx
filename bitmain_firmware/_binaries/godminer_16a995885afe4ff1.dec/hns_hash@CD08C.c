int __fastcall hns_hash(int a1)
{
  unsigned int v2; // r3
  int v3; // r2
  _BYTE *v4; // r3
  char v5; // t1
  int v6; // r2
  _BYTE *v7; // r3
  char v8; // t1
  char *v9; // r3
  int v10; // r2
  char v11; // t1
  int v12; // r8
  int v13; // r1
  int v14; // r2
  _DWORD *v15; // r12
  __int16 v16; // r9
  int v17; // r3
  _BYTE *v18; // lr
  char v19; // r10
  char v20; // t1
  int v21; // r2
  _BYTE *v22; // r3
  char v23; // t1
  int v24; // r2
  _BYTE *v25; // r3
  char v26; // t1
  int v27; // r2
  _BYTE *v28; // r3
  char v29; // t1
  int v30; // r2
  _BYTE *v31; // r3
  char v32; // t1
  unsigned int v33; // r2
  unsigned int v34; // r3
  _DWORD v36[4]; // [sp+0h] [bp-120h] BYREF
  char v37; // [sp+10h] [bp-110h]
  char v38; // [sp+11h] [bp-10Fh]
  int v39; // [sp+12h] [bp-10Eh]
  __int16 v40; // [sp+16h] [bp-10Ah]
  _DWORD v41[3]; // [sp+18h] [bp-108h] BYREF
  int v42; // [sp+24h] [bp-FCh] BYREF
  _BYTE v43[32]; // [sp+3Bh] [bp-E5h] BYREF
  _BYTE v44[32]; // [sp+5Bh] [bp-C5h] BYREF
  _BYTE v45[32]; // [sp+7Bh] [bp-A5h] BYREF
  _BYTE v46[24]; // [sp+9Bh] [bp-85h] BYREF
  char v47; // [sp+B3h] [bp-6Dh] BYREF
  _BYTE v48[32]; // [sp+D3h] [bp-4Dh] BYREF
  _BYTE v49[29]; // [sp+F3h] [bp-2Dh] BYREF
  _BYTE v50[5]; // [sp+113h] [bp-Dh] BYREF
  unsigned int v51; // [sp+118h] [bp-8h]

  hs_header_init((int)v41);
  v2 = bswap32(*(_DWORD *)(a1 + 4));
  v51 = bswap32(*(_DWORD *)a1);
  *(_DWORD *)&v50[1] = v2;
  printf("%08x, %08x\n", v51, v2);
  v3 = a1 + 40;
  v4 = v49;
  do
  {
    v5 = *(_BYTE *)--v3;
    *++v4 = v5;
  }
  while ( v50 != v4 );
  v6 = a1 + 72;
  v7 = v48;
  do
  {
    v8 = *(_BYTE *)--v6;
    *++v7 = v8;
  }
  while ( v7 != v49 );
  v9 = &v47;
  v10 = a1 + 104;
  do
  {
    v11 = *(_BYTE *)--v10;
    *++v9 = v11;
  }
  while ( v48 != v9 );
  v12 = *(_DWORD *)(a1 + 120);
  v13 = *(_DWORD *)(a1 + 108);
  v14 = *(_DWORD *)(a1 + 112);
  v15 = v41;
  v16 = *(_WORD *)(a1 + 124);
  v17 = *(_DWORD *)(a1 + 116);
  v18 = v46;
  v19 = *(_BYTE *)(a1 + 250);
  v36[0] = *(_DWORD *)(a1 + 104);
  v36[1] = v13;
  v36[2] = v14;
  v36[3] = v17;
  LOBYTE(v17) = *(_BYTE *)(a1 + 251);
  v40 = v16;
  v39 = v12;
  v37 = v19;
  v38 = v17;
  do
  {
    v20 = *((_BYTE *)v15 - 1);
    v15 = (_DWORD *)((char *)v15 - 1);
    *++v18 = v20;
  }
  while ( v36 != v15 );
  v21 = a1 + 158;
  v22 = v45;
  do
  {
    v23 = *(_BYTE *)--v21;
    *++v22 = v23;
  }
  while ( v46 != v22 );
  v24 = a1 + 190;
  v25 = v44;
  do
  {
    v26 = *(_BYTE *)--v24;
    *++v25 = v26;
  }
  while ( v25 != v45 );
  v27 = a1 + 222;
  v28 = v43;
  do
  {
    v29 = *(_BYTE *)--v27;
    *++v28 = v29;
  }
  while ( v28 != v44 );
  v30 = a1 + 242;
  v31 = (char *)&v42 + 3;
  do
  {
    v32 = *(_BYTE *)--v30;
    *++v31 = v32;
  }
  while ( v43 != v31 );
  v33 = *(_DWORD *)(a1 + 246);
  v34 = *(_DWORD *)(a1 + 252);
  v42 = 0;
  v41[2] = bswap32(v33);
  v41[0] = bswap32(v34);
  return hs_header_pow((int)v41);
}
