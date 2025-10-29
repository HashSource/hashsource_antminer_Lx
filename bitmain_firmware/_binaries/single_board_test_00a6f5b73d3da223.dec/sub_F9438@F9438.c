__int64 __fastcall sub_F9438(unsigned __int8 *a1)
{
  __int64 v2; // [sp+20h] [bp+20h]

  LODWORD(v2) = *a1 ^ (a1[3] << 24) ^ (a1[2] << 16) ^ (a1[1] << 8);
  HIDWORD(v2) = a1[4] ^ (a1[5] << 8) ^ (a1[7] << 24) ^ (a1[6] << 16);
  return v2;
}
