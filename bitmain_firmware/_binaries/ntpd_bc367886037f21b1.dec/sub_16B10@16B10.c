_BYTE *sub_16B10()
{
  _BYTE *result; // r0
  int v1; // r6
  _DWORD *v2; // r6
  int v3; // r4
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r9
  size_t v7; // r5
  int *v8; // r0
  int v9; // r1
  int v10; // r2
  ssize_t v11; // r0
  int v12; // r7
  int v13; // r2
  __time_t tv_sec; // r0
  __suseconds_t tv_usec; // r1
  _DWORD *v16; // r8
  size_t v17; // r5
  int *v18; // r0
  int v19; // r1
  int v20; // r2
  ssize_t v21; // r0
  ssize_t v22; // r3
  __time_t v23; // r0
  __suseconds_t v24; // r1
  int v25; // r12
  int v26; // r3
  int *v27; // r3
  int *v28; // r0
  int v29; // r7
  int *v30; // r5
  int v31; // r0
  _DWORD *v32; // r4
  int v33; // r6
  int v34; // r5
  int v35; // r7
  int *v36; // r3
  int v37; // r4
  int v38; // r5
  int v39; // r0
  bool v40; // nf
  int v41; // r2
  int v42; // r3
  int v43; // r2
  unsigned int v44; // r4
  int v45; // r5
  int v46; // r0
  int v47; // r2
  int v48; // r3
  int v49; // r2
  int v50; // r8
  int v51; // r11
  char *v52; // r0
  char *v53; // r9
  int v54; // r0
  char v55; // r2
  char v56; // r3
  __int16 *v57; // r0
  int v58; // r7
  int v59; // r6
  int v60; // r11
  int v61; // r4
  int v62; // r0
  ssize_t v63; // r0
  int v64; // r0
  int v65; // [sp+8h] [bp-574h]
  int v66; // [sp+10h] [bp-56Ch]
  int v67; // [sp+10h] [bp-56Ch]
  int v68; // [sp+10h] [bp-56Ch]
  int *v69; // [sp+14h] [bp-568h]
  int *v70; // [sp+14h] [bp-568h]
  struct timeval v71; // [sp+24h] [bp-558h] BYREF
  struct timeval v72; // [sp+2Ch] [bp-550h]
  struct timeval v73; // [sp+34h] [bp-548h]
  struct timeval timeout; // [sp+3Ch] [bp-540h] BYREF
  fd_set dest; // [sp+44h] [bp-538h] BYREF
  _BYTE v76[1208]; // [sp+C4h] [bp-4B8h] BYREF

  ++handler_calls;
  memcpy(&dest, &unk_B8244, sizeof(dest));
  result = (_BYTE *)select(dword_B82C4 + 1, &dest, 0, 0, 0);
  v1 = (int)result;
  if ( (int)result >= 0 )
    goto LABEL_2;
  result = _errno_location();
  v50 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 4 )
    goto LABEL_3;
  v65 = dword_B82C4 + 1;
  v51 = dword_B82C4 >= 255 ? 255 : dword_B82C4;
  v68 = v51;
  if ( dword_B82C4 >= 0 )
  {
    v53 = byte_B82D0;
    do
    {
      v54 = _fdelt_chk(v51);
      v55 = v51-- & 0x1F;
      if ( (*(_DWORD *)&word_B8240[2 * v54 + 2] & (1 << v55)) != 0 )
        v56 = 35;
      else
        v56 = 45;
      *v53++ = v56;
    }
    while ( v51 != -1 );
    v57 = word_B8240;
    if ( v68 >= 0 )
      v57 = (__int16 *)((char *)word_B8240 + v68);
    v52 = (char *)v57 + 145;
  }
  else
  {
    v52 = byte_B82D0;
  }
  v58 = 0;
  *v52 = 0;
  result = (_BYTE *)sub_64A18(3, "select(%d, %s, 0L, 0L, &0.0) error: %m", v65, byte_B82D0);
  if ( v50 != 9 )
    goto LABEL_3;
  if ( dword_B82C4 >= 0 )
  {
    v60 = 0;
    do
    {
      v61 = 1 << (v60 & 0x1F);
      if ( (v61 & *(_DWORD *)&word_B8240[2 * _fdelt_chk(v60) + 2]) != 0 )
      {
        if ( read(v60, &timeout, 0) == -1 )
        {
          sub_64A18(3, "Removing bad file descriptor %d from select set", v60);
          v62 = _fdelt_chk(v60);
          *(_DWORD *)&word_B8240[2 * v62 + 2] &= ~v61;
        }
        else
        {
          v58 = v60;
        }
      }
      ++v60;
    }
    while ( v60 <= dword_B82C4 );
    v59 = v58 + 1;
    if ( dword_B82C4 == v58 )
      goto LABEL_99;
  }
  else
  {
    v59 = 1;
  }
  dword_B82C4 = v58;
