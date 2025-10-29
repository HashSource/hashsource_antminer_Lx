unsigned int __fastcall sub_3FDAC(unsigned int result, _WORD *a2)
{
  int v3; // r7
  unsigned __int16 *v4; // r6
  int v5; // r3
  int v6; // r7
  int v7; // r3
  __int16 v8; // r2
  __int16 v9; // r3
  int v10; // r2
  int v11; // r2
  __int16 v12; // r3

  if ( !a2 )
    sub_6E8F0("ntp_restrict.c", 511, 0, "((void *)0) != r4a");
  v3 = *(unsigned __int16 *)result;
  *a2 = 1;
  v4 = (unsigned __int16 *)result;
  v5 = dword_BBBAC;
  a2[1] = 0;
  dword_BBBAC = v5 + 1;
  if ( v3 != 2 )
  {
    if ( v3 != 10 )
      return result;
    goto LABEL_19;
  }
  result = bswap32(*(_DWORD *)(result + 4));
  if ( (result & 0xF0000000) == 0xE0000000 )
  {
    a2[1] = 2;
    return result;
  }
  result = sub_3F9A0(result, (unsigned __int16)__rev16(v4[1]));
  if ( !result )
    sub_6E8F0("ntp_restrict.c", 535, 2, "match != ((void *)0)");
  v6 = *v4;
  ++*(_DWORD *)(result + 4);
  if ( (int *)result == &dword_BBB44 )
    v7 = dword_BBBB0;
  else
    v7 = dword_BBBB4;
  if ( (int *)result == &dword_BBB44 )
    ++v7;
  v8 = *(_WORD *)(result + 8);
  if ( (int *)result == &dword_BBB44 )
    dword_BBBB0 = v7;
  else
    ++v7;
  if ( (int *)result != &dword_BBB44 )
    dword_BBBB4 = v7;
  v9 = *(_WORD *)(result + 12);
  *a2 = v8;
  a2[1] = v9;
  if ( v6 == 10 )
  {
LABEL_19:
    if ( *((unsigned __int8 *)v4 + 8) != 255 )
    {
      result = sub_3FA80((int)(v4 + 4), (unsigned __int16)__rev16(v4[1]));
      if ( !result )
        sub_6E8F0("ntp_restrict.c", 564, 2, "match != ((void *)0)");
      ++*(_DWORD *)(result + 4);
      if ( (int *)result == &dword_BBB78 )
        v10 = dword_BBBB0;
      else
        v10 = dword_BBBB4;
      v11 = v10 + 1;
      if ( (int *)result == &dword_BBB78 )
        dword_BBBB0 = v11;
      else
        dword_BBBB4 = v11;
      v12 = *(_WORD *)(result + 12);
      *a2 = *(_WORD *)(result + 8);
      a2[1] = v12;
    }
  }
  return result;
}
