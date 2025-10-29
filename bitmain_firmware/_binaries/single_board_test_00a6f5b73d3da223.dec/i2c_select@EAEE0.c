int __fastcall i2c_select(int a1, int a2)
{
  char v6[24]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[24]; // [sp+818h] [bp+808h] BYREF
  _DWORD v8[2]; // [sp+1818h] [bp+1808h] BYREF
  _DWORD *v9; // [sp+1820h] [bp+1810h]
  int v10; // [sp+1824h] [bp+1814h]
  _DWORD *v11; // [sp+1828h] [bp+1818h]
  int i; // [sp+182Ch] [bp+181Ch]

  if ( pthread_mutex_lock(&stru_47B544) )
  {
    strcpy(v6, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      93,
      "i2c_select",
      10,
      366,
      100,
      v7);
    return -4;
  }
  else
  {
    v11 = new_iterator_c_map(dword_47B55C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v11)(v11); i; i = ((int (__fastcall *)(_DWORD *))*v11)(v11) )
    {
      v10 = v11[5];
      if ( ***(_DWORD ***)(v10 + 16) == a1 )
      {
        v9 = (_DWORD *)((int (__fastcall *)(int))v11[2])(i);
        v8[0] = a2;
        v8[1] = v9[1];
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v11[1])(v11, v8, 8);
        snprintf(v6, 0x800u, "update the master address to %d\n", a2);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_i2c.c",
          93,
          "i2c_select",
          10,
          377,
          20,
          v7);
        free(v9);
        break;
      }
    }
    delete_iterator_c_map(v11);
    pthread_mutex_unlock(&stru_47B544);
    return 0;
  }
}
