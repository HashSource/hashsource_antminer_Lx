int __fastcall x7_chip_seed_status_init(_DWORD *a1)
{
  int v2; // r4
  char v5[16]; // [sp+1Ch] [bp-1010h] BYREF
  int i; // [sp+101Ch] [bp-10h]

  if ( byte_15F7B4[a1[63]] )
    return 201;
  v2 = a1[62];
  x7_chip_seed_status[v2] = calloc(1u, 76 * a1[84]);
  if ( !x7_chip_seed_status[a1[62]] )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s malloc failed", "x7_chip_seed_status_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "x7_chip_seed_status_init",
      24,
      1189,
      120,
      v5);
    exit(-1);
  }
  for ( i = 0; i < a1[84]; ++i )
    pthread_mutex_init((pthread_mutex_t *)(x7_chip_seed_status[a1[62]] + 76 * i + 52), 0);
  byte_15F7B4[a1[63]] = 1;
  return 0;
}
