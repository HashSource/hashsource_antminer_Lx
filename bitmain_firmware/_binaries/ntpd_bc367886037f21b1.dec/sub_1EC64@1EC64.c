char *__fastcall sub_1EC64(char *result, int a2, int a3)
{
  int v3; // r1
  int v4; // r8
  char *v5; // r7
  char *v6; // r11
  size_t v7; // r5
  bool v8; // zf
  void *v9; // r3
  size_t i; // r4
  const void *v11; // r1
  int v12; // r5
  int v13; // r6
  char *v14; // r3
  int v15; // r12
  char *v16; // [sp+0h] [bp-14h]

  if ( a3 )
  {
    v3 = 8 * a2;
    v4 = 0;
  }
  else
  {
    v3 = 8 * a2;
    dword_B86A0 = 1;
    if ( dword_B86BC )
    {
      v12 = dword_B8498;
      v13 = dword_B86C0;
      v14 = result;
      *(_BYTE *)dword_B8498 = 44;
      dword_B8498 = v12 + 1;
      dword_B86C0 = v13 + 1;
      do
      {
        v15 = *((_DWORD *)v14 + 1);
        v14 += 8;
        a3 += v15;
      }
      while ( &result[v3] != v14 );
      if ( (unsigned int)(v13 + 2 + a3) <= 0x47 )
      {
        *(_BYTE *)(v12 + 1) = 32;
        v4 = 3;
        dword_B86C0 = v13 + 2;
        dword_B8498 = v12 + 2;
      }
      else
      {
        *(_BYTE *)(v12 + 1) = 13;
        v4 = 3;
        dword_B8498 = v12 + 3;
        dword_B86C0 = 0;
        *(_BYTE *)(v12 + 2) = 10;
      }
    }
    else
    {
      v4 = 3;
    }
  }
  v5 = result;
  v16 = &result[v3];
  do
  {
    v6 = *(char **)v5;
    v7 = *((_DWORD *)v5 + 1);
    v8 = v7 == 0;
    if ( v7 )
      v8 = v6 == 0;
    if ( !v8 )
    {
      v9 = (void *)dword_B8498;
      for ( i = dword_B86C4 - dword_B8498; v4 + v7 > dword_B86C4 - dword_B8498; i = dword_B86C4 - dword_B8498 )
      {
        v11 = v6;
        if ( i >= v7 )
          i = v7;
        v7 -= i;
        v6 += i;
        dword_B8498 = (int)memcpy(v9, v11, i) + i;
        dword_B86C0 += i;
        sub_1E934(32);
        v9 = (void *)dword_B8498;
      }
      result = (char *)memcpy(v9, v6, v7);
      dword_B86BC = 1;
      dword_B8498 = (int)&result[v7];
      dword_B86C0 += v7;
    }
    v5 += 8;
  }
  while ( v16 != v5 );
  return result;
}
