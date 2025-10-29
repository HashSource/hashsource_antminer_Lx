int __fastcall sub_64390(char a1)
{
  unsigned __int64 v1; // d17
  char v5[72]; // [sp+34h] [bp-1048h] BYREF
  int v6; // [sp+1034h] [bp-48h] BYREF
  _DWORD v7[7]; // [sp+1038h] [bp-44h] BYREF
  int v8; // [sp+1054h] [bp-28h]
  int v9; // [sp+1058h] [bp-24h]
  char *v10; // [sp+105Ch] [bp-20h]
  int v11; // [sp+1060h] [bp-1Ch]
  char *v12; // [sp+1064h] [bp-18h]
  char *flag_from_monitor; // [sp+1068h] [bp-14h]
  int *all_created_runtime; // [sp+106Ch] [bp-10h]

  v6 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v6);
  flag_from_monitor = get_flag_from_monitor(*all_created_runtime);
  v12 = flag_from_monitor + 32;
  v11 = 2;
  LODWORD(v1) = 2;
  if ( (vshld_u64(1u, v1) & *((_QWORD *)flag_from_monitor + 4)) == 0 )
    return 0;
  v10 = flag_from_monitor + 32;
  v9 = 2;
  LODWORD(v1) = 2;
  *((_QWORD *)flag_from_monitor + 5) |= vshld_u64(1u, v1);
  if ( !a1 )
    return 0;
  V_LOCK();
  sub_63518((int)v7, "fan error exceed limit");
  logfmt_raw(v5, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "%s", "check_fan_err");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
    183,
    "check_fan_err",
    13,
    85,
    100,
    v5);
  return 1;
}
