int __fastcall sub_71538(_DWORD *a1, void **a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  int v6; // lr
  _DWORD *v8; // [sp+Ch] [bp-2Ch] BYREF
  struct _IO_FILE *v9; // [sp+10h] [bp-28h] BYREF
  int v10; // [sp+14h] [bp-24h]
  int v11; // [sp+18h] [bp-20h]
  double v12; // [sp+20h] [bp-18h]

  if ( !a2 || *a2 )
    sub_6E8F0((int)"./../lib/isc/log.c", 337, 0, "lcfgp != ((void *)0) && *lcfgp == ((void *)0)");
  if ( !a1 || *a1 != 1281586296 )
    sub_6E8F0(
      (int)"./../lib/isc/log.c",
      338,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  v4 = sub_637E4(*a2, 0x28u, (size_t)*a2, (int)*a2);
  v8 = v4;
  if ( !v4 )
    return 1;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[2] = 0;
  *v4 = 1281582695;
  v4[3] = 0;
  v4[1] = a1;
  v4[7] = -1;
  v9 = (struct _IO_FILE *)&off_18;
  v5 = sub_7129C(v4, "default_syslog", 2, -1, (int *)&v9, 0);
  if ( v5 )
    goto LABEL_13;
  v10 = 0;
  v12 = 0.0;
  v9 = stderr;
  v11 = -2;
  v5 = sub_7129C(v8, "default_stderr", 4, -1, (int *)&v9, 1);
  if ( v5 )
    goto LABEL_13;
  v6 = v8[2];
  v9 = stderr;
  dword_106250 = v6;
  v10 = 0;
  v11 = -2;
  v12 = 0.0;
  v5 = sub_7129C(v8, "default_debug", 4, 0, (int *)&v9, 1);
  if ( v5 || (v5 = sub_7129C(v8, "null", 1, 0, 0, 0)) != 0 )
  {
LABEL_13:
    if ( v8 )
      sub_708EC(&v8);
  }
  else
  {
    *a2 = v8;
  }
  return v5;
}
