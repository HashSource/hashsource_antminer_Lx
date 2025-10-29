int __fastcall sub_7D424(int a1, const char **a2, const char *a3, int a4)
{
  const char *v6; // r10
  int *v9; // r8
  unsigned int v10; // r0
  char *v11; // r11
  int v12; // r10
  const unsigned __int16 **v13; // r0
  char *v14; // r2
  const unsigned __int16 *v15; // r0
  unsigned __int8 *v16; // r1
  char *v18; // [sp+0h] [bp-Ch] BYREF

  if ( a1 == -1 )
    return -1;
  v6 = *a2;
  v9 = _errno_location();
  *v9 = 0;
  v10 = strtoul(v6, &v18, 10);
  v11 = v18;
  v12 = v10;
  if ( *v9 )
    return -1;
  v13 = _ctype_b_loc();
  v14 = v11;
  v15 = *v13;
  do
    v16 = (unsigned __int8 *)v14++;
  while ( (v15[*v16] & 0x2000) != 0 );
  if ( a3 == (const char *)v16 )
  {
    *a2 = a3;
    return sub_7D370(a1, v12, a4);
  }
  else
  {
    *v9 = 22;
    return -1;
  }
}
