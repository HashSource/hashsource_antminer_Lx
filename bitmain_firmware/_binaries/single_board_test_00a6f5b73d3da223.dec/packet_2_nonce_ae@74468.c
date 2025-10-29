int __fastcall packet_2_nonce_ae(int a1, int a2, int a3, _BYTE *a4, void *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r2
  int v9; // r3
  int *v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r2
  _BYTE v17[4080]; // [sp+20h] [bp+10h] BYREF
  unsigned __int8 v18; // [sp+1023h] [bp+1013h]
  int v19; // [sp+1024h] [bp+1014h]
  unsigned __int16 v20; // [sp+1028h] [bp+1018h]
  unsigned __int16 v21; // [sp+102Ah] [bp+101Ah]
  unsigned __int8 v22; // [sp+102Ch] [bp+101Ch]
  unsigned __int8 v23; // [sp+102Dh] [bp+101Dh]
  unsigned __int8 v24; // [sp+102Eh] [bp+101Eh]
  unsigned __int8 v25; // [sp+102Fh] [bp+101Fh]
  int v26; // [sp+1030h] [bp+1020h]
  int v27; // [sp+1034h] [bp+1024h]
  int i; // [sp+1038h] [bp+1028h]
  unsigned __int16 v29; // [sp+103Ch] [bp+102Ch]
  unsigned __int8 v30; // [sp+103Fh] [bp+102Fh]

  v27 = a2;
  v26 = a3;
  v25 = 0;
  v24 = 0;
  if ( *(unsigned __int8 *)(a2 + 2) <= 9u )
    return 1;
  v23 = *(_BYTE *)(v27 + 2) - 2;
  v22 = v23 + 2;
  v21 = CRC16_v1((const unsigned __int8 *)(v27 + 2), v23);
  v20 = *(unsigned __int8 *)(v22 + 1 + v27) + (*(unsigned __int8 *)(v22 + v27) << 8);
  if ( v21 == v20 )
  {
    v19 = *(_DWORD *)(a1 + 624);
    v30 = 6;
    v29 = *(unsigned __int8 *)(v27 + 2) - 6;
    v18 = *(_BYTE *)(v27 + 3);
    if ( *(_BYTE *)(v27 + 5) == 1 )
    {
      *(_DWORD *)(v19 + 4 * (v18 + 1408)) = sub_70780((unsigned __int8 *)(v27 + 6));
      v29 -= 4;
      v30 += 4;
    }
    memcpy(
      (void *)(v19 + 720 * v18 + *(unsigned __int16 *)(v19 + 2 * (v18 + 3584)) + 21760),
      (const void *)(v30 + v27),
      v29);
    *(_WORD *)(v19 + 2 * (v18 + 3584)) += v29;
    if ( *(unsigned __int8 *)(v27 + 4) == *(unsigned __int8 *)(v27 + 5) )
    {
      *(_WORD *)(v26 + 85) = *(_WORD *)(v19 + 2 * (v18 + 3584));
      *(_DWORD *)(v26 + 81) = *(_DWORD *)(v19 + 4 * (v18 + 1408));
      for ( i = 0; *(_WORD *)(v19 + 2 * (v18 + 3584)) >> 2 > i; ++i )
        *(_DWORD *)(4 * (i + 20) + v26 + 7) = sub_70780((unsigned __int8 *)(4 * i + 720 * v18 + 21760 + v19));
      v8 = v19;
      v9 = v18 + 3584;
      *(_BYTE *)(v19 + 2 * v9) = 0;
      *(_BYTE *)(2 * v9 + v8 + 1) = 0;
      memset((void *)(720 * v18 + 21760 + v19), 0, 0x2D0u);
      *(_BYTE *)(v26 + 48) = v18;
      strcpy((char *)(v26 + 49), (const char *)(32 * (v18 + 32) + v19));
      v10 = (int *)(v19 + 8 * v18);
      v11 = *v10;
      v12 = v10[1];
      v13 = v26;
      *(_DWORD *)v26 = v11;
      *(_DWORD *)(v13 + 4) = v12;
      *a7 = *(_DWORD *)(v19 + 8 * v18);
      v24 = *(_DWORD *)(v19 + 4 * (v18 + 1408)) & 1;
      v25 = HIBYTE(*(_DWORD *)(v19 + 4 * (v18 + 1408))) / *(_DWORD *)(a1 + 240);
      *(_DWORD *)(v26 + 8) = v25;
      *(_DWORD *)(v26 + 12) = v24;
      memcpy((void *)(v26 + 16), (const void *)(32 * (v18 + 232) + v19), 0x20u);
      *a6 = v25;
      memcpy(a5, (const void *)(v26 + 81), 4u);
      *a4 = 0;
      return 0;
    }
    else
    {
      return 5;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v21, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
      81,
      "packet_2_nonce_ae",
      17,
      184,
      20,
      v17);
    return 2;
  }
}
