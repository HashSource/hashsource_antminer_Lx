int __fastcall sub_15310(struct sockaddr *a1, int a2, int a3, int a4)
{
  int sa_family; // r0
  int *v9; // r6
  unsigned int v10; // r5
  const char *v11; // r7
  const char *v12; // r0
  bool v13; // cc
  unsigned int v14; // r5
  int v16; // r0
  int v17; // r11
  socklen_t v18; // r2
  int v19; // r6
  const char *v20; // r6
  const char *v21; // r0
  const char *v22; // r0
  int *v23; // r6
  const char *v24; // r0
  int *v25; // r11
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r6
  const char *v29; // r0
  int v30; // r3
  unsigned __int16 v31; // r1
  int v32; // r2
  int v33; // r2
  const char *v34; // r2
  int v35; // r0
  int v36; // [sp+14h] [bp-10h] BYREF
  int optval; // [sp+18h] [bp-Ch] BYREF

  sa_family = a1->sa_family;
  v36 = 1;
  optval = 0;
  if ( sa_family == 10 && !ipv6_works )
    return -1;
  if ( socket(sa_family, 2, 0) == -1 )
  {
    v9 = _errno_location();
    v10 = *v9;
    if ( a1->sa_family == 10 )
      v11 = "6";
    else
      v11 = byte_97B44;
    v12 = (const char *)sub_6BF44(a1);
    sub_64A18(3, "socket(AF_INET%s, SOCK_DGRAM, 0) failed on address %s: %m", v11, v12);
    v13 = v10 > 0x5D;
    if ( v10 != 93 )
      v13 = v10 - 96 > 1;
    if ( v13 )
    {
      *v9 = v10;
      sub_64A18(
        3,
        "unexpected socket() error %m code %d (not EPROTONOSUPPORT nor EAFNOSUPPORT nor EPFNOSUPPORT) - exiting",
        v10);
      exit(1);
    }
    return -1;
  }
  v16 = sub_6BD14();
  v14 = v16;
  if ( !a3 )
  {
    if ( !setsockopt(v16, 1, 2, &v36, 4u) )
      goto LABEL_13;
    v20 = "on";
    goto LABEL_28;
  }
  if ( setsockopt(v16, 1, 2, &optval, 4u) )
  {
    v20 = "off";
LABEL_28:
    v21 = (const char *)sub_6BF44(a1);
    sub_64A18(3, "setsockopt SO_REUSEADDR %s fails for address %s: %m", v20, v21);
    close(v14);
    return -1;
  }
LABEL_13:
  v17 = a1->sa_family;
  if ( v17 == 2 )
  {
    if ( setsockopt(v14, 0, 1, &qos, 4u) )
    {
      v25 = qos;
      v26 = (const char *)sub_6BF44(a1);
      sub_64A18(3, "setsockopt IP_TOS (%02x) fails on address %s: %m", v25, v26);
    }
    if ( a2 )
      sub_13E34(a4, v14, &a1->sa_family);
    v17 = a1->sa_family;
  }
  if ( v17 == 10 )
  {
    if ( setsockopt(v14, 41, 67, &qos, 4u) )
    {
      v23 = qos;
      v24 = (const char *)sub_6BF44(a1);
      sub_64A18(3, "setsockopt IPV6_TCLASS (%02x) fails on address %s: %m", v23, v24);
    }
    if ( !sub_73CC4() && setsockopt(v14, 41, 26, &v36, 4u) )
    {
      v27 = (const char *)sub_6BF44(a1);
      sub_64A18(3, "setsockopt IPV6_V6ONLY on fails on address %s: %m", v27);
    }
    v17 = a1->sa_family;
  }
  if ( !sub_13B60(&a1->sa_family) )
  {
    sub_13EE8(v17, 1);
    v17 = a1->sa_family;
  }
  if ( v17 == 2 )
    v18 = 16;
  else
    v18 = 28;
  v19 = bind(v14, a1, v18);
  if ( !sub_13B60(&a1->sa_family) )
    sub_13EE8(a1->sa_family, 0);
  if ( v19 < 0 )
  {
    if ( !a3 )
    {
      if ( a1->sa_family == 10 )
        v28 = "6";
      else
        v28 = byte_97B44;
      v29 = (const char *)sub_6BF44(a1);
      v30 = a1->sa_family;
      v31 = __rev16(*(unsigned __int16 *)a1->sa_data);
      if ( v30 == 2 )
        v32 = *(_DWORD *)&a1->sa_data[2];
      else
        v32 = (unsigned __int8)a1->sa_data[6];
      if ( v30 == 2 )
        v33 = v32 & 0xF0;
      else
        v33 = v32 - 255;
      if ( v30 == 2 )
        v33 -= 224;
      if ( v33 )
        v34 = byte_97B44;
      else
        v34 = " (multicast)";
      sub_64A18(3, "bind(%d) AF_INET%s %s#%d%s flags 0x%x failed: %m", v14, v28, v29, v31, v34, *(_DWORD *)(a4 + 144));
    }
    v35 = v14;
    v14 = -1;
    close(v35);
  }
  else
  {
    if ( setsockopt(v14, 1, 35, &v36, 4u) )
    {
      v22 = (const char *)sub_6BF44(a1);
      sub_64A18(7, "setsockopt SO_TIMESTAMPNS on fails on address %s: %m", v22);
    }
    sub_6BEC8(v14);
    sub_15288(v14, 0);
  }
  return v14;
}
