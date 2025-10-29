int __fastcall sub_2D6F4(unsigned int a1, int a2, time_t *a3)
{
  _QWORD *v6; // r8
  __int64 v8; // [sp+0h] [bp-18h] BYREF
  __int64 v9; // [sp+8h] [bp-10h] BYREF

  v6 = sub_2CDF0(0);
  sub_654FC((int)&v8, a2, a3);
  v9 = v8;
  sub_2CC08(__SPAIR64__((unsigned int)v6, a1), (int)&v9);
  return 1;
}
