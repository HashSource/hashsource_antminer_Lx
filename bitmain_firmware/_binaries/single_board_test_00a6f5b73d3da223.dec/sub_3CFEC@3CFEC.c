__int64 __fastcall sub_3CFEC(unsigned __int8 *a1)
{
  __int64 v2; // [sp+0h] [bp+0h]
  __int64 v3; // [sp+8h] [bp+8h]
  __int64 v4; // [sp+10h] [bp+10h]
  __int64 v5; // [sp+18h] [bp+18h]

  HIDWORD(v5) = a1[4];
  LODWORD(v5) = 0;
  HIDWORD(v4) = a1[5] << 8;
  LODWORD(v4) = 0;
  HIDWORD(v3) = a1[6] << 16;
  LODWORD(v3) = 0;
  HIDWORD(v2) = a1[7] << 24;
  LODWORD(v2) = 0;
  return v2 + v3 + v4 + v5 + (a1[1] << 8) + (unsigned __int64)*a1 + (a1[2] << 16) + (a1[3] << 24);
}
