int __fastcall sub_6F49C(int a1)
{
  int v2; // r6
  unsigned __int16 *v3; // r3
  int v4; // r7
  _QWORD *v5; // r8
  size_t v6; // r0
  size_t v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r7
  char *v15; // r8
  int v16; // r0
  char *v17; // r9
  _BYTE *v18; // r11
  unsigned __int8 v19; // r0
  int v20; // r1
  int v21; // r3
  char v22; // r2
  int v23; // [sp+24h] [bp-60h] BYREF
  int v24; // [sp+28h] [bp-5Ch] BYREF
  char v25; // [sp+2Ch] [bp-58h] BYREF
  int v26; // [sp+30h] [bp-54h] BYREF
  _BYTE v27[16]; // [sp+34h] [bp-50h] BYREF
  char v28[20]; // [sp+44h] [bp-40h] BYREF
  char v29[32]; // [sp+58h] [bp-2Ch] BYREF
  char v30; // [sp+78h] [bp-Ch] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1229343047 )
    sub_6E8F0(
      (int)"./../lib/isc/unix/ifiter_getifaddrs.c",
      145,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 4) )
      sub_6E8F0((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 163, 2, "ifa->ifa_name != ((void *)0)");
    if ( (*(_DWORD *)(v2 + 8) & 0x40) != 0 )
    {
      v3 = *(unsigned __int16 **)(v2 + 12);
      if ( v3 )
      {
        v4 = *v3;
        if ( (v4 & 0xFFFFFFF7) == 2 )
        {
          if ( v4 == 10 )
            dword_106240 = 1;
          v5 = (_QWORD *)(a1 + 24);
          memset((void *)(a1 + 24), 0, 0x8Cu);
          v6 = strlen(*(const char **)(v2 + 4));
          *v5 = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_QWORD *)(a1 + 40) = 0;
          *(_QWORD *)(a1 + 48) = 0;
          if ( v6 >= 0x1F )
            v7 = 31;
          else
            v7 = v6;
          memcpy((void *)(a1 + 24), *(const void **)(v2 + 4), v7);
          v8 = *(_DWORD *)(v2 + 8);
          *(_DWORD *)(a1 + 156) = 0;
          *(_DWORD *)(a1 + 56) = v4;
          if ( (v8 & 1) != 0 )
            *(_DWORD *)(a1 + 156) = 1;
          if ( (v8 & 0x10) != 0 )
            *(_DWORD *)(a1 + 156) |= 2u;
          if ( (v8 & 8) != 0 )
            *(_DWORD *)(a1 + 156) |= 4u;
          if ( (v8 & 2) != 0 )
            *(_DWORD *)(a1 + 156) |= 8u;
          v9 = *(_DWORD *)(v2 + 12);
          if ( (v8 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 156) |= 0x10u;
          sub_6F344(v4, a1 + 60, v9, *(_DWORD *)(v2 + 4));
          v10 = *(_DWORD *)(v2 + 16);
          if ( v10 )
            sub_6F344(v4, a1 + 84, v10, *(_DWORD *)(v2 + 4));
          v11 = *(_DWORD *)(v2 + 20);
          if ( !v11 )
            goto LABEL_29;
          v12 = *(_DWORD *)(a1 + 156);
          if ( (v12 & 2) != 0 )
          {
            sub_6F344(v4, a1 + 132, v11, *(_DWORD *)(v2 + 4));
            v11 = *(_DWORD *)(v2 + 20);
            if ( !v11 )
            {
LABEL_29:
              v13 = 0;
              *(_DWORD *)(a1 + 160) = if_nametoindex(a1 + 24);
              return v13;
            }
            v12 = *(_DWORD *)(a1 + 156);
          }
          if ( (v12 & 8) != 0 )
            sub_6F344(v4, a1 + 108, v11, *(_DWORD *)(v2 + 4));
          goto LABEL_29;
        }
      }
    }
    return 36;
  }
  v13 = *(_DWORD *)(a1 + 236);
  if ( v13 )
    return v13;
  if ( !*(_DWORD *)(a1 + 168) )
  {
    v13 = 25;
    sub_72F00(isc_lctx, &off_B6DC4, &off_B6D9C, -4, "/proc/net/if_inet6:iter->proc == NULL");
    return v13;
  }
  v15 = v29;
  v16 = sscanf((const char *)(a1 + 172), "%32[a-f0-9] %x %x %x %x %16s\n", v29, &v23, &v24, &v25, &v26, v28);
  if ( v16 != 6 )
  {
    v13 = 25;
    sub_72F00(isc_lctx, &off_B6DC4, &off_B6D9C, -4, "/proc/net/if_inet6:sscanf() -> %d (expected 6)", v16);
    return v13;
  }
  if ( strlen(v29) != 32 )
  {
    v13 = 25;
    sub_72F00(isc_lctx, &off_B6DC4, &off_B6D9C, -4, "/proc/net/if_inet6:strlen(%s) != 32", v29);
    return v13;
  }
  if ( (v26 & 0x40) != 0 )
    return 36;
  v17 = v27;
  v18 = v27;
  do
  {
    v19 = (unsigned __int8)strchr("0123456789abcdef", (unsigned __int8)*v15);
    v20 = (unsigned __int8)v15[1];
    v15 += 2;
    *v18++ = ((unsigned __int8)strchr("0123456789abcdef", v20) - (unsigned __int8)"0123456789abcdef")
           | (16 * (v19 - (unsigned __int8)"0123456789abcdef"));
  }
  while ( &v30 != v15 );
  *(_DWORD *)(a1 + 56) = 10;
  *(_DWORD *)(a1 + 156) = 1;
  sub_74754(a1 + 60, v27);
  *(_DWORD *)(a1 + 160) = v23;
  if ( sub_74B3C(a1 + 60) )
    sub_74804(a1 + 60);
  v21 = v24;
  while ( v21 > 8 )
  {
    *v17++ = -1;
    v21 -= 8;
    if ( v28 == v17 )
      goto LABEL_47;
  }
  do
  {
    v22 = 8 - v21;
    v21 = 0;
    *v17++ = 255 << v22;
  }
  while ( v28 != v17 );
LABEL_47:
  v24 = v21;
  sub_74754(a1 + 84, v27);
  strncpy((char *)(a1 + 24), v28, 0x20u);
  return v13;
}
