int __fastcall sub_668D8(int a1, int a2, time_t *a3)
{
  __int64 v5; // [sp+0h] [bp-1Ch] BYREF
  int v6[3]; // [sp+8h] [bp-14h] BYREF

  sub_654FC(&v5, a2, a3);
  *(_QWORD *)v6 = v5;
  return sub_667A4(a1, v6);
}
