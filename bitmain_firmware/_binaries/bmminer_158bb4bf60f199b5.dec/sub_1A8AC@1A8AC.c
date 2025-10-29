void __fastcall sub_1A8AC(unsigned int a1, int a2)
{
  int i; // r4
  unsigned int v5; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_5;
    }
    v5 = (unsigned __int8)i;
    sub_74B18(v5, a1);
  }
LABEL_5:
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "set chip baud = %d, chip_divider = %d\n", a1, a2);
    sub_47AB4(4, s, 0);
  }
}
