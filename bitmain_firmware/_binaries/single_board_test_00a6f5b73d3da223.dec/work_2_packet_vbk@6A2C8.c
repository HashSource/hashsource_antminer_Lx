int __fastcall work_2_packet_vbk(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v7[20]; // [sp+24h] [bp+14h] BYREF
  unsigned __int16 v8; // [sp+1026h] [bp+1016h]
  int v9; // [sp+1028h] [bp+1018h]
  int v10; // [sp+102Ch] [bp+101Ch]
  int v11; // [sp+1030h] [bp+1020h]
  _BYTE *v12; // [sp+1034h] [bp+1024h]

  v12 = a3;
  v11 = a2;
  v10 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  v12[1] = -86;
  v12[2] = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    v12[2] |= 0x10u;
  *(_QWORD *)(8 * *(unsigned __int8 *)(v10 + 28672) + v10) = *(_QWORD *)v11;
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 28672) + 5376)) = *(_DWORD *)(v11 + 84);
  memcpy((void *)(v10 + 24 * *(unsigned __int8 *)(v10 + 28672) + 22528), (const void *)(v11 + 88), 0x18u);
  *(_QWORD *)(8 * (*(unsigned __int8 *)(v10 + 28672) + 256) + v10) = *(_QWORD *)(v11 + 8);
  memcpy((void *)(v10 + ((*(unsigned __int8 *)(v10 + 28672) + 64) << 6)), (const void *)(v11 + 16), 0x40u);
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 28672) + 5120)) = *(_DWORD *)(v11 + 80);
  v4 = *(_BYTE *)(v10 + 28672);
  *(_BYTE *)(v10 + 28672) = v4 + 1;
  v12[4] = v4;
  *(_BYTE *)(v10 + 28672) = *(_BYTE *)(v10 + 28672);
  v12[3] = 64;
  memcpy(v12 + 5, (const void *)(v11 + 16), 0x40u);
  if ( !memcmp(&last_header, (const void *)(v11 + 16), 0x40u) )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_vbk/backend_vbk.c",
      83,
      "work_2_packet_vbk",
      17,
      123,
      80,
      v7);
    dump_work_vbk(v11, v12[4]);
  }
  memcpy(&last_header, (const void *)(v11 + 16), 0x40u);
  v9 = (unsigned __int8)v12[3] + 3;
  v8 = CRC16_v1(v12 + 2, v9);
  v12[69] = HIBYTE(v8);
  v12[70] = v8;
  *a4 = 71;
  return 0;
}
