int __fastcall system_info_init(unsigned int a1)
{
  char *v1; // r8
  char *v2; // r4
  char v4; // r0
  char v6[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = off_130A6C[a1];
  if ( a1 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s, wrong algo %s!", "system_info_init", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/system_info.c",
      149,
      "system_info_init",
      16,
      13,
      100,
      v6);
    return -1;
  }
  else
  {
    v2 = (char *)&all_algo_system_info + 76 * a1;
    if ( a1 - 5 > 2 )
      v4 = 10;
    else
      v4 = 4;
    set_pic_device_high(v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "algo %s fan_control_mode %d", v1, off_130A6C[19 * a1 + 33]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/system_info.c",
      149,
      "system_info_init",
      16,
      24,
      60,
      v6);
    power_info_init(
      *((_DWORD *)v2 + 1),
      *((_DWORD *)v2 + 2),
      *((_DWORD *)v2 + 3),
      *((_DWORD *)v2 + 4),
      *((_DWORD *)v2 + 5),
      *((_DWORD *)v2 + 6),
      *((_DWORD *)v2 + 7));
    fan_info_init();
    fan_control_info_init(
      *((_DWORD *)v2 + 10),
      *((_DWORD *)v2 + 11),
      *((_DWORD *)v2 + 12),
      *((_DWORD *)v2 + 13),
      *((_DWORD *)v2 + 14),
      *((_DWORD *)v2 + 15),
      *((float *)v2 + 16),
      *((_DWORD *)v2 + 17),
      *((_DWORD *)v2 + 18));
    return 0;
  }
}
