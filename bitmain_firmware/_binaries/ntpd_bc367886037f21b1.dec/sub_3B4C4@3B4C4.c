int __fastcall sub_3B4C4(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2

  dword_BBB28 = a1;
  dword_BBB24 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  byte_BB927 = v4;
  dword_BB91C = 16;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  word_BB92A = 4096;
  dword_BB92C = bswap32(current_time - timer_timereset);
  dword_BB930 = dword_BB92C;
  dword_BB934 = bswap32(alarm_overflow);
  dword_BB938 = bswap32(timer_xmtcalls);
  sub_3A5E8();
  return sub_3AD04();
}