LABEL_99:
  timeout.tv_sec = 0;
  timeout.tv_usec = 0;
  memcpy(&dest, &unk_B8244, sizeof(dest));
  result = (_BYTE *)select(v59, &dest, 0, 0, &timeout);
  v1 = (int)result;
LABEL_2:
  if ( v1 <= 0 )
  {
LABEL_3:
    if ( v1 == -1 )
    {
      result = _errno_location();
      if ( *(_DWORD *)result != 4 )
        return (_BYTE *)sub_64A18(3, "select() error: %m");
    }
    return result;
  }
  sub_5F334(&v71);
  result = (_BYTE *)v71.tv_sec;
  v2 = (_DWORD *)dword_B83D0;
  v72 = v71;
  ++handler_pkts;
  if ( !dword_B83D0 )
    goto LABEL_36;
  while ( 1 )
  {
LABEL_6:
    v3 = v2[5];
    v4 = _fdelt_chk(v3);
    LOBYTE(v5) = v3 & 0x1F;
    if ( v3 <= 0 )
      v5 = -(-v3 & 0x1F);
    result = &v76[4 * v4 + 1204];
    if ( (*((_DWORD *)result - 333) & (1 << v5)) != 0 )
      break;
LABEL_35:
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      goto LABEL_36;
  }
  v73 = v72;
  v6 = (_DWORD *)sub_69D38();
  if ( !v6 )
  {
    v63 = read(v3, v76, 0x4B0u);
    ++packets_dropped;
    v12 = v63;
LABEL_31:
    if ( v12 >= 0 )
    {
      if ( v12 )
        goto LABEL_18;
      v64 = sub_6A02C(v2[3] + 16);
      sub_64A18(3, "%s read EOF", v64);
    }
    else
    {
      v28 = _errno_location();
      v29 = *v28;
      v30 = v28;
      if ( *v28 == 11 )
        goto LABEL_18;
      v31 = sub_6A02C(v2[3] + 16);
      *v30 = v29;
      sub_64A18(3, "%s read: %m", v31);
    }
    result = sub_150DC(v3, 1);
    goto LABEL_35;
  }
  v7 = v2[4];
  if ( v7 - 1 > 0x847 )
    v7 = 2120;
  while ( 1 )
  {
    v11 = read(v3, v6 + 22, v7);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    v8 = _errno_location();
    v10 = *v8;
    if ( *v8 != 4 )
    {
      v27 = v8;
LABEL_30:
      v66 = v10;
      v69 = v27;
      sub_69BD8(v6, v9);
      *v69 = v66;
      goto LABEL_31;
    }
  }
  if ( !v11 )
  {
    v27 = _errno_location();
    v10 = *v27;
    goto LABEL_30;
  }
  v13 = v2[1];
  tv_sec = v73.tv_sec;
  tv_usec = v73.tv_usec;
  v6[1] = v2[3];
  v6[21] = v12;
  v6[16] = v3;
  v6[15] = 0;
  v6[18] = tv_sec;
  v6[19] = tv_usec;
  v6[20] = v13;
  if ( !sub_39CFC(v2, v6) )
  {
    ++v2[6];
    ++packets_received;
  }
