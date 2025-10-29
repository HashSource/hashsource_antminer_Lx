int __fastcall sub_3B8EC(int a1, int a2, int a3)
{
  char v3; // r3
  char v4; // r0

  v3 = *(_BYTE *)(a3 + 3);
  dword_BBB24 = a2;
  dword_BBB28 = a1;
  v4 = *(_BYTE *)(a3 + 2);
  dword_BB91C = 40;
  word_BB92A = 10240;
  byte_BB927 = v3;
  byte_BB926 = v4;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  dword_BB92C = bswap32(current_time - io_timereset);
  LOWORD(dword_BB930) = __rev16(sub_69A30());
  HIWORD(dword_BB930) = __rev16(sub_69988());
  LOWORD(dword_BB934) = __rev16(sub_699DC());
  HIWORD(dword_BB934) = __rev16(sub_69A84());
  dword_BB938 = bswap32(packets_dropped);
  dword_BB93C = bswap32(packets_ignored);
  dword_BB940 = bswap32(packets_received);
  dword_BB944 = bswap32(packets_sent);
  dword_BB948 = bswap32(packets_notsent);
  dword_BB94C = bswap32(handler_calls);
  dword_BB950 = bswap32(handler_pkts);
  sub_3A5E8();
  return sub_3AD04();
}
