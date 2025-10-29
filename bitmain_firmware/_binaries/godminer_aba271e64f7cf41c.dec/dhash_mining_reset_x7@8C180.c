int __fastcall dhash_mining_reset_x7(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  int v6; // r3
  char v9[28]; // [sp+30h] [bp-125Ch] BYREF
  _BYTE v10[520]; // [sp+1030h] [bp-25Ch] BYREF
  _DWORD v11[7]; // [sp+1238h] [bp-54h] BYREF
  int v12; // [sp+1254h] [bp-38h]
  _DWORD v13[7]; // [sp+1258h] [bp-34h] BYREF
  int v14; // [sp+1274h] [bp-18h]
  int i; // [sp+1278h] [bp-14h]
  int v16; // [sp+127Ch] [bp-10h]

  v16 = 0;
  pthread_mutex_lock(&stru_15F7C0[*(_DWORD *)(a1 + 248)]);
  V_LOCK();
  sub_89210((int)v11, *(int *)(a1 + 252));
  logfmt_raw(v9, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "dhash mining reset!");
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmin"
         "er-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
         179,
         "dhash_mining_reset_x7",
         21,
         838,
         80,
         v9);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(a1, HIDWORD(v1));
  *(_BYTE *)(a1 + 257) = 0;
  *(_BYTE *)(a1 + 258) = 0;
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[7])(*(_DWORD *)(a1 + 248));
  sleep(0xAu);
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[6])(
    *(_DWORD *)(a1 + 248),
    *(_DWORD *)(a1 + 1108),
    *(_DWORD *)(a1 + 1128));
  sleep(0xAu);
  if ( (*(int (__fastcall **)(int))(a1 + 220))(a1) )
  {
    V_LOCK();
    sub_89210((int)v13, *(int *)(a1 + 252));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "finding chip failed after restart");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "dhash_mining_reset_x7",
      21,
      847,
      120,
      v9);
    exit(-1);
  }
  memset((char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248), 0, 0x20u);
  v4 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v4[11])(*(_DWORD *)(a1 + 248));
  v5 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v5[1])(*(_DWORD *)(a1 + 248));
  (*(void (__fastcall **)(int))(a1 + 16))(a1);
  chip_setting_seed_x7(a1, (char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248), 0x20u, v10, 0xFFu);
  for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
  {
    reset_chip_seed_status(a1, i);
    chip_seed_status_set_calculating(a1, i);
  }
  pthread_mutex_unlock(&stru_15F7C0[*(_DWORD *)(a1 + 248)]);
  return v6;
}
