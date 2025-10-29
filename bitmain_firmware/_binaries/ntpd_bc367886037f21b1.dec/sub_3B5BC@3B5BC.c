int __fastcall sub_3B5BC(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r2
  double v5; // d0
  __int64 v6; // r6
  double v7; // d0
  double v8; // r0
  __int64 v9; // r0
  double v11; // d0

  dword_BBB24 = a2;
  dword_BBB28 = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BB926 = v3;
  byte_BB927 = v4;
  dword_BB91C = 24;
  word_BB92A = 6144;
  dword_BBB20 = 0;
  dword_BB910 = 0;
  dword_BB914 = 0;
  dword_BB918 = 0;
  v5 = last_offset;
  if ( last_offset < 0.0 )
  {
    v11 = -last_offset;
    ldexp(COERCE_DOUBLE(0x60C00000020LL), 0);
    v6 = -sub_8BBA8(LODWORD(v11), HIDWORD(v11));
  }
  else
  {
    ldexp(COERCE_DOUBLE(0x60C00000020LL), 0);
    v6 = sub_8BBA8(LODWORD(v5), HIDWORD(v5));
  }
  HIDWORD(v8) = bswap32(HIDWORD(v6));
  dword_BB92C = HIDWORD(v8);
  dword_BB930 = bswap32(v6);
  v7 = drift_comp * 1000000.0;
  LODWORD(v8) = 32;
  if ( drift_comp * 1000000.0 < 0.0 )
  {
    ldexp(v8, (int)&unk_BB71C);
    v9 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v7), HIDWORD(COERCE_UNSIGNED_INT64(-v7)));
  }
  else
  {
    ldexp(v8, (int)&unk_BB71C);
    v9 = sub_8BBA8(LODWORD(v7), HIDWORD(v7));
  }
  dword_BB934 = bswap32(HIDWORD(v9));
  dword_BB938 = bswap32(v9);
  dword_BB93C = bswap32(tc_counter);
  dword_BB940 = bswap32(current_time - sys_epoch);
  sub_3A5E8();
  return sub_3AD04();
}
