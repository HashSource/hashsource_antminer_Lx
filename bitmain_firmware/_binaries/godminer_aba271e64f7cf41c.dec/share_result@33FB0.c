int __fastcall share_result(int a1, int a2, unsigned __int8 *a3, double *a4)
{
  unsigned int v4; // r3
  int v5; // r1
  unsigned int v6; // r3
  int v7; // r1
  char v12[20]; // [sp+38h] [bp-1054h] BYREF
  _DWORD v13[7]; // [sp+1038h] [bp-54h] BYREF
  int v14; // [sp+1054h] [bp-38h]
  _DWORD v15[7]; // [sp+1058h] [bp-34h] BYREF
  int v16; // [sp+1074h] [bp-18h]
  int v17; // [sp+107Ch] [bp-10h]

  pthread_mutex_lock(&stru_1518F0);
  if ( a1 )
  {
    ++*(_QWORD *)&total_accepted;
    total_diff_accepted = a4[226] + total_diff_accepted;
    ++*((_QWORD *)a4 + 241);
    a4[245] = a4[245] + a4[226];
    *((_DWORD *)a4 + 404) = time(0);
    a4[203] = a4[226];
  }
  else
  {
    total_diff_rejected = a4[226] + total_diff_rejected;
    a4[246] = a4[246] + a4[226];
    ++*((_QWORD *)a4 + 242);
    ++*(_QWORD *)&total_rejected;
  }
  pthread_mutex_unlock(&stru_1518F0);
  if ( !a1 )
  {
    v17 = *((_DWORD *)a4 + 484);
    if ( a3 )
    {
      sub_3260C(a3);
      v4 = v17;
      if ( v17 < 1 )
        v4 = 1;
      sub_CC7AC(v17 % 10 + v17 % 100 + v17 % 1000 + v17 % 10000, v4);
      if ( !v5 )
      {
        V_LOCK();
        sub_32250((int)v13, *(int *)a4);
        logfmt_raw(
          v12,
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
          "reject reason: %s",
          a3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/pool.c",
          144,
          "share_result",
          12,
          577,
          80,
          v12);
      }
    }
    else
    {
      sub_3260C("NULL");
      v6 = v17;
      if ( v17 < 1 )
        v6 = 1;
      sub_CC7AC(v17 % 10 + v17 % 100 + v17 % 1000 + v17 % 10000, v6);
      if ( !v7 )
      {
        V_LOCK();
        sub_32250((int)v15, *(int *)a4);
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
          "reject reason:: NULL");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/pool.c",
          144,
          "share_result",
          12,
          583,
          80,
          v12);
      }
    }
  }
  return 1;
}
