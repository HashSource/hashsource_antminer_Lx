int sub_20B4C()
{
  int result; // r0
  char v1[12]; // [sp+10h] [bp-100Ch] BYREF
  int v2; // [sp+1010h] [bp-Ch]
  int v3; // [sp+1014h] [bp-8h]

  v2 = 0;
  v3 = 0;
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "START %s", "load_default_config_without_restart");
  V_UNLOCK();
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/api_new.c",
             147,
             "load_default_config_without_restart",
             35,
             1000,
             20,
             v1);
  if ( default_config )
  {
    result = access((const char *)default_config, 4);
    if ( !result )
    {
      result = judge_load_config((const char *)default_config);
      v3 = result;
    }
  }
  if ( (v3 & 1) != 0 )
    return reload_pool();
  return result;
}
