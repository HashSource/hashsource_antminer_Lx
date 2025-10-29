int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v6; // [sp+Ch] [bp+4h]
  int v9; // [sp+20h] [bp+18h]
  int v10; // [sp+24h] [bp+1Ch]
  _BYTE *src; // [sp+28h] [bp+20h]
  char *dest; // [sp+2Ch] [bp+24h]
  _BYTE *desta; // [sp+2Ch] [bp+24h]

  v6 = a3;
  if ( !a3 )
    v6 = 17;
  v9 = snprintf(a1, a2, "%.*g", v6, v3);
  if ( v9 < 0 )
    return -1;
  v10 = v9;
  if ( v9 >= a2 )
    return -1;
  from_locale(a1);
  if ( !strchr(a1, 46) && !strchr(a1, 101) )
  {
    if ( v9 + 3 >= a2 )
      return -1;
    a1[v9] = 46;
    a1[v9 + 1] = 48;
    a1[v9 + 2] = 0;
    v10 = v9 + 2;
  }
  dest = strchr(a1, 101);
  if ( dest )
  {
    desta = dest + 1;
    src = desta + 1;
    if ( *desta == 45 )
      ++desta;
    while ( *src == 48 )
      ++src;
    if ( src != desta )
    {
      memmove(desta, src, v10 - (src - a1));
      v10 -= src - desta;
    }
  }
  return v10;
}
