int __fastcall get_pcba_test_level_ckb(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int (**v6)(); // r0
  unsigned __int16 *v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r12
  unsigned __int16 *i; // r3
  int v12; // r3
  int j; // r2
  int v14; // r3
  char *v15; // r7
  int v16; // [sp+48h] [bp-106Ch] BYREF
  __int16 v17; // [sp+4Ch] [bp-1068h]
  _DWORD v18[7]; // [sp+50h] [bp-1064h] BYREF
  int v19; // [sp+6Ch] [bp-1048h]
  _DWORD v20[8]; // [sp+70h] [bp-1044h] BYREF
  _DWORD v21[7]; // [sp+90h] [bp-1024h] BYREF
  int v22; // [sp+ACh] [bp-1008h]
  char v23[4100]; // [sp+B0h] [bp-1004h] BYREF

  v2 = a1[192];
  v17 = 0;
  v16 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl((int)a1);
  if ( ((int (__fastcall *)(_DWORD, int, int, int *))v6[19])(a1[34], 52, 393216, &v16) )
  {
    v7 = (unsigned __int16 *)&unk_136A6C;
    v8 = 700;
    v9 = (unsigned __int16)v16;
    v10 = HIWORD(v16);
    for ( i = (unsigned __int16 *)&unk_136A6C; ; v8 = i[2] )
    {
      if ( (unsigned __int16)v16 == v8
        && i[3] == HIWORD(v16)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v17
        && *((unsigned __int8 *)i + 9) == HIBYTE(v17) )
      {
        v12 = *(_DWORD *)&aChipsettingTic[10 * v2 + 220];
        a1[192] = v12;
        goto LABEL_13;
      }
      ++v2;
      i += 5;
      if ( v2 == 5 )
        break;
    }
    v12 = a1[192];
LABEL_13:
    if ( !v12 )
    {
      for ( j = 700; v9 != j || v7[3] != v10; j = v7[2] )
      {
        ++v12;
        v7 += 5;
        if ( v12 == 5 )
          goto LABEL_20;
      }
      v14 = *(_DWORD *)&aChipsettingTic[10 * v12 + 220];
      a1[192] = v14;
      if ( v14 )
        goto LABEL_21;
LABEL_20:
      a1[192] = 5;
    }
LABEL_21:
    V_LOCK();
    V_INT((int)v21, "chain", (int)a1[35]);
    v15 = &aChipsettingTic[10 * a1[192] - 10];
    logfmt_raw(
      v23,
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
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v16,
      HIWORD(v16),
      (unsigned __int8)v15[228],
      (unsigned __int8)v15[229]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ckb/backend_ckb.c",
      169,
      "get_pcba_test_level_ckb",
      23,
      520,
      60,
      v23);
    v2 = a1[192];
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK();
  V_INT((int)v18, "chain", (int)a1[35]);
  V_STR(v20, "error", "pic info error");
  logfmt_raw(
    v23,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v20[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_ckb/backend_ckb.c",
    169,
    "get_pcba_test_level_ckb",
    23,
    498,
    120,
    v23);
  return 6;
}
