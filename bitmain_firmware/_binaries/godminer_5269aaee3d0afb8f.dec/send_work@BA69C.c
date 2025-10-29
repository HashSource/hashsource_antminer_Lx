int __fastcall send_work(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r3
  void *v6; // r0
  size_t v7; // r2
  void *v8; // r5
  size_t v10; // [sp+14h] [bp-1004h]
  char v11[4096]; // [sp+18h] [bp-1000h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 136));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -2016;
  HIWORD(v4) = (unsigned int)"STATS" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "send_work",
    9,
    46,
    60,
    v11);
  prctl(15, v2);
  v10 = *(_DWORD *)(a1 + 628);
  v6 = calloc(1u, v10);
  v7 = v10;
  v8 = v6;
  while ( 1 )
  {
    memset(v8, 0, v7);
    queue_dequeue(*(_DWORD *)(a1 + 652), (char *)v8, 1u);
    if ( *(_BYTE *)(a1 + 686) )
      break;
    push_work_base(a1, (int)v8);
    v7 = *(_DWORD *)(a1 + 628);
  }
  *(_BYTE *)(a1 + 686) = 0;
  free(v8);
  return 0;
}
