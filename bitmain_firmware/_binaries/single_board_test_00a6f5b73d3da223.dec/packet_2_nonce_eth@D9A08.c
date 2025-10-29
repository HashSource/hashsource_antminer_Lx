int __fastcall packet_2_nonce_eth(int a1, int a2, int a3, _BYTE *a4, void *a5, _DWORD *a6, _DWORD *a7)
{
  int *v8; // r3
  int v9; // r8
  int v10; // r9
  int v11; // r0
  int *v12; // r2
  int *v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r2
  int v17; // r4
  _DWORD *v18; // r2
  int *v19; // r2
  int v20; // r3
  int v21; // r4
  int v22; // r2
  int *v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r2
  _BYTE v31[4080]; // [sp+20h] [bp+10h] BYREF
  unsigned __int8 v32; // [sp+1023h] [bp+1013h]
  int v33; // [sp+1024h] [bp+1014h]
  unsigned __int16 v34; // [sp+1028h] [bp+1018h]
  unsigned __int16 v35; // [sp+102Ah] [bp+101Ah]
  int v36; // [sp+102Ch] [bp+101Ch]
  _BYTE *v37; // [sp+1030h] [bp+1020h]
  unsigned __int8 v38; // [sp+1037h] [bp+1027h]
  int v39; // [sp+1038h] [bp+1028h]
  unsigned __int8 v40; // [sp+103Fh] [bp+102Fh]

  v39 = a3;
  v40 = 0;
  v38 = 0;
  if ( *(_BYTE *)(a2 + 2) != 32 )
    return 1;
  if ( *(_BYTE *)(a1 + 146) != 1 && *(_BYTE *)(a1 + 145) != 1 )
    return 5;
  v37 = (_BYTE *)a2;
  v36 = 39;
  v35 = CRC16_v1((const unsigned __int8 *)(a2 + 2), 39);
  v34 = _byteswap_ushort(*(_WORD *)(a2 + 41));
  if ( v35 == v34 )
  {
    v33 = *(_DWORD *)(a1 + 624);
    v32 = v37[3];
    memcpy((void *)(v39 + 34), (const void *)(40 * v32 + 0x2000 + v33), 0x20u);
    memcpy((void *)(v39 + 66), (const void *)(32 * (v32 + 576) + v33), 0x20u);
    v8 = (int *)(8 * (v32 + 512) + v33);
    v9 = *v8;
    v10 = v8[1];
    v11 = sub_758A4(v37 + 5);
    v12 = (int *)(8 * (v32 + 512) + v33);
    *v12 = v11 | v9;
    v12[1] = v10;
    memcpy((void *)(v39 + 98), v37 + 9, 0x20u);
    v13 = (int *)(v33 + 8 * (v32 + 512));
    v14 = *v13;
    v15 = v13[1];
    v16 = v39 + 26;
    *(_DWORD *)(v39 + 26) = v14;
    *(_DWORD *)(v16 + 4) = v15;
    v17 = *(_DWORD *)(v33 + 8 * (v32 + 512) + 4);
    v18 = (_DWORD *)(8 * (v32 + 512) + v33);
    *v18 = 0;
    v18[1] = v17;
    *(_BYTE *)(v39 + 16) = v32;
    *(_BYTE *)(v39 + 17) = v37[4];
    v19 = (int *)(v33 + 8 * (v32 + 256));
    v20 = *v19;
    v21 = v19[1];
    v22 = v39 + 18;
    *(_DWORD *)(v39 + 18) = v20;
    *(_DWORD *)(v22 + 4) = v21;
    v23 = (int *)(v33 + 8 * v32);
    v24 = *v23;
    v25 = v23[1];
    v26 = v39;
    *(_DWORD *)v39 = v24;
    *(_DWORD *)(v26 + 4) = v25;
    *a7 = *(_DWORD *)(v33 + 8 * v32);
    v38 = (*(_DWORD *)(v39 + 26) >> 12) & 0xF;
    v40 = sub_1A3E94(*(_DWORD *)(v39 + 26) & 7LL, *(unsigned int *)(a1 + 240));
    if ( v40 > 7u )
      v40 = 7;
    *(_DWORD *)(v39 + 8) = v40;
    *(_DWORD *)(v39 + 12) = v38;
    *a6 = v40;
    memcpy(a5, (const void *)(v39 + 26), 8u);
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v35, v34);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "packet_2_nonce_eth",
      18,
      12335,
      100,
      v31);
    return 2;
  }
}
