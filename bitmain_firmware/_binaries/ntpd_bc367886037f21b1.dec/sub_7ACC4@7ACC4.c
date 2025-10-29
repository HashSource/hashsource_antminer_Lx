int __fastcall sub_7ACC4(const char *a1, char *to)
{
  char *i; // r3
  char *v5; // r4
  char *v6; // r10
  int v7; // t1
  int v8; // r0
  int v9; // r1
  char *v10; // r6
  char *v11; // r0
  int v13; // r0
  unsigned int v14; // [sp+8h] [bp-Ch] BYREF

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/unix/file.c", 210, 0, "file != ((void *)0)");
  if ( !to )
    sub_6E8F0((int)"./../lib/isc/unix/file.c", 211, 0, "templet != ((void *)0)");
  if ( !*to )
    return 25;
  for ( i = to; ; ++i )
  {
    v5 = i + 1;
    if ( !i[1] )
      break;
  }
  if ( to == v5 )
    return 25;
  if ( to <= i && *i == 88 )
  {
    v6 = i;
    do
    {
      v5 = v6;
      sub_7BDC0(&v14);
      *v6 = aAbcdefghijklmn[v14 % 0x3E];
      if ( v6 == to )
        break;
      v7 = (unsigned __int8)*--v6;
    }
    while ( v7 == 88 );
  }
  while ( link(a1, to) == -1 )
  {
    v8 = *_errno_location();
    if ( v8 != 17 )
      return sub_7A584(v8, "./../lib/isc/unix/file.c", 227);
    v9 = (unsigned __int8)*v5;
    if ( !*v5 )
      return 25;
    v10 = v5;
    while ( 1 )
    {
      v11 = strchr(aAbcdefghijklmn, v9);
      if ( v11 )
      {
        if ( v11[1] )
          break;
      }
      *v10++ = aAbcdefghijklmn[0];
      v9 = (unsigned __int8)*v10;
      if ( !*v10 )
        return 25;
    }
    *v10 = v11[1];
  }
  if ( unlink(a1) >= 0 )
    return 0;
  v13 = *_errno_location();
  if ( v13 == 2 )
    return 0;
  else
    return sub_7A584(v13, "./../lib/isc/unix/file.c", 243);
}
