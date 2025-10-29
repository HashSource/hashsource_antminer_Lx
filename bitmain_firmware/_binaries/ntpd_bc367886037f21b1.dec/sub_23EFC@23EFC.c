__int16 *__fastcall sub_23EFC(int a1, __int16 a2)
{
  int v2; // r0
  int v3; // r2

  v2 = a1 + 4;
  if ( (a2 & 0x400) != 0 )
    v3 = 2;
  else
    v3 = 1;
  if ( !sub_23E6C((unsigned __int16 *)v2, *(_DWORD *)(v2 + 56), v3) )
    sub_1F270(4);
  return sub_1E934(0);
}
