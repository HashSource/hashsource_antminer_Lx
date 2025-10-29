int __fastcall sub_894D0(_DWORD *a1, int a2)
{
  int result; // r0
  char *v5; // r2
  char *v6; // [sp+0h] [bp-Ch] BYREF

  v6 = 0;
  sub_8694C(a1 + 3, 0);
  result = a1[3];
  if ( !a2 || (result & 0x4000) == 0 )
  {
    if ( (result & 0x1000) != 0 )
      sub_7D028(result, &v6);
    else
      sub_7D190(result, &v6);
    sub_802A4(a1, a2, (int)v6);
    fflush((FILE *)option_usage_fp);
    result = ferror((FILE *)option_usage_fp);
    if ( result )
    {
      if ( (struct _IO_FILE *)option_usage_fp == stderr )
        v5 = off_B7530[0];
      else
        v5 = off_B752C[0];
      sub_7CB20(a1[7], (int)off_B7534[0], (int)v5);
    }
  }
  return result;
}
