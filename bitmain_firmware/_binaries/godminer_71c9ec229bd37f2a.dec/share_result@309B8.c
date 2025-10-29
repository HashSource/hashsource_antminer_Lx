int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double v8; // d7
  unsigned int v9; // r2
  __int64 v10; // kr10_8
  unsigned int v11; // r1
  int v12; // r2
  double v14; // d5
  int v15; // r2
  double v16; // d7
  int v17; // r3
  double v18; // d6
  time_t v19; // r0
  __int64 v20; // r6
  _DWORD v21[7]; // [sp+28h] [bp-1044h] BYREF
  int v22; // [sp+44h] [bp-1028h]
  _DWORD v23[7]; // [sp+48h] [bp-1024h] BYREF
  int v24; // [sp+64h] [bp-1008h]
  char v25[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_167364);
  if ( a1 )
  {
    v14 = a4[247];
    v15 = *((_DWORD *)a4 + 524);
    v16 = a4[266] + v14;
    ++total_accepted;
    v17 = *((_DWORD *)a4 + 525);
    v18 = total_diff_accepted + v14;
    *((_DWORD *)a4 + 524) = v15 + 1;
    *((_DWORD *)a4 + 525) = __CFADD__(v15, 1) + v17;
    a4[266] = v16;
    total_diff_accepted = v18;
    v19 = time(0);
    v20 = *((_QWORD *)a4 + 247);
    *((_DWORD *)a4 + 446) = v19;
    *((_QWORD *)a4 + 224) = v20;
    pthread_mutex_unlock(&stru_167364);
    return 1;
  }
  else
  {
    v7 = a4[247];
    v8 = total_diff_rejected + v7;
    v9 = total_rejected;
    v10 = *((_QWORD *)a4 + 263) + 1LL;
    a4[267] = a4[267] + v7;
    *((_DWORD *)a4 + 526) = v10;
    v11 = HIDWORD(total_rejected);
    total_diff_rejected = v8;
    *((_DWORD *)a4 + 527) = HIDWORD(v10);
    total_rejected = __PAIR64__(v11, v9) + 1;
    pthread_mutex_unlock(&stru_167364);
    if ( a3 )
    {
      sub_2F994(a3);
      V_LOCK();
      V_INT((int)v21, "poolno", *(int *)a4);
      logfmt_raw(
        v25,
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
        "reject reason: %s",
        a3);
      V_UNLOCK();
      v12 = 481;
    }
    else
    {
      sub_2F994("NULL");
      V_LOCK();
      V_INT((int)v23, "poolno", *(int *)a4);
      logfmt_raw(
        v25,
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
      v25);
    return 1;
  }
}
