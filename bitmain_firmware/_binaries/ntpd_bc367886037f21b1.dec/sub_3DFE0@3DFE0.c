int __fastcall sub_3DFE0(unsigned int *a1, const char *a2, struct sockaddr *a3, int a4, int a5)
{
  unsigned int v9; // r10
  char v10; // r3
  char v11; // r2
  int v12; // r1
  struct sockaddr *v13; // r0
  int v15; // [sp+28h] [bp+20h]

  if ( (__rev16(*(unsigned __int16 *)(a5 + 4)) & 0xFFF) > 1 )
  {
    sub_64A18(3, "set_keyid_checked[%s]: err_nitems > 1", a2);
    v10 = *(_BYTE *)(a5 + 3);
    v11 = *(_BYTE *)(a5 + 2);
    v12 = a4;
    v13 = a3;
    v15 = 3;
  }
  else
  {
    v9 = bswap32(*(_DWORD *)(a5 + 8));
    if ( v9 - 1 <= 0xFFFE && sub_61C10(v9) )
    {
      *a1 = v9;
      v10 = *(_BYTE *)(a5 + 3);
      v11 = *(_BYTE *)(a5 + 2);
      v12 = a4;
      v13 = a3;
      v15 = 0;
    }
    else
    {
      sub_64A18(3, "set_keyid_checked[%s]: invalid key id: %ld", a2, v9);
      v10 = *(_BYTE *)(a5 + 3);
      v11 = *(_BYTE *)(a5 + 2);
      v12 = a4;
      v13 = a3;
      v15 = 4;
    }
  }
  return sub_3AA2C(v13, v12, v11, v10, v15);
}
