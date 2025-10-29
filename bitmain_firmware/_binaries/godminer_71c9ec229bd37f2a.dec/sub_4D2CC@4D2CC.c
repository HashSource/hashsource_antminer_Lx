signed int sub_4D2CC()
{
  int v0; // r5
  int *all_created_runtime; // r0
  int *v2; // r6
  int *v3; // r6
  signed int v4; // r4
  int v5; // t1
  signed int *v6; // r3
  signed int v7; // r2
  signed int v8; // t1
  signed int *v9; // r3
  signed int v10; // r2
  signed int v11; // t1
  int v13; // [sp+4h] [bp-D4h] BYREF
  char v14[4]; // [sp+8h] [bp-D0h] BYREF
  signed int *v15; // [sp+Ch] [bp-CCh]
  signed int *v16; // [sp+14h] [bp-C4h]
  int v17; // [sp+20h] [bp-B8h]
  int v18; // [sp+24h] [bp-B4h]

  v0 = 0;
  v13 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v13);
  if ( v13 <= 0 )
    return 0x80000000;
  v2 = all_created_runtime;
  read_status_from_monitor(v14, *all_created_runtime);
  if ( v13 <= 0 )
    return 0x80000000;
  v3 = v2 - 1;
  v4 = 0x80000000;
  do
  {
    v5 = v3[1];
    ++v3;
    read_status_from_monitor(v14, v5);
    if ( v17 > 0 )
    {
      v6 = v15;
      do
      {
        v8 = *v6++;
        v7 = v8;
        if ( v4 < v8 )
          v4 = v7;
      }
      while ( v6 != &v15[v17] );
    }
    if ( v18 > 0 )
    {
      v9 = v16;
      do
      {
        v11 = *v9++;
        v10 = v11;
        if ( v4 < v11 )
          v4 = v10;
      }
      while ( &v16[v18] != v9 );
    }
    ++v0;
  }
  while ( v13 > v0 );
  return v4;
}
