struct tm *__fastcall sub_CF68(__int64 *a1, int a2)
{
  __int64 v3; // r2
  int v4; // r1
  bool v5; // zf
  int v6; // r7
  bool v7; // zf
  bool v8; // zf
  struct tm *(**v9)(const time_t *); // r4
  struct tm *result; // r0
  int v11; // r7
  time_t v12; // [sp+0h] [bp-8h] BYREF

  v3 = *a1;
  v4 = *(int *)a1 >> 31;
  v12 = *(_DWORD *)a1;
  v5 = HIDWORD(v3) == v4;
  if ( HIDWORD(v3) == v4 )
    v5 = 1;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    do
    {
      while ( v3 >= 0 )
      {
        if ( ++v6 > 3 )
          return 0;
        v3 += loc_D0F8;
        v7 = (int)v3 >> 31 == HIDWORD(v3);
        if ( (int)v3 >> 31 == HIDWORD(v3) )
          v7 = 1;
        if ( v7 )
          goto LABEL_15;
      }
      if ( --v6 < -3 )
        return 0;
      v3 += 883612800;
      v8 = (int)v3 >> 31 == HIDWORD(v3);
      if ( (int)v3 >> 31 == HIDWORD(v3) )
        v8 = 1;
    }
    while ( !v8 );
LABEL_15:
    v12 = v3;
  }
  v9 = &localtime;
  if ( !a2 )
    v9 = &gmtime;
  while ( 1 )
  {
    result = ((struct tm *(__fastcall *)(const time_t *))v9)(&v12);
    if ( result )
      break;
    while ( v12 >= 0 )
    {
      if ( v12 <= 883612799 )
        return 0;
      if ( ++v6 > 3 )
        return 0;
      v12 -= 883612800;
      result = ((struct tm *(__fastcall *)(const time_t *))v9)(&v12);
      if ( result )
        goto LABEL_23;
    }
    if ( --v6 < -3 )
      return 0;
    v12 += 883612800;
  }
LABEL_23:
  if ( v6 )
  {
    v11 = result->tm_year + 28 * v6;
    result->tm_year = v11;
    if ( (unsigned int)(v11 - 1) > 0xC6 )
      return 0;
  }
  return result;
}
