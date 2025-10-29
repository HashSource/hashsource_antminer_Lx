unsigned int sub_50E64(unsigned __int8 **a1, ...)
{
  int v2; // r4
  unsigned int *v3; // r5
  signed int v4; // r0
  unsigned int v5; // t1
  int v6; // r3
  unsigned __int8 *v7; // r1
  int v8; // r3
  int v9; // t1
  _BOOL4 v10; // r2
  bool v11; // zf
  unsigned int result; // r0
  unsigned __int8 *v13; // r2
  bool v14; // cc
  unsigned __int8 *v15; // r8
  va_list varg_r1; // [sp+24h] [bp+1Ch] BYREF

  va_start(varg_r1, a1);
  v2 = 8;
  va_copy(v3, varg_r1);
  do
  {
    v5 = *v3++;
    v4 = v5;
    if ( v5 <= 0x20 )
    {
      v13 = a1[3];
      v14 = v4 < (int)v13;
      if ( v4 >= (int)v13 )
      {
        v15 = a1[1];
      }
      else
      {
        a1[3] = 0;
        v15 = *a1;
        v13 = 0;
      }
      if ( v14 )
        a1[1] = v15;
      v8 = *v15;
      if ( v4 <= (int)v13 )
      {
        v7 = v15;
      }
      else
      {
        if ( !*v15 )
          goto LABEL_12;
        while ( 1 )
        {
          if ( v8 == 44 )
            ++v13;
          v7 = v15 + 1;
          a1[3] = v13;
          a1[1] = v15 + 1;
          v8 = v15[1];
          if ( v4 <= (int)v13 )
            break;
          ++v15;
          if ( !v8 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = (int)a1[2];
      v7 = &(*a1)[v6];
      if ( v6 > 2 && *(v7 - 3) == 42 )
      {
        v8 = *(v7 - 2);
        v7 -= 2;
      }
      else
      {
        v8 = (*a1)[v6];
      }
    }
    while ( 1 )
    {
      v10 = ((v8 - 42) & 0xFD) != 0;
      if ( !v8 )
        v10 = 0;
      if ( !v10 )
        break;
      if ( v8 != 46 )
        *v7 = 95;
      v9 = *++v7;
      v8 = v9;
    }
LABEL_12:
    v11 = v2 == 0;
    result = ~v4;
    if ( v2 )
      result >>= 31;
    --v2;
    if ( v11 )
      result = 0;
  }
  while ( result );
  return result;
}
