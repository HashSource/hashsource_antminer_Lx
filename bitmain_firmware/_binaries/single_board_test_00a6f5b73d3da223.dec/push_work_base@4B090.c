int __fastcall push_work_base(int a1, int a2)
{
  _UNKNOWN **v3; // r0
  unsigned int v4; // r0
  _UNKNOWN **v5; // r0
  _BYTE v9[12]; // [sp+1Ch] [bp+Ch] BYREF
  unsigned int v10; // [sp+101Ch] [bp+100Ch] BYREF
  int v11; // [sp+1020h] [bp+1010h]
  void *v12; // [sp+1024h] [bp+1014h]

  if ( *(_BYTE *)(a1 + 146) != 1 && *(_BYTE *)(a1 + 145) != 1 )
    return 4;
  v12 = calloc(1u, *(_DWORD *)(a1 + 640));
  v10 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 56))(a1, a2, v12, &v10);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 736));
  do
  {
    v3 = dev_ctrl();
    v4 = ((int (__fastcall *)(_DWORD))v3[15])(*(_DWORD *)(a1 + 136));
  }
  while ( v4 < v10 );
  v5 = dev_ctrl();
  v11 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v5[11])(*(_DWORD *)(a1 + 136), v12, v10);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 736));
  if ( v11 > 0 )
  {
    ++*(_QWORD *)(a1 + 248);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 136), v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c",
      72,
      "push_work_base",
      14,
      284,
      100,
      v9);
  }
  free(v12);
  return 0;
}
