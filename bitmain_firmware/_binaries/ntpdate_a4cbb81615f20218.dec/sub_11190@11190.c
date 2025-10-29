int __fastcall sub_11190(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r7
  int v6; // r0
  const char *v7; // r0
  int v8; // r0
  socklen_t len; // [sp+Ch] [bp-A8h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-A4h] BYREF
  char v11[128]; // [sp+2Ch] [bp-88h] BYREF

  v2 = socket(a1, 1, 0);
  if ( v2 != -1 )
  {
    v3 = v2;
    if ( a1 != 10 )
    {
LABEL_3:
      v4 = 0;
LABEL_4:
      close(v3);
      return v4;
    }
    len = 28;
    if ( getsockname(v2, &addr, &len) < 0 )
    {
      v4 = 23;
      sub_17FC8(
        isc_lctx,
        &off_31128,
        &isc_modules,
        -4,
        "retrieving the address of an IPv6 socket from the kernel failed.");
      v8 = isc_lctx;
    }
    else
    {
      if ( len == 28 )
        goto LABEL_3;
      v4 = 23;
      sub_17FC8(isc_lctx, &off_31128, &isc_modules, -4, "IPv6 structures in kernel and user space do not match.");
      v8 = isc_lctx;
    }
    sub_17FC8(v8, &off_31128, &isc_modules, -4, "IPv6 is not supported.");
    goto LABEL_4;
  }
  v6 = *_errno_location();
  if ( v6 == 93 || v6 == 97 || v6 == 22 )
    return 23;
  v4 = 34;
  sub_129E0(v6, v11, 128);
  v7 = (const char *)sub_11084((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_1508C("./../lib/isc/unix/net.c", 144, "socket() %s: %s", v7, v11);
  return v4;
}
