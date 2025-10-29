int __fastcall set_mac_stats(int a1)
{
  int v3; // [sp+8h] [bp+8h] BYREF
  unsigned int i; // [sp+Ch] [bp+Ch]

  v3 = -1734895979;
  for ( i = 0; i <= 3; ++i )
    sub_788A8(a1, *((unsigned __int8 *)&v3 + i), 0);
  return 0;
}
