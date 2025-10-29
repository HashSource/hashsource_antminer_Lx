int __fastcall sub_9A6FC(int a1)
{
  char v3[8]; // [sp+1Ch] [bp-1808h] BYREF
  char v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h]

  v5 = 259;
  if ( a1 == hal_key_reset_addr() )
    return 256;
  if ( a1 == hal_key_ipreport_addr() )
    return 257;
  snprintf(v3, 0x800u, "unmaped port = %d\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
    184,
    "convert_port_to_ui_type",
    23,
    124,
    100,
    v4);
  return v5;
}
