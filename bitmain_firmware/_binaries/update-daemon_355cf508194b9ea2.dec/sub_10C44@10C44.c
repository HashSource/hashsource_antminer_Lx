int __fastcall sub_10C44(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r2
  int i; // r3
  int v5; // t1
  int v6; // r3

  v2 = strlen(a1);
  v3 = a1 - 1;
  for ( i = 0; ; i = 10 * (v5 + v6) )
  {
    v6 = i - 48;
    if ( v3 == &a1[v2 - 2] )
      break;
    v5 = *(unsigned __int8 *)++v3;
  }
  return (unsigned __int8)a1[v2 - 1] + v6;
}
