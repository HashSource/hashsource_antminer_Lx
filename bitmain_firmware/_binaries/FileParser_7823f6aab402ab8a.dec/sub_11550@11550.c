unsigned __int64 __fastcall sub_11550(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r1
  unsigned __int64 v5; // r2
  int v6; // r1
  unsigned __int64 v7; // r2

  v4 = (a3 ^ a1) * HIDWORD(a4) + (HIDWORD(a3) ^ a2) * a4;
  v5 = (unsigned int)a4 * (unsigned __int64)((unsigned int)a3 ^ a1);
  HIDWORD(v5) += v4;
  v6 = a4 * ((((HIDWORD(v5) >> 15) ^ v5 ^ a3) * a4) >> 32)
     + (((unsigned int)((((HIDWORD(v5) >> 15) ^ v5 ^ a3) * a4) >> 32) >> 15) ^ (((HIDWORD(v5) >> 15) ^ v5 ^ a3) * a4))
     * HIDWORD(a4);
  v7 = (((unsigned int)((((HIDWORD(v5) >> 15) ^ v5 ^ a3) * a4) >> 32) >> 15)
      ^ (((HIDWORD(v5) >> 15) ^ (unsigned int)v5 ^ (unsigned int)a3) * (_DWORD)a4))
     * (unsigned __int64)(unsigned int)a4;
  HIDWORD(v7) += v6;
  return v7;
}
