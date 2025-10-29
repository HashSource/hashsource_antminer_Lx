int __fastcall sub_1A958(int result, int a2, int a3, char a4)
{
  int v5; // r6
  int i; // r4
  bool v9; // zf

  v5 = result;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
    {
      v9 = v5 == 255;
      if ( v5 != 255 )
        v9 = v5 == (unsigned __int8)i;
      if ( v9 )
      {
        if ( a3 )
          result = sub_752C0((unsigned __int8)i, a4);
        else
          result = sub_75294((unsigned __int8)i, a2, a4);
      }
    }
  }
  return result;
}
