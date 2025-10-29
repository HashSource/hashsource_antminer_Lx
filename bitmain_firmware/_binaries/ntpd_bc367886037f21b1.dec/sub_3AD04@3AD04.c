int sub_3AD04()
{
  __int16 v0; // lr
  char v1; // r7
  int result; // r0

  if ( !dword_BBB20 && !dword_BB910 )
    return sub_3AA2C((struct sockaddr *)dword_BBB28, dword_BBB24, byte_BB926, byte_BB927, 4);
  v0 = __rev16(dword_BB910);
  if ( dword_BB920 )
    v1 = (8 * dword_BB920) | 0x87;
  else
    v1 = -105;
  byte_BB925 = dword_BBB20 & 0x7F;
  byte_BB924 = v1;
  word_BB928 = v0;
  result = sub_16874((struct sockaddr *)dword_BBB28, dword_BBB24, -1, (unsigned __int8 *)&byte_BB924, dword_BB914 + 8);
  ++numresppkts;
  return result;
}
