int __fastcall dump_work_vbk(int a1, int a2)
{
  const char *v3; // r0
  const char *v4; // r6
  int v5; // r4
  int v6; // r5
  int v7; // t1

  LOWORD(v3) = -684;
  LOWORD(v4) = -29544;
  HIWORD(v3) = (unsigned int)"ster/backend/backend_grin29/backend_grin29.c" >> 16;
  v5 = a1 + 15;
  v6 = a1 + 79;
  printf(v3, a2);
  do
  {
    v7 = *(unsigned __int8 *)++v5;
    HIWORD(v4) = (unsigned int)"ng_target" >> 16;
    printf(v4, v7);
  }
  while ( v5 != v6 );
  return putchar(10);
}
