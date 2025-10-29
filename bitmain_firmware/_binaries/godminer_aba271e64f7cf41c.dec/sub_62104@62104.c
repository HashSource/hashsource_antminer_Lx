int sub_62104()
{
  int v0; // r3
  int v1; // r3
  _BYTE src[224]; // [sp+0h] [bp-1DCh] BYREF
  _DWORD dest[56]; // [sp+E0h] [bp-FCh] BYREF
  int v5; // [sp+1C0h] [bp-1Ch] BYREF
  int *all_created_runtime; // [sp+1C4h] [bp-18h]
  int k; // [sp+1C8h] [bp-14h]
  int j; // [sp+1CCh] [bp-10h]
  int i; // [sp+1D0h] [bp-Ch]
  int v10; // [sp+1D4h] [bp-8h]

  v5 = 0;
  v10 = 0x7FFFFFFF;
  all_created_runtime = (int *)get_all_created_runtime(&v5);
  if ( v5 > 0 )
  {
    read_status_from_monitor(dest, *all_created_runtime);
    for ( i = 0; i < v5; ++i )
    {
      read_status_from_monitor(src, all_created_runtime[i]);
      memcpy(dest, src, sizeof(dest));
      for ( j = 0; j < dest[7]; ++j )
      {
        v0 = *(_DWORD *)(dest[2] + 4 * j);
        if ( v10 < v0 )
          v0 = v10;
        v10 = v0;
      }
      for ( k = 0; k < dest[8]; ++k )
      {
        v1 = *(_DWORD *)(dest[4] + 4 * k);
        if ( v10 < v1 )
          v1 = v10;
        v10 = v1;
      }
    }
  }
  return v10;
}
