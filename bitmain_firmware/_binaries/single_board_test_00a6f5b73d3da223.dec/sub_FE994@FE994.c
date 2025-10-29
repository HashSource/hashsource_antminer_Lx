char *__fastcall sub_FE994(const void *a1, int a2, const void *a3, unsigned int a4, int a5, char *a6)
{
  char *v6; // r0

  if ( !sub_FE420((int)a1, a2, (unsigned int)a3, a4) )
    return sub_FE50C(a6, a3, a4 - (_DWORD)a3);
  v6 = sub_FE50C(a6, a3, a2 - (_DWORD)a3);
  return sub_FE50C(v6, a1, a4 - (_DWORD)a1);
}
