int __fastcall dump_work_packet(int a1)
{
  const char *v2; // r0
  const char *v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // t1

  LOWORD(v2) = -17836;
  LOWORD(v3) = 27632;
  HIWORD(v2) = (unsigned int)"x state %08x" >> 16;
  v4 = a1 - 1;
  v5 = a1 + 252;
  printf(v2);
  do
  {
    v6 = *(unsigned __int8 *)++v4;
    HIWORD(v3) = (unsigned int)"t and restart mining!" >> 16;
    printf(v3, v6);
  }
  while ( v4 != v5 );
  return putchar(10);
}
