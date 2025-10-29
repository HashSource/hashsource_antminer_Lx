int __fastcall get_chip_temperature_str_ltc(int a1, char *a2, size_t a3)
{
  size_t v3; // r3
  size_t v5; // [sp+4h] [bp-20h]
  unsigned int v8; // [sp+10h] [bp-14h]
  int j; // [sp+14h] [bp-10h]
  int i; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  *a2 = 0;
  v3 = a3;
  if ( a3 >= 0xFA0 )
    v3 = 4000;
  v5 = v3;
  v11 = snprintf(a2, v3, "chain %d, chip temperature array:", *(_DWORD *)(a1 + 252));
  for ( i = 0; i <= 9; ++i )
  {
    v11 += snprintf(&a2[v11], v5 - v11, "\n");
    for ( j = 0; j <= 10; ++j )
    {
      v8 = dword_14FDF8[11 * i + j] - 1;
      if ( v8 > 0x6D )
        v11 += snprintf(&a2[v11], v5 - v11, "XXX ");
      else
        v11 += snprintf(&a2[v11], v5 - v11, "%3d ", *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * v8));
    }
  }
  return 0;
}
