int __fastcall sub_71780(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v6; // r0
  char *v7; // r8
  _DWORD *v8; // r0
  void *v10; // r3
  int v11; // r2
  void *ptr; // [sp+4h] [bp-10h] BYREF
  int v13; // [sp+8h] [bp-Ch] BYREF

  v13 = 0;
  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/log.c", 273, 0, "mctx != ((void *)0)");
  if ( !a2 || *a2 )
    sub_6E8F0((int)"./../lib/isc/log.c", 274, 0, "lctxp != ((void *)0) && *lctxp == ((void *)0)");
  if ( a3 && *a3 )
    sub_6E8F0((int)"./../lib/isc/log.c", 275, 0, "lcfgp == ((void *)0) || *lcfgp == ((void *)0)");
  v6 = sub_637E4(0, 0x2040u, 0, 0);
  ptr = v6;
  if ( !v6 )
    return 1;
  v6[1] = a1;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[2062] = 0;
  v6[2063] = 0;
  v7 = (char *)sub_781A0(v6 + 7, "./../lib/isc/log.c", 288);
  v8 = ptr;
  if ( v7 )
  {
    free(ptr);
  }
  else
  {
    *(_DWORD *)ptr = 1281586296;
    sub_70E6C(v8, (int *)&isc_categories);
    sub_71084(ptr, (int *)&isc_modules);
    v7 = (char *)sub_71538(ptr, (void **)&v13);
    if ( v7 || (v7 = sub_7010C(v13)) != 0 )
    {
      if ( v13 )
        sub_708EC((_DWORD **)&v13);
      if ( ptr )
        sub_70CF4(&ptr);
    }
    else
    {
      v10 = ptr;
      v11 = v13;
      *((_DWORD *)ptr + 13) = v13;
      *a2 = v10;
      if ( a3 )
        *a3 = v11;
    }
  }
  return (int)v7;
}
