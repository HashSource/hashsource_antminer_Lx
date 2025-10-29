int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int v6; // [sp+24h] [bp+14h] BYREF
  int flash; // [sp+1024h] [bp+1014h]

  flash = -1;
  if ( a2 == 51 )
  {
    flash = pic1704_write_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    if ( flash != 1 )
    {
      V_LOCK();
      logfmt_raw(&v6, 0x1000u, 0, "chain %d, pic1704_write_flash failed!!!", g_chain_info[2 * a1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
        86,
        "pic_operation_to_hal",
        20,
        427,
        100,
        &v6);
    }
  }
  else if ( a2 == 52 )
  {
    flash = pic1704_read_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    if ( flash != 1 )
    {
      V_LOCK();
      logfmt_raw(&v6, 0x1000u, 0, "chain %d, pic1704_read_flash failed!!!", g_chain_info[2 * a1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
        86,
        "pic_operation_to_hal",
        20,
        435,
        100,
        &v6);
    }
  }
  return flash;
}
