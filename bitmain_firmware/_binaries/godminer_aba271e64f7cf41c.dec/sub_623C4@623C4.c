int sub_623C4()
{
  int v1; // r3
  int v2; // r3
  int v3; // r3
  _DWORD *v5; // [sp+0h] [bp-114h] BYREF
  size_t nmemb[2]; // [sp+E0h] [bp-34h] BYREF
  signed int temp; // [sp+E8h] [bp-2Ch]
  int v8; // [sp+ECh] [bp-28h]
  void *ptr; // [sp+F0h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+F4h] [bp-20h]
  int v11; // [sp+F8h] [bp-1Ch]
  int v12; // [sp+FCh] [bp-18h]
  int v13; // [sp+100h] [bp-14h]
  int j; // [sp+104h] [bp-10h]
  int i; // [sp+108h] [bp-Ch]
  int v16; // [sp+10Ch] [bp-8h]

  nmemb[0] = 0;
  v16 = -64;
  v13 = -64;
  v12 = 0;
  v11 = 0;
  all_created_runtime = get_all_created_runtime(nmemb);
  ptr = calloc(nmemb[0], 4u);
  if ( ptr )
  {
    v8 = 0;
    temp = 0;
    nmemb[1] = 0;
    for ( i = 0; i < (int)nmemb[0]; ++i )
    {
      read_status_from_monitor(&v5, all_created_runtime[i]);
      *((_DWORD *)ptr + i) = *v5;
    }
    for ( j = 0; j < (int)nmemb[0]; ++j )
    {
      v1 = *((_DWORD *)ptr + j);
      if ( v16 >= v1 )
        v1 = v16;
      v16 = v1;
    }
    temp = get_temp(2);
    if ( temp != -64 && (int)nmemb[0] > 0 )
    {
      v2 = dword_14F408 + temp - *(_DWORD *)(*all_created_runtime + 400);
      v8 = 2 * (v2 & ~(v2 >> 31));
      v16 += v8;
      v3 = dword_14F40C + temp - *(_DWORD *)(*all_created_runtime + 400);
      v8 = 2 * (v3 & ~(v3 >> 31));
      v16 += v8;
    }
    free(ptr);
    return v16;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "temp_avg_chip_local");
    return 255;
  }
}
