unsigned int __fastcall sub_FEBB8(int a1, unsigned int a2, unsigned int a3, char *a4, int a5, char *a6, size_t a7)
{
  size_t v7; // r3
  unsigned int result; // r0
  size_t v9; // [sp+Ch] [bp+4h]
  char *varg_r3; // [sp+24h] [bp+1Ch]
  char *varg_r3a; // [sp+24h] [bp+1Ch]
  unsigned int varg_r3b; // [sp+24h] [bp+1Ch]

  varg_r3 = a4;
  if ( !sub_FE420(a1, a2, a3, (unsigned int)a4) )
  {
    v7 = a7;
    if ( a7 >= a2 - (unsigned int)varg_r3 )
      v7 = a2 - (_DWORD)varg_r3;
    v9 = v7;
    varg_r3 = sub_FE50C(varg_r3, a6, v7);
    a6 += v9;
    a7 -= v9;
  }
  if ( a7 )
  {
    varg_r3a = (char *)sub_FE4A4(a1, (unsigned int)varg_r3, a2);
    varg_r3 = sub_FE50C(varg_r3a, a6, a7);
  }
  result = sub_FE4A4(a1, (unsigned int)varg_r3, a2);
  varg_r3b = result;
  return result;
}
