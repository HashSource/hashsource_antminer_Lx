__int64 *__fastcall blake2b_update(__int64 *result, int a2, unsigned int a3)
{
  int v3; // r3
  __int64 *v6; // [sp+Ch] [bp+Ch]
  unsigned int i; // [sp+14h] [bp+14h]

  v6 = result;
  for ( i = 0; i < a3; ++i )
  {
    if ( *((_DWORD *)v6 + 52) == 128 )
    {
      v6[24] += *((unsigned int *)v6 + 52);
      if ( v6[24] < (unsigned __int64)*((unsigned int *)v6 + 52) )
        ++v6[25];
      result = sub_1997D0((int)v6, 0);
      *((_DWORD *)v6 + 52) = 0;
    }
    v3 = *((_DWORD *)v6 + 52);
    *((_DWORD *)v6 + 52) = v3 + 1;
    *((_BYTE *)v6 + v3) = *(_BYTE *)(i + a2);
  }
  return result;
}
