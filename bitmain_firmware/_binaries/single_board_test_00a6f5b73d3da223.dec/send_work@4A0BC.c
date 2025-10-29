int __fastcall send_work(int a1)
{
  int v1; // r0
  _BYTE v3[12]; // [sp+1Ch] [bp+Ch] BYREF
  void *i; // [sp+101Ch] [bp+100Ch]
  char *v5; // [sp+1020h] [bp+1010h]
  int v6; // [sp+1024h] [bp+1014h]

  v6 = a1;
  v5 = (char *)calloc(1u, 0x40u);
  snprintf(v5, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(v6 + 136));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", v5, v1);
  V_UNLOCK();
  zlog(g_zc, "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c", 72, "send_work", 9, 46, 60, v3);
  prctl(15, v5);
  for ( i = calloc(1u, *(_DWORD *)(v6 + 628)); ; push_work_base(v6, (int)i) )
  {
    memset(i, 0, *(_DWORD *)(v6 + 628));
    queue_dequeue(*(_DWORD *)(v6 + 652), (char *)i, 1u);
    if ( *(_BYTE *)(v6 + 686) )
      break;
  }
  *(_BYTE *)(v6 + 686) = 0;
  free(i);
  return 0;
}
