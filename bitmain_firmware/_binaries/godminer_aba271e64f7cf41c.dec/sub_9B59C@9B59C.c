int __fastcall sub_9B59C(unsigned int a1, int a2)
{
  char v5[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v6[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v7; // [sp+181Ch] [bp-8h]

  v7 = sub_9A5FC(a1);
  if ( v7 )
  {
    if ( a2 == 200 )
    {
      strcpy(v5, "interval is same with default\n");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "gpio_set_led_filker_freq",
        24,
        317,
        80,
        v6);
    }
    else
    {
      sub_9AFA4(v7, a2, dword_15F9C4);
    }
    return 0;
  }
  else
  {
    strcpy(v5, "unsuported led port\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "gpio_set_led_filker_freq",
      24,
      312,
      100,
      v6);
    return -1;
  }
}
