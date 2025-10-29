int __fastcall sub_7F334(int a1, __int16 a2, __int16 a3, void *a4)
{
  char v7; // [sp+42h] [bp-105Ah]
  char v9[16]; // [sp+4Ch] [bp-1050h] BYREF
  int v10; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v12[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v13; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1084h] [bp-18h]
  int i; // [sp+1088h] [bp-14h]
  int v16; // [sp+108Ch] [bp-10h]

  v7 = a2;
  v10 = 0;
  v16 = *(_DWORD *)(a1 + 424);
  if ( a2 == 255 )
    v16 = 136 * *(_DWORD *)(a1 + 424);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  src = malloc(12 * v16);
  s[5] = a3;
  LOBYTE(s[6]) = v7;
  memset(src, 0, 12 * v16);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 300))(a1, s, v16, src, &v10);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s core_no %d, response_num %d", "ChipSetting_get_core_status_debug_LTC_1491", v16, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_get_core_status_debug_LTC_1491",
    42,
    1483,
    40,
    v9);
  for ( i = 0; i < v10; ++i )
  {
    V_LOCK();
    sub_77CE8((int)v12, *(int *)(a1 + 252));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * i + 4),
      *((unsigned __int8 *)src + 12 * i + 8),
      *((unsigned __int16 *)src + 6 * i + 3),
      *((_DWORD *)src + 3 * i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_core_status_debug_LTC_1491",
      42,
      1486,
      40,
      v9);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v16);
  free(src);
  return v10;
}
