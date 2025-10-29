int __fastcall sub_E5330(int result, int a2, int *a3)
{
  _DWORD v5[2]; // [sp+1Ch] [bp+Ch] BYREF
  char v6[12]; // [sp+24h] [bp+14h] BYREF
  _BYTE v7[12]; // [sp+824h] [bp+814h] BYREF
  _DWORD v8[3]; // [sp+1824h] [bp+1814h] BYREF

  v5[0] = result;
  if ( a3 )
  {
    if ( exists_c_map(a3, (int)v5) )
    {
      snprintf(v6, 0x800u, "port %d already exist in map\n", v5[0]);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
               92,
               "add_port_to_gpio_map",
               20,
               227,
               20,
               v7);
    }
    else
    {
      snprintf(v6, 0x800u, "add %d to flicker map with interval %d\n", v5[0], a2);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "add_port_to_gpio_map",
        20,
        221,
        20,
        v7);
      v8[0] = a2;
      v8[1] = 0;
      v8[2] = 1;
      return insert_c_map(a3, v5, 4u, v8, 0xCu);
    }
  }
  return result;
}
