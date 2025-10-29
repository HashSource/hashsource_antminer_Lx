void __fastcall sub_24C24(int a1, __int16 a2)
{
  int v2; // r10
  int v3; // r5
  size_t v4; // r0
  int v5; // r3
  size_t v6; // r0
  int v7; // r8
  const char **v8; // r0
  const char **v9; // r7
  char *v10; // r3
  const char *v11; // r5
  const char *v12; // r1
  unsigned __int16 *v13; // r2
  unsigned __int8 *v14; // r2
  _BOOL4 v15; // r3
  void *v16; // r0
  const char *v17; // r0
  int v18; // r6
  unsigned int v19; // r5
  int v20; // r7
  unsigned int v21; // r6
  unsigned int v22; // r5
  bool v23; // zf
  _DWORD *v24; // r6
  int v25; // r4
  int v26; // r11
  int v27; // r5
  int v28; // r3
  size_t v29; // r0
  int v30; // r4
  unsigned int v31; // r10
  int v32; // r3
  unsigned __int8 *v33; // r2
  int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r1
  unsigned __int8 *v37; // r3
  const char *v38; // r5
  size_t v39; // r0
  size_t v40; // r0
  int v41; // r7
  int v42; // r6
  unsigned int v43; // r6
  unsigned int v44; // r2
  unsigned int v45; // r3
  unsigned __int8 *v46; // r4
  size_t v47; // r0
  size_t v48; // r0
  int v50; // [sp+20h] [bp-38Ch]
  const char *v51; // [sp+3Ch] [bp-370h]
  unsigned __int16 v52; // [sp+46h] [bp-366h] BYREF
  unsigned __int16 v53; // [sp+48h] [bp-364h] BYREF
  unsigned __int16 v54; // [sp+4Ah] [bp-362h] BYREF
  unsigned int v55; // [sp+4Ch] [bp-360h] BYREF
  int v56; // [sp+50h] [bp-35Ch] BYREF
  unsigned int v57; // [sp+54h] [bp-358h] BYREF
  int v58; // [sp+58h] [bp-354h] BYREF
  int v59; // [sp+5Ch] [bp-350h] BYREF
  _WORD *v60; // [sp+60h] [bp-34Ch] BYREF
  char *v61; // [sp+64h] [bp-348h] BYREF
  int v62; // [sp+68h] [bp-344h] BYREF
  unsigned int v63; // [sp+6Ch] [bp-340h] BYREF
  int v64; // [sp+70h] [bp-33Ch] BYREF
  _DWORD v65[2]; // [sp+74h] [bp-338h] BYREF
  _DWORD v66[7]; // [sp+7Ch] [bp-330h] BYREF
  _DWORD s[32]; // [sp+98h] [bp-314h] BYREF
  _BYTE v68[448]; // [sp+118h] [bp-294h] BYREF
  char v69[8]; // [sp+2D8h] [bp-D4h] BYREF
  char v70[8]; // [sp+2E0h] [bp-CCh] BYREF
  char v71[8]; // [sp+2E8h] [bp-C4h] BYREF
  int v72; // [sp+2F0h] [bp-BCh]
  __int16 v73; // [sp+2F4h] [bp-B8h]
  char v74[12]; // [sp+2F8h] [bp-B4h] BYREF
  char v75[32]; // [sp+304h] [bp-A8h] BYREF
  unsigned __int8 v76[136]; // [sp+324h] [bp-88h] BYREF

  v2 = a2 & 0x4000;
  if ( (a2 & 0x4000) != 0 )
  {
    sub_1F270(1);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v17 = (const char *)sub_6BF44(a1 + 4);
      sub_64A18(5, "mrulist from %s rejected due to nomrulist restriction", v17);
    }
    ++sys_restricted;
    return;
  }
  v60 = 0;
  sub_24218((unsigned int *)&v60, "nonce", 6u, 0);
  sub_24218((unsigned int *)&v60, "frags", 6u, 0);
  sub_24218((unsigned int *)&v60, "limit", 6u, 0);
  v3 = 0;
  sub_24218((unsigned int *)&v60, "mincount", 9u, 0);
  sub_24218((unsigned int *)&v60, "resall", 7u, 0);
  sub_24218((unsigned int *)&v60, "resany", 7u, 0);
  sub_24218((unsigned int *)&v60, "maxlstint", 0xAu, 0);
  sub_24218((unsigned int *)&v60, "laddr", 6u, 0);
  do
  {
    sub_6BCB0(v76, 128, "last.%d", v3);
    v4 = strlen((const char *)v76);
    sub_24218((unsigned int *)&v60, v76, v4 + 1, 0);
    v5 = v3++;
    sub_6BCB0(v76, 128, "addr.%d", v5);
    v6 = strlen((const char *)v76);
    sub_24218((unsigned int *)&v60, v76, v6 + 1, 0);
  }
  while ( v3 != 16 );
  v7 = 0;
  v52 = 0;
  v55 = 0;
  v50 = 0;
  v56 = 0;
  v53 = 0;
  v57 = 0;
  v54 = 0;
  memset(s, 0, sizeof(s));
  memset(v68, 0, sizeof(v68));
  while ( 1 )
  {
    v8 = (const char **)sub_1E5B0((int)v60, &v61);
    v9 = v8;
    if ( !v8 || (*((_WORD *)v8 + 1) & 0x80) != 0 )
      break;
    v10 = v61;
    v11 = v8[1];
    if ( !v61 )
      v10 = (char *)&unk_93840;
    v12 = v8[1];
    if ( !v61 )
      v61 = v10;
    if ( !strcmp("nonce", v12) )
    {
      free((void *)v7);
      v7 = (unsigned __int8)*v61;
      if ( *v61 )
        v7 = sub_63948(v61);
    }
    else if ( !strcmp("frags", v11) )
    {
      if ( sscanf(v61, "%hu", &v52) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("limit", v11) )
    {
      if ( sscanf(v61, "%u", &v55) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("mincount", v11) )
    {
      if ( sscanf(v61, "%d", &v56) != 1 )
        goto LABEL_29;
      if ( v56 < 0 )
        v56 = 0;
    }
    else if ( !strcmp("resall", v11) )
    {
      v13 = &v53;
LABEL_33:
      if ( sscanf(v61, "0x%hx", v13) != 1 )
        goto LABEL_29;
    }
    else
    {
      if ( !strcmp("resany", v11) )
      {
        v13 = &v54;
        goto LABEL_33;
      }
      if ( !strcmp("maxlstint", v11) )
      {
        if ( sscanf(v61, "%u", &v57) != 1 )
          goto LABEL_29;
      }
      else if ( !strcmp("laddr", v11) )
      {
        if ( !sub_631D0(v61, v66) )
          goto LABEL_29;
        v50 = sub_17328(v66, 0);
      }
      else if ( sscanf(v11, "last.%d", v65) == 1 && v65[0] <= 0xFu )
      {
        if ( sscanf(v61, "0x%08x.%08x", &v58, &v59) != 2 )
        {
LABEL_29:
          free((void *)v7);
          sub_24B90(v60);
          return;
        }
        v32 = 28 * v65[0];
        v33 = &v76[8 * v65[0] + 132];
        v34 = v59;
        v35 = __clz(v65[0] - v2);
        *((_DWORD *)v33 - 196) = v58;
        v36 = v35 >> 5;
        *((_DWORD *)v33 - 195) = v34;
        v23 = *(unsigned __int16 *)&v68[v32] == 2;
        v37 = &v76[v32 + 132];
        if ( v23 )
        {
          if ( !*((_DWORD *)v37 - 163) )
            v36 = 0;
          goto LABEL_111;
        }
        if ( *((_DWORD *)v37 - 162) || *((_DWORD *)v37 - 161) || *((_DWORD *)v37 - 160) || *((_DWORD *)v37 - 159) )
        {
LABEL_111:
          if ( v36 )
            goto LABEL_112;
        }
      }
      else if ( sscanf(v9[1], "addr.%d", v65) == 1 && v65[0] <= 0xFu )
      {
        if ( !sub_631D0(v61, &v68[28 * v65[0]]) )
          goto LABEL_29;
        v14 = &v76[8 * v65[0] + 132];
        if ( *((_DWORD *)v14 - 196) )
        {
          v15 = v65[0] == v2;
          if ( !*((_DWORD *)v14 - 195) )
            v15 = 0;
          if ( v15 )
LABEL_112:
            ++v2;
        }
      }
    }
  }
  sub_24B90(v60);
  v60 = 0;
  if ( !v7 )
    return;
  if ( sscanf((const char *)v7, "%08x%08x%08x", &v62, &v63, &v64) != 3 )
  {
    v16 = (void *)v7;
LABEL_53:
    free(v16);
    return;
  }
  v18 = v62;
  v19 = v63;
  v20 = sub_1E298((unsigned __int16 *)(a1 + 4), v62, v63);
  sub_5F334(v65);
  v16 = (void *)v7;
  v21 = v65[0] - v18;
  if ( v19 > v65[1] )
    v22 = v21 - 1;
  else
    v22 = v21;
  v23 = v22 == 15;
  if ( v22 <= 0xF )
    v23 = v64 == v20;
  if ( !v23 )
    goto LABEL_53;
  free((void *)v7);
  if ( !v52 )
  {
    if ( v55 - 1 <= 0xFF )
    {
      v52 = 128;
      goto LABEL_66;
    }
LABEL_104:
    sub_1F270(6);
    return;
  }
  if ( v52 > 0x80u )
    goto LABEL_104;
  if ( !v55 )
    v55 = -1;
LABEL_66:
  if ( !v2 )
    goto LABEL_80;
  v24 = &v68[8];
  v25 = 0;
  while ( 1 )
  {
    v26 = *(_DWORD *)(mon_hash + 4 * (unsigned __int16)(sub_6C1C4(v24 - 2) & ~(-1 << mon_hash_bits)));
    if ( v26 )
      break;
LABEL_77:
    ++v25;
    v24 += 7;
    if ( v25 == v2 )
    {
      if ( v25 )
      {
        sub_1F270(5);
        return;
      }
LABEL_80:
      v26 = dword_107310;
      if ( (_UNKNOWN *)dword_107310 == &mon_mru_list )
        goto LABEL_121;
      goto LABEL_81;
    }
  }
  v27 = *((unsigned __int16 *)v24 - 3);
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v26 + 46) != v27 )
      goto LABEL_70;
    v28 = *((unsigned __int16 *)v24 - 4);
    if ( v28 != *(unsigned __int16 *)(v26 + 44) )
      goto LABEL_70;
    if ( v28 != 2 )
      break;
    if ( *(_DWORD *)(v26 + 48) == *(v24 - 1) )
      goto LABEL_76;
