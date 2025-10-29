int sub_B7570()
{
  char v1[40]; // [sp+1Ch] [bp-1828h] BYREF
  char v2[40]; // [sp+81Ch] [bp-1028h] BYREF
  _DWORD v3[2]; // [sp+181Ch] [bp-28h] BYREF
  unsigned __int8 v4; // [sp+1827h] [bp-1Dh] BYREF
  int v5; // [sp+1828h] [bp-1Ch]
  void *ptr; // [sp+182Ch] [bp-18h]
  int v7; // [sp+1830h] [bp-14h]
  _DWORD *v8; // [sp+1834h] [bp-10h]
  int i; // [sp+1838h] [bp-Ch]
  int v10; // [sp+183Ch] [bp-8h]

  v10 = 0;
  prctl(15, "gpio");
  while ( dword_160520 )
  {
    if ( !pthread_mutex_lock(&stru_160540) )
    {
      v8 = new_iterator_c_map(dword_160558);
      for ( i = ((int (__fastcall *)(_DWORD *))*v8)(v8); i; i = ((int (__fastcall *)(_DWORD *))*v8)(v8) )
      {
        v7 = v8[5];
        ptr = (void *)((int (__fastcall *)(int))v8[2])(i);
        v5 = ***(_DWORD ***)(v7 + 16);
        v4 = 0;
        v10 = gpio_read(v5, &v4);
        if ( v10 )
        {
          snprintf(v1, 0x800u, "failed to read gpio port %d", v5);
          V_LOCK();
          logfmt_raw(v2, 0x1000u, 0, v1);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            186,
            "gpio_thread_function",
            20,
            60,
            20,
            v2);
          free(ptr);
          break;
        }
        if ( *((_DWORD *)ptr + 1) != v4 )
        {
          snprintf(
            v1,
            0x800u,
            "gpio port %d, last val = %d, new val = %d",
            ***(_DWORD ***)(v7 + 16),
            *((_DWORD *)ptr + 1),
            v4);
          V_LOCK();
          logfmt_raw(v2, 0x1000u, 0, v1);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
            186,
            "gpio_thread_function",
            20,
            66,
            20,
            v2);
          (*(void (__fastcall **)(int, _DWORD))ptr)(v5, v4);
          v3[0] = *(_DWORD *)ptr;
          v3[1] = v4;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v8[1])(v8, v3, 8);
        }
        free(ptr);
      }
      delete_iterator_c_map(v8);
      pthread_mutex_unlock(&stru_160540);
    }
    usleep(0x30D40u);
  }
  return 0;
}
