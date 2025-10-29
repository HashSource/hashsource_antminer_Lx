int __fastcall reset_chip_seed_status(int a1, unsigned __int8 a2)
{
  char v6[8]; // [sp+1Ch] [bp-1008h] BYREF
  struct timespec *tp; // [sp+101Ch] [bp-8h]

  if ( byte_15F7B4[*(_DWORD *)(a1 + 252)] != 1 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s chip_seed_status used before init", "reset_chip_seed_status");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "reset_chip_seed_status",
      22,
      1221,
      100,
      v6);
    return 110;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2) = 0;
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 33) = 0;
    memset((void *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 1), 0, 0x20u);
    tp = (struct timespec *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 36);
    clock_gettime(1, tp);
    pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    return 0;
  }
}
