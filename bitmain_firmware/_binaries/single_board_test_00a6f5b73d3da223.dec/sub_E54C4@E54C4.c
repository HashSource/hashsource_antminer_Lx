int __fastcall sub_E54C4(unsigned int a1, int a2)
{
  char v6[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[8]; // [sp+818h] [bp+808h] BYREF
  int v8; // [sp+1818h] [bp+1808h]
  int v9; // [sp+181Ch] [bp+180Ch]

  v9 = -1;
  v8 = sub_E4DF4(a1);
  if ( v8 )
  {
    snprintf(v6, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v8, a2);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "gpio_ctrl_ui",
      12,
      277,
      20,
      v7);
    if ( pthread_mutex_lock(&stru_47B328) )
    {
      strcpy(v6, "failed to api lock\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "gpio_ctrl_ui",
        12,
        280,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_E5260(v8, (int *)dword_47B340);
        v9 = gpio_write(v8, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          sub_E5330(v8, 200, (int *)dword_47B340);
        }
        else
        {
          strcpy(v6, "unsuported led status\n");
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
            92,
            "gpio_ctrl_ui",
            12,
            297,
            100,
            v7);
          v9 = -2;
        }
      }
      else
      {
        sub_E5260(v8, (int *)dword_47B340);
        v9 = gpio_write(v8, 1);
      }
      pthread_mutex_unlock(&stru_47B328);
      return v9;
    }
  }
  else
  {
    strcpy(v6, "unsuported gpio port\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "gpio_ctrl_ui",
      12,
      273,
      100,
      v7);
    return -1;
  }
}
