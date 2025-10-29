int __fastcall sub_39F68(const char *a1, speed_t a2, __int16 a3)
{
  int v6; // r4
  int *v7; // r6
  int *v9; // r0
  int v10; // r10
  int *v11; // r9
  int *v12; // r0
  int v13; // r6
  int *v14; // r5
  int v15; // r0
  _BYTE buf[128]; // [sp+4h] [bp-84h] BYREF

  v6 = open64(a1, 2306);
  if ( !v6 )
  {
    v6 = dup(0);
    v9 = _errno_location();
    v10 = *v9;
    v11 = v9;
    close(0);
    *v11 = v10;
  }
  if ( v6 < 0 )
  {
    v12 = _errno_location();
    v6 = -1;
    v13 = *v12;
    v14 = v12;
    sub_64A18(3, "refclock_open %s: %m", a1);
    *v14 = v13;
  }
  else if ( sub_39D7C(v6, a2, a3) )
  {
    v7 = _errno_location();
    do
    {
      while ( read(v6, buf, 0x80u) > 0 )
        ;
    }
    while ( *v7 == 4 );
  }
  else
  {
    v15 = v6;
    v6 = -1;
    close(v15);
  }
  return v6;
}
