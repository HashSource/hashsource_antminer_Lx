unsigned int __fastcall EaglesongSponge(int a1, unsigned int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int result; // r0
  _BYTE v10[64]; // [sp+10h] [bp+10h] BYREF
  int v11; // [sp+50h] [bp+50h]
  int k; // [sp+54h] [bp+54h]
  int j; // [sp+58h] [bp+58h]
  unsigned int i; // [sp+5Ch] [bp+5Ch]
  _DWORD vars0[2]; // [sp+60h] [bp+60h] BYREF

  for ( i = 0; (int)i <= 15; ++i )
    vars0[i - 20] = 0;
  for ( i = 0; (rate + 8 * (a4 + 1) - 1) / rate > i; ++i )
  {
    for ( j = 0; rate / 32 > j; ++j )
    {
      v11 = 0;
      for ( k = 0; k <= 3; ++k )
      {
        if ( k + (int)(i * rate) / 8 + 4 * j >= a4 )
        {
          if ( k + (int)(i * rate) / 8 + 4 * j == a4 )
            v11 = a5 ^ (v11 << 8);
        }
        else
        {
          v11 = *(unsigned __int8 *)(a3 + k + (int)(i * rate) / 8 + 4 * j) ^ (v11 << 8);
        }
      }
      vars0[j - 20] ^= v11;
    }
    EaglesongPermutation((int)v10);
  }
  for ( i = 0; ; ++i )
  {
    result = a2 / (rate / 8);
    if ( result <= i )
      break;
    for ( j = 0; rate / 32 > j; ++j )
    {
      for ( k = 0; k <= 3; ++k )
        *(_BYTE *)(k + (int)(i * rate) / 8 + 4 * j + a1) = vars0[j - 20] >> (8 * k);
    }
    EaglesongPermutation((int)v10);
  }
  return result;
}
