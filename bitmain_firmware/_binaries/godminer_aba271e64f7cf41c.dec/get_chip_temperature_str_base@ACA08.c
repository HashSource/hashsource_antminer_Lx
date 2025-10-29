int __fastcall get_chip_temperature_str_base(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // r3
  unsigned int v5; // [sp+4h] [bp-18h]
  int i; // [sp+10h] [bp-Ch]
  int v9; // [sp+14h] [bp-8h]

  *a2 = 0;
  v9 = 0;
  v3 = a3;
  if ( a3 >= 0xFA0 )
    v3 = 4000;
  v5 = v3;
  for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
    v9 += snprintf(&a2[v9], v5 - v9, "%d ", *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * i));
  return 0;
}
