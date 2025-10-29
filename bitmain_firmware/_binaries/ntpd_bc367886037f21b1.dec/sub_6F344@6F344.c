int __fastcall sub_6F344(int result, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v6; // r12
  int v7; // r0
  int v8; // r1

  v5 = (_DWORD *)(a2 + 4);
  *(_QWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 12) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_DWORD *)a2 = result;
  if ( result == 2 )
  {
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 4);
  }
  else
  {
    if ( result != 10 )
      sub_6E8F0((int)"./../lib/isc/unix/interfaceiter.c", 143, 2, "0");
    v6 = *(_DWORD *)(a3 + 12);
    v7 = *(_DWORD *)(a3 + 16);
    v8 = *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 8);
    v5[1] = v6;
    v5[2] = v7;
    v5[3] = v8;
    if ( *(_DWORD *)(a3 + 24) )
      return sub_74804(a2);
    result = 33022;
    if ( (*(_DWORD *)(a3 + 8) & 0xC0FF) == 0x80FE )
    {
      if ( (unsigned __int16)__rev16(*(unsigned __int16 *)(a3 + 10)) )
      {
        result = sub_74804(a2);
        *(_WORD *)(a2 + 6) = 0;
      }
      else if ( a4 )
      {
        result = if_nametoindex(a4);
        if ( result )
          return sub_74804(a2);
      }
    }
  }
  return result;
}
