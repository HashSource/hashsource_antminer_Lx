int __fastcall sub_20DF0(int a1, int a2)
{
  char v6[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v7; // [sp+101Ch] [bp-8h]

  v7 = 0;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "reload_config",
    13,
    1048,
    20,
    v6,
    a2,
    a1);
  if ( strcmp(byte_151288, off_14D378) )
    return -2147483643;
  sub_20B4C();
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "reload_config",
    13,
    1055,
    20,
    v6);
  return v7;
}
