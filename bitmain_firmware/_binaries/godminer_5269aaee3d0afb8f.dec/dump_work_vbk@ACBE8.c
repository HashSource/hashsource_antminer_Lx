int __fastcall dump_work_vbk(int a1, int a2)
{
  const char *v3; // r0
  const char *v4; // r6
  int v5; // r4
  int v6; // r5
  int v7; // t1

  LOWORD(v3) = -9268;
  LOWORD(v4) = 27632;
  HIWORD(v3) = (unsigned int)"ket_value_hns" >> 16;
  v5 = a1 + 15;
  v6 = a1 + 79;
  printf(v3, a2);
  do
  {
    v7 = *(unsigned __int8 *)++v5;
    HIWORD(v4) = (unsigned int)"t and restart mining!" >> 16;
    printf(v4, v7);
  }
  while ( v5 != v6 );
  return putchar(10);
}
