int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double v8; // d7
  unsigned int v9; // r2
  __int64 v10; // kr10_8
  unsigned int v11; // r1
  int v12; // r2
  double v14; // d5
  __int64 v15; // r2
  double v16; // d7
  double v17; // d6
  time_t v18; // r0
  __int64 v19; // r6
  _DWORD v20[7]; // [sp+28h] [bp-1044h] BYREF
  int v21; // [sp+44h] [bp-1028h]
  _DWORD v22[7]; // [sp+48h] [bp-1024h] BYREF
  int v23; // [sp+64h] [bp-1008h]
  char v24[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_16433C);
  if ( a1 )
  {
    v14 = a4[246];
    LODWORD(v15) = *((_DWORD *)a4 + 522);
    v16 = a4[265] + v14;
    ++total_accepted;
    HIDWORD(v15) = *((_DWORD *)a4 + 523);
    v17 = total_diff_accepted + v14;
    *((_QWORD *)a4 + 261) = v15 + 1;
    a4[265] = v16;
    total_diff_accepted = v17;
    v18 = time(0);
    v19 = *((_QWORD *)a4 + 246);
    *((_DWORD *)a4 + 444) = v18;
    *((_QWORD *)a4 + 223) = v19;
    pthread_mutex_unlock(&stru_16433C);
    return 1;
  }
  else
  {
    v7 = a4[246];
    v8 = total_diff_rejected + v7;
    v9 = total_rejected;
    v10 = *((_QWORD *)a4 + 262) + 1LL;
    a4[266] = a4[266] + v7;
    *((_DWORD *)a4 + 524) = v10;
    v11 = HIDWORD(total_rejected);
    total_diff_rejected = v8;
    *((_DWORD *)a4 + 525) = HIDWORD(v10);
    total_rejected = __PAIR64__(v11, v9) + 1;
    pthread_mutex_unlock(&stru_16433C);
    if ( a3 )
    {
      sub_2E1D4(a3);
      V_LOCK();
      V_INT((int)v20, "poolno", *(int *)a4);
      logfmt_raw(
        v24,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      v12 = 481;
    }
    else
    {
      sub_2E1D4("NULL");
      V_LOCK();
      V_INT((int)v22, "poolno", *(int *)a4);
      logfmt_raw(
        v24,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        "reject reason:: NULL");
      V_UNLOCK();
      v12 = 484;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "share_result",
      12,
      v12,
      80,
      v24);
    return 1;
  }
}
