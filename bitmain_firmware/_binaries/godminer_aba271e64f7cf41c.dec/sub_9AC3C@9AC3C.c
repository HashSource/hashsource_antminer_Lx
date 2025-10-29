int __fastcall sub_9AC3C(int result, int *a2)
{
  int v3; // [sp+14h] [bp-1808h] BYREF
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  char v5[4]; // [sp+818h] [bp-1004h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, (int)&v3);
    if ( result == 1 )
    {
      snprintf(v4, 0x800u, "remove %d from flicker list\n", v3);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "remove_port_form_gpio_map",
        25,
        199,
        20,
        v5);
      return remove_c_map(a2, (int)&v3);
    }
  }
  return result;
}
