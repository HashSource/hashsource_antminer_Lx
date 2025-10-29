int __fastcall sub_3B12C(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2

  dword_BBB28 = a1;
  dword_BBB24 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  byte_BB927 = v4;
  dword_BB91C = 60;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  word_BB92A = 15360;
  dword_BB92C = bswap32(current_time - ctltimereset);
  dword_BB930 = bswap32(numctlreq);
  dword_BB934 = bswap32(numctlbadpkts);
  dword_BB938 = bswap32(numctlresponses);
  dword_BB93C = bswap32(numctlfrags);
  dword_BB940 = bswap32(numctlerrors);
  dword_BB944 = bswap32(numctltooshort);
  dword_BB948 = bswap32(numctlinputresp);
  dword_BB94C = bswap32(numctlinputfrag);
  dword_BB950 = bswap32(numctlinputerr);
  dword_BB954 = bswap32(numctlbadoffset);
  dword_BB958 = bswap32(numctlbadversion);
  dword_BB95C = bswap32(numctldatatooshort);
  dword_BB960 = bswap32(numctlbadop);
  dword_BB964 = bswap32(numasyncmsgs);
  sub_3A5E8();
  return sub_3AD04();
}
