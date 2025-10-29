_BYTE *__fastcall sub_D118(int *a1, int a2)
{
  _BYTE *v4; // r6
  int v5; // r4
  int v6; // r1
  unsigned int v7; // r2
  bool v8; // zf
  unsigned int v9; // r8
  struct tm *v10; // r3
  __int64 v12; // [sp+28h] [bp-20h] BYREF
  __int64 v13; // [sp+30h] [bp-18h] BYREF
  unsigned __int16 v14; // [sp+38h] [bp-10h] BYREF
  unsigned __int8 v15; // [sp+3Ch] [bp-Ch]
  unsigned __int8 v16; // [sp+3Dh] [bp-Bh]
  unsigned __int8 v17; // [sp+3Eh] [bp-Ah]
  unsigned __int8 v18; // [sp+3Fh] [bp-9h]
  unsigned __int8 v19; // [sp+40h] [bp-8h]
  unsigned __int8 v20; // [sp+41h] [bp-7h]

  v4 = &lib_stringbuf[128 * lib_nextbuf];
  v5 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v4, 0, 0x80u);
  v6 = *a1;
  v7 = a1[1];
  v8 = *a1 == 0;
  lib_nextbuf = v5;
  if ( v8 && !v7 )
  {
    sub_10410(v4, "(no time)", 128);
  }
  else
  {
    v9 = v7 / 0x418937;
    if ( v7 / 0x418937 == 1000 )
    {
      ++v6;
      v9 = 0;
    }
    sub_B17C((time_t)&v12, v6, 0);
    v13 = v12;
    v10 = sub_CF68(&v13, a2);
    if ( v10 )
    {
      sub_F658(
        v4,
        128,
        "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
        *a1,
        a1[1],
        daynames[v10->tm_wday],
        months[v10->tm_mon],
        v10->tm_mday,
        v10->tm_year + 1900,
        v10->tm_hour,
        v10->tm_min,
        v10->tm_sec,
        v9);
    }
    else
    {
      sub_B904(&v14, (int *)&v13);
      if ( a2 )
        sub_F658(
          v4,
          128,
          "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]",
          *a1,
          a1[1],
          daynames[v20],
          months[v15 - 1],
          v16,
          v14,
          v17,
          v18,
          v19,
          v9);
      else
        sub_F658(
          v4,
          128,
          "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
          *a1,
          a1[1],
          daynames[v20],
          months[v15 - 1],
          v16,
          v14,
          v17,
          v18,
          v19,
          v9);
    }
  }
  return v4;
}
