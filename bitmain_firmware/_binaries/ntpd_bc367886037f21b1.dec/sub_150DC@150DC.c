__int16 *__fastcall sub_150DC(unsigned int a1, int a2)
{
  int v3; // r8
  int v4; // r0
  int v5; // r4
  _BOOL4 v6; // r3
  __int16 *result; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r4

  if ( a1 >= 0x400 )
  {
    sub_64A18(3, "Too many sockets in use, FD_SETSIZE %d exceeded by fd %d", 1024, a1);
    exit(1);
  }
  v3 = 1 << (a1 & 0x1F);
  if ( a2 )
  {
    v4 = ((int (*)(void))_fdelt_chk)();
    v5 = dword_B82C4;
    v6 = a1 == dword_B82C4;
    if ( !dword_B82C4 )
      v6 = 0;
    result = &word_B8240[2 * v4];
    *((_DWORD *)result + 1) &= ~v3;
    if ( v6 )
    {
      v10 = v5 - 1;
      while ( 1 )
      {
        result = &word_B8240[2 * _fdelt_chk(v10)];
        if ( (*((_DWORD *)result + 1) & (1 << (v10 & 0x1F))) != 0 )
          break;
        if ( v10-- == 0 )
        {
          v10 = dword_B82C4;
          goto LABEL_14;
        }
      }
      dword_B82C4 = v10;
LABEL_14:
      if ( v10 == a1 )
        sub_6E8F0("ntp_io.c", "GNU", 2, "fd != maxactivefd");
    }
  }
  else
  {
    v8 = ((int (*)(void))_fdelt_chk)();
    v9 = dword_B82C4;
    if ( dword_B82C4 < (int)a1 )
      v9 = a1;
    dword_B82C4 = v9;
    result = &word_B8240[2 * v8];
    *((_DWORD *)result + 1) |= v3;
  }
  return result;
}
