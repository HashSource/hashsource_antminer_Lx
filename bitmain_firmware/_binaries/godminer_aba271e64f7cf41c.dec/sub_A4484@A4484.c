int __fastcall sub_A4484(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  char v9[20]; // [sp+20h] [bp-1814h] BYREF
  char v10[20]; // [sp+820h] [bp-1014h] BYREF
  char v11; // [sp+1822h] [bp-12h]
  unsigned __int8 v12; // [sp+1823h] [bp-11h]
  unsigned __int8 *v13; // [sp+1824h] [bp-10h]
  int v14; // [sp+1828h] [bp-Ch]
  unsigned __int8 i; // [sp+182Eh] [bp-6h]
  unsigned __int8 j; // [sp+182Fh] [bp-5h]

  j = 0;
  i = 0;
  v14 = 0;
  v12 = 17;
  v11 = 16;
  pthread_mutex_lock(&power_mutex);
  if ( byte_15FBA8 != 1 )
  {
    i2c_sim_send_cmd(v11, 0, 1, v12, 4u);
    byte_15FBA8 = 1;
  }
  for ( i = 0; i <= 2u; ++i )
  {
    for ( j = 0; a2 > j; i2c_sim_send_cmd(v11, 0, 1, v12, a1[j++]) )
      ;
    usleep(0x61A80u);
    v13 = a3;
    for ( j = 0; a4 > j; ++j )
      *v13++ = i2c_sim_send_cmd(v11, 1, 0, v12, 0);
    usleep((__useconds_t)"time");
    v14 = sub_A3FF4(a1, a3, a4);
    if ( !v14 )
      break;
    snprintf(v9, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a1[3], i);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "exec_i2c_sim_cmd",
      16,
      185,
      20,
      v10);
  }
  pthread_mutex_unlock(&power_mutex);
  return v14;
}
