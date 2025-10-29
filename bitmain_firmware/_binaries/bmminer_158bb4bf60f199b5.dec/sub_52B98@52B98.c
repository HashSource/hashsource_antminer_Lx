void sub_52B98()
{
  unsigned int v0; // r4
  int *v1; // r7
  int *v2; // r5
  int v3; // t1
  unsigned int v4; // r3
  bool v5; // cf
  int *v6; // r8
  int v7; // t1
  unsigned int v8; // r6
  int v9; // r1
  int v10; // r1
  int v11; // r8
  _DWORD *v12; // t1
  char v13[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_242F4C <= 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = -1;
    v1 = (int *)dword_244048;
    v2 = (int *)dword_244048;
    do
    {
      v3 = *v2++;
      v4 = *(_DWORD *)(v3 + 56);
      v5 = 1;
      if ( v4 )
        v5 = v4 >= v0;
      if ( !v5 )
        v0 = v4;
    }
    while ( (int *)(dword_244048 + 4 * dword_242F4C) != v2 );
    if ( v0 == -1 )
    {
      v0 = 1;
    }
    else
    {
      v6 = (int *)dword_244048;
      do
      {
        v7 = *v6++;
        v8 = *(_DWORD *)(v7 + 56);
        if ( v8 )
        {
          sub_772CC(v8, v0);
          if ( v9 )
          {
            do
              sub_772CC(v8, --v0);
            while ( v10 );
          }
        }
      }
      while ( v2 != v6 );
    }
    v11 = dword_9ED60;
    do
    {
      v12 = (_DWORD *)*v1++;
      v12[16] = v12[16] * v11 / v0;
      v12[15] = v12[14] / v0;
    }
    while ( v2 != v1 );
  }
  dword_9ED60 = v0;
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(v13, 0x800u, "Global quota greatest common denominator set to %lu", v0);
    sub_47AB4(7, v13, 0);
  }
}
