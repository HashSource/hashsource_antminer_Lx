int __fastcall get_chip_ft_program_version(_BYTE *a1, unsigned __int8 *a2)
{
  char nptr; // [sp+14h] [bp+Ch] BYREF
  char v7; // [sp+15h] [bp+Dh]
  char v8; // [sp+16h] [bp+Eh]

  nptr = 0;
  v7 = 0;
  v8 = 0;
  if ( a1[80] == 70 )
  {
    nptr = a1[81];
    *a2 = atoi(&nptr);
    printf("F%d", *a2);
    if ( a1[82] == 86 )
    {
      nptr = a1[83];
      v7 = a1[84];
      a2[1] = atoi(&nptr);
      printf("V%d", a2[1]);
      if ( a1[85] == 66 )
      {
        nptr = a1[86];
        v7 = 0;
        a2[2] = atoi(&nptr);
        printf("B%d", a2[2]);
        if ( a1[87] == 67 )
        {
          nptr = a1[88];
          a2[3] = atoi(&nptr);
          printf("C%d", a2[3]);
          printf("FT version: F%dV%02dB%dC%d\n", *a2, a2[1], a2[2], a2[3]);
          return 1;
        }
        else
        {
          printf("4th FT version is not C, but is %c\n", (unsigned __int8)a1[87]);
          return 0;
        }
      }
      else
      {
        printf("3rd FT version is not B, but is %c\n", (unsigned __int8)a1[85]);
        return 0;
      }
    }
    else
    {
      printf("2nd FT version is not V, but is %c\n", (unsigned __int8)a1[82]);
      return 0;
    }
  }
  else
  {
    printf("1st FT version is not F, but is %c\n", (unsigned __int8)a1[80]);
    return 0;
  }
}