LABEL_18:
  while ( 2 )
  {
    while ( 1 )
    {
      timeout = v72;
      v16 = (_DWORD *)sub_69D38();
      if ( v16 )
        break;
      result = (_BYTE *)read(v3, v76, 0x4B0u);
      ++packets_dropped;
      if ( (int)result <= 0 )
        goto LABEL_35;
    }
    v17 = v2[4];
    if ( v17 - 1 > 0x847 )
      v17 = 2120;
    while ( 1 )
    {
      v21 = read(v3, v16 + 22, v17);
      if ( v21 >= 0 )
        break;
      v18 = _errno_location();
      v20 = *v18;
      if ( *v18 != 4 )
      {
        v36 = v18;
        goto LABEL_49;
      }
    }
    v22 = v21;
    if ( v21 )
    {
      v23 = timeout.tv_sec;
      v24 = timeout.tv_usec;
      v25 = v2[3];
      v16[21] = v22;
      v26 = v2[1];
      v16[1] = v25;
      v16[16] = v3;
      v16[15] = 0;
      v16[18] = v23;
      v16[19] = v24;
      v16[20] = v26;
      if ( !sub_39CFC(v2, v16) )
      {
        ++v2[6];
        ++packets_received;
      }
      continue;
    }
    break;
  }
  v36 = _errno_location();
  v20 = *v36;
LABEL_49:
  v67 = v20;
  v70 = v36;
  result = (_BYTE *)sub_69BD8(v16, v19);
  v2 = (_DWORD *)*v2;
  *v70 = v67;
  if ( v2 )
    goto LABEL_6;
LABEL_36:
  v32 = (_DWORD *)ep_list;
  if ( !ep_list )
    goto LABEL_53;
  while ( 2 )
  {
    v33 = 0;
    while ( 2 )
    {
      if ( !v33 )
      {
        v34 = v32[3];
        v35 = 1;
        if ( v34 >= 0 )
          goto LABEL_43;
        goto LABEL_45;
      }
      if ( (v32[36] & 0x20) == 0 )
        break;
      v34 = v32[4];
      v35 = v33 + 1;
      if ( v34 >= 0 )
      {
LABEL_43:
        result = &v76[4 * _fdelt_chk(v34) + 1204];
        if ( (*((_DWORD *)result - 333) & (1 << (v34 & 0x1F))) != 0 )
        {
          do
            result = (_BYTE *)sub_14A9C(v34, (int)v32, v72.tv_sec, v72.tv_usec);
          while ( (int)result > 0 );
        }
      }
      if ( v35 != 2 )
      {
LABEL_45:
        ++v33;
        continue;
      }
      break;
    }
    v32 = (_DWORD *)*v32;
    if ( v32 )
      continue;
    break;
  }
LABEL_53:
  v37 = asyncio_reader_list;
  if ( asyncio_reader_list )
  {
    do
    {
      v38 = *(_DWORD *)v37;
      v39 = _fdelt_chk(*(_DWORD *)(v37 + 4));
      v42 = *(_DWORD *)(v37 + 4);
      v41 = -v42;
      v40 = -v42 < 0;
      LOBYTE(v42) = v42 & 0x1F;
      v43 = v41 & 0x1F;
      if ( !v40 )
        v42 = -v43;
      result = &v76[4 * v39 + 1204];
      if ( (*((_DWORD *)result - 333) & (1 << v42)) != 0 )
        result = (_BYTE *)(*(int (__fastcall **)(int))(v37 + 12))(v37);
      v37 = v38;
    }
    while ( v38 );
  }
  if ( blocking_children_alloc )
  {
    v44 = 0;
    do
    {
      v45 = *(_DWORD *)(blocking_children + 4 * v44);
      if ( v45 )
      {
        result = *(_BYTE **)(v45 + 52);
        if ( result != (_BYTE *)-1 )
        {
          v46 = _fdelt_chk(result);
          v48 = *(_DWORD *)(v45 + 52);
          v47 = -v48;
          v40 = -v48 < 0;
          LOBYTE(v48) = v48 & 0x1F;
          v49 = v47 & 0x1F;
          if ( !v40 )
            v48 = -v49;
          result = &v76[4 * v46 + 1204];
          if ( (*((_DWORD *)result - 333) & (1 << v48)) != 0 )
          {
            ++*(_DWORD *)(v45 + 68);
            ++blocking_child_ready_seen;
          }
        }
      }
      ++v44;
    }
    while ( v44 < blocking_children_alloc );
  }
  return result;
}
