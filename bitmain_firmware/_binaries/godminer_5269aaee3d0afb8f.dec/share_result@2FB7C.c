int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double *v8; // r0
  unsigned int *v9; // r3
  double v10; // d7
  unsigned int v11; // r2
  __int64 v12; // kr10_8
  unsigned int v13; // r1
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r1
  _QWORD *v18; // r3
  double *v19; // lr
  double v20; // d5
  double v21; // d6
  __int64 v22; // r2
  double v23; // d7
  time_t v24; // r0
  __int64 v25; // r6
  char *v26; // r0
  _DWORD v27[7]; // [sp+28h] [bp-1044h] BYREF
  int v28; // [sp+44h] [bp-1028h]
  _DWORD v29[7]; // [sp+48h] [bp-1024h] BYREF
  int v30; // [sp+64h] [bp-1008h]
  char v31[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_16534C);
  if ( a1 )
  {
    LOWORD(v18) = -14472;
    HIWORD(v18) = (unsigned int)&unk_16E7A8 >> 16;
    LOWORD(v19) = -14512;
    v20 = a4[247];
    HIWORD(v19) = (unsigned int)&unk_16E780 >> 16;
    v21 = *v19;
    LODWORD(v22) = *((_DWORD *)a4 + 524);
    v23 = a4[266] + v20;
    ++*v18;
    HIDWORD(v22) = *((_DWORD *)a4 + 525);
    *((_QWORD *)a4 + 262) = v22 + 1;
    a4[266] = v23;
    *v19 = v21 + v20;
    v24 = time(0);
    v25 = *((_QWORD *)a4 + 247);
    *((_DWORD *)a4 + 446) = v24;
    *((_QWORD *)a4 + 224) = v25;
    pthread_mutex_unlock(&stru_16534C);
    return 1;
  }
  else
  {
    v7 = a4[247];
    LOWORD(v8) = -14496;
    HIWORD(v8) = (unsigned int)&unk_16E790 >> 16;
    LOWORD(v9) = -14440;
    HIWORD(v9) = (unsigned int)&unk_16E7C8 >> 16;
    v10 = *v8 + v7;
    v11 = *v9;
    v12 = *((_QWORD *)a4 + 263) + 1LL;
    a4[267] = a4[267] + v7;
    *((_DWORD *)a4 + 526) = v12;
    v13 = v9[1];
    *v8 = v10;
    *((_DWORD *)a4 + 527) = HIDWORD(v12);
    *(_QWORD *)v9 = __PAIR64__(v13, v11) + 1;
    pthread_mutex_unlock(&stru_16534C);
    if ( a3 )
    {
      sub_2EB58(a3);
      V_LOCK();
      V_INT((int)v27, "poolno", *(int *)a4);
      logfmt_raw(
        v31,
        0x1000u,
        0,
        v28,
        v27[0],
        v27[1],
        v27[2],
        v27[3],
        v27[4],
        v27[5],
        v27[6],
        v28,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      LOWORD(v14) = -14756;
      HIWORD(v14) = (unsigned int)&unk_16E68C >> 16;
      v15 = 481;
    }
    else
    {
      LOWORD(v26) = 2344;
      HIWORD(v26) = (unsigned int)"notify_ckb" >> 16;
      sub_2EB58(v26);
      V_LOCK();
      V_INT((int)v29, "poolno", *(int *)a4);
      logfmt_raw(
        v31,
        0x1000u,
        0,
        v30,
        v29[0],
        v29[1],
        v29[2],
        v29[3],
        v29[4],
        v29[5],
        v29[6],
        v30,
        "reject reason:: NULL");
      V_UNLOCK();
      LOWORD(v14) = -14756;
      HIWORD(v14) = (unsigned int)&unk_16E68C >> 16;
      v15 = 484;
    }
    LOWORD(v16) = 1840;
    HIWORD(v16) = (unsigned int)"\"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
    zlog(*v14, v16, 127, "share_result", 12, v15, 80, v31);
    return 1;
  }
}
