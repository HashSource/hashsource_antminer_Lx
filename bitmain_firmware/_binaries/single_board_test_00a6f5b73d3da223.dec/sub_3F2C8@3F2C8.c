int __fastcall sub_3F2C8(_DWORD *a1)
{
  _DWORD *v1; // r4
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _BYTE *v10; // [sp+Ch] [bp+Ch]

  v1 = a1 + 2;
  result = a1[6];
  v3 = a1[7];
  v4 = a1[8];
  v5 = a1[9];
  a1[2] = result;
  v1[1] = v3;
  v1[2] = v4;
  v1[3] = v5;
  if ( a1[10] )
  {
    result = a1[10];
    v6 = a1[11];
    v7 = a1[12];
    v8 = a1[13];
    a1[6] = result;
    a1[7] = v6;
    a1[8] = v7;
    a1[9] = v8;
    a1[10] = 0;
  }
  else if ( *((_BYTE *)a1 + 36) || *(_BYTE *)a1[1] )
  {
    v10 = (_BYTE *)a1[1];
    ++a1[17];
    ++a1[18];
    while ( *v10 == 32 || *v10 == 9 || *v10 == 10 || *v10 == 44 || *v10 == 58 )
    {
      if ( *v10 == 10 )
      {
        ++a1[16];
        a1[17] = 1;
      }
      else
      {
        ++a1[17];
      }
      ++a1[18];
      ++v10;
    }
    *((_BYTE *)a1 + 36) = *v10;
    a1[6] = a1[16];
    a1[7] = a1[17];
    a1[8] = a1[18];
    if ( *v10 )
      ++v10;
    a1[1] = v10;
  }
  return result;
}
