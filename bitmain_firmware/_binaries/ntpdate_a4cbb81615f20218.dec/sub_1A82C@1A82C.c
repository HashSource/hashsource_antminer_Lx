int __fastcall sub_1A82C(int a1, _DWORD *a2)
{
  int v3; // r6
  int v5[27]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  v3 = sub_1A770(a1, (int)v5);
  if ( !v3 )
    sub_18E30(a2, v5[20], 0);
  return v3;
}
