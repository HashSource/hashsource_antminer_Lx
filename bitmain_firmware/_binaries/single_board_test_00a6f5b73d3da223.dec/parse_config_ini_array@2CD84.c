int __cdecl parse_config_ini_array(const char *str, void **pointer)
{
  __int64 v2; // d0
  int v3; // r3
  _QWORD *v4; // r4
  int *v5; // r4
  char nptr[32]; // [sp+8h] [bp+8h] BYREF
  signed int v10; // [sp+28h] [bp+28h]
  signed int j; // [sp+2Ch] [bp+2Ch]
  int v12; // [sp+30h] [bp+30h]
  int v13; // [sp+34h] [bp+34h]
  signed int i; // [sp+38h] [bp+38h]
  void *v15; // [sp+3Ch] [bp+3Ch]
  size_t size; // [sp+40h] [bp+40h]
  int v17; // [sp+44h] [bp+44h]
  _BYTE v18[4]; // [sp+48h] [bp+48h] BYREF

  v10 = strlen(str);
  v17 = 1;
  size = 0;
  v15 = 0;
  for ( i = 0; i < v10; ++i )
  {
    if ( str[i] == 46 )
      v17 = 0;
    if ( str[i] == 44 )
      ++size;
  }
  ++size;
  if ( v17 )
  {
    v15 = malloc(4 * size);
    memset(v15, 0, 4 * size);
  }
  else
  {
    v15 = malloc(8 * size);
    memset(v15, 0, 8 * size);
  }
  v13 = 0;
  memset(nptr, 0, sizeof(nptr));
  v12 = 0;
  for ( j = 0; j < v10; ++j )
  {
    if ( (unsigned __int8)str[j] > 0x2Fu && (unsigned __int8)str[j] <= 0x39u || str[j] == 46 )
    {
      v3 = v13++;
      v18[v3 - 64] = str[j];
    }
    if ( str[j] == 44 || str[j] == 93 )
    {
      nptr[v13] = 0;
      if ( v17 )
      {
        v5 = (int *)((char *)v15 + 4 * v12);
        *v5 = atoi(nptr);
      }
      else
      {
        v4 = (char *)v15 + 8 * v12;
        atof(nptr);
        *v4 = v2;
      }
      ++v12;
      memset(nptr, 32, sizeof(nptr));
      v13 = 0;
    }
  }
  *pointer = v15;
  return size;
}
