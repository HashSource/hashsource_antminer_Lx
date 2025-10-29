int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  _DWORD *v3; // r10
  int v4; // r6
  unsigned int hash_on_plug; // r9
  int v6; // r3
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r3
  unsigned __int8 v12; // [sp+1Fh] [bp-1005h] BYREF
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, 1312520);
    V_UNLOCK();
    LOWORD(v10) = -14756;
    HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v10,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      52,
      100,
      v13);
    return -1;
  }
  LOWORD(v2) = -14904;
  HIWORD(v2) = (unsigned int)&unk_16B4C8 >> 16;
  LOWORD(v3) = -14756;
  LOWORD(v4) = -11196;
  *v2 = 0;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v4) = (unsigned int)&unk_16C33C >> 16;
  hash_on_plug = get_hash_on_plug();
  while ( 1 )
  {
    while ( ((hash_on_plug >> v1) & 1) == 0 )
    {
      if ( ++v1 == 16 )
        goto LABEL_10;
    }
    v6 = *v2;
    *(_DWORD *)(v4 + 8 * *v2) = v1;
    *(_BYTE *)(v4 + 8 * v6 + 4) = 1;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "chain_offset %d, chain %d", *v2, *(_DWORD *)(v4 + 8 * *v2));
    V_UNLOCK();
    zlog(
      *v3,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      62,
      60,
      v13);
    if ( open_pic((unsigned __int8)v1) < 0 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "chain_offset %d, chain %d, open pic error!", *v2, *(_DWORD *)(v4 + 8 * *v2));
      V_UNLOCK();
      v8 = *v3;
      v9 = 65;
      goto LABEL_12;
    }
    pic1704_reset(v1);
    usleep(0x493E0u);
    pic1704_jump_to_app(v1);
    usleep(0x493E0u);
    if ( a1 != 7 )
      break;
LABEL_9:
    ++v1;
    ++*v2;
    if ( v1 == 16 )
    {
LABEL_10:
      fpga_reset();
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, 1312724);
      V_UNLOCK();
      zlog(
        *v3,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_hal",
        12,
        92,
        60,
        v13);
      enable_bypass_mode();
      dev_config_hal((int)"re_version");
      return 0;
    }
  }
  if ( pic1704_get_sw_version(*(_BYTE *)(v4 + 8 * *v2), &v12) )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, 1312668, *v2, *(_DWORD *)(v4 + 8 * *v2), v12);
    V_UNLOCK();
    zlog(
      *v3,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      83,
      60,
      v13);
    goto LABEL_9;
  }
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, 1312616, *v2, *(_DWORD *)(v4 + 8 * *v2));
  V_UNLOCK();
  v8 = *v3;
  v9 = 77;
LABEL_12:
  zlog(
    v8,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "dev_init_hal",
    12,
    v9,
    100,
    v13);
  return -1;
}
