int __fastcall sub_3260C(unsigned __int8 *a1)
{
  int result; // r0
  char v3[12]; // [sp+18h] [bp-100Ch] BYREF
  _DWORD *v4; // [sp+1018h] [bp-Ch]
  int *v5; // [sp+101Ch] [bp-8h]

  v5 = (int *)&reject_reason_map;
  if ( (unsigned int)dword_151914 <= 0x13 )
  {
    if ( !dword_151914 )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_151914);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/pool.c",
        144,
        "reject_reason_history_update",
        28,
        48,
        40,
        v3);
      memset(&reject_reason_map, 0, 0x14u);
    }
    result = map_get_(v5, a1);
    v5[3] = result;
    v4 = (_DWORD *)v5[3];
    if ( v4 )
    {
      ++*v4;
    }
    else
    {
      ++dword_151914;
      v5[4] = 1;
      return map_set_(v5, a1, v5 + 4, 4u);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_151914);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/pool.c",
             144,
             "reject_reason_history_update",
             28,
             43,
             20,
             v3);
  }
  return result;
}
