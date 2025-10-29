int __fastcall packet_2_nonce_grin32(int a1, int a2, int a3, _BYTE *a4, void *a5, _DWORD *a6, _DWORD *a7)
{
  int *v8; // r3
  int v9; // r8
  int v10; // r9
  int v11; // r0
  int *v12; // r1
  int *v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r3
  _DWORD *v19; // r1
  int *v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int *v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  _BYTE v32[4080]; // [sp+20h] [bp+10h] BYREF
  unsigned __int8 v33; // [sp+1023h] [bp+1013h]
  int v34; // [sp+1024h] [bp+1014h]
  unsigned __int16 v35; // [sp+1028h] [bp+1018h]
  unsigned __int16 v36; // [sp+102Ah] [bp+101Ah]
  int v37; // [sp+102Ch] [bp+101Ch]
  _BYTE *v38; // [sp+1030h] [bp+1020h]
  unsigned __int8 v39; // [sp+1036h] [bp+1026h]
  unsigned __int8 v40; // [sp+1037h] [bp+1027h]
  int v41; // [sp+1038h] [bp+1028h]
  unsigned int i; // [sp+103Ch] [bp+102Ch]

  v41 = a3;
  v40 = 0;
  v39 = 0;
  if ( *(_BYTE *)(a2 + 2) != 33 )
    return 1;
  v38 = (_BYTE *)a2;
  v37 = 175;
  v36 = CRC16_v1((const unsigned __int8 *)(a2 + 2), 175);
  v35 = _byteswap_ushort(*(_WORD *)(a2 + 177));
  if ( v36 == v35 )
  {
    v34 = *(_DWORD *)(a1 + 624);
    v33 = v38[3];
    v8 = (int *)(8 * (v33 + 256) + v34);
    v9 = *v8;
    v10 = v8[1];
    v11 = sub_4BE48(v38 + 5);
    v12 = (int *)(8 * (v33 + 256) + v34);
    *v12 = v11 | v9;
    v12[1] = v10;
    v13 = (int *)(v34 + 8 * (v33 + 256));
    v14 = *v13;
    v15 = v13[1];
    v16 = v41 + 25;
    *(_DWORD *)(v41 + 25) = v14;
    *(_DWORD *)(v16 + 4) = v15;
    memcpy((void *)(v34 + 168 * v33 + 35584), v38 + 9, 0xA8u);
    for ( i = 0; i <= 0xA7; i += 4 )
    {
      v17 = i;
      *(_DWORD *)(4 * ((v17 >> 2) + 8) + v41 + 3) = sub_4BE48((unsigned __int8 *)(i + 168 * v33 + 35584 + v34));
    }
    v18 = *(_DWORD *)(v34 + 8 * (v33 + 256) + 4);
    v19 = (_DWORD *)(8 * (v33 + 256) + v34);
    *v19 = 0;
    v19[1] = v18;
    memset((void *)(168 * v33 + 35584 + v34), 0, 0xA8u);
    *(_BYTE *)(v41 + 16) = v33;
    v20 = (int *)(v34 + 8 * (v33 + 128));
    v21 = *v20;
    v22 = v20[1];
    v23 = v41 + 17;
    *(_DWORD *)(v41 + 17) = v21;
    *(_DWORD *)(v23 + 4) = v22;
    v24 = (int *)(v34 + 8 * v33);
    v25 = *v24;
    v26 = v24[1];
    v27 = v41;
    *(_DWORD *)v41 = v25;
    *(_DWORD *)(v27 + 4) = v26;
    *a7 = *(_DWORD *)(v34 + 8 * v33);
    v39 = *(_DWORD *)(v41 + 25) & 1;
    v40 = sub_1A3E94((unsigned __int8)HIBYTE(*(_DWORD *)(v41 + 25)), *(unsigned int *)(a1 + 240));
    *(_DWORD *)(v41 + 8) = v40;
    *(_DWORD *)(v41 + 12) = v39;
    *a6 = v40;
    memcpy(a5, (const void *)(v41 + 25), 8u);
    *a4 = 0;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v36, v35);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin32/backend_grin32.c",
      89,
      "packet_2_nonce_grin32",
      21,
      167,
      20,
      v32);
    return 2;
  }
}
