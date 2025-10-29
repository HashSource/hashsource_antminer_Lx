int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  int v15; // [sp+3Ch] [bp+1Ch] BYREF
  _DWORD v16[2]; // [sp+103Ch] [bp+101Ch] BYREF
  unsigned __int8 v17; // [sp+1044h] [bp+1024h] BYREF
  unsigned __int8 v18; // [sp+1045h] [bp+1025h]
  char v19; // [sp+1046h] [bp+1026h] BYREF
  unsigned __int8 v20; // [sp+1047h] [bp+1027h]
  unsigned __int8 v21; // [sp+1048h] [bp+1028h]
  unsigned __int8 v22; // [sp+1049h] [bp+1029h]
  unsigned __int8 v23; // [sp+104Ah] [bp+102Ah]
  unsigned __int8 v24; // [sp+104Bh] [bp+102Bh]
  char v25; // [sp+104Ch] [bp+102Ch]
  __int16 v26; // [sp+1050h] [bp+1030h] BYREF
  int v27; // [sp+1052h] [bp+1032h] BYREF
  __int16 v28; // [sp+1056h] [bp+1036h]
  int v29; // [sp+1058h] [bp+1038h]
  int v30; // [sp+105Ch] [bp+103Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v26 = -21931;
  v28 = 0;
  v27 = 5;
  LOBYTE(v27) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  LOBYTE(v27) = v27 & 0x1F | 0x40;
  BYTE1(v27) = 6;
  BYTE2(v27) = *(_BYTE *)(a2 + 9);
  HIBYTE(v27) = *(_WORD *)(a2 + 10);
  LOBYTE(v28) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5(&v27, 0x28u);
  HIBYTE(v28) = HIBYTE(v28) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, (int)&v26, 8u);
  v30 = 0;
  v29 = 0;
  sub_1A3E94(a6, 0x3E8u);
  v16[1] = 1000000 * v8;
  v16[0] = sub_1A3E94(a6, 0x3E8u);
  while ( v30 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), (char *)&v17, 9u, v16) == 110 )
    {
      v29 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(
      &v15,
      0x1000u,
      0,
      "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
      v17,
      v18,
      v23,
      v24,
      v20,
      v21,
      v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_base.c",
      76,
      "sync_get_core_reg_base_3",
      24,
      588,
      20,
      &v15);
    if ( v17 != 170 || v18 != 85 || (v25 & 0x40) == 0 )
    {
      v29 = 1;
      break;
    }
    v9 = v25 & 0x1F;
    if ( v9 == BM_CRC5(&v19, 0x33u) )
    {
      *(_BYTE *)(a4 + 12 * v30 + 4) = v23;
      *(_WORD *)(a4 + 12 * v30 + 6) = v24;
      *(_BYTE *)(a4 + 12 * v30 + 8) = v19;
      *(_DWORD *)(a4 + 12 * v30++) = (v21 << 16) | (v22 << 24) | v20;
    }
    else
    {
      v29 = 2;
    }
  }
  *a5 = v30;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v29;
}
