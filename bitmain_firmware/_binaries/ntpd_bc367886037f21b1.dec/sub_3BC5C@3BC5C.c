int __fastcall sub_3BC5C(int a1, int a2, int a3)
{
  char v3; // r6
  char v4; // r0
  int v5; // r0
  __int16 v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v12; // r2

  v3 = *(_BYTE *)(a3 + 2);
  dword_BBB28 = a1;
  v4 = *(_BYTE *)(a3 + 3);
  dword_BBB24 = a2;
  byte_BB927 = v4;
  byte_BB926 = v3;
  if ( dword_BBB2C )
    v5 = 80;
  else
    v5 = 56;
  dword_BBB20 = 0;
  dword_BB91C = v5;
  if ( dword_BBB2C )
    v6 = 20480;
  else
    v6 = 14336;
  dword_BB910 = 0;
  word_BB92A = v6;
  dword_BB914 = 0;
  dword_BB918 = 0;
  if ( sys_peer )
  {
    if ( *(_WORD *)(sys_peer + 16) == 2 )
    {
      v12 = *(_DWORD *)(sys_peer + 20);
      if ( dword_BBB2C )
        dword_BB964 = 0;
      dword_BB92C = v12;
    }
    else if ( dword_BBB2C )
    {
      v7 = *(_DWORD *)(sys_peer + 24);
      v8 = *(_DWORD *)(sys_peer + 28);
      v9 = *(_DWORD *)(sys_peer + 32);
      v10 = *(_DWORD *)(sys_peer + 36);
      dword_BB964 = 1;
      unk_BB96C = v7;
      unk_BB970 = v8;
      unk_BB974 = v9;
      unk_BB978 = v10;
    }
    LOBYTE(dword_BB930) = *(_BYTE *)(sys_peer + 63);
  }
  else
  {
    dword_BB92C = 0;
    if ( dword_BBB2C )
      dword_BB964 = 0;
    LOBYTE(dword_BB930) = 0;
  }
  BYTE1(dword_BB930) = sys_leap;
  BYTE2(dword_BB930) = sys_stratum;
  HIBYTE(dword_BB930) = sys_precision;
  dword_BB934 = bswap32((int)(sys_rootdelay * 65536.0));
  dword_BB938 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  dword_BB954 = bswap32((int)(sys_jitter * 65536.0));
  dword_BB960 = bswap32((unsigned int)(clock_stability * 1000000.0 * 65536.0));
  dword_BB93C = sys_refid;
  dword_BB940 = bswap32(sys_reftime);
  dword_BB944 = bswap32(dword_107C0C);
  dword_BB948 = (unsigned __int8)sys_poll;
  LOBYTE(dword_BB94C) = 0;
  if ( sys_authenticate )
    LOBYTE(dword_BB94C) = 2;
  if ( sys_bclient )
    LOBYTE(dword_BB94C) = dword_BB94C | 1;
  if ( cal_enable )
    LOBYTE(dword_BB94C) = dword_BB94C | 0x10;
  if ( kern_enable )
    LOBYTE(dword_BB94C) = dword_BB94C | 8;
  if ( mon_enabled )
    LOBYTE(dword_BB94C) = dword_BB94C | 0x40;
  if ( ntp_enable )
    LOBYTE(dword_BB94C) = dword_BB94C | 4;
  if ( hardpps_enable )
    LOBYTE(dword_BB94C) = dword_BB94C | 0x20;
  if ( stats_control )
    LOBYTE(dword_BB94C) = ~((unsigned int)~((unsigned __int8)dword_BB94C << 25) >> 25);
  dword_BB958 = 0;
  dword_BB950 = bswap32((int)(sys_bdelay * 65536.0));
  dword_BB95C = bswap32(dword_107BF4);
  sub_3A5E8();
  return sub_3AD04();
}
