int __fastcall sub_780F0(int result, unsigned __int8 *a2, int a3)
{
  int v3; // r6
  unsigned __int8 *v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r12
  int v7; // r3
  int v8; // t1
  int v9; // t1
  int v10; // [sp+0h] [bp-8h]

  if ( !a3 )
    result = 0;
  v10 = 256;
  if ( a3 )
  {
    v3 = result - 1;
    v4 = &a2[a3];
    v5 = 0;
    v6 = 0;
    do
    {
      v8 = *a2++;
      v7 = v8;
      v9 = *(unsigned __int8 *)++v3;
      v6 |= (v9 - v7) & v10;
      v5 |= (v7 - v9) & v10;
      v10 &= ~(v6 | v5);
    }
    while ( a2 != v4 );
    return (v5 >> 8) - (v6 >> 8);
  }
  return result;
}
