int __fastcall sub_BF94(unsigned __int16 *a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-18h] BYREF
  __int64 v6; // [sp+8h] [bp-10h] BYREF

  v2 = sub_BD64(a1);
  v3 = sub_BEEC((unsigned __int8 *)a1);
  sub_B97C(&v5, v2 - 719163, v3);
  v6 = v5;
  return sub_AF7C((int)&v6);
}
