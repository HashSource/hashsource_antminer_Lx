int __fastcall sub_3BA88(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r2

  dword_BBB24 = a2;
  dword_BBB28 = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  byte_BB927 = v4;
  dword_BB91C = 52;
  word_BB92A = 13312;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  dword_BB92C = bswap32(current_time);
  dword_BB930 = bswap32(current_time - sys_stattime);
  dword_BB934 = bswap32(sys_restricted);
  dword_BB938 = bswap32(sys_oldversion);
  dword_BB93C = bswap32(sys_newversion);
  dword_BB940 = bswap32(sys_declined);
  dword_BB944 = bswap32(sys_badlength);
  dword_BB948 = bswap32(sys_processed);
  dword_BB94C = bswap32(sys_badauth);
  dword_BB954 = bswap32(sys_limitrejected);
  dword_BB950 = bswap32(sys_received);
  dword_BB958 = bswap32(sys_lamport);
  dword_BB95C = bswap32(sys_tsrounding);
  sub_3A5E8();
  return sub_3AD04();
}
