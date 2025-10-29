int __fastcall sub_17774(void (__fastcall *a1)(int, unsigned __int16 **), int a2)
{
  unsigned int v4; // r12
  int v5; // r10
  int v6; // r0
  int v7; // r0
  unsigned __int16 *v8; // r4
  unsigned __int16 *v9; // r6
  int *v10; // r1
  int *v11; // r3
  int *v12; // r3
  int *v13; // r3
  int v14; // r1
  unsigned __int16 *v15; // r3
  int *v16; // r0
  int *v17; // r3
  int *v18; // r2
  const char *v19; // r0
  const char *v20; // r0
  int v21; // r0
  _DWORD *v22; // r6
  int v23; // r3
  int v24; // r4
  const char *v25; // r8
  const char *v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r10
  int v30; // r3
  const char *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r9
  int v34; // r7
  int v35; // r0
  const char *v36; // r0
  _DWORD *v37; // r0
  int v38; // r9
  const char *v39; // r0
  const char *v40; // r0
  int v41; // [sp+18h] [bp-1A4h]
  int v43; // [sp+28h] [bp-194h]
  int v44; // [sp+30h] [bp-18Ch] BYREF
  unsigned __int16 *v45; // [sp+34h] [bp-188h] BYREF
  char v46; // [sp+38h] [bp-184h]
  unsigned __int16 v47; // [sp+3Ch] [bp-180h] BYREF
  _WORD v48[13]; // [sp+3Eh] [bp-17Eh] BYREF
  char dest[32]; // [sp+58h] [bp-164h] BYREF
  int v50; // [sp+78h] [bp-144h]
  int v51; // [sp+7Ch] [bp-140h]
  unsigned int v52; // [sp+80h] [bp-13Ch]
  int v53; // [sp+84h] [bp-138h]
  int v54; // [sp+88h] [bp-134h]
  int v55; // [sp+8Ch] [bp-130h]
  int v56; // [sp+90h] [bp-12Ch]
  int v57; // [sp+98h] [bp-124h]
  int v58; // [sp+9Ch] [bp-120h]
  int v59; // [sp+A0h] [bp-11Ch]
  int v60; // [sp+A4h] [bp-118h]
  int v61; // [sp+B0h] [bp-10Ch]
  int v62; // [sp+DCh] [bp-E0h]
  int v63; // [sp+E0h] [bp-DCh]
  _DWORD s[48]; // [sp+E4h] [bp-D8h] BYREF
  __int128 v65; // [sp+1A4h] [bp-18h]

  v44 = 0;
  if ( sub_6F964(-1, &v44) )
    return 0;
  word_B8240[0] ^= 1u;
  if ( !sub_6FC7C(v44) )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( sub_6FBF0(v44, dest) )
        goto LABEL_27;
      if ( (v51 & 0xFFFFFFF7) == 2 )
        break;
LABEL_26:
      if ( sub_6FD90(v44) )
        goto LABEL_27;
    }
    if ( v51 == 2 )
    {
      if ( !ipv4_works )
        goto LABEL_26;
    }
    else if ( v51 == 10 && !ipv6_works )
    {
      goto LABEL_26;
    }
    memset(s, 0, sizeof(s));
    *(_QWORD *)&v65 = 0;
    *((_QWORD *)&v65 + 1) = 0x100000000000000LL;
    HIWORD(s[35]) = word_B8240[0];
    s[3] = -1;
    s[4] = -1;
    sub_6D12C(&s[27]);
    HIWORD(s[13]) = 31488;
    HIWORD(s[6]) = 31488;
    LOWORD(s[35]) = v50;
    s[44] = v63;
    LOWORD(s[13]) = v50;
    LOWORD(s[6]) = v50;
    LOWORD(s[20]) = v50;
    HIWORD(s[20]) = 31488;
    if ( (unsigned __int16)v50 == 2 )
    {
      s[7] = v52;
      v27 = (16 * (_WORD)v62) & 0x200 | v62 & 0x17;
      s[14] = v57;
      if ( (v62 & 8) != 0 )
      {
        v4 = s[36] | 8 | v27;
        s[36] = v4;
        s[21] = v61;
        if ( (v4 & 4) == 0 )
          goto LABEL_17;
      }
      else
      {
        v4 = s[36] | v27;
        s[36] = v4;
        if ( (v4 & 4) == 0 )
          goto LABEL_17;
      }
      if ( bswap32(v52) >> 24 != 127 )
        goto LABEL_16;
    }
    else
    {
      v4 = (16 * (_WORD)v62) & 0x200 | v62 & 0x17 | s[36];
      v5 = v62 & 4 | s[36] & 4;
      if ( (unsigned __int16)v50 == 10 )
      {
        s[12] = v56;
        s[36] |= (16 * (_WORD)v62) & 0x200 | v62 & 0x17;
        s[8] = v52;
        s[9] = v53;
        s[10] = v54;
        s[11] = v55;
        s[15] = v57;
        s[16] = v58;
        s[17] = v59;
        s[18] = v60;
        if ( !v5 )
          goto LABEL_17;
        if ( (_DWORD)v65 != s[8] )
          goto LABEL_16;
      }
      else
      {
        s[36] |= (16 * (_WORD)v62) & 0x200 | v62 & 0x17;
        if ( !v5 )
        {
LABEL_17:
          v6 = sub_147F4((const char *)&s[27], (unsigned __int16 *)&s[6], v4);
          if ( v6 == 1 )
            goto LABEL_26;
          if ( v6 )
          {
            if ( v6 == 2 )
              s[45] = 1;
          }
          else
          {
            s[45] = 0;
          }
          if ( (s[36] & 1) == 0 || sub_13B60((unsigned __int16 *)&s[6]) || LOWORD(s[6]) != 2 && LOWORD(s[6]) != 10 )
            goto LABEL_26;
          v28 = sub_17328(&s[6], 128);
          v29 = v28;
          if ( v28 && *(_DWORD *)(v28 + 12) != -1 )
          {
            if ( *(unsigned __int16 *)(v28 + 142) == (unsigned __int16)word_B8240[0] )
            {
              sub_6D12C(v28 + 108);
              v30 = *(_DWORD *)(v29 + 180);
            }
            else
            {
              sub_6D12C(v28 + 108);
              v30 = s[45];
              *(_DWORD *)(v29 + 180) = s[45];
            }
            if ( s[45] != v30 )
            {
              v31 = (const char *)sub_6BF44(&s[6]);
              sub_64A18(
                3,
                "WARNING: conflicting enable configuration for interfaces %s and %s for address %s - unsupported configur"
                "ation - address DISABLED",
                (const char *)&s[27],
                (const char *)(v29 + 108),
                v31);
              *(_DWORD *)(v29 + 180) = 1;
            }
            v45 = (unsigned __int16 *)v29;
            v46 = 1;
            *(_WORD *)(v29 + 142) = word_B8240[0];
            if ( a1 )
              a1(a2, &v45);
            goto LABEL_26;
          }
          v32 = sub_13D64(s);
          v33 = v32 + 6;
          v34 = (int)v32;
          v35 = sub_15310((struct sockaddr *)(v32 + 6), 0, 0, (int)v32);
          *(_DWORD *)(v34 + 12) = v35;
          if ( v35 == -1 )
          {
            if ( (*(_DWORD *)(v34 + 144) & 8) == 0 )
              goto LABEL_116;
            if ( *(_DWORD *)(v34 + 16) == -1 )
            {
LABEL_128:
              v37 = v33;
              v38 = *(_DWORD *)(v34 + 20);
              v39 = (const char *)sub_6BF44(v37);
              sub_64A18(3, "unable to create socket on %s (%d) for %s#%d", (const char *)(v34 + 108), v38, v39, 123);
              free((void *)v34);
              v40 = (const char *)sub_6BF44(&s[6]);
              sub_64A18(6, "failed to init interface for address %s", v40);
              goto LABEL_26;
            }
          }
          else
          {
            sub_14654(v34);
            if ( (*(_DWORD *)(v34 + 144) & 8) == 0 )
            {
LABEL_115:
              if ( *(_DWORD *)(v34 + 12) != -1 )
                goto LABEL_117;
LABEL_116:
              if ( *(_DWORD *)(v34 + 16) != -1 )
                goto LABEL_117;
              goto LABEL_128;
            }
            if ( *(_DWORD *)(v34 + 16) == -1 )
            {
              if ( *(_DWORD *)(v34 + 12) != -1 )
              {
LABEL_117:
                memset(v48, 0, sizeof(v48));
                v47 = *(_WORD *)(v34 + 24);
                if ( v47 == 10 )
                  memset(&v48[3], 255, 16);
                else
                  *(_DWORD *)&v48[1] = -1;
                sub_3FF90(1, v33, &v47, -4, 12288, 1, 0);
                if ( !loopback_interface && *(_WORD *)(v34 + 140) == 2 && (*(_DWORD *)(v34 + 144) & 4) != 0 )
                  loopback_interface = v34;
                sub_13CCC(v33, v34);
                sub_140C0(v34);
                v45 = (unsigned __int16 *)v34;
                v46 = 2;
                if ( a1 )
                  a1(a2, &v45);
                v41 = 1;
                goto LABEL_26;
              }
              goto LABEL_128;
            }
          }
          v36 = (const char *)sub_6BF44(v34 + 80);
          sub_64A18(6, "Listening on broadcast address %s#%d", v36, 123);
          goto LABEL_115;
        }
        if ( (_DWORD)v65 != s[8] )
        {
LABEL_16:
          v4 &= ~4u;
          s[36] = v4;
          goto LABEL_17;
        }
      }
      if ( *(_QWORD *)((char *)&v65 + 4) != *(_QWORD *)&s[9] || HIDWORD(v65) != s[11] )
        goto LABEL_16;
    }
    v4 = s[36];
    goto LABEL_17;
  }
  v41 = 0;
