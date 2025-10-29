int __fastcall update_outdated_chip_seed(int a1, unsigned __int8 a2)
{
  char v6[4]; // [sp+18h] [bp-1004h] BYREF

  if ( byte_15F7B4[*(_DWORD *)(a1 + 252)] != 1 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s chip_seed_status used before init", "update_outdated_chip_seed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "update_outdated_chip_seed",
      25,
      1302,
      100,
      v6);
    return 110;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    if ( *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 33) == 1
      || !memcmp(
            (const void *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 1),
            (char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248),
            0x20u) )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    }
    else
    {
      chip_setting_seed_x7(a1, (char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248), 0x20u, v6, a2);
      pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
      chip_seed_status_set_calculating(a1, a2);
    }
    return 0;
  }
}
