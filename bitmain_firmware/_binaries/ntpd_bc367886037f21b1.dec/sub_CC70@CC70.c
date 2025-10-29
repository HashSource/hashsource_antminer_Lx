bool __fastcall sub_CC70(unsigned __int16 *a1, int a2)
{
  int v2; // lr
  _BOOL4 v3; // r3
  const char *v5; // r0
  unsigned int v6; // r6
  unsigned int v7; // r3
  _BOOL4 v8; // r12

  v2 = *a1;
  if ( v2 == 2 )
  {
    v6 = *((_DWORD *)a1 + 1);
    v7 = bswap32(v6);
    if ( HIWORD(v7) << 16 != 2139029504 )
    {
      v8 = (v7 & 0xFF000000) == 2130706432;
      if ( v7 == 2130706433 )
        v8 = 0;
      if ( v8 )
        goto LABEL_11;
    }
    if ( (unsigned int)(a2 - 387) > 0x14 )
    {
LABEL_6:
      if ( a2 != 343 )
        goto LABEL_7;
      if ( v2 == 2 )
      {
        v6 = *((_DWORD *)a1 + 1);
LABEL_20:
        if ( (v6 & 0xF0) == 0xE0 )
          return 1;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( ((0x100021u >> (a2 + 125)) & 1) == 0 )
    {
      if ( a2 != 343 )
        return 1;
      goto LABEL_20;
    }
    v3 = (v7 & 0xF0000000) == -536870912;
LABEL_5:
    if ( v3 )
      goto LABEL_11;
    goto LABEL_6;
  }
  if ( (unsigned int)(a2 - 387) > 0x14 )
  {
    if ( a2 != 343 )
      goto LABEL_7;
LABEL_10:
    if ( *((unsigned __int8 *)a1 + 8) == 255 )
      goto LABEL_7;
LABEL_11:
    v5 = (const char *)sub_6BF44();
    sub_64A18(3, "attempt to configure invalid address %s", v5);
    return 0;
  }
  if ( ((0x100021u >> (a2 + 125)) & 1) != 0 )
  {
    v3 = *((unsigned __int8 *)a1 + 8) == 255;
    goto LABEL_5;
  }
LABEL_7:
  if ( v2 != 10 )
    return 1;
  return ipv6_works != 0;
}
