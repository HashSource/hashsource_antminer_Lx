unsigned int *__fastcall sub_B61C4(unsigned int *result)
{
  unsigned int *v1; // [sp+14h] [bp-1810h]
  char v2[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v3[12]; // [sp+818h] [bp-100Ch] BYREF
  unsigned int j; // [sp+1818h] [bp-Ch]
  unsigned int i; // [sp+181Ch] [bp-8h]

  v1 = result;
  if ( result )
  {
    strcpy(v2, "==========================capability start==========================\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "platform_dump_capability",
      24,
      26,
      20,
      v3);
    snprintf(v2, 0x800u, "board num = %d\n", *v1);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "platform_dump_capability",
      24,
      27,
      20,
      v3);
    for ( i = 0; *v1 > i; ++i )
    {
      snprintf(v2, 0x800u, "board id = %d, chain num = %d\n", v1[18 * i + 1], v1[18 * i + 2]);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
        188,
        "platform_dump_capability",
        24,
        30,
        20,
        v3);
      for ( j = 0; v1[18 * i + 2] > j; ++j )
      {
        snprintf(v2, 0x800u, "\tchain id = %d\n", v1[18 * i + 3 + j]);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
          188,
          "platform_dump_capability",
          24,
          33,
          20,
          v3);
      }
    }
    strcpy(v2, "==========================capability end============================\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return (unsigned int *)zlog(
                             g_zc,
                             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/"
                             "release/build/godminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
                             188,
                             "platform_dump_capability",
                             24,
                             36,
                             20,
                             v3);
  }
  return result;
}
