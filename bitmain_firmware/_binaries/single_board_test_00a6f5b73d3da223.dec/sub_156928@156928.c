unsigned __int8 *__fastcall sub_156928(unsigned __int8 *result, char *a2, unsigned int a3)
{
  unsigned __int8 *v5; // [sp+10h] [bp+10h]
  unsigned int n; // [sp+14h] [bp+14h]

  v5 = result;
  while ( a3 )
  {
    n = 128 - *((_DWORD *)v5 + 32);
    if ( n > a3 )
      n = a3;
    result = (unsigned __int8 *)memcpy(&v5[*((_DWORD *)v5 + 32)], a2, n);
    a2 += n;
    a3 -= n;
    *((_DWORD *)v5 + 32) += n;
    if ( *((_DWORD *)v5 + 32) == 128 )
    {
      result = (unsigned __int8 *)sub_14C4AC(v5, 0);
      *((_DWORD *)v5 + 32) = 0;
      if ( !++*((_DWORD *)v5 + 65) )
        ++*((_DWORD *)v5 + 66);
    }
  }
  return result;
}
