int __fastcall sub_66274(unsigned __int16 *a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-18h] BYREF
  __int64 v6; // [sp+8h] [bp-10h] BYREF

  v2 = sub_66044(a1);
  v3 = sub_661CC((unsigned __int8 *)a1);
  sub_65C5C(&v5, v2 - 719163, v3);
  v6 = v5;
  return sub_6525C((int)&v6);
}
