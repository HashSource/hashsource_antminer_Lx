int __fastcall sync_get_status_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  _DWORD *v7; // r8
  int v8; // r10
  int v9; // r2
  int v10; // r7
  int v11; // r1
  char v12; // r11
  __int16 v14; // r2
  int v15; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v20[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v21; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v22; // [sp+35h] [bp-100Fh]
  int v23; // [sp+36h] [bp-100Eh] BYREF
  unsigned __int8 v24; // [sp+3Ah] [bp-100Ah]
  unsigned __int8 v25; // [sp+3Bh] [bp-1009h]
  char v26; // [sp+3Ch] [bp-1008h]
  char v27[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 144) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 688);
  v5 = 0;
  LOWORD(v7) = -14756;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  v8 = 0;
  sub_12DAF4(a5, 0x3E8u);
  v20[1] = 1000000 * v9;
  v20[0] = sub_12DAF4(a5, 0x3E8u);
  while ( v8 < a2 )
  {
    LOWORD(v10) = 25148;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), (char *)&v21, 9u, v20) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v10) = (unsigned int)"specified server does not support MINING_MEMPOOL_UPDATE_ACK according to its bitflag (%s)" >> 16;
      logfmt_raw(v27, 0x1000u, 0, v10, v21, v22, v24, v23, v25);
      V_UNLOCK();
      LOWORD(v11) = 25000;
      HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
      HIWORD(v11) = (unsigned int)"pport MINING_UNSUBSCRIBE according to its bitflag (%s)" >> 16;
      zlog(*v7, v11, 147, "sync_get_status_base", 20, 261, 20, v27);
      if ( v21 != 170 || v22 != 85 )
      {
        v5 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v12 = v26;
      if ( (v12 & 0x1F) == BM_CRC5(&v23, 51) )
        break;
      v5 = 2;
    }
    ++v8;
    v14 = v25;
    v15 = v23;
    *(_BYTE *)(a3 + 4) = v24;
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v15;
    a3 += 12;
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v5;
}
