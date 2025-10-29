int __fastcall sub_27FF4(const char *a1, signed int a2, int a3)
{
  _QWORD dest[2]; // [sp+10h] [bp-1Ch] BYREF
  int v7; // [sp+20h] [bp-Ch]
  int i; // [sp+24h] [bp-8h]

  v7 = 0;
  i = 0;
  memset(dest, 0, sizeof(dest));
  if ( !a1 || a2 <= 0 || a2 > 16 )
    return -2147483646;
  strncpy((char *)dest, a1, a2);
  if ( a3 )
  {
    if ( a3 == 1 || a3 == 2 )
    {
      for ( i = 0; (&old_cmds)[4 * i]; ++i )
      {
        if ( !strcmp((const char *)dest, (&old_cmds)[4 * i]) )
          return i;
      }
    }
  }
  else
  {
    for ( i = 0; new_cmds[3 * i]; ++i )
    {
      if ( !strcmp((const char *)dest, new_cmds[3 * i]) )
        return i;
    }
  }
  return -2147483645;
}
