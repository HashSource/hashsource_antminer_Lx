int __fastcall sync_get_dag_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  unsigned int *v7; // r4
  __int16 *v8; // r4
  _DWORD *v9; // lr
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _BYTE v18[28]; // [sp+24h] [bp+14h] BYREF
  _DWORD v19[2]; // [sp+1024h] [bp+1014h] BYREF
  unsigned __int8 v20; // [sp+102Ch] [bp+101Ch] BYREF
  unsigned __int8 v21; // [sp+102Dh] [bp+101Dh]
  unsigned __int8 v22; // [sp+102Eh] [bp+101Eh] BYREF
  unsigned __int8 v23; // [sp+102Fh] [bp+101Fh]
  unsigned int v24; // [sp+1030h] [bp+1020h]
  int v25; // [sp+1034h] [bp+1024h] BYREF
  unsigned __int16 v26; // [sp+1074h] [bp+1064h] BYREF
  unsigned __int16 v27; // [sp+1076h] [bp+1066h]
  int v28; // [sp+1078h] [bp+1068h]
  int v29; // [sp+107Ch] [bp+106Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  v29 = 0;
  v28 = 0;
  sub_1A3E94(a5, 0x3E8u);
  v19[1] = 1000000 * v6;
  v19[0] = sub_1A3E94(a5, 0x3E8u);
  while ( v29 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), (char *)&v20, 0x4Au, v19) == 110 )
    {
      v28 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v20, v21, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_base.c",
      76,
      "sync_get_dag_base",
      17,
      326,
      20,
      v18);
    if ( v20 != 170 || v21 != 85 )
    {
      v28 = 1;
      break;
    }
    v27 = CRC16_v1(&v22, 70);
    v27 = (v27 << 8) | HIBYTE(v27);
    if ( v27 == v26 )
    {
      *(_BYTE *)(a3 + 76 * v29 + 4) = v23;
      v7 = (unsigned int *)(a3 + 76 * v29);
      *v7 = reverse_byte_order_32(v24);
      v8 = (__int16 *)&v25;
      v9 = (_DWORD *)(a3 + 76 * v29 + 10);
      do
      {
        v10 = *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        v12 = *((_DWORD *)v8 + 3);
        *v9 = *(_DWORD *)v8;
        v9[1] = v10;
        v9[2] = v11;
        v9[3] = v12;
        v8 += 8;
        v9 += 4;
      }
      while ( v8 != (__int16 *)&v26 );
      ++v29;
    }
    else
    {
      v28 = 2;
    }
  }
  *a4 = v29;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v28;
}
