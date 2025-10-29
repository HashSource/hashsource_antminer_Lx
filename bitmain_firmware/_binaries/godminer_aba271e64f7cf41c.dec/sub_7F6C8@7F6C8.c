int __fastcall sub_7F6C8(int a1, char a2, __int16 a3, void *a4)
{
  int v4; // r5
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r0
  int v9; // [sp+4h] [bp-10A0h]
  char v14[24]; // [sp+4Ch] [bp-1058h] BYREF
  int v15; // [sp+104Ch] [bp-58h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-54h] BYREF
  _DWORD v17[7]; // [sp+1060h] [bp-44h] BYREF
  int v18; // [sp+107Ch] [bp-28h]
  void *src; // [sp+1084h] [bp-20h]
  int i; // [sp+1088h] [bp-1Ch]
  int v21; // [sp+108Ch] [bp-18h]

  v15 = 0;
  v21 = *(_DWORD *)(a1 + 424) << 6;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_cache_done_status_rvn_LTC_1491", v21);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_get_cache_done_status_rvn_LTC_1491",
    46,
    1506,
    40,
    v14);
  memset(s, 0, sizeof(s));
  s[4] = 0;
  src = malloc(12 * v21);
  s[5] = a3;
  LOBYTE(s[6]) = a2;
  memset(src, 0, 12 * v21);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v21,
    src,
    &v15,
    v9,
    2000,
    0);
  for ( i = 0; i < v15; ++i )
  {
    V_LOCK();
    sub_77CE8((int)v17, *(int *)(a1 + 252));
    v4 = *((unsigned __int8 *)src + 12 * i + 4);
    v5 = *((unsigned __int8 *)src + 12 * i + 8);
    v6 = sub_780E4(*((_WORD *)src + 6 * i + 3));
    v7 = sub_780BC(*((_DWORD *)src + 3 * i));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v18,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v18,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      v4,
      v5,
      v6,
      v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_cache_done_status_rvn_LTC_1491",
      46,
      1518,
      40,
      v14);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v21);
  free(src);
  return v15;
}
