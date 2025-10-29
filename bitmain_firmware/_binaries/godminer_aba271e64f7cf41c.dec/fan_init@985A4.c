int fan_init()
{
  _DWORD v2[512]; // [sp+10h] [bp-1804h] BYREF
  char v3[4]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    dword_15F938 = 1;
    pthread_create((pthread_t *)&dword_15F934, 0, (void *(*)(void *))sub_980C4, 0);
    return 0;
  }
  else
  {
    strcpy((char *)v2, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_fan.c",
      185,
      "fan_init",
      8,
      101,
      100,
      v3,
      v2[0],
      v2[1],
      v2[2],
      v2[3],
      v2[4],
      v2[5],
      v2[6],
      v2[7]);
    return -1;
  }
}
