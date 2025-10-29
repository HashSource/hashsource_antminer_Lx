_BYTE *__fastcall sub_FA84(struct sockaddr *a1)
{
  int *v2; // r11
  _BYTE *v3; // r7
  int v4; // r5
  socklen_t v5; // r1
  int sa_family; // r12
  int v7; // r0
  bool v8; // zf
  int v9; // r9
  const char *v10; // r0
  _BYTE *v11; // r5
  int v12; // r4
  const char *v13; // r0
  int v15; // r8
  struct addrinfo *v16; // r4
  struct sockaddr *ai_addr; // r1
  const char *v18; // r0
  int v19; // [sp+14h] [bp-60h]
  struct addrinfo *ai; // [sp+20h] [bp-54h]
  struct addrinfo *v21; // [sp+28h] [bp-4Ch] BYREF
  struct addrinfo req; // [sp+2Ch] [bp-48h] BYREF
  __int64 v23; // [sp+4Ch] [bp-28h] BYREF
  _BYTE s2[12]; // [sp+54h] [bp-20h] BYREF
  __int64 v25; // [sp+60h] [bp-14h]
  char service[4]; // [sp+68h] [bp-Ch] BYREF

  strcpy(service, "ntp");
  v2 = _errno_location();
  v19 = *v2;
  v3 = &lib_stringbuf[128 * lib_nextbuf];
  v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v3, 0, 0x80u);
  if ( a1->sa_family == 2 )
    v5 = 16;
  else
    v5 = 28;
  lib_nextbuf = v4;
  if ( getnameinfo(a1, v5, v3, 0x80u, 0, 0, 0x18u) )
  {
    *v2 = v19;
    return sub_F6BC(&a1->sa_family);
  }
  if ( debug > 0 )
  {
    v18 = sub_F6BC(&a1->sa_family);
    sub_A770("%s reversed to %s\n", v18, v3);
  }
  sa_family = a1->sa_family;
  req.ai_flags = 0;
  v21 = 0;
  memset(&req.ai_addrlen, 0, 16);
  req.ai_family = sa_family;
  req.ai_protocol = 17;
  req.ai_socktype = 2;
  v7 = getaddrinfo(v3, service, &req, &v21);
  v8 = v7 == -2;
  if ( v7 != -2 )
    v8 = v7 == -5;
  v9 = v7;
  if ( v8 )
  {
    req.ai_flags = 34;
    v9 = getaddrinfo(v3, service, &req, &v21);
    if ( v9 != -1 )
      goto LABEL_11;
LABEL_25:
    req.ai_flags &= ~0x20u;
    v9 = getaddrinfo(v3, service, &req, &v21);
    goto LABEL_11;
  }
  if ( v7 == -1 )
    goto LABEL_25;
LABEL_11:
  if ( v9 )
    goto LABEL_12;
  ai = v21;
  if ( !v21 )
    sub_10788("socktohost.c", 87, 2, "alist != ((void *)0)");
  v15 = a1->sa_family;
  v16 = v21;
  do
  {
    while ( 1 )
    {
      v23 = 0;
      memset(s2, 0, sizeof(s2));
      ai_addr = v16->ai_addr;
      v25 = 0;
      _memcpy_chk(&v23, ai_addr);
      if ( (unsigned __int16)v23 != v15 )
        goto LABEL_18;
      if ( v15 == 2 )
        break;
      if ( !memcmp(&a1->sa_data[6], s2, 0x10u) && *(_DWORD *)&a1[1].sa_data[6] == HIDWORD(v25) )
      {
LABEL_23:
        v11 = v3;
        freeaddrinfo(ai);
        *v2 = v19;
        return v11;
      }
LABEL_18:
      v16 = v16->ai_next;
      if ( !v16 )
        goto LABEL_28;
    }
    if ( *(_DWORD *)&a1->sa_data[2] == HIDWORD(v23) )
      goto LABEL_23;
    v16 = v16->ai_next;
  }
  while ( v16 );
LABEL_28:
  freeaddrinfo(ai);
LABEL_12:
  if ( debug > 0 )
  {
    v10 = gai_strerror(v9);
    sub_A770("%s forward check lookup fail: %s\n", v3, v10);
  }
  v11 = &lib_stringbuf[128 * lib_nextbuf];
  v12 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v11, 0, 0x80u);
  lib_nextbuf = v12;
  v13 = sub_F6BC(&a1->sa_family);
  sub_F658((int)v11, 0x80u, "%s (%s)", v13, v3);
  *v2 = v19;
  return v11;
}
