int __fastcall sub_15ED4(int a1, unsigned __int16 *a2)
{
  int result; // r0
  int v4; // r12
  int v6; // r3
  int v7; // r0
  int v8; // r4
  const char *v9; // r7
  const char *v10; // r0
  int v11; // r0
  int v12; // r4
  const char *v13; // r7
  const char *v14; // r0
  int v15; // [sp+Ch] [bp-10h] BYREF
  int optval; // [sp+10h] [bp-Ch] BYREF

  result = 2092;
  v4 = *a2;
  v6 = *(unsigned __int16 *)(a1 + 24);
  v15 = 0;
  optval = 0;
  if ( v6 != v4 )
    sub_6E8F0("ntp_io.c", 2398, 0, "((maddr)->sa.sa_family) == ((&iface->sin)->sa.sa_family)");
  if ( v6 == 2 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 12), 0, 34, &v15, 4u);
    if ( result )
    {
      v11 = a1 + 24;
      v12 = *(_DWORD *)(a1 + 12);
      v13 = (const char *)sub_6BF44(v11);
      v14 = (const char *)sub_6BF44(a2);
      return sub_64A18(
               3,
               "setsockopt IP_MULTICAST_LOOP failed: %m on socket %d, addr %s for multicast address %s",
               v12,
               v13,
               v14);
    }
  }
  else if ( v6 == 10 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 12), 41, 19, &optval, 4u);
    if ( result )
    {
      v7 = a1 + 24;
      v8 = *(_DWORD *)(a1 + 12);
      v9 = (const char *)sub_6BF44(v7);
      v10 = (const char *)sub_6BF44(a2);
      return sub_64A18(
               3,
               "setsockopt IPV6_MULTICAST_LOOP failed: %m on socket %d, addr %s for multicast address %s",
               v8,
               v9,
               v10);
    }
  }
  return result;
}
