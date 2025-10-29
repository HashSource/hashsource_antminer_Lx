int __fastcall sub_3DE18(struct sockaddr *a1, int a2, int a3)
{
  struct timex *v6; // r0
  char v7; // r2
  unsigned int s[32]; // [sp+Ch] [bp-88h] BYREF

  if ( !pll_control )
    return sub_3AA2C(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  v6 = (struct timex *)memset(s, 0, sizeof(s));
  if ( adjtimex(v6) < 0 )
    sub_64A18(3, "get_kernel_info: ntp_adjtime() failed: %m");
  v7 = *(_BYTE *)(a3 + 3);
  byte_BB926 = *(_BYTE *)(a3 + 2);
  word_BB92A = 15360;
  dword_BB91C = 60;
  dword_BB930 = bswap32(s[2]);
  dword_BB92C = bswap32(s[1]);
  dword_BB938 = bswap32(s[4]);
  dword_BB934 = bswap32(s[3]);
  dword_BB944 = bswap32(s[7]);
  byte_BB927 = v7;
  dword_BB940 = bswap32(s[6]);
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  dword_BB950 = bswap32(s[13]);
  dword_BBB28 = (int)a1;
  dword_BBB24 = a2;
  dword_BB948 = bswap32(s[8]);
  dword_BB94C = bswap32(s[12]);
  LOWORD(dword_BB93C) = __rev16(s[5]);
  HIWORD(dword_BB93C) = __rev16(s[14]);
  dword_BB954 = bswap32(s[15]);
  dword_BB958 = bswap32(s[16]);
  dword_BB95C = bswap32(s[17]);
  dword_BB960 = bswap32(s[18]);
  dword_BB964 = bswap32(s[19]);
  sub_3A5E8();
  return sub_3AD04();
}
