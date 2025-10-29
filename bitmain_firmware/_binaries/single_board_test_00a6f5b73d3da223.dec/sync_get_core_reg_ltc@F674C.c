int __fastcall sync_get_core_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _BYTE v15[12]; // [sp+24h] [bp+14h] BYREF
  _DWORD v16[2]; // [sp+1024h] [bp+1014h] BYREF
  char v17[2]; // [sp+102Ch] [bp+101Ch] BYREF
  _BYTE v18[4]; // [sp+102Eh] [bp+101Eh] BYREF
  unsigned __int8 v19; // [sp+1032h] [bp+1022h]
  unsigned __int8 v20; // [sp+1033h] [bp+1023h]
  char v21; // [sp+1034h] [bp+1024h]
  __int16 v22; // [sp+1038h] [bp+1028h] BYREF
  _WORD v23[5]; // [sp+103Ah] [bp+102Ah] BYREF
  unsigned int v24; // [sp+1044h] [bp+1034h]
  int v25; // [sp+1048h] [bp+1038h]
  int v26; // [sp+104Ch] [bp+103Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  LOWORD(v24) = 0;
  BYTE2(v24) = BYTE2(v24) & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  HIWORD(v24) = HIWORD(v24) & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  HIBYTE(v24) &= ~0x10u;
  HIBYTE(v24) &= ~0x20u;
  HIBYTE(v24) &= ~0x40u;
  HIBYTE(v24) = HIBYTE(v24) & 0x7F | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  v22 = -21931;
  memset(&v23[2], 0, 5);
  *(_DWORD *)v23 = 1;
  LOBYTE(v23[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 1;
  LOBYTE(v23[0]) = v23[0] & 0x1F | 0x40;
  HIBYTE(v23[0]) = 9;
  LOBYTE(v23[1]) = *(_BYTE *)(a2 + 9);
  HIBYTE(v23[1]) = 60;
  *(_DWORD *)&v23[2] = reverse_byte_order_32(v24);
  LOBYTE(v23[4]) = v23[4] & 0x9F | (32 * (*(_BYTE *)(a2 + 15) & 3));
  v7 = BM_CRC5(v23, 8 * (HIBYTE(v23[0]) - 1));
  LOBYTE(v23[4]) = v23[4] & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(_BYTE *)(a2 + 14) != 1 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, (int)&v22, 0xBu);
  v26 = 0;
  v25 = 0;
  sub_1A3E94(a6, 0x3E8u);
  v16[1] = 1000000 * v8;
  v16[0] = sub_1A3E94(a6, 0x3E8u);
  while ( v26 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v17, 9u, v16) == 110 )
    {
      v25 = 3;
      break;
    }
    if ( (unsigned __int8)v17[0] != 170 || v17[1] != 85 || (v21 & 0x20) != 0 || (v21 & 0x40) == 0 || (v21 & 0x80) == 0 )
    {
      v25 = 1;
      break;
    }
    if ( (v20 & 0x10) != 0 )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "core %d get parity", v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_reg_io_ltc.c",
        87,
        "sync_get_core_reg_ltc",
        21,
        370,
        100,
        v15);
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(v18, 0x33u) )
    {
      *(_BYTE *)(a4 + 12 * v26 + 4) = v18[3];
      *(_WORD *)(a4 + 12 * v26 + 6) = v20 & 0xF;
      *(_BYTE *)(a4 + 12 * v26 + 8) = v19;
      *(_DWORD *)(a4 + 12 * v26) = (v18[1] << 8) | (((v20 & 0x20) != 0) << 24) | (v18[0] << 16) | v18[2];
      *(_BYTE *)(a4 + 12 * v26++ + 9) = v20 >> 6;
    }
    else
    {
      v25 = 2;
    }
  }
  *a5 = v26;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v25;
}
