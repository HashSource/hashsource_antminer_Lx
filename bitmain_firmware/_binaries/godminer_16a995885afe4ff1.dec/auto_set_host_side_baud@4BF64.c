int auto_set_host_side_baud()
{
  char *v0; // r4
  int *all_created_runtime; // r0
  int *v2; // r7
  int v3; // r0
  int v4; // r6
  int v5; // t1
  int v7; // [sp+14h] [bp-101Ch] BYREF
  _DWORD v8[6]; // [sp+18h] [bp-1018h] BYREF
  char v9[4096]; // [sp+30h] [bp-1000h] BYREF

  v7 = 0;
  v0 = (char *)v8;
  v8[0] = "";
  v8[1] = 460800;
  v8[2] = 1562500;
  v8[3] = 3125000;
  v8[4] = 6250000;
  v8[5] = 12500000;
  all_created_runtime = (int *)get_all_created_runtime(&v7);
  v2 = all_created_runtime;
  while ( 1 )
  {
    v3 = dev_ctrl(all_created_runtime);
    v5 = *(_DWORD *)v0;
    v0 += 4;
    v4 = v5;
    (*(void (__fastcall **)(int))(v3 + 16))(v5);
    all_created_runtime = (int *)ping_allchip(*v2);
    if ( all_created_runtime )
      break;
    if ( v9 == v0 )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "chip baud detected fail");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/miner_util/set_baud.c",
        157,
        "auto_set_host_side_baud",
        23,
        29,
        100,
        v9);
      return -1;
    }
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "chip baud detected as %d", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/miner_util/set_baud.c",
    157,
    "auto_set_host_side_baud",
    23,
    24,
    40,
    v9);
  return 0;
}