LABEL_70:
    v26 = *(_DWORD *)v26;
    if ( !v26 )
      goto LABEL_77;
  }
  if ( memcmp((const void *)(v26 + 52), v24, 0x10u) || *(_DWORD *)(v26 + 68) != v24[4] )
    goto LABEL_70;
LABEL_76:
  if ( *(_DWORD *)(v26 + 24) != s[2 * v25] || *(_DWORD *)(v26 + 28) != s[2 * v25 + 1] )
    goto LABEL_77;
  sub_1FA74("last.older", (_DWORD *)(v26 + 24));
  v38 = (const char *)sub_6C0D8(v26 + 44);
  v39 = strlen(v38);
  sub_1EE84("addr.older", (int)v38, v39);
  if ( v55 <= 1 )
  {
    sub_5F334(v65);
    sub_1E418(a1, (int)v76, 128);
    v48 = strlen((const char *)v76);
    sub_1EE84("nonce", (int)v76, v48);
LABEL_82:
    if ( (unsigned __int16)word_B86B8 < (unsigned int)v52 && v55 )
    {
      v30 = 0;
      v31 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(v26 + 36) >= v56
          && (!v53 || (v53 & ~*(unsigned __int16 *)(v26 + 40)) == 0)
          && (!v54 || (v54 & *(_WORD *)(v26 + 40)) != 0)
          && (!v57 || v57 >= v65[0] - *(_DWORD *)(v26 + 24))
          && (!v50 || *(_DWORD *)(v26 + 12) == v50) )
        {
          v41 = 6;
          strcpy(v74, "first.%d");
          v73 = 0;
          strcpy(v69, "ct.%d");
          v72 = 0;
          strcpy(v70, "mv.%d");
          strcpy(v71, "rs.%d");
          v42 = rand();
          v43 = v42 ^ (rand() << 16);
          do
          {
            v44 = v43 & 7;
            v43 >>= 3;
            while ( 1 )
            {
              v45 = v44 % 6;
              v46 = &v76[v44 % 6 + 132];
              if ( !*((_BYTE *)&v72 + v44 % 6) )
                break;
              v44 = v45 + 1;
            }
            switch ( v45 )
            {
              case 1u:
                sub_6BCB0(v75, 32, "last.%d", v31);
                sub_1FA74(v75, (_DWORD *)(v26 + 24));
                break;
              case 2u:
                sub_6BCB0(v75, 32, v74, v31);
                sub_1FA74(v75, (_DWORD *)(v26 + 16));
                break;
              case 3u:
                sub_6BCB0(v75, 32, v69, v31);
                sub_1F848(v75, *(_DWORD *)(v26 + 36));
                break;
              case 4u:
                sub_6BCB0(v75, 32, v70, v31);
                sub_1F8EC(v75, *(unsigned __int8 *)(v26 + 42));
                break;
              case 5u:
                sub_6BCB0(v75, 32, v71, v31);
                sub_1F7A4(v75, *(unsigned __int16 *)(v26 + 40));
                break;
              default:
                sub_6BCB0(v75, 32, "addr.%d", v31);
                v51 = (const char *)sub_6C0D8(v26 + 44);
                v47 = strlen(v51);
                sub_1EE84(v75, (int)v51, v47);
                break;
            }
            --v41;
            *(v46 - 184) = 1;
          }
          while ( v41 );
          if ( !v31 )
            sub_1F990(0);
          ++v31;
          v30 = v26;
        }
        v26 = *(_DWORD *)(v26 + 4);
        if ( (_UNKNOWN *)v26 == &mon_mru_list || !v26 )
          break;
        if ( (unsigned __int16)word_B86B8 >= (unsigned int)v52 || v55 <= v31 )
          goto LABEL_102;
      }
      if ( v31 > 1 )
        sub_1F990(v31 - 1);
      sub_1FA74("now", v65);
      if ( v30 )
        sub_1FA74("last.newest", (_DWORD *)(v30 + 24));
    }
    goto LABEL_102;
  }
  v26 = *(_DWORD *)(v26 + 4);
  if ( (_UNKNOWN *)v26 != &mon_mru_list )
  {
LABEL_81:
    sub_5F334(v65);
    sub_1E418(a1, (int)v76, 128);
    v29 = strlen((const char *)v76);
    sub_1EE84("nonce", (int)v76, v29);
    if ( !v26 )
      goto LABEL_122;
    goto LABEL_82;
  }
LABEL_121:
  sub_5F334(v65);
  sub_1E418(a1, (int)v76, 128);
  v40 = strlen((const char *)v76);
  sub_1EE84("nonce", (int)v76, v40);
LABEL_122:
  sub_1FA74("now", v65);
LABEL_102:
  sub_1E934(0);
}
