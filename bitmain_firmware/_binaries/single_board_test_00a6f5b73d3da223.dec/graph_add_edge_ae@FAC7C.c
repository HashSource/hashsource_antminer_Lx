unsigned int __fastcall graph_add_edge_ae(unsigned int result, int a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r3
  int v7; // [sp+14h] [bp+Ch]
  int v8; // [sp+20h] [bp+18h]
  int v9; // [sp+24h] [bp+1Ch]
  unsigned int v10; // [sp+28h] [bp+20h]
  int i; // [sp+28h] [bp+20h]
  unsigned int v12; // [sp+2Ch] [bp+24h]
  unsigned int v13; // [sp+2Ch] [bp+24h]
  int v14; // [sp+2Ch] [bp+24h]

  v7 = result;
  v9 = 2 * a2;
  v8 = (2 * a3) | 1;
  if ( 2 * a2 )
  {
    v12 = sub_FABE4(result, v9, (int)&us[512 * result]);
    result = sub_FABE4(v7, v8, (int)&vs[512 * v7]);
    v3 = v12;
    v13 = v12 - 1;
    if ( v3 )
    {
      v10 = result - 1;
      if ( result )
      {
        if ( us[512 * v7 + v13] == vs[512 * v7 + v10] )
        {
          v4 = v13;
          if ( v13 >= v10 )
            v4 = result - 1;
          v14 = v13 - v4;
          for ( i = v10 - v4; ; ++i )
          {
            result = v7 << 9;
            if ( us[512 * v7 + v14] == vs[512 * v7 + i] )
              break;
            ++v14;
          }
          if ( i + v14 == 41 )
            return sub_FAB28(v7, &us[512 * v7], v14, &vs[512 * v7], i);
        }
        else if ( v13 >= v10 )
        {
          while ( v10-- )
            cuckoo_hash_set(v7, vs[512 * v7 + 1 + v10], vs[512 * v7 + v10]);
          return cuckoo_hash_set(v7, v8, v9);
        }
        else
        {
          while ( v13-- )
            cuckoo_hash_set(v7, us[512 * v7 + 1 + v13], us[512 * v7 + v13]);
          return cuckoo_hash_set(v7, v9, v8);
        }
      }
    }
  }
  return result;
}
