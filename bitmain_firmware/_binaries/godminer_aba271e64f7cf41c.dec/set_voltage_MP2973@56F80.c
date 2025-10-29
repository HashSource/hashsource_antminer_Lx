int __fastcall set_voltage_MP2973(int a1)
{
  int v1; // r3
  char v4[40]; // [sp+34h] [bp-1068h] BYREF
  int v5; // [sp+1034h] [bp-68h] BYREF
  _DWORD v6[7]; // [sp+1038h] [bp-64h] BYREF
  int v7; // [sp+1054h] [bp-48h]
  _DWORD v8[7]; // [sp+1058h] [bp-44h] BYREF
  int v9; // [sp+1074h] [bp-28h]
  int v10; // [sp+1078h] [bp-24h]
  int j; // [sp+107Ch] [bp-20h]
  int i; // [sp+1080h] [bp-1Ch]
  int v13; // [sp+1084h] [bp-18h]
  _DWORD *all_created_runtime; // [sp+1088h] [bp-14h]
  unsigned int v15; // [sp+108Ch] [bp-10h]

  v13 = 0;
  all_created_runtime = get_all_created_runtime(&v5);
  v15 = a1 + 150;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set all chain target voltage is %d mV", v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
    187,
    "set_voltage_MP2973",
    18,
    35,
    40,
    v4);
  if ( v15 > 0x672 )
  {
    v1 = 1650;
  }
  else
  {
    v1 = v15;
    if ( v15 < 0x546 )
      v1 = 1350;
  }
  v10 = v1;
  if ( v15 != v1 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "target voltage not in [%d %d], set to %d mV", 1350, 1650, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "set_voltage_MP2973",
      18,
      38,
      80,
      v4);
  }
  for ( i = 0; i < v5; ++i )
  {
    for ( j = 0; j <= 2; ++j )
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(all_created_runtime[i] + 252), 0, v10, v10) )
      {
        V_LOCK();
        sub_56C30((int)v8, i);
        logfmt_raw(
          v4,
          0x1000u,
          0,
          v9,
          v8[0],
          v8[1],
          v8[2],
          v8[3],
          v8[4],
          v8[5],
          v8[6],
          v9,
          "set voltage to %d successfully",
          v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
          187,
          "set_voltage_MP2973",
          18,
          49,
          20,
          v4);
        break;
      }
      V_LOCK();
      sub_56C30((int)v6, i);
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v7,
        v6[0],
        v6[1],
        v6[2],
        v6[3],
        v6[4],
        v6[5],
        v6[6],
        v7,
        "set_chain_mps_voltage failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "set_voltage_MP2973",
        18,
        46,
        100,
        v4);
    }
    if ( j > 2 )
      v13 = 109;
  }
  return v13;
}
