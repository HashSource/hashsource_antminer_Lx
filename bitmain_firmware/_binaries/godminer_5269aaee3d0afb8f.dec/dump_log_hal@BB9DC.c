int __fastcall dump_log_hal(const char *a1, int a2, int a3, int a4)
{
  int v6; // r4
  const char *v7; // r6
  int v8; // r5
  int v9; // t1

  printf("%s[%d] ", a1, a2);
  if ( a4 > 0 )
  {
    v6 = a3 - 1;
    LOWORD(v7) = 27632;
    v8 = v6 + a4;
    do
    {
      v9 = *(unsigned __int8 *)++v6;
      HIWORD(v7) = (unsigned int)"t and restart mining!" >> 16;
      printf(v7, v9);
    }
    while ( v6 != v8 );
  }
  return putchar(10);
}
