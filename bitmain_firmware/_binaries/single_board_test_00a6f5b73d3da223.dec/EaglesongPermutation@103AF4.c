int __fastcall EaglesongPermutation(int result)
{
  int v1; // [sp+4h] [bp+4h]
  int k; // [sp+4Ch] [bp+4Ch]
  int j; // [sp+50h] [bp+50h]
  int i; // [sp+54h] [bp+54h]
  _DWORD vars0[2]; // [sp+58h] [bp+58h] BYREF

  v1 = result;
  for ( i = 0; i < num_rounds; ++i )
  {
    for ( j = 0; j <= 15; ++j )
    {
      vars0[j - 19] = 0;
      for ( k = 0; k <= 15; ++k )
      {
        result = v1;
        vars0[j - 19] ^= *(_DWORD *)(4 * k + v1) * bit_matrix[16 * k + j];
      }
    }
    for ( j = 0; j <= 15; ++j )
      *(_DWORD *)(v1 + 4 * j) = vars0[j - 19];
    for ( j = 0; j <= 15; ++j )
    {
      result = *(_DWORD *)(4 * j + v1)
             ^ (*(_DWORD *)(4 * j + v1) << coefficients[3 * j + 1])
             ^ (*(_DWORD *)(4 * j + v1) >> (32 - coefficients[3 * j + 1]))
             ^ (*(_DWORD *)(4 * j + v1) << coefficients[3 * j + 2]);
      *(_DWORD *)(v1 + 4 * j) = (*(_DWORD *)(4 * j + v1) >> (32 - coefficients[3 * j + 2])) ^ result;
    }
    for ( j = 0; j <= 15; ++j )
    {
      result = 16 * i + j;
      *(_DWORD *)(v1 + 4 * j) = injection_constants[result] ^ *(_DWORD *)(4 * j + v1);
    }
    for ( j = 0; j <= 15; j += 2 )
    {
      *(_DWORD *)(4 * j + v1) += *(_DWORD *)(4 * (j + 1) + v1);
      *(_DWORD *)(4 * j + v1) = __ROR4__(*(_DWORD *)(4 * j + v1), 24);
      *(_DWORD *)(4 * (j + 1) + v1) = __ROR4__(*(_DWORD *)(4 * (j + 1) + v1), 8);
      result = v1;
      *(_DWORD *)(4 * (j + 1) + v1) += *(_DWORD *)(4 * j + v1);
    }
  }
  return result;
}
