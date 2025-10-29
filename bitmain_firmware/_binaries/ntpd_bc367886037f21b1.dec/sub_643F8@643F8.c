int __fastcall sub_643F8(_BYTE *a1, int a2, unsigned __int8 *a3, int a4)
{
  _BYTE *v5; // r4
  unsigned int v6; // r5
  int result; // r0
  int v8; // r1
  unsigned __int8 *v9; // r9
  size_t v10; // r0
  _BYTE *v11; // r3
  size_t v12; // r2
  void *v13; // r0
  char v14[256]; // [sp+4h] [bp-108h] BYREF

  v5 = a1;
  v6 = (unsigned int)&a1[a2 - 1];
LABEL_2:
  result = *a3;
  if ( *a3 )
  {
    while ( v6 > (unsigned int)v5 )
    {
      if ( result == 37 )
      {
        v8 = a3[1];
        v9 = a3 + 2;
        if ( v8 == 109 )
        {
          sub_64324(a4, v14, 0x100u);
          v10 = strlen(v14);
          v11 = &v5[v10];
          if ( (unsigned int)&v5[v10] < v6 )
          {
            v12 = v10;
            v13 = v5;
            v5 = v11;
            memcpy(v13, v14, v12);
          }
          a3 = v9;
        }
        else
        {
          *v5 = 37;
          if ( !v8 )
          {
            ++v5;
            break;
          }
          v5[1] = v8;
          a3 += 2;
          v5 += 2;
        }
        goto LABEL_2;
      }
      ++a3;
      *v5++ = result;
      result = *a3;
      if ( !*a3 )
        break;
    }
  }
  *v5 = 0;
  return result;
}
