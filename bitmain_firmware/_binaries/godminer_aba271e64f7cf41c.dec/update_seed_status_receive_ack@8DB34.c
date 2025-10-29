int __fastcall update_seed_status_receive_ack(int a1, unsigned __int8 a2, const void *a3)
{
  char v8[4]; // [sp+20h] [bp-1004h] BYREF

  if ( byte_15F7B4[*(_DWORD *)(a1 + 252)] != 1 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "%s chip_seed_status used before init", "update_seed_status_receive_ack");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "update_seed_status_receive_ack",
      30,
      1259,
      100,
      v8);
    return 110;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 35) = 1;
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 34) = 1;
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2) = 1;
    *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 33) = 0;
    memcpy((void *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 1), a3, 0x20u);
    pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    return 0;
  }
}
