int __fastcall sub_1A9E4(char *a1, char *s, unsigned __int8 *a3, unsigned int a4)
{
  char *v6; // r5
  char *v8; // r0
  char *v9; // r10
  size_t v10; // r0
  int v11; // r10

  if ( !a1 )
    sub_10788();
  v6 = s;
  if ( !s )
    sub_10788();
  if ( !a3 )
    sub_10788();
  v8 = strrchr(s, 47);
  if ( v8 )
    v6 = v8 + 1;
  v9 = strrchr(a1, 47);
  v10 = strlen(v6);
  if ( v9 )
  {
    v11 = v9 - a1;
    if ( v10 + 2 + v11 <= a4 )
    {
      sub_10410(a3, (unsigned __int8 *)a1, a4);
      a3[v11 + 1] = 0;
      sub_104C0(a3, v6, a4);
      return 0;
    }
    return 19;
  }
  if ( v10 + 1 > a4 )
    return 19;
  sub_10410(a3, (unsigned __int8 *)v6, a4);
  return 0;
}
