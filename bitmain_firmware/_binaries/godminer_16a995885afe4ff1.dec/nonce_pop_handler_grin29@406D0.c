int __fastcall nonce_pop_handler_grin29(int a1, _DWORD *a2, int a3)
{
  __int64 v5; // r6
  int v7; // r3
  void *v8; // r0
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_QWORD *)(a3 + 17);
  if ( v5 == strtoll((const char *)a2[288], 0, 10) )
  {
    v7 = *(_DWORD *)(a3 + 29);
    a2[284] = *(_DWORD *)(a3 + 25);
    a2[285] = v7;
    v8 = calloc(0x2Au, 4u);
    a2[291] = v8;
    if ( !v8 )
    {
      puts("calloc work->sols failed!");
      v8 = (void *)a2[291];
    }
    memcpy(v8, (const void *)(a3 + 35), 0xA8u);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "nonce retired");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "nonce_pop_handler_grin29",
      24,
      723,
      20,
      v9);
    return 1;
  }
}
