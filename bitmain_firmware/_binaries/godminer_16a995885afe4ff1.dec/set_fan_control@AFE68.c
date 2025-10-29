int __fastcall set_fan_control(int a1)
{
  int v2; // [sp+14h] [bp-1804h] BYREF
  char v3[2040]; // [sp+18h] [bp-1800h] BYREF
  char v4[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 0;
  if ( platform_inited )
  {
    fpga_write(132, a1);
    return fpga_read(132, &v2);
  }
  else
  {
    strcpy(v3, "platform not inited\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/"
             "build/godminer-origin_master/backend/device/hal/platform/7007/7007_common.c",
             182,
             "set_fan_control",
             15,
             1001,
             100,
             v4);
  }
}
