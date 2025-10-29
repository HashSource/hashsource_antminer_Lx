int sub_EB14C()
{
  char v1[4]; // [sp+1Ch] [bp+Ch] BYREF
  int v2; // [sp+81Ch] [bp+80Ch] BYREF
  _DWORD v3[2]; // [sp+181Ch] [bp+180Ch] BYREF
  unsigned __int8 v4; // [sp+1827h] [bp+1817h] BYREF
  int v5; // [sp+1828h] [bp+1818h]
  void (__fastcall **v6)(int, _DWORD); // [sp+182Ch] [bp+181Ch]
  int v7; // [sp+1830h] [bp+1820h]
  _DWORD *v8; // [sp+1834h] [bp+1824h]
  int v9; // [sp+1838h] [bp+1828h]
  int i; // [sp+183Ch] [bp+182Ch]

  v9 = 0;
  while ( dword_47B568 )
  {
    if ( !pthread_mutex_lock(&stru_47B588) )
    {
      v8 = new_iterator_c_map(dword_47B5A0);
      for ( i = ((int (__fastcall *)(_DWORD *))*v8)(v8); i; i = ((int (__fastcall *)(_DWORD *))*v8)(v8) )
      {
        v7 = v8[5];
        v6 = (void (__fastcall **)(int, _DWORD))((int (__fastcall *)(int))v8[2])(i);
        v5 = ***(_DWORD ***)(v7 + 16);
        v4 = 0;
        v9 = gpio_read(v5, &v4);
        if ( v9 )
        {
          snprintf(v1, 0x800u, "failed to read gpio port %d\n", v5);
          V_LOCK();
          logfmt_raw(&v2, 0x1000u, 0, v1);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
            94,
            "gpio_thread_function",
            20,
            65,
            20,
            &v2);
          free(v6);
          break;
        }
        if ( v6[1] != (void (__fastcall *)(int, _DWORD))v4 )
        {
          snprintf(v1, 0x800u, "gpio port %d, last val = %d, new val = %d\n", ***(_DWORD ***)(v7 + 16), v6[1], v4);
          V_LOCK();
          logfmt_raw(&v2, 0x1000u, 0, v1);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_gpio.c",
            94,
            "gpio_thread_function",
            20,
            72,
            20,
            &v2);
          (*v6)(v5, v4);
          v3[0] = *v6;
          v3[1] = v4;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v8[1])(v8, v3, 8);
        }
        free(v6);
      }
      delete_iterator_c_map(v8);
      pthread_mutex_unlock(&stru_47B588);
    }
    usleep(0x30D40u);
  }
  return 0;
}
