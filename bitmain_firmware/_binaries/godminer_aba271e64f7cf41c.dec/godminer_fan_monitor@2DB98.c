bool __fastcall godminer_fan_monitor(int a1)
{
  unsigned __int64 v1; // d17
  _BOOL4 v2; // r3
  char v5[52]; // [sp+30h] [bp-1074h] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-74h] BYREF
  int v7; // [sp+104Ch] [bp-58h]
  _DWORD v8[7]; // [sp+1050h] [bp-54h] BYREF
  int v9; // [sp+106Ch] [bp-38h]
  int v10; // [sp+1070h] [bp-34h]
  char *v11; // [sp+1074h] [bp-30h]
  int v12; // [sp+1078h] [bp-2Ch]
  char *v13; // [sp+107Ch] [bp-28h]
  int v14; // [sp+1080h] [bp-24h]
  char *v15; // [sp+1084h] [bp-20h]
  int v16; // [sp+1088h] [bp-1Ch]
  char *v17; // [sp+108Ch] [bp-18h]
  char *miner_working_status_p; // [sp+1090h] [bp-14h]
  char *flag_from_monitor; // [sp+1094h] [bp-10h]

  ++dword_151858[*(_DWORD *)(a1 + 248)];
  miner_working_status_p = get_miner_working_status_p();
  flag_from_monitor = get_flag_from_monitor(a1);
  v17 = flag_from_monitor + 32;
  v16 = 1;
  LODWORD(v1) = 1;
  if ( (vshld_u64(1u, v1) & *((_QWORD *)flag_from_monitor + 4)) != 0 )
  {
    V_LOCK();
    sub_2A538((int)v6, "fan lost");
    logfmt_raw(v5, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "fan lost happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "godminer_fan_monitor",
      20,
      775,
      20,
      v5);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Sweep error string = %s.", "F:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "godminer_fan_monitor",
      20,
      776,
      100,
      v5);
    v15 = flag_from_monitor + 32;
    v14 = 1;
    LODWORD(v1) = 1;
    *((_QWORD *)flag_from_monitor + 5) |= vshld_u64(1u, v1);
    miner_working_status_p[18] = 1;
  }
  v13 = flag_from_monitor + 32;
  v12 = 0;
  LODWORD(v1) = 0;
  v2 = (vshld_u64(1u, v1) & *((_QWORD *)flag_from_monitor + 4)) != 0;
  if ( v2 )
  {
    V_LOCK();
    sub_2A538((int)v8, "fan slow");
    logfmt_raw(v5, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "fan slow happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "godminer_fan_monitor",
      20,
      784,
      20,
      v5);
    v11 = flag_from_monitor + 32;
    v10 = 0;
    LODWORD(v1) = 0;
    *((_QWORD *)flag_from_monitor + 5) |= vshld_u64(1u, v1);
    v2 = (_BOOL4)miner_working_status_p;
    miner_working_status_p[19] = 1;
  }
  return v2;
}
