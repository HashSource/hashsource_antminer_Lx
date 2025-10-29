int __fastcall push_work_base(int a1, int a2)
{
  int (**v3)(); // r0
  unsigned int v4; // r0
  int (**v5)(); // r0
  char v9[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned int v10; // [sp+101Ch] [bp-18h] BYREF
  int v11; // [sp+1020h] [bp-14h]
  void *ptr; // [sp+1024h] [bp-10h]

  if ( *(_BYTE *)(a1 + 258) != 1 && *(_BYTE *)(a1 + 257) != 1 )
    return 103;
  ptr = calloc(1u, *(_DWORD *)(a1 + 840));
  v10 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 68))(a1, a2, ptr, &v10);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1072));
  do
  {
    v3 = dev_ctrl();
    v4 = ((int (__fastcall *)(_DWORD))v3[17])(*(_DWORD *)(a1 + 248));
  }
  while ( v4 < v10 );
  v5 = dev_ctrl();
  v11 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v5[13])(*(_DWORD *)(a1 + 248), ptr, v10);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1072));
  sub_AB2F0(a1 + 1216, v10, (unsigned __int8 *)ptr, *(_DWORD *)(a1 + 252));
  if ( v11 > 0 )
  {
    ++*(_QWORD *)(a1 + 440);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 248), v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_base.c",
      160,
      "push_work_base",
      14,
      432,
      100,
      v9);
  }
  free(ptr);
  return 0;
}
