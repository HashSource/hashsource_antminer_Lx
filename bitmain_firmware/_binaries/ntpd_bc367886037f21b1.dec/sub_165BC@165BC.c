void __fastcall sub_165BC(_DWORD *s2)
{
  int v2; // r6
  int v3; // r3
  int v4; // r3
  _DWORD *v5; // r4
  int v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int *v13; // r9
  int i; // r4
  _BOOL4 v15; // r3
  _DWORD *v16; // r0
  int v17; // r12
  int v18; // r0
  int v19; // r6
  int v20; // r0
  unsigned int v21; // r4
  const char *v22; // r0
  const char *v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r4
  const char *v27; // r0
  unsigned int v28; // [sp+10h] [bp-2Ch]
  const char *v29; // [sp+10h] [bp-2Ch]
  const char *v30; // [sp+14h] [bp-28h]
  __int64 v31; // [sp+18h] [bp-24h] BYREF
  _DWORD optval[5]; // [sp+20h] [bp-1Ch] BYREF

  v2 = *(unsigned __int16 *)s2;
  if ( v2 == 2 )
    v3 = s2[1];
  else
    v3 = *((unsigned __int8 *)s2 + 8);
  if ( v2 == 2 )
    v4 = (v3 & 0xF0) - 224;
  else
    v4 = v3 - 255;
  if ( v4 )
  {
    v23 = (const char *)sub_6BF44(s2);
    sub_64A18(3, "invalid multicast address %s", v23);
    return;
  }
LABEL_8:
  while ( 1 )
  {
    v5 = (_DWORD *)sub_14FEC(s2);
    if ( !v5 )
      break;
    while ( 1 )
    {
      v31 = 0;
      if ( !sub_13BF0(s2) )
        break;
      if ( v2 == 2 )
      {
        v17 = v5[7];
        v18 = v5[3];
        LODWORD(v31) = s2[1];
        HIDWORD(v31) = v17;
        if ( setsockopt(v18, 0, 36, &v31, 8u) )
        {
          v19 = v5[3];
          v20 = sub_6BF44(v5 + 6);
          v28 = bswap32(v5[7]);
          v21 = bswap32(s2[1]);
          v30 = (const char *)v20;
          v22 = (const char *)sub_6BF44(s2);
          sub_64A18(
            3,
            "setsockopt IP_DROP_MEMBERSHIP failed: %m on socket %d, addr %s for %x / %x (%s)",
            v19,
            v30,
            v21,
            v28,
            v22);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      else if ( v2 == 10 )
      {
        v6 = v5[3];
        v7 = s2[2];
        v8 = s2[3];
        v9 = s2[4];
        v10 = s2[5];
        optval[4] = v5[44];
        optval[0] = v7;
        optval[1] = v8;
        optval[2] = v9;
        optval[3] = v10;
        if ( setsockopt(v6, 41, 21, optval, 0x14u) )
        {
          v24 = v5[3];
          v25 = sub_6BF44(v5 + 6);
          v26 = v5[44];
          v29 = (const char *)v25;
          v27 = (const char *)sub_6BF44(s2);
          sub_64A18(3, "setsockopt IPV6_LEAVE_GROUP failure: %m on socket %d, addr %s for %d (%s)", v24, v29, v26, v27);
          v2 = *(unsigned __int16 *)s2;
          goto LABEL_8;
        }
      }
      v11 = v5[39] - 1;
      v5[39] = v11;
      if ( !v11 )
        v5[36] &= ~0x40u;
      v12 = sub_14FEC(s2);
      v2 = *(unsigned __int16 *)s2;
      v5 = (_DWORD *)v12;
      if ( !v12 )
        goto LABEL_16;
    }
  }
LABEL_16:
  v13 = &remoteaddr_list;
  for ( i = remoteaddr_list; ; i = *(_DWORD *)i )
  {
    if ( *(unsigned __int16 *)(i + 4) != v2 )
      goto LABEL_17;
    if ( v2 == 2 )
    {
      v15 = s2[1] != *(_DWORD *)(i + 8);
    }
    else
    {
      if ( memcmp(s2 + 2, (const void *)(i + 12), 0x10u) )
        goto LABEL_17;
      v15 = s2[6] != *(_DWORD *)(i + 28);
    }
    if ( !v15 )
      break;
LABEL_17:
    if ( !*(_DWORD *)i )
      return;
    v13 = (int *)i;
  }
  v16 = (_DWORD *)*v13;
  *v13 = *(_DWORD *)*v13;
  free(v16);
}
