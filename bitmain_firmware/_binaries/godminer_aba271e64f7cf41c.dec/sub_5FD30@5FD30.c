int __fastcall sub_5FD30(int a1, int a2)
{
  char v6[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v7; // [sp+101Ch] [bp-10h]
  double v8; // [sp+1020h] [bp-Ch]

  v8 = (double)a1 / 100.0;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "set voltage to %lf", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/power_api.c",
    160,
    "set_voltage_without_feedback",
    28,
    197,
    40,
    v6);
  v7 = bitmain_set_voltage();
  if ( v7 >= 0 )
  {
    usleep(0x7A120u);
    *(_DWORD *)(a2 + 28) = a1;
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 28);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "bitmain_set_voltage failed, return code:%x", v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "set_voltage_without_feedback",
      28,
      200,
      100,
      v6);
    return -1;
  }
}
