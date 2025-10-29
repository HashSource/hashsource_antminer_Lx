void __fastcall sub_D018(int a1, int a2, _DWORD *a3, const char *a4, int a5, int a6, int a7)
{
  int v9; // r1
  int v10; // r8
  const char *v12; // r0
  const char *v13; // r4
  const char *v14; // r0
  __int64 v15; // [sp+8h] [bp-20h] BYREF
  int v16; // [sp+10h] [bp-18h]
  __int64 v17; // [sp+14h] [bp-14h]
  __int64 v18; // [sp+1Ch] [bp-Ch]

  if ( a1 )
  {
    v12 = gai_strerror(a1);
    sub_64A18(3, "giving up resolving trap host %s: %s (%d)", a4, v12, a1);
  }
  else
  {
    if ( *(_DWORD *)(a7 + 16) > 0x1Cu )
      sub_6E8F0("ntp_config.c", 3582, 2, "sizeof(peeraddr) >= res->ai_addrlen");
    v9 = *(_DWORD *)(a7 + 20);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    _memcpy_chk(&v15, v9);
    if ( !a3[7] || (v10 = sub_176E8(a3)) == 0 )
    {
      if ( (unsigned __int16)v15 == 2 )
        v10 = any_interface;
      else
        v10 = any6_interface;
    }
    if ( !sub_23B44(&v15, v10, 0, 4) )
    {
      v13 = (const char *)sub_18D68(v10);
      v14 = (const char *)sub_6BF44(&v15);
      sub_64A18(3, "set trap %s -> %s failed.", v13, v14);
    }
  }
  free(a3);
}
