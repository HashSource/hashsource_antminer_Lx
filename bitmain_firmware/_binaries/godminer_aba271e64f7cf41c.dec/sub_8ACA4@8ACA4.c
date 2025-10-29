int __fastcall sub_8ACA4(int a1, int a2)
{
  int v2; // r1
  size_t v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  char v10[36]; // [sp+38h] [bp-1064h] BYREF
  int v11; // [sp+1038h] [bp-64h]
  int v12; // [sp+103Ch] [bp-60h]
  size_t size; // [sp+1040h] [bp-5Ch]
  int v14; // [sp+1044h] [bp-58h]
  int v15; // [sp+1048h] [bp-54h]
  int v16; // [sp+104Ch] [bp-50h]
  int v17; // [sp+1050h] [bp-4Ch]
  int v18; // [sp+1054h] [bp-48h] BYREF
  _DWORD v19[7]; // [sp+1058h] [bp-44h] BYREF
  int v20; // [sp+1074h] [bp-28h]
  _DWORD *v21; // [sp+1078h] [bp-24h]
  void *ptr; // [sp+107Ch] [bp-20h]
  int v23; // [sp+1080h] [bp-1Ch]
  char *v24; // [sp+1084h] [bp-18h]
  signed int i; // [sp+1088h] [bp-14h]
  int j; // [sp+108Ch] [bp-10h]

  v23 = -64;
  v2 = *(_DWORD *)(a1 + 392);
  v3 = *(_DWORD *)(a1 + 396);
  v4 = *(_DWORD *)(a1 + 400);
  v11 = *(_DWORD *)(a1 + 388);
  v12 = v2;
  size = v3;
  v14 = v4;
  v5 = *(_DWORD *)(a1 + 408);
  v6 = *(_DWORD *)(a1 + 412);
  v15 = *(_DWORD *)(a1 + 404);
  v16 = v5;
  v17 = v6;
  ptr = calloc(0xCu, size);
  if ( ptr )
    chip_setting_read_all_sensor_temp(a1, ptr, size, &v18);
  else
    v18 = 0;
  for ( i = 0; i < (int)size; ++i )
  {
    v21 = (_DWORD *)(v11 + 24 * i);
    v24 = 0;
    for ( j = 0; j < v18; ++j )
    {
      if ( v21[5] == *((_DWORD *)ptr + 3 * j) )
      {
        v24 = (char *)ptr + 12 * j;
        break;
      }
    }
    if ( v24 && *((_DWORD *)v24 + 2) )
    {
      v23 = (*((_DWORD *)v24 + 1) + 500) / 1000;
    }
    else
    {
      v23 = -64;
      if ( *(_BYTE *)(a1 + 1096) != 1 )
      {
        V_LOCK();
        sub_89210((int)v19, *(int *)(a1 + 252));
        logfmt_raw(
          v10,
          0x1000u,
          0,
          v20,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v20,
          "read sensor failed, sensor[%d], addr:%02x",
          *v21,
          v21[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
          179,
          "read_temperature_x7",
          19,
          400,
          100,
          v10);
      }
    }
    if ( v21[5] < *(_DWORD *)(a1 + 336) )
    {
      pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v21[5] + 20));
      *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * v21[5]) = v23;
      pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 528) + 44 * v21[5] + 20));
    }
    *(_DWORD *)(a2 + 12 * i) = v23;
    *(_DWORD *)(a2 + 12 * i + 4) = v23;
    if ( v23 != dword_1503AC )
      dword_1503AC = v23;
  }
  if ( ptr )
    free(ptr);
  return 0;
}
