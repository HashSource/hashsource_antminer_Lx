int __fastcall uart_set_config(int a1, int a2, int *a3, unsigned int a4)
{
  char v9[12]; // [sp+20h] [bp-180Ch] BYREF
  char v10[12]; // [sp+820h] [bp-100Ch] BYREF
  int v11; // [sp+1820h] [bp-Ch]
  int v12; // [sp+1824h] [bp-8h]

  v11 = -1;
  pthread_mutex_lock(&stru_1605E0[a1]);
  v12 = sub_BD580(a1);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = sub_BE514(v12, a3, a4);
    }
    else
    {
      snprintf(v9, 0x800u, "unknown set config type = %d\n", a2);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
        186,
        "uart_set_config",
        15,
        425,
        80,
        v10,
        a4,
        a3);
    }
  }
  else
  {
    v11 = sub_BE20C(v12, a3, a4);
  }
  pthread_mutex_unlock(&stru_1605E0[a1]);
  return v11;
}
