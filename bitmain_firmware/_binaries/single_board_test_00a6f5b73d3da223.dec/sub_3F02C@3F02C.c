int __fastcall sub_3F02C(int a1)
{
  int v2; // [sp+8h] [bp+8h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  v2 = 0;
  for ( i = 0; i <= 3; ++i )
    v2 = (v2 << 8) | *(unsigned __int8 *)(i + a1);
  return v2;
}
