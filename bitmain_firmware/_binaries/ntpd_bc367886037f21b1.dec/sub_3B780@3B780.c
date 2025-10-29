int __fastcall sub_3B780(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2
  char *v5; // r1
  int *v6; // r2
  char v7; // r3
  unsigned int v8; // t1

  dword_BBB28 = a1;
  dword_BBB24 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  v5 = (char *)&dword_BB93C + 3;
  byte_BB927 = v4;
  dword_BB91C = 148;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  word_BB92A = -27648;
  dword_BB92C = bswap32(current_time - peer_timereset);
  LOWORD(dword_BB930) = __rev16(total_peer_structs);
  HIWORD(dword_BB930) = __rev16(peer_free_count);
  dword_BB934 = bswap32(findpeer_calls);
  dword_BB938 = bswap32(peer_allocations);
  dword_BB93C = bswap32(peer_demobilizations);
  v6 = &peer_demobilizations;
  do
  {
    v8 = v6[1];
    ++v6;
    v7 = v8;
    if ( v8 < 0xFF )
      v7 = -1;
    *++v5 = v7;
  }
  while ( v6 != &peer_hash_count[127] );
  sub_3A5E8();
  return sub_3AD04();
}
