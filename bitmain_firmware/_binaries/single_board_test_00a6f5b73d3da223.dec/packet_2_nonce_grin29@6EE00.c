int __fastcall packet_2_nonce_grin29(int a1, int a2, int a3, _BYTE *a4, void *a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v8; // r1
  int v9; // r3
  int *v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r3
  _DWORD *v17; // r1
  int *v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int *v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v29; // [sp+24h] [bp+14h] BYREF
  int v30; // [sp+1024h] [bp+1014h]
  unsigned __int8 v31; // [sp+102Bh] [bp+101Bh]
  int v32; // [sp+102Ch] [bp+101Ch]
  unsigned __int16 v33; // [sp+1030h] [bp+1020h]
  unsigned __int16 v34; // [sp+1032h] [bp+1022h]
  unsigned __int8 v35; // [sp+1034h] [bp+1024h]
  unsigned __int8 v36; // [sp+1035h] [bp+1025h]
  unsigned __int8 v37; // [sp+1036h] [bp+1026h]
  unsigned __int8 v38; // [sp+1037h] [bp+1027h]
  int v39; // [sp+1038h] [bp+1028h]
  int v40; // [sp+103Ch] [bp+102Ch]
  int i; // [sp+1040h] [bp+1030h]
  unsigned __int16 v42; // [sp+1044h] [bp+1034h]
  unsigned __int8 v43; // [sp+1047h] [bp+1037h]

  v40 = a2;
  v39 = a3;
  v38 = 0;
  v37 = 0;
  if ( *(unsigned __int8 *)(a2 + 2) <= 9u )
    return 1;
  v36 = *(_BYTE *)(v40 + 2) - 2;
  v35 = v36 + 2;
  v34 = CRC16_v1((const unsigned __int8 *)(v40 + 2), v36);
  v33 = *(unsigned __int8 *)(v35 + 1 + v40) + (*(unsigned __int8 *)(v35 + v40) << 8);
  if ( v34 == v33 )
  {
    v32 = *(_DWORD *)(a1 + 624);
    v43 = 6;
    v42 = *(unsigned __int8 *)(v40 + 2) - 6;
    v31 = *(_BYTE *)(v40 + 3);
    if ( *(_BYTE *)(v40 + 5) == 1 )
    {
      v30 = sub_6B1E0((unsigned __int8 *)(v40 + 6));
      v8 = (_DWORD *)(v32 + 8 * (v31 + 256));
      v9 = v8[1];
      *v8 |= v30;
      v8[1] = v9;
      v42 -= 4;
      v43 += 4;
    }
    memcpy(
      (void *)(v32 + 720 * v31 + *(unsigned __int16 *)(v32 + 2 * (v31 + 2048)) + 35840),
      (const void *)(v43 + v40),
      v42);
    *(_WORD *)(v32 + 2 * (v31 + 2048)) += v42;
    if ( *(unsigned __int8 *)(v40 + 4) == *(unsigned __int8 *)(v40 + 5) )
    {
      *(_WORD *)(v39 + 33) = *(_WORD *)(v32 + 2 * (v31 + 2048));
      v10 = (int *)(v32 + 8 * (v31 + 256));
      v11 = *v10;
      v12 = v10[1];
      v13 = v39 + 25;
      *(_DWORD *)(v39 + 25) = v11;
      *(_DWORD *)(v13 + 4) = v12;
      for ( i = 0; *(_WORD *)(v32 + 2 * (v31 + 2048)) >> 2 > i; ++i )
        *(_DWORD *)(4 * (i + 8) + v39 + 3) = sub_6B1E0((unsigned __int8 *)(4 * i + 720 * v31 + 35840 + v32));
      v14 = v32;
      v15 = v31 + 2048;
      *(_BYTE *)(v32 + 2 * v15) = 0;
      *(_BYTE *)(2 * v15 + v14 + 1) = 0;
      v16 = *(_DWORD *)(v32 + 8 * (v31 + 256) + 4);
      v17 = (_DWORD *)(8 * (v31 + 256) + v32);
      *v17 = 0;
      v17[1] = v16;
      memset((void *)(720 * v31 + 35840 + v32), 0, 0x2D0u);
      *(_BYTE *)(v39 + 16) = v31;
      v18 = (int *)(v32 + 8 * (v31 + 128));
      v19 = *v18;
      v20 = v18[1];
      v21 = v39 + 17;
      *(_DWORD *)(v39 + 17) = v19;
      *(_DWORD *)(v21 + 4) = v20;
      v22 = (int *)(v32 + 8 * v31);
      v23 = *v22;
      v24 = v22[1];
      v25 = v39;
      *(_DWORD *)v39 = v23;
      *(_DWORD *)(v25 + 4) = v24;
      *a7 = *(_DWORD *)(v32 + 8 * v31);
      v37 = *(_DWORD *)(v39 + 25) & 1;
      v38 = sub_1A3E94((unsigned __int8)HIBYTE(*(_DWORD *)(v39 + 25)), *(unsigned int *)(a1 + 240));
      *(_DWORD *)(v39 + 8) = v38;
      *(_DWORD *)(v39 + 12) = v37;
      *a6 = v38;
      memcpy(a5, (const void *)(v39 + 25), 8u);
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
    logfmt_raw(&v29, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v34, v33);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
      89,
      "packet_2_nonce_grin29",
      21,
      189,
      20,
      &v29);
    return 2;
  }
}
