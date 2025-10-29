int __fastcall get_chip_ft_program_version_ex(int a1, int a2)
{
  char s[40]; // [sp+Ch] [bp+Ch] BYREF
  unsigned int v7; // [sp+34h] [bp+34h]
  char v8; // [sp+3Bh] [bp+3Bh]
  size_t v9; // [sp+3Ch] [bp+3Ch]
  char v10; // [sp+42h] [bp+42h]
  char v11; // [sp+43h] [bp+43h]
  size_t i; // [sp+44h] [bp+44h]
  int v13; // [sp+48h] [bp+48h]
  unsigned int v14; // [sp+4Ch] [bp+4Ch]
  _WORD vars0[4]; // [sp+50h] [bp+50h] BYREF

  v14 = 0;
  v13 = 0;
  i = 0;
  v9 = 0;
  v11 = 0;
  v10 = 0;
  v8 = 0;
  v7 = 0;
  memset(s, 0, sizeof(s));
  v9 = strlen((const char *)(a1 + 80)) + 1;
  for ( i = 0; i < v9; ++i )
  {
    if ( *(unsigned __int8 *)(i + a1 + 80) <= 0x2Fu || *(unsigned __int8 *)(i + a1 + 80) > 0x39u )
    {
      if ( v10 )
      {
        v11 = 1;
        v10 = 0;
      }
    }
    else
    {
      v10 = 1;
      *((_BYTE *)&vars0[5 * v14 - 34] + v13++) = *(_BYTE *)(i + a1 + 80);
    }
    if ( v11 )
    {
      if ( v14 > 3 )
      {
        printf("There are too many number sector in ft version: %s, error.\n", (const char *)(a1 + 80));
        return 0;
      }
      v7 = atoi(&s[10 * v14]);
      if ( v7 >= 0x100 )
      {
        printf("FT version: %dst number: %d, error\n", v14, v7);
        return 0;
      }
      *(_BYTE *)(v14 + a2) = v7;
      ++v14;
      v13 = 0;
      v11 = 0;
    }
  }
  return 1;
}
