int __fastcall sub_3E448(int a1, int a2, int a3)
{
  struct sockaddr *v4; // r6
  unsigned int v6; // r9
  unsigned int v7; // r2
  int *v8; // r4
  int v9; // r3
  int v10; // t1

  v4 = (struct sockaddr *)a1;
  if ( (__rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF) > 1 )
  {
    sub_64A18(3, "reset_stats: err_nitems > 1");
    return sub_3AA2C(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v6 = bswap32(*(_DWORD *)(a3 + 8));
  v7 = v6 & 0xFFFFFF80;
  if ( (v6 & 0xFFFFFF80) != 0 )
  {
    sub_64A18(3, "reset_stats: reset leaves %#lx", v7);
    return sub_3AA2C(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v8 = &reset_entries;
  v9 = reset_entries;
  if ( reset_entries )
  {
    do
    {
      if ( (v9 & v6) != 0 )
        a1 = ((int (__fastcall *)(int, int, unsigned int))v8[1])(a1, a2, v7);
      v10 = v8[2];
      v8 += 2;
      v9 = v10;
    }
    while ( v10 );
  }
  return sub_3AA2C(v4, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
