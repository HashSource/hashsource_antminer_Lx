int __fastcall sub_84134(unsigned int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  FILE *v9; // r0
  char *v10; // r11
  int v11; // r4
  int v12; // r2
  int v13; // r3
  char *v14; // [sp+Ch] [bp-10h]

  result = 2092;
  if ( a1 == 1 )
  {
    v14 = &ao_strs_strtable[dword_1063C8 + 203];
    v9 = (FILE *)option_usage_fp;
    if ( (a2[4] & 0x1000000) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  if ( a1 <= 0xF )
    return result;
  v14 = byte_97B44;
  fprintf((FILE *)option_usage_fp, off_B7538[0], *(_DWORD *)(a1 + 28), a2[13], a2[6]);
  v9 = (FILE *)option_usage_fp;
  if ( (a2[4] & 0x1000000) != 0 )
  {
LABEL_24:
    fprintf(v9, off_B75D4[0], v14);
    v9 = (FILE *)option_usage_fp;
  }
LABEL_5:
  if ( a4 <= 1 )
    fprintf(v9, off_B75CC[0], v14);
  else
    fprintf(v9, off_B75C8[0], v14);
  if ( a1 == 1 )
    v10 = &ao_strs_strtable[dword_1063C8 + 210];
  else
    v10 = "\t";
  v11 = a3 + 8;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v11 - 4);
    v13 = *(_DWORD *)(v11 - 8);
    if ( v12 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B75C4[0], v10, v13);
    }
    else if ( v13 == 0x80000000 )
    {
      fprintf((FILE *)option_usage_fp, off_B75D8[0], v10, *(_DWORD *)(v11 - 4));
    }
    else if ( v12 == 0x7FFFFFFF )
    {
      fprintf((FILE *)option_usage_fp, off_B75C0[0], v10);
    }
    else
    {
      fprintf((FILE *)option_usage_fp, off_B75BC[0], v10);
    }
    --a4;
    v11 += 8;
    if ( a4 <= 0 )
      break;
    fputs(off_B75D0[0], (FILE *)option_usage_fp);
  }
  result = fputc(10, (FILE *)option_usage_fp);
  if ( a1 > 0xF )
    return (*(int (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
  return result;
}