LABEL_27:
  v7 = sub_6FEB0(&v44);
  v8 = (unsigned __int16 *)ep_list;
  if ( !ep_list )
    goto LABEL_75;
  do
  {
    v7 = *((_DWORD *)v8 + 36);
    v9 = *(unsigned __int16 **)v8;
    if ( (v7 & 0x180) != 0 || v8[71] == (unsigned __int16)word_B8240[0] )
      goto LABEL_74;
    v10 = (int *)ep_list;
    if ( (unsigned __int16 *)ep_list == v8 )
    {
      v12 = (int *)v8;
      v10 = &ep_list;
LABEL_38:
      *v10 = *v12;
      goto LABEL_39;
    }
    if ( ep_list )
    {
      v11 = *(int **)ep_list;
      if ( *(_DWORD *)ep_list )
      {
        while ( v8 != (unsigned __int16 *)v11 )
        {
          v10 = v11;
          if ( !*v11 )
            goto LABEL_39;
          v11 = (int *)*v11;
        }
        v12 = (int *)*v10;
        goto LABEL_38;
      }
    }
LABEL_39:
    if ( !*((_DWORD *)v8 + 45) && (v7 & 0x10) != 0 )
    {
      if ( v8[70] == 2 )
        v13 = &mc4_list;
      else
        v13 = &mc6_list;
      v14 = *v13;
      if ( (unsigned __int16 *)*v13 != v8 )
      {
        if ( !v14 )
          goto LABEL_52;
        v15 = *(unsigned __int16 **)(v14 + 4);
        if ( !v15 )
          goto LABEL_52;
        while ( v8 != v15 )
        {
          v14 = (int)v15;
          if ( !*((_DWORD *)v15 + 1) )
            goto LABEL_52;
          v15 = (unsigned __int16 *)*((_DWORD *)v15 + 1);
        }
        v13 = (int *)(v14 + 4);
      }
      *v13 = *((_DWORD *)v8 + 1);
      goto LABEL_52;
    }
    while ( 1 )
    {
LABEL_52:
      v16 = (int *)remoteaddr_list;
      v17 = *(int **)remoteaddr_list;
      if ( *(unsigned __int16 **)(remoteaddr_list + 32) == v8 )
      {
        v18 = &remoteaddr_list;
        goto LABEL_59;
      }
      if ( !v17 )
        break;
      while ( (unsigned __int16 *)v17[8] != v8 )
      {
        v16 = v17;
        if ( !*v17 )
          goto LABEL_60;
        v17 = (int *)*v17;
      }
      v18 = v16;
      v16 = (int *)*v16;
      v17 = (int *)*v16;
LABEL_59:
      *v18 = (int)v17;
      free(v16);
    }
LABEL_60:
    if ( *((_DWORD *)v8 + 3) != -1 )
    {
      v43 = *((_DWORD *)v8 + 5);
      v19 = (const char *)sub_6BF44(v8 + 12);
      sub_64A18(
        6,
        "Deleting interface #%d %s, %s#%d, interface stats: received=%ld, sent=%ld, dropped=%ld, active_time=%ld secs",
        v43,
        (const char *)v8 + 108,
        v19,
        (unsigned __int16)__rev16(v8[13]),
        *((_DWORD *)v8 + 41),
        *((_DWORD *)v8 + 42),
        *((_DWORD *)v8 + 43),
        current_time - *((_DWORD *)v8 + 40));
      sub_157B8(*((__int16 **)v8 + 3));
      *((_DWORD *)v8 + 3) = -1;
    }
    if ( *((_DWORD *)v8 + 4) != -1 )
    {
      v20 = (const char *)sub_6BF44(v8 + 40);
      sub_64A18(
        6,
        "stop listening for broadcasts to %s on interface #%d %s",
        v20,
        *((_DWORD *)v8 + 5),
        (const char *)v8 + 108);
      sub_157B8(*((__int16 **)v8 + 4));
      *((_DWORD *)v8 + 4) = -1;
    }
    --ninterfaces;
    sub_30C18(v8);
    memset(v48, 0, sizeof(v48));
    v47 = v8[12];
    if ( v47 == 10 )
      memset(&v48[3], 255, 16);
    else
      *(_DWORD *)&v48[1] = -1;
    sub_3FF90(4, v8 + 12, &v47, -3, 12288, 1, 0);
    v45 = v8;
    v46 = 3;
    if ( a1 )
      a1(a2, &v45);
    while ( 1 )
    {
      v21 = *((_DWORD *)v8 + 46);
      if ( !v21 )
        break;
      sub_31B58(v21, 0);
    }
    if ( (unsigned __int16 *)loopback_interface == v8 )
      loopback_interface = 0;
    free(v8);
LABEL_74:
    v8 = v9;
  }
  while ( v9 );
LABEL_75:
  sub_31DB8(v7);
  if ( broadcast_client_enabled )
    sub_1602C();
  if ( sys_bclient )
    sub_1602C();
  v22 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    do
    {
      if ( (v22[36] & 0x140) == 0x100 )
      {
        v23 = remoteaddr_list;
        if ( remoteaddr_list )
        {
          if ( v22 == *(_DWORD **)(remoteaddr_list + 32) )
          {
LABEL_87:
            v24 = v23 + 4;
            if ( sub_146F8(v22, (unsigned __int16 *)(v23 + 4)) )
            {
              v25 = (const char *)sub_6BF44(v22 + 6);
              v26 = (const char *)sub_6BF44(v24);
              sub_64A18(6, "Joined %s socket to multicast group %s", v25, v26);
            }
          }
          else
          {
            while ( 1 )
            {
              v23 = *(_DWORD *)v23;
              if ( !v23 )
                break;
              if ( *(_DWORD **)(v23 + 32) == v22 )
                goto LABEL_87;
            }
          }
        }
      }
      v22 = (_DWORD *)*v22;
    }
    while ( v22 );
  }
  return v41;
}
