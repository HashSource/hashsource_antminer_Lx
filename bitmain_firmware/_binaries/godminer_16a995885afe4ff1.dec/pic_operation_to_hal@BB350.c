int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int flash; // r4
  int v7; // r2
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 == 51 )
  {
    flash = pic1704_write_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "chain %d, pic1704_write_flash failed!!!", g_chain_info[2 * a1]);
    V_UNLOCK();
    v7 = 430;
  }
  else
  {
    if ( a2 != 52 )
      return -1;
    flash = pic1704_read_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "chain %d, pic1704_read_flash failed!!!", g_chain_info[2 * a1]);
    V_UNLOCK();
    v7 = 438;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/device/platform_device_hal.c",
    172,
    "pic_operation_to_hal",
    20,
    v7,
    100,
    v8);
  return flash;
}
