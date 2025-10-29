int __fastcall sub_7A9F8(const char *a1, _DWORD *a2)
{
  int v2; // r2
  int *v6; // r0
  struct timeval tvp; // [sp+4h] [bp-14h] BYREF
  __time_t v8; // [sp+Ch] [bp-Ch]
  __suseconds_t v9; // [sp+10h] [bp-8h]

  v2 = (int)a2;
  if ( a2 )
    v2 = 1;
  if ( !a1 )
    v2 = 0;
  if ( !v2 )
    sub_6E8F0((int)"./../lib/isc/unix/file.c", 125, 0, "file != ((void *)0) && itime != ((void *)0)");
  v8 = sub_763E4(a2);
  tvp.tv_sec = v8;
  if ( v8 < 0 )
    return 41;
  v9 = sub_7654C((int)a2) / 0x3E8;
  tvp.tv_usec = v9;
  if ( utimes(a1, &tvp) >= 0 )
    return 0;
  v6 = _errno_location();
  return sub_7A584(*v6, "./../lib/isc/unix/file.c", 156);
}
