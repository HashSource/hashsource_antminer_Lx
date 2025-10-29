int __fastcall sub_81F84(int a1, int a2, _DWORD *a3)
{
  int v3; // r0
  float v4; // s15
  int v5; // r3
  int v6; // r3
  char v11[40]; // [sp+44h] [bp-2068h] BYREF
  int v12; // [sp+1044h] [bp-1068h] BYREF
  _BYTE v13[36]; // [sp+1048h] [bp-1064h] BYREF
  int v14; // [sp+1FE8h] [bp-C4h]
  int v15; // [sp+1FECh] [bp-C0h] BYREF
  _DWORD s[4]; // [sp+1FF0h] [bp-BCh] BYREF
  _DWORD v17[7]; // [sp+2000h] [bp-ACh] BYREF
  int v18; // [sp+201Ch] [bp-90h]
  _DWORD v19[7]; // [sp+2020h] [bp-8Ch] BYREF
  int v20; // [sp+203Ch] [bp-70h]
  _DWORD v21[7]; // [sp+2040h] [bp-6Ch] BYREF
  int v22; // [sp+205Ch] [bp-50h]
  _DWORD v23[7]; // [sp+2060h] [bp-4Ch] BYREF
  int v24; // [sp+207Ch] [bp-30h]
  int v25; // [sp+2080h] [bp-2Ch]
  void *ptr; // [sp+2084h] [bp-28h]
  int v27; // [sp+2088h] [bp-24h]
  int v28; // [sp+208Ch] [bp-20h]
  int i; // [sp+2090h] [bp-1Ch]
  int j; // [sp+2094h] [bp-18h]
  int k; // [sp+2098h] [bp-14h]
  float v32; // [sp+209Ch] [bp-10h]

  v15 = 0;
  v32 = 0.0;
  v28 = 0;
  v14 = 285212672;
  *a3 = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
    *(_DWORD *)(a2 + 4 * i) = -1031798784;
  memset(s, 0, sizeof(s));
  s[2] = 9175041;
  s[0] = v14;
  v27 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  v14 = 285343744;
  memset(s, 0, sizeof(s));
  s[2] = 9175041;
  s[0] = 285343744;
  v3 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  v27 |= v3;
  usleep(0xC350u);
  memset(s, 0, sizeof(s));
  s[2] = 9437185;
  ptr = malloc(12 * *(_DWORD *)(a1 + 336));
  memset(ptr, 0, 12 * *(_DWORD *)(a1 + 336));
  (*(void (__fastcall **)(int, _DWORD *, _DWORD, void *, int *))(a1 + 288))(a1, s, *(_DWORD *)(a1 + 336), ptr, &v15);
  for ( j = 0; ; ++j )
  {
    v6 = v15;
    if ( *(_DWORD *)(a1 + 336) < v15 )
      v6 = *(_DWORD *)(a1 + 336);
    if ( j >= v6 )
      break;
    if ( *((_WORD *)ptr + 6 * j + 3) == 144 )
    {
      V_LOCK();
      sub_77CE8((int)v17, *(int *)(a1 + 252));
      logfmt_raw(
        v11,
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
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)ptr + 12 * j + 4),
        *((unsigned __int16 *)ptr + 6 * j + 3),
        *((_DWORD *)ptr + 3 * j));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
        181,
        "update_chip_temp_ltc",
        20,
        436,
        20,
        v11);
      if ( (*((_DWORD *)ptr + 3 * j) & 0x80) != 0 )
      {
        v12 = 0;
        sub_78038(&v12, *((_DWORD *)ptr + 3 * j));
        v4 = ((double)(unsigned __int16)v12 - 0.5) * 662.88 / 4096.0 - 287.48;
        v32 = v4;
        v5 = *(_DWORD *)(a1 + 336) - 1;
        if ( v5 >= *((_BYTE *)ptr + 12 * j + 4) >> 1 )
          v5 = *((_BYTE *)ptr + 12 * j + 4) >> 1;
        v25 = v5;
        if ( (float)(*(float *)(a2 + 4 * v5) + 64.0) < 0.1 && (float)(*(float *)(a2 + 4 * v25) + 64.0) > -0.1 )
        {
          *(float *)(a2 + 4 * v25) = v32;
          ++v28;
        }
      }
    }
  }
  (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 208))(a1, v13, 4000);
  V_LOCK();
  sub_77CE8((int)v19, *(int *)(a1 + 252));
  logfmt_raw(v11, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, "%s", v13);
  V_UNLOCK();
  zlog(
    g_temp_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "update_chip_temp_ltc",
    20,
    454,
    40,
    v11);
  if ( *(_DWORD *)(a1 + 336) - v28 > 4 )
  {
    *a3 = 0;
    V_LOCK();
    sub_77CE8((int)v21, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
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
      "is_temp_return 0 design %d valid_return_num: %d",
      *(_DWORD *)(a1 + 336),
      v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "update_chip_temp_ltc",
      20,
      458,
      60,
      v11);
    sub_781DC(a1, *(_DWORD *)(a1 + 336));
    V_LOCK();
    sub_77CE8((int)v23, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
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
      "detect chip num %d design num %d",
      *(_DWORD *)(a1 + 424),
      *(_DWORD *)(a1 + 336));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "update_chip_temp_ltc",
      20,
      460,
      60,
      v11);
  }
  for ( k = 0; k < *(_DWORD *)(a1 + 336); ++k )
  {
    pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * k + 20));
    *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * k) = (int)*(float *)(a2 + 4 * k);
    pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * k + 20));
  }
  free(ptr);
  return v27;
}
