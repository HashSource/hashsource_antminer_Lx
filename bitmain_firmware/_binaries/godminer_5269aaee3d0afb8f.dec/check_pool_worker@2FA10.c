int check_pool_worker()
{
  int v0; // r4
  _DWORD *v1; // r7
  int v2; // r6
  int v3; // r3
  _BYTE *v4; // r3
  int v5; // r10
  _DWORD *v7; // r3
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( total_pools <= 0 )
    goto LABEL_10;
  v0 = 0;
  LOWORD(v1) = -14756;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(pools + 4 * v0);
      if ( **(_BYTE **)(v3 + 8) )
        break;
LABEL_3:
      if ( total_pools <= ++v0 )
        goto LABEL_8;
    }
    v4 = *(_BYTE **)(v3 + 12);
    v5 = (unsigned __int8)*v4;
    if ( *v4 )
    {
      ++v2;
      goto LABEL_3;
    }
    ++v0;
    V_LOCK();
    logfmt_raw(v8, 0x1000u, v5, 1247468);
    V_UNLOCK();
    HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v1,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "check_pool_worker",
      17,
      416,
      100,
      v8);
  }
  while ( total_pools > v0 );
LABEL_8:
  if ( v2 )
    return 0;
LABEL_10:
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, 1247420);
  V_UNLOCK();
  LOWORD(v7) = -14756;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  zlog(
    *v7,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "check_pool_worker",
    17,
    422,
    100,
    v8);
  return -1;
}
