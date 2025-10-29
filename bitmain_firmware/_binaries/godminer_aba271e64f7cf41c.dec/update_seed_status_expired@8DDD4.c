int __fastcall update_seed_status_expired(int a1, unsigned __int8 a2)
{
  int v3; // r2
  char v7[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v8[7]; // [sp+1030h] [bp-34h] BYREF
  int v9; // [sp+104Ch] [bp-18h]
  _DWORD *v10; // [sp+1054h] [bp-10h]

  if ( byte_15F7B4[*(_DWORD *)(a1 + 252)] != 1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "%s chip_seed_status used before init", "update_seed_status_expired");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "update_seed_status_expired",
      26,
      1280,
      100,
      v7);
    return 110;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    if ( *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 33) )
    {
      v3 = x7_chip_seed_status[*(_DWORD *)(a1 + 248)];
      v10 = (_DWORD *)(v3 + 76 * a2 + 36);
      clock_gettime(1, (struct timespec *)(v3 + 76 * a2 + 44));
      if ( (unsigned int)"time" < (v10[3] - v10[1]) / 1000000
                                + vshld_n_s64(
                                    4 * (vshld_n_s64(v10[2] - *v10, 5u) - (v10[2] - *v10)) + v10[2] - *v10,
                                    3u) )
      {
        V_LOCK();
        sub_89210((int)v8, *(int *)(a1 + 252));
        logfmt_raw(
          v7,
          0x1000u,
          0,
          v9,
          v8[0],
          v8[1],
          v8[2],
          v8[3],
          v8[4],
          v8[5],
          v8[6],
          v9,
          "seed calculating response expired");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
          179,
          "update_seed_status_expired",
          26,
          1289,
          80,
          v7);
        *(_BYTE *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 33) = 0;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * a2 + 52));
    return 0;
  }
}
