int __fastcall sub_6A150(int result, unsigned int *a2, unsigned int a3, const char *a4, int a5, int a6, char a7)
{
  int v7; // r7
  int v8; // r4
  unsigned int v9; // r12
  int v10; // lr
  bool v11; // cf
  char v12; // r7
  int v13; // lr
  unsigned int v15; // r12
  int v16; // t1
  unsigned int v17; // r3
  bool v18; // cf
  const char *v19; // r8
  int v20; // r4
  int v21; // t1

  v7 = a5;
  if ( a4 )
  {
    if ( !*a4 )
      goto LABEL_4;
  }
  else
  {
    a4 = "(null)";
  }
  if ( a6 > 0 || a6 == -1 )
  {
    v19 = a4;
    v20 = 0;
    do
    {
      v21 = *(unsigned __int8 *)++v19;
      ++v20;
      if ( !v21 )
        break;
    }
    while ( a6 > v20 || a6 == -1 );
    v7 = a5 - v20;
  }
LABEL_4:
  v8 = v7 & ~(v7 >> 31);
  if ( (a7 & 1) != 0 )
  {
    v8 = -v8;
  }
  else if ( v7 > 0 )
  {
    v9 = *a2;
    v10 = v7 & ~(v7 >> 31);
    do
    {
      v11 = v9 + 1 >= a3;
      if ( v9 + 1 >= a3 )
      {
        ++v9;
      }
      else
      {
        *(_BYTE *)(result + v9) = 32;
        v9 = *a2;
      }
      if ( !v11 )
        ++v9;
      --v10;
      *a2 = v9;
    }
    while ( v10 );
    if ( v8 < 1 )
      --v8;
    else
      v8 = 0;
  }
  v12 = *a4;
  if ( *a4 )
  {
    v13 = a6;
    do
    {
      if ( a6 != -1 && v13-- <= 0 )
        break;
      v15 = *a2 + 1;
      if ( v15 < a3 )
      {
        *(_BYTE *)(result + *a2) = v12;
        v15 = *a2 + 1;
      }
      *a2 = v15;
      v16 = *(unsigned __int8 *)++a4;
      v12 = v16;
    }
    while ( v16 );
  }
  if ( v8 )
  {
    v17 = *a2;
    do
    {
      v18 = v17 + 1 >= a3;
      if ( v17 + 1 >= a3 )
      {
        ++v17;
      }
      else
      {
        *(_BYTE *)(result + v17) = 32;
        v17 = *a2;
      }
      if ( !v18 )
        ++v17;
      ++v8;
      *a2 = v17;
    }
    while ( v8 );
  }
  return result;
}
