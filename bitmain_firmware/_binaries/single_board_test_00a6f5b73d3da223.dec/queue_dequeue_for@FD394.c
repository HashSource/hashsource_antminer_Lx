int __fastcall queue_dequeue_for(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  _BYTE v9[16]; // [sp+20h] [bp+10h] BYREF
  struct timespec v10; // [sp+1020h] [bp+1010h] BYREF
  int v11; // [sp+1028h] [bp+1018h]
  int v12; // [sp+102Ch] [bp+101Ch]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &v10);
  v11 = v10.tv_nsec + a4[1];
  v10.tv_sec += *a4 + v11 / 1000000000;
  v10.tv_nsec = v11 % 1000000000;
  v12 = 0;
  while ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v12 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 16), &v10);
    if ( v12 == 110 )
      goto LABEL_7;
  }
  if ( pipe_pop(*(_DWORD **)(a1 + 8), a2, a3) != a3 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s, unkown error", "queue_dequeue_for");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/common/general/thread_safe_queue.c",
      84,
      "queue_dequeue_for",
      17,
      106,
      100,
      v9);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_7:
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  return v12;
}
