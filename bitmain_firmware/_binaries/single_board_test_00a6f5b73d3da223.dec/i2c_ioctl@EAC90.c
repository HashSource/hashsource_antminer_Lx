int __fastcall i2c_ioctl(int a1, __int16 a2, int a3)
{
  char v8[24]; // [sp+20h] [bp+10h] BYREF
  _BYTE v9[24]; // [sp+820h] [bp+810h] BYREF
  _DWORD v10[2]; // [sp+1820h] [bp+1810h] BYREF
  _DWORD *v11; // [sp+1828h] [bp+1818h]
  int v12; // [sp+182Ch] [bp+181Ch]
  _DWORD *v13; // [sp+1830h] [bp+1820h]
  int i; // [sp+1834h] [bp+1824h]

  if ( pthread_mutex_lock(&stru_47B544) )
  {
    strcpy(v8, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      93,
      "i2c_ioctl",
      9,
      333,
      100,
      v9);
    return -4;
  }
  else
  {
    v13 = new_iterator_c_map(dword_47B55C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v13)(v13); i; i = ((int (__fastcall *)(_DWORD *))*v13)(v13) )
    {
      v12 = v13[5];
      if ( ***(_DWORD ***)(v12 + 16) == a1 )
      {
        v11 = (_DWORD *)((int (__fastcall *)(int))v13[2])(i);
        if ( a2 == 1795 )
        {
          v10[0] = *v11;
          v10[1] = a3;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v13[1])(v13, v10, 8);
          snprintf(v8, 0x800u, "update the slave address to %d\n", a3);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            93,
            "i2c_ioctl",
            9,
            347,
            20,
            v9);
          free(v11);
        }
        break;
      }
    }
    delete_iterator_c_map(v13);
    pthread_mutex_unlock(&stru_47B544);
    return 0;
  }
}
