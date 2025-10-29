int __fastcall sub_B6DC4(const char *a1, int a2)
{
  char v6[44]; // [sp+18h] [bp-182Ch] BYREF
  char v7[44]; // [sp+818h] [bp-102Ch] BYREF
  char dest[32]; // [sp+1818h] [bp-2Ch] BYREF
  int i; // [sp+1838h] [bp-Ch]
  int fd; // [sp+183Ch] [bp-8h]

  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    strcpy(dest, a1);
    if ( ioctl(fd, 0x8927u, dest) >= 0 )
    {
      for ( i = 0; i <= 5; ++i )
        *(_BYTE *)(a2 + i) = dest[i + 18];
      close(fd);
      return 0;
    }
    else
    {
      strcpy(v6, "error ioctl");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
        188,
        "get_eth_mac",
        11,
        156,
        100,
        v7);
      close(fd);
      return -2;
    }
  }
  else
  {
    strcpy(v6, "error sock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "get_eth_mac",
      11,
      150,
      100,
      v7);
    return -1;
  }
}
