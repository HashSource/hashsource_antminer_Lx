int __fastcall open_cores_by_work_num(int a1)
{
  _DWORD *v2; // r9
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r2
  _DWORD v12[8]; // [sp+18h] [bp-1024h] BYREF
  char v13[4100]; // [sp+38h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s...", "open_cores_by_work_num");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "open_cores_by_work_num",
    22,
    11613,
    20,
    v13);
  sub_5C898(a1, 21, 0);
  str2hex((int)v12, (int)"ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d3", 64);
  v2 = calloc(1u, 0x59u);
  v3 = v12[1];
  v4 = v12[2];
  v5 = v12[3];
  v6 = 1;
  v2[4] = v12[0];
  v2[5] = v3;
  v2[6] = v4;
  v2[7] = v5;
  v7 = v12[5];
  v8 = v12[6];
  v9 = v12[7];
  v2[8] = v12[4];
  v2[9] = v7;
  v2[10] = v8;
  v2[11] = v9;
  *((_QWORD *)v2 + 1) = 1193046;
  do
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s %u", "open_cores_by_work_num", v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_eth/backend_eth.c",
      169,
      "open_cores_by_work_num",
      22,
      11623,
      20,
      v13);
    v10 = v6++;
    sub_5C898(a1, 21, v10);
    push_work_base(a1, (int)v2);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v6 != 65 );
  return 0;
}
