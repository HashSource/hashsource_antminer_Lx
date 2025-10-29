int __fastcall setup_all_chip_x7(int *a1)
{
  char v4[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v5; // [sp+101Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "setup_all_chip_x7() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "setup_all_chip_x7",
    17,
    517,
    40,
    v4);
  v5 = a1[84];
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s", "setup_all_chip_x7");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "setup_all_chip_x7",
    17,
    520,
    60,
    v4);
  if ( !sub_8AA6C(a1) )
    return 102;
  a1[116] = 0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "setup_all_chip_x7",
    17,
    528,
    60,
    v4);
  if ( !sub_8AA6C(a1) )
    return 102;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "setup_all_chip_x7() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "setup_all_chip_x7",
    17,
    532,
    40,
    v4);
  return 0;
}
