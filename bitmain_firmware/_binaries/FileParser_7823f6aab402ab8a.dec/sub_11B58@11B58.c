unsigned __int64 __fastcall sub_11B58(int a1, int a2)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r0
  __int64 v5; // r2
  unsigned __int64 v6; // r0
  unsigned __int64 v7; // r0
  unsigned __int64 v8; // r0
  unsigned __int64 v9; // r4
  unsigned __int64 v10; // r0
  __int64 v14; // [sp+10h] [bp-6Ch]
  unsigned __int64 v15; // [sp+18h] [bp-64h]
  __int64 v16; // [sp+20h] [bp-5Ch]
  __int64 v17; // [sp+28h] [bp-54h]
  unsigned __int64 v18; // [sp+30h] [bp-4Ch]
  unsigned __int64 v19; // [sp+38h] [bp-44h]
  __int64 v20; // [sp+40h] [bp-3Ch]
  unsigned __int64 v21; // [sp+48h] [bp-34h]
  __int64 v22; // [sp+50h] [bp-2Ch]
  __int64 v23; // [sp+58h] [bp-24h]
  __int64 v24; // [sp+60h] [bp-1Ch]

  v24 = (unsigned int)(2 * a2) - 0x651E95C4D06FBFB1LL;
  v2 = sub_11460((const void *)a1);
  v3 = 797982799LL * (unsigned int)v2;
  HIDWORD(v3) += 797982799 * HIDWORD(v2) - 1696503237 * v2;
  v23 = v3;
  v22 = sub_11460((const void *)(a1 + 8));
  v21 = sub_11460((const void *)(a1 + a2 - 8)) * v24;
  v4 = sub_11460((const void *)(a1 + a2 - 16));
  v5 = 797982799LL * (unsigned int)v4;
  HIDWORD(v5) += 797982799 * HIDWORD(v4) - 1696503237 * v4;
  v20 = v5;
  v6 = sub_114E4(v23 + v22, 43);
  v19 = sub_114E4(v21, 30) + v6 + v20;
  v7 = sub_114E4(v22 - 0x651E95C4D06FBFB1LL, 18);
  v18 = sub_11550(v19, SHIDWORD(v19), v7 + v23 + v21, v24);
  v17 = sub_11460((const void *)(a1 + 16)) * v24;
  v16 = sub_11460((const void *)(a1 + 24));
  v15 = (v19 + sub_11460((const void *)(a1 + a2 - 32))) * v24;
  v14 = (v18 + sub_11460((const void *)(a1 + a2 - 24))) * v24;
  v8 = sub_114E4(v17 + v16, 43);
  v9 = v8 + sub_114E4(v15, 30) + v14;
  v10 = sub_114E4(v16 + v23, 18);
  return sub_11550(v9, SHIDWORD(v9), v10 + v17 + v15, v24);
}
