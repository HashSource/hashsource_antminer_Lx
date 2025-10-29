int *sub_38A88()
{
  int v0; // r5
  double v1; // d8
  int v2; // r7
  int v3; // r9
  int v4; // r11
  _BOOL4 v5; // r1
  bool v6; // cc
  __int64 v7; // r2
  __int64 v8; // r0
  __int64 v9; // r0
  double v10; // r0
  double v11; // d0
  int v12; // r2
  bool v13; // cc
  double v15; // r0
  double v16; // d0
  int v17; // r2
  int v18; // [sp+24h] [bp-18h] BYREF
  unsigned int v19; // [sp+28h] [bp-14h]
  int v20; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v21; // [sp+30h] [bp-Ch]

  v0 = 0;
  v1 = 1.0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  sub_332A4(3);
  sys_stratum = 16;
  sys_refid = 1414090313;
  sys_peer = 0;
  sys_rootdelay = 0.0;
  sys_rootdisp = 0.0;
  dword_107C0C = 0;
  sys_reftime = 0;
  sys_jitter = 0.0;
  sub_5F210();
  trunc_os_clock = 0;
  sub_5F334(&v20);
  do
  {
    while ( 1 )
    {
      sub_5F334(&v18);
      HIDWORD(v7) = v18 - v20;
      if ( v19 < v21 )
        --HIDWORD(v7);
      LODWORD(v7) = v19 - v21;
      v20 = v18;
      v21 = v19;
      if ( HIDWORD(v7) != 0 && HIDWORD(v7) < 0x80000000 )
        break;
      v5 = (unsigned int)v7 > 0x55;
      if ( HIDWORD(v7) )
        v5 = 0;
      if ( v5 )
      {
        ++v2;
        if ( v3 < v4 )
          v3 = v4;
        v9 = v7;
LABEL_18:
        v10 = COERCE_DOUBLE(sub_8BA5C(v9, HIDWORD(v9)));
        v11 = v10;
        LODWORD(v10) = -32;
        ldexp(v10, v12);
        goto LABEL_19;
      }
      ++v4;
      v6 = ++v0 <= 49999999;
      if ( v0 <= 49999999 )
        v6 = v2 <= 11;
      if ( !v6 )
        goto LABEL_24;
    }
    LODWORD(v8) = 0;
    HIDWORD(v8) = HIDWORD(v7);
    ++v2;
    if ( v3 < v4 )
      v3 = v4;
    v9 = v8 + (unsigned int)v7;
    if ( v7 >= 0 )
      goto LABEL_18;
    v15 = COERCE_DOUBLE(sub_8BA5C(-(int)v9, (unsigned __int64)-v9 >> 32));
    v16 = v15;
    LODWORD(v15) = -32;
    ldexp(v15, v17);
    v11 = -v16;
LABEL_19:
    ++v0;
    v4 = 0;
    if ( v11 < v1 )
      v1 = v11;
    v13 = v0 <= 49999999;
    if ( v0 <= 49999999 )
      v13 = v2 <= 11;
  }
  while ( v13 );
LABEL_24:
  if ( v2 <= 11 )
  {
    sub_64A18(3, "Fatal error: precision could not be measured (MINSTEP too large?)");
    exit(1);
  }
  sub_5F210();
  measured_tick = v1;
  sub_38398();
  sub_64A18(6, "proto: precision = %.3f usec (%d)", sys_tick * 1000000.0, sys_precision);
  if ( sys_fuzz < sys_tick )
    sub_64A18(5, "proto: fuzz beneath %.3f usec", sys_fuzz * 1000000.0);
  sub_5F334(&v20);
  sys_survivors = 0;
  sys_manycastserver = 0;
  sys_bclient = 0;
  sys_bdelay = -0.05;
  sys_authenticate = 1;
  sys_stattime = current_time;
  orphwait = (int)sys_orphwait + current_time;
  sub_38960();
  byte_107BDB = 96;
  sys_ttl[0] = 0;
  byte_107BD9 = 32;
  byte_107BDA = 64;
  byte_107BDC = 0x80;
  byte_107BDD = -96;
  byte_107BDE = -64;
  byte_107BDF = -32;
  sys_ttlmax = 7;
  hardpps_enable = 0;
  stats_control = 1;
  return &hardpps_enable;
}
