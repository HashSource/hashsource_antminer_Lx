unsigned int *__fastcall sub_FEF24(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        char *dest,
        size_t n,
        unsigned int *a9)
{
  size_t v9; // r2
  size_t v10; // r3
  unsigned int v11; // r0
  size_t v14; // [sp+8h] [bp+8h]
  unsigned int varg_r3a; // [sp+2Ch] [bp+2Ch]
  const void *varg_r3b; // [sp+2Ch] [bp+2Ch]
  char *desta; // [sp+38h] [bp+38h]
  size_t na; // [sp+3Ch] [bp+3Ch]

  v9 = a3 - a4 - a6;
  v10 = n;
  if ( n >= v9 )
    v10 = v9;
  v14 = v10;
  desta = sub_FE50C(dest, (const void *)(a6 + a4), v10);
  na = n - v14;
  varg_r3a = sub_FE4A4(a2, v14 + a4, a3);
  if ( na )
  {
    varg_r3b = (const void *)sub_FE4A4(a2, a6 + varg_r3a, a3);
    memcpy(desta, varg_r3b, na);
    v11 = sub_FE4A4(a2, (unsigned int)varg_r3b + na, a3);
    varg_r3a = sub_FE4D8(a2, v11 - a6, a3);
  }
  *a9 = varg_r3a;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = varg_r3a;
  a1[3] = a5;
  a1[4] = a6;
  return a1;
}
