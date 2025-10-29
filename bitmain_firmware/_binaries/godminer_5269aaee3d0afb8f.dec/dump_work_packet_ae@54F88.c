int __fastcall dump_work_packet_ae(int a1)
{
  const char *v2; // r0
  const char *v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // t1

  LOWORD(v2) = 27640;
  LOWORD(v3) = 27632;
  HIWORD(v2) = (unsigned int)"start mining!" >> 16;
  v4 = a1 - 1;
  v5 = a1 + 86;
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
