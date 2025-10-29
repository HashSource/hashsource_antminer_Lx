int __fastcall sub_3E558(struct sockaddr *a1, int a2, int a3, __int16 *a4)
{
  unsigned int v8; // r4

  if ( (__rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF) > 1 )
  {
    sub_64A18(3, "setclr_flags: err_nitems > 1");
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v8 = bswap32(*(_DWORD *)(a3 + 8));
  if ( (v8 & 0xFFFFFF00) != 0 )
  {
    sub_64A18(3, "setclr_flags: extra flags: %#x", v8 & 0xFFFFFF00);
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  if ( (v8 & 1) != 0 )
    sub_384FC(1, a4, 0);
  if ( (v8 & 2) != 0 )
    sub_384FC(12, a4, 0);
  if ( (v8 & 4) != 0 )
    sub_384FC(8, a4, 0);
  if ( (v8 & 8) != 0 )
    sub_384FC(9, a4, 0);
  if ( (v8 & 0x10) != 0 )
    sub_384FC(10, a4, 0);
  if ( (v8 & 0x20) != 0 )
    sub_384FC(11, a4, 0);
  if ( (v8 & 0x40) != 0 )
    sub_384FC(3, a4, 0);
  if ( (v8 & 0x80) != 0 )
    sub_384FC(13, a4, 0);
  return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
