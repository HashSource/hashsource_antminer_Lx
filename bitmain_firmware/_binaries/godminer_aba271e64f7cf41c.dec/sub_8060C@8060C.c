int __fastcall sub_8060C(int a1, char a2, __int16 a3, __int16 a4, void *dest)
{
  char v7; // [sp+40h] [bp-105Ch]
  char v10[16]; // [sp+4Ch] [bp-1050h] BYREF
  int v11; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v14; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1084h] [bp-18h]
  int i; // [sp+1088h] [bp-14h]
  int v17; // [sp+108Ch] [bp-10h]

  v7 = a3;
  v11 = 0;
  v17 = 1;
  if ( a3 == 255 )
    v17 = 136;
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 0;
  HIBYTE(s[4]) = a2;
  src = malloc(12 * v17);
  s[5] = a4;
  LOBYTE(s[6]) = v7;
  memset(src, 0, 12 * v17);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 300))(a1, s, v17, src, &v11);
  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s core_no %d response_num %d",
    "ChipSetting_get_single_chip_core_status_LTC_1491",
    v17,
    v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_get_single_chip_core_status_LTC_1491",
    48,
    1615,
    40,
    v10);
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
      "ChipSetting_get_single_chip_core_status_LTC_1491",
      48,
      1618,
      40,
      v10);
  }
  if ( dest )
    memcpy(dest, src, 12 * v17);
  free(src);
  return v11;
}
