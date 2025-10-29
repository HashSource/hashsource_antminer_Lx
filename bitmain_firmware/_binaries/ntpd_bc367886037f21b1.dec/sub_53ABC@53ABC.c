FILE *sub_53ABC(int a1, int a2, ...)
{
  int *v2; // r3
  int v3; // r5
  unsigned int v4; // r3
  FILE *result; // r0
  int v6; // r2
  int v8; // r0
  FILE *v9; // r0
  _BYTE v10[40]; // [sp+4h] [bp-2Ch] BYREF
  va_list varg_r2; // [sp+48h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  v2 = *(int **)(a1 + 84);
  v3 = *v2;
  v4 = *((unsigned __int8 *)v2 + 768);
  result = *(FILE **)(v3 + 24);
  v6 = (int)result;
  if ( result )
    v6 = 1;
  if ( ((v4 >> 1) & 1) != v6 )
  {
    if ( (v4 & 2) == 0 )
    {
      result = (FILE *)fclose(result);
      *(_DWORD *)(v3 + 24) = 0;
      return result;
    }
    sub_6BCB0(v10, 40, "/tmp/true%d.debug", *(_DWORD *)(v3 + 20));
    v8 = open64(v10, 193);
    if ( v8 >= 0 )
    {
      v9 = fdopen(v8, "w");
      *(_DWORD *)(v3 + 24) = v9;
      if ( v9 )
        setvbuf(v9, byte_BC664, 1, 0x2000u);
    }
    result = *(FILE **)(v3 + 24);
  }
  if ( result )
  {
    _fprintf_chk(result, 1, "true%d: ", *(_DWORD *)(v3 + 20));
    return (FILE *)_vfprintf_chk(*(_DWORD *)(v3 + 24), 1, a2, (char *)varg_r2);
  }
  return result;
}
