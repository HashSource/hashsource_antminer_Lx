void *__fastcall sub_FC50C(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  void *result; // r0
  unsigned int v9; // [sp+14h] [bp+14h]

  result = (void *)(*(int (__fastcall **)(_DWORD, unsigned int))(a1[22] + 24))(a1[22], a3 >> 1);
  if ( !result )
  {
    *(_DWORD *)(172 * a1[14] + a1[18]) = a2;
    if ( (a3 ^ 1) == a4 )
    {
      if ( a2 == 42 && (int)a1[14] <= 1 )
      {
        result = memcpy((void *)(172 * (a1[14] + 1) + a1[18] + 4), (const void *)(172 * a1[14] + a1[18] + 4), 0xA8u);
        ++a1[14];
      }
    }
    else if ( a2 != 42 )
    {
      v9 = *(_DWORD *)(4 * (a3 ^ 1) + a1[17]);
      if ( a1[13] != v9 )
      {
        (*(void (__fastcall **)(_DWORD, unsigned int))(a1[22] + 20))(a1[22], a3 >> 1);
        while ( a1[13] != v9 )
        {
          *(_DWORD *)(4 * a2 + a1[18] + 172 * a1[14] + 4) = v9 >> 1;
          sub_FC50C(a1, a2 + 1, *(_DWORD *)(8 * (v9 ^ 1) + a1[19] + 4), a4);
          v9 = *(_DWORD *)(8 * v9 + a1[19]);
        }
        return (*(void *(__fastcall **)(_DWORD, unsigned int))(a1[22] + 16))(a1[22], a3 >> 1);
      }
    }
  }
  return result;
}
