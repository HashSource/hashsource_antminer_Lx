int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  void *v5; // r6
  unsigned int v6; // r0
  int (**v7)(); // r0
  int (**v8)(); // r0
  int v9; // r5
  unsigned int v11; // [sp+14h] [bp-101Ch] BYREF
  char v12[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 146) && !*(_BYTE *)(a1 + 145) )
    return 4;
  v4 = (pthread_mutex_t *)(a1 + 736);
  v5 = calloc(1u, *(_DWORD *)(a1 + 640));
  v11 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 56))(a1, a2, v5, &v11);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = ((int (__fastcall *)(_DWORD))v7[15])(*(_DWORD *)(a1 + 136));
  }
  while ( v6 < v11 );
  v8 = dev_ctrl(v6);
  v9 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v8[11])(*(_DWORD *)(a1 + 136), v5, v11);
  pthread_mutex_unlock(v4);
  if ( v9 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 136), v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_base.c",
      158,
      "push_work_base",
      14,
      286,
      100,
      v12);
  }
  else
  {
    ++*(_QWORD *)(a1 + 248);
  }
  free(v5);
  return 0;
}
