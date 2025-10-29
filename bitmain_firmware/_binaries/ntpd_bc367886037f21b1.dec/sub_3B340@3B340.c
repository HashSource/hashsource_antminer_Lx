int __fastcall sub_3B340(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r2

  dword_BBB24 = a2;
  dword_BBB28 = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  byte_BB927 = v4;
  dword_BB91C = 36;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  word_BB92A = 9216;
  dword_BB930 = bswap32(authnumkeys);
  dword_BB934 = bswap32(authnumfreekeys);
  dword_BB938 = bswap32(authkeylookups);
  dword_BB93C = bswap32(authkeynotfound);
  dword_BB940 = bswap32(authencryptions);
  dword_BB944 = bswap32(authdecryptions);
  dword_BB94C = bswap32(authkeyuncached);
  dword_BB948 = bswap32(authkeyexpired);
  dword_BB92C = bswap32(current_time - auth_timereset);
  sub_3A5E8();
  return sub_3AD04();
}
