int __fastcall sub_7EFA8(int a1, __int16 a2, __int16 a3, void *a4)
{
  int v5; // [sp+4h] [bp-1098h]
  char v8; // [sp+42h] [bp-105Ah]
  char v10[16]; // [sp+4Ch] [bp-1050h] BYREF
  int v11; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v14; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1084h] [bp-18h]
  int i; // [sp+1088h] [bp-14h]
  int v17; // [sp+108Ch] [bp-10h]

  v8 = a2;
  v11 = 0;
  v17 = *(_DWORD *)(a1 + 424);
  if ( a2 == 255 )
    v17 = 136 * *(_DWORD *)(a1 + 424);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_LTC_1491", v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_get_core_status_LTC_1491",
    36,
    1446,
    20,
    v10);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  src = malloc(12 * v17);
  s[5] = a3;
  LOBYTE(s[6]) = v8;
  memset(src, 0, 12 * v17);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v17,
    src,
    &v11,
    v5,
    2000,
    0);
  for ( i = 0; i < v11; ++i )
  {
    V_LOCK();
    sub_77CE8((int)v13, *(int *)(a1 + 252));
    logfmt_raw(
      v10,
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
      "ChipSetting_get_core_status_LTC_1491",
      36,
      1458,
      20,
      v10);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v17);
  free(src);
  return v11;
}
