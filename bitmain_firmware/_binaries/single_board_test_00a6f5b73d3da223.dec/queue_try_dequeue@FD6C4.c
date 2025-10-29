int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  int v7; // [sp+24h] [bp+14h] BYREF
  unsigned __int8 v8; // [sp+1027h] [bp+1017h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v8 = 0;
  if ( *(_DWORD *)(a1 + 12) >= a3 )
  {
    if ( pipe_pop(*(_DWORD **)(a1 + 8), a2, a3) != a3 )
    {
      V_LOCK();
      logfmt_raw(&v7, 0x1000u, 0, "%s, unkown error", "queue_try_dequeue");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/common/general/thread_safe_queue.c",
        84,
        "queue_try_dequeue",
        17,
        140,
        100,
        &v7);
      exit(-1);
    }
    *(_DWORD *)(a1 + 12) -= a3;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  return v8;
}
