void (__fastcall *sub_40C30())(int, unsigned __int16 **)
{
  _DWORD *v0; // r0
  int v1; // r3
  unsigned int v2; // r2
  _DWORD *v3; // r4
  unsigned __int8 v4; // r3
  int v5; // r11
  unsigned int v6; // r3
  int v7; // r10
  int v8; // r0
  int v9; // r0
  _BOOL4 v10; // r10
  int v11; // r1
  int v12; // r0
  void (__fastcall *result)(int, unsigned __int16 **); // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  __int64 *v17; // r0
  double v18; // d0
  const char *v19; // r2
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  int v22; // r11
  int v23; // r2
  int v24; // r10
  int v25; // r2
  time_t v26; // [sp+4h] [bp-38h] BYREF
  int v27; // [sp+8h] [bp-34h] BYREF
  _BYTE v28[16]; // [sp+10h] [bp-2Ch] BYREF
  double v29; // [sp+20h] [bp-1Ch]
  double v30; // [sp+28h] [bp-14h]

  if ( ++current_time >= (unsigned int)dword_BBBC4 )
  {
    ++dword_BBBC4;
    sub_2FED4();
    v20 = (_DWORD *)peer_list;
    if ( !peer_list )
      goto LABEL_11;
    do
    {
      v21 = (_DWORD *)*v20;
      if ( (v20[17] & 8) != 0 )
        sub_3956C((int)v20);
      v20 = v21;
    }
    while ( v21 );
  }
  v0 = (_DWORD *)peer_list;
  if ( peer_list )
  {
    while ( 1 )
    {
      v1 = v0[178];
      v2 = v0[180];
      v3 = (_DWORD *)*v0;
      if ( v1 > 0 )
        v0[178] = v1 - 1;
      if ( v2 > current_time )
        goto LABEL_5;
      if ( (v0[17] & 8) != 0 )
      {
        sub_3961C();
LABEL_5:
        v0 = v3;
        if ( !v3 )
          break;
      }
      else
      {
        sub_36118((int)v0);
        v0 = v3;
        if ( !v3 )
          break;
      }
    }
  }
LABEL_11:
  v4 = sys_orphan;
  if ( sys_orphan <= 15 && !sys_peer && current_time > (unsigned int)orphwait )
  {
    if ( sys_leap == 3 )
    {
      sub_332A4(0);
      if ( crypto_flags )
        sub_277A4();
      v4 = sys_orphan;
    }
    sys_stratum = v4;
    if ( v4 <= 1u )
      v25 = 20300;
    else
      v25 = 16777343;
    if ( v4 <= 1u )
      HIWORD(v25) = 20559;
    sys_refid = v25;
    sys_offset = 0.0;
    sys_rootdelay = 0.0;
    sys_rootdisp = 0.0;
  }
  sub_5F334(&v27);
  time(&v26);
  if ( leapsec )
  {
    v5 = (unsigned __int8)sys_leap;
  }
  else
  {
    v6 = current_time;
    v5 = (unsigned __int8)sys_leap;
    if ( (current_time & 7) != 0 )
    {
      if ( sys_leap == 3 )
        goto LABEL_37;
      goto LABEL_59;
    }
  }
  v7 = v27;
  v8 = pll_control;
  if ( pll_control )
  {
    v8 = kern_enable;
    if ( kern_enable )
      v8 = 1;
  }
  sub_2CF1C(v8);
  if ( v5 == 3 )
  {
    v9 = (int)sub_2D820();
    if ( !leapsec )
      v9 = 0;
    memset(v28, 0, sizeof(v28));
    v29 = 0.0;
    v30 = 0.0;
    if ( !leapsec )
    {
      v10 = v9;
LABEL_25:
      leapdif = 0;
      goto LABEL_26;
    }
    v10 = 0;
LABEL_76:
    v22 = 0;
    sub_25C8C((__int16 *)&byte_9[1], 0, 0);
    goto LABEL_77;
  }
  v17 = sub_2D4D4((int)v28, v7, &v26);
  if ( v17 )
  {
    v18 = (double)SLOWORD(v30);
    if ( v18 < 0.0 )
    {
      if ( clock_max_back <= 0.0 )
      {
        v19 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( clock_max_back < -v18 )
      {
        sub_5FB54(v17);
        v19 = "Positive leap second, stepped backward.";
      }
      else
      {
        v19 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    else
    {
      if ( v18 <= 0.0 )
        goto LABEL_68;
      if ( clock_max_fwd <= 0.0 )
      {
        v19 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( v18 > clock_max_fwd )
      {
        sub_5FB54(v17);
        v19 = "Negative leap second, stepped forward.";
      }
      else
      {
        v19 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    sub_64A18(5, "%s", v19);
LABEL_68:
    v10 = 1;
    sub_25C8C((__int16 *)&byte_9[2], 0, 0);
    leapsec = 0;
    sys_tai = SWORD2(v29);
    if ( HIWORD(v29) )
      v9 = LODWORD(v29) <= 2;
    else
      v9 = 0;
    goto LABEL_25;
  }
  v22 = BYTE2(v30);
  v24 = sys_tai;
  sys_tai = SWORD2(v29);
  v10 = v24 != SWORD2(v29);
  if ( !leapsec )
  {
    if ( (unsigned int)BYTE2(v30) - 1 > 1 )
    {
      if ( HIWORD(v29) )
        v9 = LODWORD(v29) <= 2;
      else
        v9 = 0;
      goto LABEL_25;
    }
    if ( BYTE3(v30) )
      sub_25C8C((__int16 *)((char *)&dword_88 + 1), sys_peer, 0);
    else
      sub_25C8C((__int16 *)byte_9, 0, 0);
    goto LABEL_77;
  }
  if ( BYTE2(v30) <= (unsigned int)leapsec )
  {
    if ( BYTE2(v30) >= (unsigned int)leapsec )
    {
      v23 = SHIWORD(v29);
      v9 = LODWORD(v29) <= 2;
      if ( !HIWORD(v29) )
        v9 = 0;
      goto LABEL_80;
    }
    if ( !BYTE2(v30) )
      goto LABEL_76;
  }
LABEL_77:
  v23 = SHIWORD(v29);
  leapsec = v22;
  v9 = LODWORD(v29) <= 2;
  if ( !HIWORD(v29) )
    v9 = 0;
  if ( !v22 )
    goto LABEL_25;
LABEL_80:
  leapdif = v23;
LABEL_26:
  v11 = leap_sec_in_progress;
  leap_sec_in_progress = v9;
  if ( v11 != v9 )
    sub_332A4((unsigned __int8)sys_leap);
  if ( v10 )
    sub_27848();
  if ( sys_leap == 3 )
    goto LABEL_60;
  if ( (unsigned int)leapsec <= 1 || !leapdif )
  {
LABEL_59:
    sub_332A4(0);
LABEL_60:
    v6 = current_time;
    goto LABEL_37;
  }
  if ( leapdif <= 0 )
    v12 = 2;
  else
    v12 = 1;
  sub_332A4(v12);
  v6 = current_time;
LABEL_37:
  if ( dword_BBBD0 <= v6 )
  {
    dword_BBBD0 += 900;
    sub_30218();
    v6 = current_time;
  }
  if ( dword_BBBDC <= v6 )
  {
    dword_BBBDC += 1 << sys_automax;
    sub_62310();
    v6 = current_time;
  }
  result = (void (__fastcall *)(int, unsigned __int16 **))&dword_BBBC4;
  if ( dword_BBBE0 && dword_BBBE0 <= v6 )
  {
    dword_BBBE0 += 1 << sys_revoke;
    result = (void (__fastcall *)(int, unsigned __int16 **))RAND_bytes(&sys_private, 4, dword_BBBE0);
    v6 = current_time;
  }
  if ( interface_interval && dword_BBBD4 <= v6 )
  {
    sub_40BDC(interface_interval + v6);
    result = sub_186BC(0, 0);
    v6 = current_time;
  }
  if ( dword_BBBD8 && dword_BBBD8 <= v6 )
  {
    result = (void (__fastcall *)(int, unsigned __int16 **))sub_69270();
    v6 = current_time;
  }
  if ( dword_BBBC8 <= v6 )
  {
    dword_BBBC8 += 3600;
    sub_41740();
    v14 = dword_BBBCC;
    if ( dword_BBBCC > (unsigned int)current_time )
    {
      v15 = v27;
      v16 = 0;
    }
    else
    {
      v14 = dword_BBBCC + 86016;
      v15 = v27;
      v16 = 1;
    }
    if ( dword_BBBCC <= (unsigned int)current_time )
    {
      v14 += 384;
      dword_BBBCC = v14;
    }
    return (void (__fastcall *)(int, unsigned __int16 **))sub_423CC(v16, v15, &v26, v14);
  }
  return result;
}
