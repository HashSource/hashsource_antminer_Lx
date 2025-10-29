int __fastcall system_info_init(unsigned int a1)
{
  char *v1; // r8
  char **v2; // r5
  unsigned int v3; // r3
  char v4; // r0
  char *v5; // r4
  char v7[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = off_12FB00[a1];
  if ( a1 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "%s, wrong algo %s!", "system_info_init", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      13,
      100,
      v7);
    return -1;
  }
  else
  {
    v2 = &off_12FB00[17 * a1];
    v3 = 17 * a1;
    if ( a1 - 5 > 2 )
      v4 = 10;
    else
      v4 = 4;
    v5 = (char *)&all_algo_system_info + 4 * v3;
    set_pic_device_high(v4);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "algo %s fan_control_mode %d", v1, v2[31]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      24,
      60,
      v7);
    power_info_init(
      *((_DWORD *)v5 + 1),
      *((_DWORD *)v5 + 2),
      *((_DWORD *)v5 + 3),
      *((_DWORD *)v5 + 4),
      *((_DWORD *)v5 + 5));
    fan_info_init();
    fan_control_info_init(
      *((_DWORD *)v5 + 8),
      *((_DWORD *)v5 + 9),
      *((_DWORD *)v5 + 10),
      *((_DWORD *)v5 + 11),
      *((_DWORD *)v5 + 12),
      *((_DWORD *)v5 + 13),
      *((float *)v5 + 14),
      *((_DWORD *)v5 + 15),
      *((_DWORD *)v5 + 16));
    return 0;
  }
}
