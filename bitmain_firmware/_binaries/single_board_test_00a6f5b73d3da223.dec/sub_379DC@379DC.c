int __fastcall sub_379DC(int a1, unsigned __int8 a2)
{
  int v5; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  v5 = sub_1A3658(256, a2);
  for ( i = 0; a2 > i; ++i )
    *(_BYTE *)(i + a1) = v5 * i;
  return v5;
}
