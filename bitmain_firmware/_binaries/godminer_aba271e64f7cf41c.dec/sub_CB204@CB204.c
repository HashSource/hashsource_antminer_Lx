char *__fastcall sub_CB204(const void *a1, int a2, const void *a3, unsigned int a4, int a5, char *a6)
{
  char *v6; // r0

  if ( !sub_CA89C((int)a1, a2, (unsigned int)a3, a4) )
    return sub_CAA3C(a6, a3, a4 - (_DWORD)a3);
  v6 = sub_CAA3C(a6, a3, a2 - (_DWORD)a3);
  return sub_CAA3C(v6, a1, a4 - (_DWORD)a1);
}
