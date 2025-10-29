_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  char v4[12]; // [sp+18h] [bp-100Ch] BYREF
  int i; // [sp+1018h] [bp-Ch]
  _DWORD *v6; // [sp+101Ch] [bp-8h]

  v6 = 0;
  for ( i = 0; !i && a2 != *(_DWORD *)"\b"; ++i )
    ;
  if ( i != 1 && machine_runtime_ctrl_ltc_1491 )
  {
    v6 = machine_runtime_ctrl_ltc_1491();
    v6[20] = a2;
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "miner type: %d", a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_interface.c",
      181,
      "machine_runtime_init",
      20,
      78,
      20,
      v4);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "not support miner type: %d", a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_interface.c",
      181,
      "machine_runtime_init",
      20,
      72,
      100,
      v4);
  }
  return v6;
}
