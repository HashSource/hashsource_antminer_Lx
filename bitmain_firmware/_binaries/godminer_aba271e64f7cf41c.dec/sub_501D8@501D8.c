_DWORD *sub_501D8()
{
  _DWORD *result; // r0
  char v1[16]; // [sp+14h] [bp-1010h] BYREF
  int v2; // [sp+1014h] [bp-10h] BYREF
  int i; // [sp+1018h] [bp-Ch]
  _DWORD *v4; // [sp+101Ch] [bp-8h]

  v2 = 0;
  result = get_all_created_runtime(&v2);
  v4 = result;
  for ( i = 0; i < v2; ++i )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "chain[%d] %s", i, v4[i] + 320);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "show_backend_info",
      17,
      82,
      20,
      v1);
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "chain[%d] %x", i, *(_DWORD *)(v4[i] + 328));
    V_UNLOCK();
    result = (_DWORD *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rele"
                         "ase/build/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                         176,
                         "show_backend_info",
                         17,
                         83,
                         20,
                         v1);
  }
  return result;
}
