int __fastcall sync_get_status_base3(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _BYTE v13[28]; // [sp+2Ch] [bp+14h] BYREF
  _DWORD v14[2]; // [sp+102Ch] [bp+1014h] BYREF
  unsigned __int8 v15; // [sp+1034h] [bp+101Ch] BYREF
  unsigned __int8 v16; // [sp+1035h] [bp+101Dh]
  char v17; // [sp+1036h] [bp+101Eh] BYREF
  int v18; // [sp+1037h] [bp+101Fh]
  unsigned __int8 v19; // [sp+103Bh] [bp+1023h]
  unsigned __int8 v20; // [sp+103Ch] [bp+1024h]
  char v21; // [sp+103Dh] [bp+1025h]
  int v22; // [sp+1040h] [bp+1028h]
  int v23; // [sp+1044h] [bp+102Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  v23 = 0;
  v22 = 0;
  sub_1A3E94(a5, 0x3E8u);
  v14[1] = 1000000 * v6;
  v14[0] = sub_1A3E94(a5, 0x3E8u);
  while ( v23 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), (char *)&v15, 0xAu, v14) == 110 )
    {
      v22 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
      v15,
      v16,
      v19,
      v18,
      v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_base.c",
      76,
      "sync_get_status_base3",
      21,
      1047,
      20,
      v13);
    if ( v15 != 170 || v16 != 85 || v17 != 8 || (v21 & 0x40) != 0 )
    {
      v22 = 1;
      break;
    }
    v7 = v21 & 0x1F;
    if ( v7 == BM_CRC5(&v17, 0x3Bu) )
    {
      *(_BYTE *)(a3 + 12 * v23 + 4) = v19;
      *(_WORD *)(a3 + 12 * v23 + 6) = v20;
      *(_DWORD *)(a3 + 12 * v23++) = v18;
    }
    else
    {
      v22 = 2;
    }
  }
  *a4 = v23;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v22;
}
