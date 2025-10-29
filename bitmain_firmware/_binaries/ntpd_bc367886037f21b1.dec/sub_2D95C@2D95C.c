int __fastcall sub_2D95C(int a1, time_t *a2)
{
  _QWORD *v4; // r7
  __int64 v6; // [sp+0h] [bp-24h] BYREF
  __int64 v7; // [sp+8h] [bp-1Ch] BYREF
  int v8; // [sp+14h] [bp-10h] BYREF

  v4 = sub_2CDF0(0);
  sub_654FC((int)&v6, a1, a2);
  v7 = v6;
  sub_6D7FC(&v6, v4 + 3, &v7);
  v7 = v6;
  sub_655B4(&v8, &v7);
  return v8;
}
