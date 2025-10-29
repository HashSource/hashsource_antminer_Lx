int __fastcall update_and_automatic_set_freq(_BYTE *a1)
{
  int v3; // [sp+8h] [bp-24h] BYREF
  char v4; // [sp+Fh] [bp-1Dh]
  signed int temp; // [sp+10h] [bp-1Ch]
  _DWORD *all_created_runtime; // [sp+14h] [bp-18h]
  int j; // [sp+18h] [bp-14h]
  unsigned __int8 v8; // [sp+1Fh] [bp-Dh]
  float v9; // [sp+20h] [bp-Ch]
  int i; // [sp+24h] [bp-8h]

  v3 = 0;
  v9 = 0.0;
  all_created_runtime = get_all_created_runtime(&v3);
  temp = get_temp(1);
  v8 = 0;
  v4 = 0;
  if ( temp == -64 )
  {
    *a1 = 0;
  }
  else
  {
    *a1 = 1;
    for ( i = 0; i < v3; ++i )
    {
      (*(void (__fastcall **)(_DWORD, signed int))(all_created_runtime[i] + 200))(all_created_runtime[i], temp);
      v9 = 0.0;
      for ( j = 0; j < *(_DWORD *)(all_created_runtime[i] + 336); ++j )
      {
        v4 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(all_created_runtime[i] + 204))(
               all_created_runtime[i],
               0,
               (unsigned __int8)j);
        if ( v4 )
          v8 = 1;
        pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 20));
        v9 = v9 + *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 12);
        pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 20));
      }
      *(_DWORD *)(all_created_runtime[i] + 464) = (int)(float)(v9 / (float)*(int *)(all_created_runtime[i] + 336));
      *(float *)(all_created_runtime[i] + 1104) = v9 / (float)*(int *)(all_created_runtime[i] + 336);
    }
  }
  return v8;
}
