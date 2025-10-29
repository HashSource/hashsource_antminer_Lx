void *sub_3A5E8()
{
  char v0; // lr
  int v1; // r0
  int v2; // r5
  int v3; // r2
  int v4; // r0
  int v5; // r5
  void *result; // r0
  __int16 v7; // r12
  char v8; // lr

  v1 = dword_BB914;
  if ( dword_BB918 )
  {
    v7 = __rev16(dword_BB910);
    if ( dword_BB920 )
      v0 = -57;
    word_BB928 = v7;
    if ( dword_BB920 )
      v8 = v0 | (8 * dword_BB920);
    else
      v8 = -41;
    byte_BB924 = v8;
    byte_BB925 = dword_BBB20 & 0x7F;
    sub_16874((struct sockaddr *)dword_BBB28, dword_BBB24, -1, (unsigned __int8 *)&byte_BB924, dword_BB914 + 8);
    v2 = dword_BB91C;
    ++numresppkts;
    _memcpy_chk(&dword_BB92C, &unk_BB71C);
    v3 = 1;
    v1 = 0;
    dword_BB918 = 0;
    ++dword_BBB20;
  }
  else
  {
    v2 = dword_BB91C;
    v3 = dword_BB910 + 1;
  }
  v4 = v1 + v2;
  v5 = v4 + v2;
  dword_BB914 = v4;
  if ( v5 <= 500 )
    v4 += (int)&unk_BB71C;
  dword_BB910 = v3;
  if ( v5 <= 500 )
    return (void *)(v4 + 528);
  if ( dword_BBB20 == 127 )
    result = 0;
  else
    result = &unk_BB71C;
  if ( dword_BBB20 != 127 )
    dword_BB918 = 1;
  return result;
}
