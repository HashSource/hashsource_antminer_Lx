int __fastcall sync_get_status_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _BYTE v13[28]; // [sp+2Ch] [bp+14h] BYREF
  _DWORD v14[2]; // [sp+102Ch] [bp+1014h] BYREF
  unsigned __int8 v15; // [sp+1034h] [bp+101Ch] BYREF
  unsigned __int8 v16; // [sp+1035h] [bp+101Dh]
  int v17; // [sp+1036h] [bp+101Eh] BYREF
  unsigned __int8 v18; // [sp+103Ah] [bp+1022h]
  unsigned __int8 v19; // [sp+103Bh] [bp+1023h]
  char v20; // [sp+103Ch] [bp+1024h]
  int v21; // [sp+1040h] [bp+1028h]
  int v22; // [sp+1044h] [bp+102Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  v22 = 0;
  v21 = 0;
  sub_1A3E94(a5, 0x3E8u);
  v14[1] = 1000000 * v6;
  v14[0] = sub_1A3E94(a5, 0x3E8u);
  while ( v22 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), (char *)&v15, 9u, v14) == 110 )
    {
      v21 = 3;
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
      v18,
      v17,
      v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_base.c",
      76,
      "sync_get_status_base",
      20,
      261,
      20,
      v13);
    if ( v15 != 170 || v16 != 85 )
    {
      v21 = 1;
      break;
    }
    v7 = v20 & 0x1F;
    if ( v7 == BM_CRC5(&v17, 0x33u) )
    {
      *(_BYTE *)(a3 + 12 * v22 + 4) = v18;
      *(_WORD *)(a3 + 12 * v22 + 6) = v19;
      *(_DWORD *)(a3 + 12 * v22++) = v17;
    }
    else
    {
      v21 = 2;
    }
  }
  *a4 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v21;
}
