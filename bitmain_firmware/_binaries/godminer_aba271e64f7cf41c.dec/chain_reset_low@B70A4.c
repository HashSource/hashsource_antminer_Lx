int __fastcall chain_reset_low(int a1)
{
  char v3[8]; // [sp+1Ch] [bp-1808h] BYREF
  char v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h]

  v5 = hal_chain_reset_addr(a1);
  if ( v5 >= 0 )
    return gpio_write(v5, 0);
  snprintf(v3, 0x800u, "bad chain id = %d\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
           188,
           "chain_reset_low",
           15,
           200,
           100,
           v4);
}
