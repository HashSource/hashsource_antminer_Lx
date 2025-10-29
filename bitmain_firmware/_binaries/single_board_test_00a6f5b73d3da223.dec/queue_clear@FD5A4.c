int __fastcall queue_clear(int a1)
{
  size_t v1; // r0
  int v4; // [sp+1Ch] [bp+Ch] BYREF
  char *v5; // [sp+101Ch] [bp+100Ch]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v1 = pipe_elem_size(*(_DWORD *)a1);
  v5 = (char *)calloc(1u, v1);
  while ( *(int *)(a1 + 12) > 0 )
  {
    if ( pipe_pop(*(_DWORD **)(a1 + 8), v5, 1) != 1 )
    {
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, "%s, unkown error", "queue_clear");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/common/general/thread_safe_queue.c",
        84,
        "queue_clear",
        11,
        121,
        100,
        &v4);
      exit(-1);
    }
    --*(_DWORD *)(a1 + 12);
  }
  free(v5);
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
}
