char *__fastcall sub_1E4A0(unsigned __int16 *a1, int a2)
{
  int v4; // r5
  char *v5; // r3
  unsigned __int16 *i; // r4
  int v8; // r2
  int v9; // r0
  char *v10; // [sp+4h] [bp-10h]

  v4 = 0;
  v5 = (char *)&unk_10719C;
  for ( i = (unsigned __int16 *)&ctl_traps; ; i += 26 )
  {
    if ( (i[25] & 1) == 0 )
      goto LABEL_4;
    if ( a1[1] != i[1] )
      goto LABEL_4;
    v8 = *i;
    if ( v8 != *a1 )
      goto LABEL_4;
    if ( v8 == 2 )
    {
      if ( *((_DWORD *)a1 + 1) != *((_DWORD *)i + 1) )
        goto LABEL_4;
    }
    else
    {
      v10 = v5;
      v9 = memcmp(a1 + 4, &v5[52 * v4], 0x10u);
      v5 = v10;
      if ( v9 || *((_DWORD *)a1 + 6) != *((_DWORD *)i + 6) )
        goto LABEL_4;
    }
    if ( *((_DWORD *)i + 7) == a2 )
      break;
LABEL_4:
    if ( ++v4 == 3 )
      return 0;
  }
  return (char *)&ctl_traps + 52 * v4;
}
