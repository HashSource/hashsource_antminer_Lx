int __fastcall sub_E5260(int result, int *a2)
{
  int v3; // [sp+14h] [bp+4h] BYREF
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[4096]; // [sp+818h] [bp+808h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, (int)&v3);
    if ( result == 1 )
    {
      snprintf(s, 0x800u, "remove %d from flicker list\n", v3);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "remove_port_form_gpio_map",
        25,
        205,
        20,
        v5);
      return remove_c_map(a2, (int)&v3);
    }
  }
  return result;
}
