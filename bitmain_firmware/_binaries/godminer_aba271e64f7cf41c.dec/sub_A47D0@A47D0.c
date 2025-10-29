int __fastcall sub_A47D0(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  char v10[16]; // [sp+24h] [bp-1810h] BYREF
  char v11[16]; // [sp+824h] [bp-1010h] BYREF
  char v12; // [sp+1827h] [bp-Dh] BYREF
  int v13; // [sp+1828h] [bp-Ch]
  unsigned __int8 i; // [sp+182Eh] [bp-6h]
  unsigned __int8 j; // [sp+182Fh] [bp-5h]

  j = 0;
  v13 = 0;
  v12 = 0;
  pthread_mutex_lock(&power_mutex);
  for ( i = 0; i <= 2u; ++i )
  {
    for ( j = 0; a3 > j; iic_write_reg(a1, &v12, 1, &a2[j++], 1u) )
      ;
    usleep(0x61A80u);
    for ( j = 0; a5 > j; iic_read_reg(a1, &v12, 1u, (int)&a4[j++], 1u) )
      ;
    usleep((__useconds_t)"time");
    v13 = sub_A3FF4(a2, a4, a5);
    if ( !v13 )
      break;
    snprintf(v10, 0x800u, "Send power cmd(0x%02x) failed, retry %d", a2[3], i);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "exec_power_cmd",
      14,
      246,
      20,
      v11);
  }
  pthread_mutex_unlock(&power_mutex);
  return v13;
}
