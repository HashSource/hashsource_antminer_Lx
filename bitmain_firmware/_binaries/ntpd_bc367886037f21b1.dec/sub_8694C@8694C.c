char *__fastcall sub_8694C(int *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  char *result; // r0
  int v5; // r3
  int v6; // t1
  unsigned int v7; // r5
  char *v8; // r11
  int v9; // r6
  unsigned __int8 *v10; // r1
  int v11; // t1
  char *v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // t1
  int v15; // r1
  unsigned int v16; // t1
  char *v17; // r0
  int v18; // r3
  int v19; // t1
  int v20; // t1
  _DWORD *i; // r3
  int v22; // r2
  int v23; // r1
  int v24; // r2

  v2 = a2;
  if ( a2 || (result = getenv("AUTOOPTS_USAGE"), (v2 = (unsigned __int8 *)result) != 0) )
  {
    result = (char *)dword_106334;
    if ( !dword_106334 )
      result = sub_7DEE8(12);
    v5 = *v2;
    if ( result[v5] )
    {
      do
      {
        v6 = *++v2;
        v5 = v6;
      }
      while ( result[v6] );
    }
    if ( v5 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (char *)&unk_B42E8;
        result = (char *)sub_855A8(v2, "gnu", 3);
        v9 = 0;
        if ( result )
          break;
LABEL_11:
        result = byte_9 + 3;
        v12 = (char *)(&off_B4208)[3 * v9 + 56];
        v14 = (unsigned __int8)v12[(_DWORD)v2];
        v2 = (unsigned __int8 *)&v12[(_DWORD)v2];
        v13 = v14;
        if ( v14 > 0x7F || (dword_9ED4C[v13] & 0xC13) == 0 )
          return result;
        v7 |= 1 << v9;
        v15 = dword_106334;
        if ( !dword_106334 )
        {
          result = sub_7DEE8(12);
          v13 = *v2;
          v15 = (int)result;
        }
        if ( *(_BYTE *)(v15 + v13) )
        {
          do
          {
            v16 = *++v2;
            v13 = v16;
          }
          while ( *(_BYTE *)(v15 + v16) );
        }
        if ( !v13 )
        {
          if ( (v7 & 3) != 3 && (v7 & 0xC) != 0xC )
          {
            for ( i = &unk_B42E8; ; i += 3 )
            {
              if ( (v7 & 1) != 0 )
              {
                v22 = i[1];
                v23 = *a1;
                if ( (v22 & 1) != 0 )
                  v24 = v22 & v23;
                else
                  v24 = v22 | v23;
                *a1 = v24;
              }
              v7 >>= 1;
              if ( !v7 )
                break;
            }
          }
          return result;
        }
        if ( v13 == 44 )
        {
          v17 = (char *)dword_106334;
          if ( !dword_106334 )
            v17 = sub_7DEE8(12);
          v18 = *++v2;
          if ( v17[v18] )
          {
            do
            {
              v19 = *++v2;
              if ( !v17[v19] )
                break;
              v20 = *++v2;
            }
            while ( v17[v20] );
          }
        }
      }
      while ( ++v9 != 5 )
      {
        v10 = (unsigned __int8 *)*((_DWORD *)v8 + 5);
        v11 = *((_DWORD *)v8 + 3);
        v8 += 12;
        result = (char *)sub_855A8(v2, v10, v11);
        if ( !result )
          goto LABEL_11;
      }
    }
  }
  return result;
}
