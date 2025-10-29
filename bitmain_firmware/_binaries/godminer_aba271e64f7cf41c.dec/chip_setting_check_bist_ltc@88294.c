bool __fastcall chip_setting_check_bist_ltc(int a1, unsigned __int8 a2, int a3, int a4)
{
  int v4; // r3
  char v5; // r3
  int v7; // [sp+4h] [bp-1098h]
  char v12[24]; // [sp+44h] [bp-1058h] BYREF
  int v13; // [sp+1044h] [bp-58h] BYREF
  _WORD v14[8]; // [sp+1048h] [bp-54h] BYREF
  _DWORD v15[7]; // [sp+1058h] [bp-44h] BYREF
  int v16; // [sp+1074h] [bp-28h]
  unsigned int v17; // [sp+1078h] [bp-24h]
  void *s; // [sp+107Ch] [bp-20h]
  int v19; // [sp+1080h] [bp-1Ch]
  int v20; // [sp+1084h] [bp-18h]
  _BOOL4 v21; // [sp+1088h] [bp-14h]
  int i; // [sp+108Ch] [bp-10h]

  v13 = 0;
  if ( a2 )
    v4 = *(_DWORD *)(a1 + 336);
  else
    v4 = 1;
  v20 = v4;
  v19 = 0;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_check_bist_ltc",
    27,
    408,
    20,
    v12);
  s = malloc(12 * v20);
  memset(s, 0, 12 * v20);
  memset(v14, 0, sizeof(v14));
  LOBYTE(v14[4]) = a2;
  if ( a2 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  HIBYTE(v14[4]) = v5;
  LOBYTE(v14[7]) = 0;
  HIBYTE(v14[6]) = 1;
  LOBYTE(v14[6]) = a4;
  v14[5] = 6;
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 300))(
    a1,
    v14,
    v20,
    s,
    &v13,
    v7,
    2000,
    0);
  for ( i = 0; i < v13; ++i )
  {
    v17 = (unsigned int)*((unsigned __int8 *)s + 12 * i + 4) / *(_DWORD *)(a1 + 428);
    v21 = *((_WORD *)s + 6 * i + 3) == 6 && (*((_DWORD *)s + 3 * i) & 0x1000000) != 0;
  }
  if ( v20 > v13 )
  {
    V_LOCK();
    sub_86850((int)v15, *(int *)(a1 + 252));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "detected core %d get check bist results less than expect num(%d < %d)",
      a4,
      v13,
      v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
      186,
      "chip_setting_check_bist_ltc",
      27,
      441,
      80,
      v12);
  }
  free(s);
  return v21;
}
