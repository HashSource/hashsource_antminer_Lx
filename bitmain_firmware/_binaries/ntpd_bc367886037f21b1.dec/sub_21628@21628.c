int __fastcall sub_21628(int result)
{
  char *v1; // r4
  const char *v2; // r4
  size_t v3; // r2
  struct timex *v4; // r0
  size_t v5; // r0
  size_t v6; // r0
  int v7; // r0
  int digestbyname; // r0
  int v9; // r0
  size_t v10; // r0
  int i; // r4
  size_t v12; // r0
  unsigned int v13; // r2
  size_t v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  const char *v19; // r4
  size_t v20; // r0
  __int64 v21; // r0
  int v22; // r2
  int v23; // r1
  const char *v24; // r0
  double v25; // d7
  int v26; // s13
  double v27; // d7
  __int16 v28; // r3
  int v29; // r9
  char *v30; // r5
  char *v31; // r4
  char *v32; // r8
  const char *v33; // r11
  size_t v34; // r2
  bool v35; // zf
  char *v36; // r0
  int j; // r5
  const char *v38; // r11
  char *v39; // r0
  __int16 v40; // r3
  size_t v41; // r2
  size_t v42; // r0
  size_t v43; // r0
  size_t v44; // r0
  int v45; // [sp+14h] [bp-200h] BYREF
  int v46; // [sp+18h] [bp-1FCh]
  _DWORD v47[2]; // [sp+20h] [bp-1F4h] BYREF
  _BYTE v48[16]; // [sp+28h] [bp-1ECh] BYREF
  char v49[468]; // [sp+38h] [bp-1DCh] BYREF
  _DWORD v50[2]; // [sp+20Ch] [bp-8h] BYREF

  v1 = (char *)result;
  if ( (unsigned int)(result - 59) <= 0xF && current_time != dword_B86CC )
  {
    v4 = (struct timex *)memset(&unk_B86D0, 0, 0x80u);
    result = adjtimex(v4);
    if ( result < 0 )
      result = sub_64A18(3, "ntp_adjtime() for mode 6 query failed: %m");
    else
      dword_B86CC = current_time;
  }
  switch ( (unsigned int)v1 )
  {
    case 1u:
      return (int)sub_1F8EC("leap", (unsigned __int8)sys_leap);
    case 2u:
      return (int)sub_1F8EC("stratum", (unsigned __int8)sys_stratum);
    case 3u:
      return (int)sub_1F848("precision", sys_precision);
    case 4u:
      return (int)sub_1FE70("rootdelay", 1, 3);
    case 5u:
      return (int)sub_1FE70("rootdisp", 1, 3);
    case 6u:
      if ( (unsigned int)(unsigned __int8)sys_stratum - 2 <= 0xD )
        return (int)sub_1EF28("refid", sys_refid, 0);
      else
        return (int)sub_1EFAC("refid", sys_refid);
    case 7u:
      return (int)sub_1FA74("reftime", &sys_reftime);
    case 8u:
      return (int)sub_1F8EC("tc", (unsigned __int8)sys_poll);
    case 9u:
      if ( sys_peer )
        return (int)sub_1F8EC("peer", *(unsigned __int16 *)(sys_peer + 60));
      else
        return (int)sub_1F8EC("peer", 0);
    case 0xAu:
      return (int)sub_1FE70("offset", 1, 6);
    case 0xBu:
      return (int)sub_1FE70("frequency", 1, 3);
    case 0xCu:
      return (int)sub_1FE70("sys_jitter", 1, 6);
    case 0xDu:
      return (int)sub_1FE70("clk_jitter", 1, 3);
    case 0xEu:
      sub_5F334(&v45);
      return (int)sub_1FA74("clock", &v45);
    case 0xFu:
      v44 = strlen(byte_B8854);
      return (int)sub_1F060("processor", (int)byte_B8854, v44);
    case 0x10u:
      sub_6BCB0(v49, 256, "%s/%s", byte_B8750, &byte_B8750[130]);
      v43 = strlen(v49);
      return (int)sub_1F060("system", (int)v49, v43);
    case 0x11u:
      v42 = strlen(Version);
      return (int)sub_1F060("version", (int)Version, v42);
    case 0x12u:
      return (int)sub_1FE70("clk_wander", 1, 3);
    case 0x13u:
      sub_6BCB0(v49, 468, "%s=\"", "sys_var_list");
      result = strlen(v49);
      LOBYTE(v28) = 3;
      v29 = 1;
      v30 = (char *)&unk_B3148;
      v31 = &v49[result];
      v32 = (char *)((char *)v50 - &v49[result]);
      break;
    case 0x14u:
      if ( sys_tai )
        return (int)sub_1F8EC("tai", sys_tai);
      return result;
    case 0x15u:
      result = sub_2D870(&v45);
      if ( v46 )
        return (int)sub_204A4("leapsec", v46);
      return result;
    case 0x16u:
      result = sub_2D870(&v45);
      if ( v45 )
        return (int)sub_204A4("expire", v45);
      return result;
    case 0x17u:
      return (int)sub_1F8EC("mintc", (unsigned __int8)ntp_minpoll);
    case 0x18u:
      return (int)sub_1F7A4("mru_enabled", mon_enabled);
    case 0x19u:
      return (int)sub_1F8EC("mru_depth", SLODWORD(mru_entries));
    case 0x1Au:
      return (int)sub_1F8EC("mru_deepest", mru_peakentries);
    case 0x1Bu:
      return (int)sub_1F8EC("mru_mindepth", (int)mru_mindepth);
    case 0x1Cu:
      return (int)sub_1F848("mru_maxage", (int)mru_maxage);
    case 0x1Du:
      return (int)sub_1F8EC("mru_maxdepth", mru_maxdepth);
    case 0x1Eu:
      v24 = "mru_mem";
      v27 = (double)LODWORD(mru_entries) * 0.0703125;
      v26 = (unsigned int)v27;
      if ( v27 - (double)(unsigned int)v27 >= 0.5 )
        ++v26;
      return (int)sub_1F8EC(v24, v26);
    case 0x1Fu:
      v24 = "mru_maxmem";
      v25 = (double)(unsigned int)mru_maxdepth * 0.0703125;
      v26 = (unsigned int)v25;
      if ( v25 - (double)(unsigned int)v25 >= 0.5 )
        ++v26;
      return (int)sub_1F8EC(v24, v26);
    case 0x20u:
      return (int)sub_1F8EC("ss_uptime", current_time);
    case 0x21u:
      return (int)sub_1F8EC("ss_reset", current_time - sys_stattime);
    case 0x22u:
      return (int)sub_1F8EC("ss_received", sys_received);
    case 0x23u:
      return (int)sub_1F8EC("ss_thisver", sys_newversion);
    case 0x24u:
      return (int)sub_1F8EC("ss_oldver", sys_oldversion);
    case 0x25u:
      return (int)sub_1F8EC("ss_badformat", sys_badlength);
    case 0x26u:
      return (int)sub_1F8EC("ss_badauth", sys_badauth);
    case 0x27u:
      return (int)sub_1F8EC("ss_declined", sys_declined);
    case 0x28u:
      return (int)sub_1F8EC("ss_restricted", sys_restricted);
    case 0x29u:
      return (int)sub_1F8EC("ss_limited", sys_limitrejected);
    case 0x2Au:
      return (int)sub_1F8EC("ss_kodsent", sys_kodsent);
    case 0x2Bu:
      return (int)sub_1F8EC("ss_processed", sys_processed);
    case 0x2Cu:
      return (int)sub_1F8EC("ss_lamport", sys_lamport);
    case 0x2Du:
      return (int)sub_1F8EC("ss_tsrounding", sys_tsrounding);
    case 0x2Eu:
      if ( sys_peer )
      {
        if ( *(_DWORD *)(sys_peer + 56) )
        {
          v2 = (const char *)sub_6C0D8(sys_peer + 16);
          v3 = strlen(v2);
        }
        else
        {
          v3 = 9;
          v2 = "0.0.0.0:0";
        }
      }
      else
      {
        v3 = 9;
        v2 = "0.0.0.0:0";
      }
      return (int)sub_1EE84("peeradr", (int)v2, v3);
    case 0x2Fu:
      v23 = sys_peer;
      if ( sys_peer )
        v23 = *(unsigned __int8 *)(sys_peer + 63);
      return (int)sub_1F8EC("peermode", v23);
    case 0x30u:
      return (int)sub_1FE70("bcastdelay", 1, 3);
    case 0x31u:
      if ( (sys_authdelay & 0x80000000) != 0 )
        v21 = sub_8BA5C(
                -dword_107BF4,
                (unsigned __int64)-(__int64)(__PAIR64__(sys_authdelay, 0) + (unsigned int)dword_107BF4) >> 32);
      else
        v21 = sub_8BA5C(dword_107BF4, (__PAIR64__(sys_authdelay, 0) + (unsigned int)dword_107BF4) >> 32);
      LODWORD(v21) = -32;
      ldexp(*(double *)&v21, v22);
      return (int)sub_1FE70("authdelay", 1, 3);
    case 0x32u:
      return (int)sub_1F8EC("authkeys", authnumkeys);
    case 0x33u:
      return (int)sub_1F8EC("authfreek", authnumfreekeys);
    case 0x34u:
      return (int)sub_1F8EC("authklookups", authkeylookups);
    case 0x35u:
      return (int)sub_1F8EC("authknotfound", authkeynotfound);
    case 0x36u:
      return (int)sub_1F8EC("authkuncached", authkeyuncached);
    case 0x37u:
      return (int)sub_1F8EC("authkexpired", authkeyexpired);
    case 0x38u:
      return (int)sub_1F8EC("authencrypts", authencryptions);
    case 0x39u:
      return (int)sub_1F8EC("authdecrypts", authdecryptions);
    case 0x3Au:
      return (int)sub_1F8EC("authreset", current_time - auth_timereset);
    case 0x3Bu:
      return (int)sub_1FE70("koffset", 0, -1);
    case 0x3Cu:
      return (int)sub_1FE70("kfreq", 0, -1);
    case 0x3Du:
      return (int)sub_1FE70("kmaxerr", 0, 6);
    case 0x3Eu:
      return (int)sub_1FE70("kesterr", 0, 6);
    case 0x3Fu:
      v19 = (const char *)sub_6CD40(dword_B86E4);
      v20 = strlen(v19);
      return (int)sub_1F060("kstflags", (int)v19, v20);
    case 0x40u:
      return (int)sub_1F848("ktimeconst", dword_B86E8);
    case 0x41u:
      return (int)sub_1FE70("kprecis", 0, 6);
    case 0x42u:
      return (int)sub_1FE70("kfreqtol", 0, -1);
    case 0x43u:
      if ( dword_B8708 )
        return (int)sub_1FE70("kppsfreq", 0, -1);
      else
        return (int)sub_1F848("kppsfreq", 0);
    case 0x44u:
      if ( dword_B8708 )
        return (int)sub_1FE70("kppsstab", 0, -1);
      else
        return (int)sub_1F848("kppsstab", 0);
    case 0x45u:
      if ( dword_B8708 )
        return (int)sub_1FE70("kppsjitter", 1, 3);
      else
        return (int)sub_1F848("kppsjitter", 0);
    case 0x46u:
      if ( dword_B8708 )
        return (int)sub_1F848("kppscalibdur", 1 << dword_B8708);
      else
        return (int)sub_1F848("kppscalibdur", 0);
    case 0x47u:
      if ( dword_B8708 )
        return (int)sub_1F848("kppscalibs", dword_B8714);
      else
        return (int)sub_1F848("kppscalibs", 0);
    case 0x48u:
      if ( dword_B8708 )
        return (int)sub_1F848("kppscaliberrs", dword_B8718);
      else
        return (int)sub_1F848("kppscaliberrs", 0);
    case 0x49u:
      if ( dword_B8708 )
        return (int)sub_1F848("kppsjitexc", dword_B8710);
      else
        return (int)sub_1F848("kppsjitexc", 0);
    case 0x4Au:
      if ( dword_B8708 )
        return (int)sub_1F848("kppsstbexc", dword_B871C);
      else
        return (int)sub_1F848("kppsstbexc", 0);
    case 0x4Bu:
      return (int)sub_1F8EC("iostats_reset", current_time - io_timereset);
    case 0x4Cu:
      v18 = sub_69A30();
      return (int)sub_1F8EC("total_rbuf", v18);
    case 0x4Du:
      v17 = sub_69988();
      return (int)sub_1F8EC("free_rbuf", v17);
    case 0x4Eu:
      v16 = sub_699DC();
      return (int)sub_1F8EC("used_rbuf", v16);
    case 0x4Fu:
      v15 = sub_69A84();
      return (int)sub_1F8EC("rbuf_lowater", v15);
    case 0x50u:
      return (int)sub_1F8EC("io_dropped", packets_dropped);
    case 0x51u:
      return (int)sub_1F8EC("io_ignored", packets_ignored);
    case 0x52u:
      return (int)sub_1F8EC("io_received", packets_received);
    case 0x53u:
      return (int)sub_1F8EC("io_sent", packets_sent);
    case 0x54u:
      return (int)sub_1F8EC("io_sendfailed", packets_notsent);
    case 0x55u:
      return (int)sub_1F8EC("io_wakeups", handler_calls);
    case 0x56u:
      return (int)sub_1F8EC("io_goodwakeups", handler_pkts);
    case 0x57u:
      return (int)sub_1F8EC("timerstats_reset", current_time - timer_timereset);
    case 0x58u:
      return (int)sub_1F8EC("timer_overruns", alarm_overflow);
    case 0x59u:
      return (int)sub_1F8EC("timer_xmts", timer_xmtcalls);
    case 0x5Au:
      return (int)sub_1FE70("fuzz", 1, 3);
    case 0x5Bu:
      return (int)sub_1FE70("clk_wander_threshold", 1, 3);
    case 0x5Eu:
      if ( crypto_flags )
        return (int)sub_1F7A4("flags", crypto_flags);
      return result;
    case 0x5Fu:
      if ( dword_107274 )
      {
        v14 = strlen((const char *)dword_107274);
        return (int)sub_1F060("host", dword_107274, v14);
      }
      return result;
    case 0x60u:
      if ( hostval )
        return (int)sub_204A4("update", bswap32(hostval));
      return result;
    case 0x61u:
      for ( i = cinfo; i; i = *(_DWORD *)i )
      {
        sub_6BCB0(v49, 256, "%s %s 0x%x", *(const char **)(i + 48), *(const char **)(i + 52), *(_DWORD *)(i + 4));
        v12 = strlen(v49);
        sub_1F060("cert", (int)v49, v12);
        v13 = sub_6BCB0(
                v48,
                16,
                "%04d%02d%02d%02d%02d",
                *(unsigned __int16 *)(i + 38),
                *(unsigned __int8 *)(i + 42),
                *(unsigned __int8 *)(i + 43),
                *(unsigned __int8 *)(i + 44),
                *(unsigned __int8 *)(i + 45));
        if ( v13 > 0xF )
          sub_6E8F0("ntp_control.c", 1705, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
        result = (int)sub_1EE84("until", (int)v48, v13);
      }
      return result;
    case 0x62u:
      result = crypto_flags;
      if ( crypto_flags )
      {
        v7 = OBJ_nid2sn(HIWORD(crypto_flags));
        digestbyname = EVP_get_digestbyname(v7);
        v9 = EVP_MD_pkey_type(digestbyname);
        OBJ_nid2ln(v9);
        sub_6D12C(v49);
        v10 = strlen(v49);
        return (int)sub_1F060("signature", (int)v49, v10);
      }
      return result;
    case 0x64u:
      if ( sys_ident )
      {
        v6 = strlen((const char *)sys_ident);
        return (int)sub_1F060("ident", sys_ident, v6);
      }
      return result;
    case 0x65u:
      if ( crypto_flags )
      {
        OBJ_nid2ln(crypto_nid);
        sub_6D12C(v49);
        v5 = strlen(v49);
        return (int)sub_1F060("digest", (int)v49, v5);
      }
      return result;
    default:
      return result;
  }
  while ( 1 )
  {
    v30 += 8;
    if ( (v28 & 0x80) != 0 )
      break;
    if ( (v28 & 0x40) == 0 )
    {
      v33 = (const char *)*((_DWORD *)v30 + 1);
      result = strlen(v33);
      v34 = result;
      if ( result + 1 >= (int)v32 )
        break;
      v35 = v29 == 0;
      v29 = 0;
      if ( v35 )
        *v31++ = 44;
      v36 = v31;
      v31 += v34;
      result = (int)memcpy(v36, v33, v34);
      v32 = (char *)((char *)v50 - v31);
    }
    v28 = *((_WORD *)v30 + 5);
  }
  for ( j = dword_B88D8; j; j += 8 )
  {
    v40 = *(_WORD *)(j + 2);
    if ( (v40 & 0x80) != 0 )
      break;
    if ( (v40 & 0x40) == 0 )
    {
      v38 = *(const char **)(j + 4);
      if ( v38 )
      {
        result = (int)strchr(*(const char **)(j + 4), 61);
        if ( result )
        {
          v41 = result - (_DWORD)v38;
        }
        else
        {
          result = strlen(v38);
          v41 = result;
        }
        if ( (int)(v41 + 1) >= (int)v32 )
          break;
        v35 = v29 == 0;
        v29 = 0;
        if ( !v35 )
        {
          *v31 = 44;
          v38 = *(const char **)(j + 4);
          ++v31;
        }
        v39 = v31;
        v31 += v41;
        v32 = (char *)((char *)v50 - v31);
        result = (int)memcpy(v39, v38, v41);
      }
    }
  }
  if ( (int)v32 > 2 )
  {
    *v31 = 34;
    v31[1] = 0;
    v47[0] = v49;
    v47[1] = v31 + 1 - v49;
    return (int)sub_1EC64((char *)v47, 1, 0);
  }
  return result;
}
