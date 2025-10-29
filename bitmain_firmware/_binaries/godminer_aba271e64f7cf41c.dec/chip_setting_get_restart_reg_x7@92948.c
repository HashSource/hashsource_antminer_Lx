int __fastcall chip_setting_get_restart_reg_x7(int a1, unsigned __int8 a2, _DWORD *a3)
{
  char v7[36]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+1028h] [bp-24h] BYREF
  void *ptr; // [sp+102Ch] [bp-20h]
  void *s; // [sp+1030h] [bp-1Ch]
  int i; // [sp+1034h] [bp-18h]
  int j; // [sp+1038h] [bp-14h]
  int status_x7; // [sp+103Ch] [bp-10h]
  size_t size; // [sp+1040h] [bp-Ch]
  int v15; // [sp+1044h] [bp-8h]

  status_x7 = 0;
  size = 1;
  v15 = 16;
  if ( a2 == 255 )
    size = *(_DWORD *)(a1 + 336);
  s = malloc(size);
  memset(s, 0, size);
  ptr = malloc(524 * size);
  memset(ptr, 0, 524 * size);
  *a3 = 0;
  status_x7 = sync_get_status_x7(a1, 20, size, (int)ptr, v15, &v8, 0x7530u, 0);
  for ( i = 0; i < v8; ++i )
  {
    if ( *((_BYTE *)ptr + 524 * i + 2) == 20 && (a2 == 255 || a2 == *((unsigned __int8 *)ptr + 524 * i + 3)) )
    {
      *((_BYTE *)s + i) = 1;
      ++*a3;
    }
  }
  if ( size != *a3 )
  {
    V_LOCK();
    if ( a2 == 255 )
    {
      logfmt_raw(v7, 0x1000u, 0, "some chip not found");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "chip_setting_get_restart_reg_x7",
        31,
        863,
        100,
        v7);
    }
    else
    {
      logfmt_raw(v7, 0x1000u, 0, "some chip not found, chip_id %d", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "chip_setting_get_restart_reg_x7",
        31,
        865,
        100,
        v7);
    }
    for ( j = 0; j < v8; ++j )
    {
      if ( *((_BYTE *)ptr + 524 * j + 2) == 20 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "responsed chip:%d", *((unsigned __int8 *)ptr + 524 * j + 3));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
          184,
          "chip_setting_get_restart_reg_x7",
          31,
          870,
          100,
          v7);
      }
    }
  }
  free(ptr);
  free(s);
  return status_x7;
}
