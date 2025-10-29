int __fastcall sub_7FA40(int a1, __int16 a2, __int16 a3, void *a4)
{
  int v5; // [sp+4h] [bp-1128h]
  int v6; // [sp+4h] [bp-1128h]
  int v7; // [sp+4h] [bp-1128h]
  int v8; // [sp+4h] [bp-1128h]
  int v9; // [sp+4h] [bp-1128h]
  char v12; // [sp+42h] [bp-10EAh]
  char v14[32]; // [sp+4Ch] [bp-10E0h] BYREF
  int v15; // [sp+104Ch] [bp-E0h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-DCh] BYREF
  _DWORD v17[7]; // [sp+1060h] [bp-CCh] BYREF
  int v18; // [sp+107Ch] [bp-B0h]
  _DWORD v19[7]; // [sp+1080h] [bp-ACh] BYREF
  int v20; // [sp+109Ch] [bp-90h]
  _DWORD v21[7]; // [sp+10A0h] [bp-8Ch] BYREF
  int v22; // [sp+10BCh] [bp-70h]
  _DWORD v23[7]; // [sp+10C0h] [bp-6Ch] BYREF
  int v24; // [sp+10DCh] [bp-50h]
  _DWORD v25[7]; // [sp+10E0h] [bp-4Ch] BYREF
  int v26; // [sp+10FCh] [bp-30h]
  int m; // [sp+1104h] [bp-28h]
  int k; // [sp+1108h] [bp-24h]
  int j; // [sp+110Ch] [bp-20h]
  int i; // [sp+1110h] [bp-1Ch]
  int n; // [sp+1114h] [bp-18h]
  int v32; // [sp+1118h] [bp-14h]
  void *src; // [sp+111Ch] [bp-10h]

  v12 = a2;
  v15 = 0;
  v32 = *(_DWORD *)(a1 + 424);
  if ( a2 == 255 )
    v32 = 136 * *(_DWORD *)(a1 + 424);
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_5chips_LTC_1491", v32);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_get_core_status_5chips_LTC_1491",
    43,
    1535,
    20,
    v14);
  memset(s, 0, sizeof(s));
  s[4] = 0;
  src = malloc(12 * v32);
  s[5] = a3;
  LOBYTE(s[6]) = v12;
  memset(src, 0, 12 * v32);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v32,
    src,
    &v15,
    v5,
    2000,
    0);
  for ( i = 0; i < v15; ++i )
  {
    V_LOCK();
    sub_77CE8((int)v17, *(int *)(a1 + 252));
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
      "ChipSetting_get_core_status_5chips_LTC_1491",
      43,
      1547,
      20,
      v14);
  }
  s[4] = 13056;
  src = malloc(12 * v32);
  s[5] = a3;
  LOBYTE(s[6]) = v12;
  memset(src, 0, 12 * v32);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v32,
    src,
    &v15,
    v6,
    2000,
    0);
  for ( j = 0; j < v15; ++j )
  {
    V_LOCK();
    sub_77CE8((int)v19, *(int *)(a1 + 252));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v20,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v20,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * j + 4),
      *((unsigned __int8 *)src + 12 * j + 8),
      *((unsigned __int16 *)src + 6 * j + 3),
      *((_DWORD *)src + 3 * j));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_core_status_5chips_LTC_1491",
      43,
      1558,
      20,
      v14);
  }
  s[4] = 26112;
  src = malloc(12 * v32);
  s[5] = a3;
  LOBYTE(s[6]) = v12;
  memset(src, 0, 12 * v32);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v32,
    src,
    &v15,
    v7,
    2000,
    0);
  for ( k = 0; k < v15; ++k )
  {
    V_LOCK();
    sub_77CE8((int)v21, *(int *)(a1 + 252));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v22,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v22,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * k + 4),
      *((unsigned __int8 *)src + 12 * k + 8),
      *((unsigned __int16 *)src + 6 * k + 3),
      *((_DWORD *)src + 3 * k));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_core_status_5chips_LTC_1491",
      43,
      1569,
      20,
      v14);
  }
  s[4] = -26368;
  src = malloc(12 * v32);
  s[5] = a3;
  LOBYTE(s[6]) = v12;
  memset(src, 0, 12 * v32);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v32,
    src,
    &v15,
    v8,
    2000,
    0);
  for ( m = 0; m < v15; ++m )
  {
    V_LOCK();
    sub_77CE8((int)v23, *(int *)(a1 + 252));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * m + 4),
      *((unsigned __int8 *)src + 12 * m + 8),
      *((unsigned __int16 *)src + 6 * m + 3),
      *((_DWORD *)src + 3 * m));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_core_status_5chips_LTC_1491",
      43,
      1580,
      20,
      v14);
  }
  s[4] = -13312;
  src = malloc(12 * v32);
  s[5] = a3;
  LOBYTE(s[6]) = v12;
  memset(src, 0, 12 * v32);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    s,
    v32,
    src,
    &v15,
    v9,
    2000,
    0);
  for ( n = 0; n < v15; ++n )
  {
    V_LOCK();
    sub_77CE8((int)v25, *(int *)(a1 + 252));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v26,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v26,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      *((unsigned __int8 *)src + 12 * n + 4),
      *((unsigned __int8 *)src + 12 * n + 8),
      *((unsigned __int16 *)src + 6 * n + 3),
      *((_DWORD *)src + 3 * n));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_get_core_status_5chips_LTC_1491",
      43,
      1591,
      20,
      v14);
  }
  if ( a4 )
    memcpy(a4, src, 12 * v32);
  free(src);
  return v15;
}
