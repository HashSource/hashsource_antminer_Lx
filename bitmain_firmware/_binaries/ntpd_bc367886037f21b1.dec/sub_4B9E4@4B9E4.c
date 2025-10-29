int __fastcall sub_4B9E4(unsigned __int8 *a1, int a2)
{
  const char *v3; // r10
  unsigned int v4; // r4
  int v5; // r11
  int v6; // r7
  int v7; // r9
  int v8; // r6
  size_t v9; // r8
  const unsigned __int16 **v10; // r0
  int v11; // r1
  int v12; // t1
  const unsigned __int16 *v13; // r0
  int v14; // r3
  char *v15; // r3
  const char *v16; // r11
  unsigned int v17; // r3
  unsigned int v18; // r1
  int v20; // [sp+10h] [bp-64h]
  _BYTE v22[4]; // [sp+18h] [bp-5Ch] BYREF
  char v23[88]; // [sp+1Ch] [bp-58h] BYREF

  sub_49E3C((int)a1, 1, "Refclock: Telephone JJY");
  *(_BYTE *)a2 = 100;
  *(_BYTE *)(a2 + 192) = 1;
  *(_DWORD *)(a2 + 188) = &off_B5F54;
  *(_BYTE *)(a2 + 404) = 1;
  *(_DWORD *)(a2 + 4) = 11;
  *(_WORD *)(a2 + 8) = 32;
  *(_DWORD *)(a2 + 500) = 0;
  v3 = (const char *)sys_phone[0];
  if ( !sys_phone[0] )
  {
    v7 = 1;
    sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf must be specified.");
    *(_BYTE *)(a2 + 10) = 1;
    return v7;
  }
  v4 = dword_B821C;
  if ( dword_B821C )
  {
    v7 = 1;
    sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be only one.");
    *(_BYTE *)(a2 + 10) = 1;
    return v7;
  }
  v5 = sys_phone[0] - 1;
  v6 = 1 - sys_phone[0];
  v7 = 0;
  v8 = 0;
  v20 = 0;
  v9 = strlen((const char *)sys_phone[0]);
  while ( v6 + v5 < v9 )
  {
    while ( 1 )
    {
      v10 = _ctype_b_loc();
      v12 = *(unsigned __int8 *)++v5;
      v11 = v12;
      v13 = *v10;
      v14 = v13[v12] & 0x800;
      if ( (v13[v12] & 0x800) == 0 )
        break;
      ++v8;
      if ( v4 <= 2 )
      {
        v15 = &v23[v4++ + 84];
        *(v15 - 88) = v11;
      }
      if ( v6 + v5 >= v9 )
        goto LABEL_9;
    }
    if ( v11 == 44 )
    {
      if ( v7 == 1 )
      {
        sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be zero or one comma.");
        *(_BYTE *)(a2 + 10) = 1;
        return v7;
      }
      v4 = v14;
      v7 = 1;
      v20 = v5 - (_DWORD)v3;
    }
    else if ( v11 != 45 )
    {
      sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone in the ntpd.conf should be a number or a hyphen.");
      v7 = 1;
      *(_BYTE *)(a2 + 10) = 1;
      return v7;
    }
  }
LABEL_9:
  v22[v4] = 0;
  if ( v7 == 1 && (v20 != 1 || *v3 != 48) )
  {
    sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : Getting an outside line should be '0,'.");
    *(_BYTE *)(a2 + 10) = 1;
    return v7;
  }
  if ( (unsigned int)(v8 - v20 - 6) > 4 )
  {
    sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : Number of digits should be 6 to 10.", v3);
LABEL_37:
    v7 = 1;
    *(_BYTE *)(a2 + 10) = 1;
    return v7;
  }
  v16 = &v22[v20];
  if ( !strncmp(&v22[v20], "00", 2u)
    || !strncmp(v16, "10", 2u)
    || !strncmp(v16, "11", 2u)
    || !strncmp(v16, "12", 2u)
    || !strncmp(v16, "171", 3u)
    || !strncmp(v16, "177", 3u)
    || v22[0] == 48 && v22[2] == 48 )
  {
    sub_64A18(3, "refclock_jjy.c : jjy_start_telephone : phone=%s : First 2 or 3 digits are not allowed.", v3);
    goto LABEL_37;
  }
  sub_6BCB0(v23, 80, "phone=%s", v3);
  sub_49E3C((int)a1, 1, v23);
  v17 = a1[65];
  if ( v17 > 7 )
    return 0;
  v18 = a1[94];
  a1[65] = 8;
  if ( v18 <= 7 )
    a1[94] = 8;
  v7 = 0;
  if ( a1[66] <= 7u )
    a1[66] = 8;
  sub_6BCB0(v23, 80, "minpoll=%d -> %d", v17, 8);
  sub_49E3C((int)a1, 1, v23);
  return v7;
}
