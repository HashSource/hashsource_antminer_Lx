int frontend_runtime_instance()
{
  int *v0; // r3
  int v1; // r4
  int v3; // r3
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v0) = 24796;
  HIWORD(v0) = (unsigned int)&g_miner_type[4] >> 16;
  v1 = *v0;
  if ( !*v0 )
  {
    V_LOCK();
    LOWORD(v3) = 16208;
    HIWORD(v3) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = -14756;
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    v5 = *v4;
    LOWORD(v4) = 16180;
    LOWORD(v6) = 16240;
    HIWORD(v4) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    HIWORD(v6) = (unsigned int)"rigin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    zlog(v5, v6, 150, v4, 25, 82, 100, v7);
  }
  return v1;
}
