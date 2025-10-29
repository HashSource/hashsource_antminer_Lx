unsigned __int64 __fastcall sub_11674(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r4
  int v5; // r0
  __int64 v6; // r0
  unsigned __int64 v10; // [sp+18h] [bp-54h]
  unsigned __int64 v11; // [sp+20h] [bp-4Ch]
  unsigned __int64 v12; // [sp+28h] [bp-44h]
  __int64 v13; // [sp+30h] [bp-3Ch]

  if ( a2 <= 7 )
  {
    if ( a2 <= 3 )
    {
      if ( a2 )
      {
        v6 = sub_11498((0xC3A5C85C97CB3127LL * (a2 + 4 * a1[a2 - 1])) ^ (0x9AE16A3B2F90404FLL
                                                                       * (*a1 + (a1[a2 >> 1] << 8))));
        v3 = 797982799LL * (unsigned int)v6;
        HIDWORD(v3) += 797982799 * HIDWORD(v6) - 1696503237 * v6;
      }
      else
      {
        return 0x9AE16A3B2F90404FLL;
      }
    }
    else
    {
      v4 = 8LL * (unsigned int)sub_11430((int)a1) + a2;
      v5 = sub_11430((int)&a1[a2 - 4]);
      return sub_11550(v4, SHIDWORD(v4), (unsigned int)v5, 2 * a2 - 0x651E95C4D06FBFB1LL);
    }
  }
  else
  {
    v13 = 2 * a2 - 0x651E95C4D06FBFB1LL;
    v12 = sub_11460(a1) - 0x651E95C4D06FBFB1LL;
    v11 = sub_11460(&a1[a2 - 8]);
    v10 = v13 * sub_114E4(v11, 37) + v12;
    v2 = sub_114E4(v12, 25);
    return sub_11550(v10, SHIDWORD(v10), (v11 + v2) * v13, v13);
  }
  return v3;
}
