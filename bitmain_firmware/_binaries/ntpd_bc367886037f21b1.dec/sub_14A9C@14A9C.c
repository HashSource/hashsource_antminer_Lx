ssize_t __fastcall sub_14A9C(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r1
  int v10; // r9
  ssize_t v11; // r8
  __int64 v13; // r0
  const char *v14; // r0
  size_t msg_controllen; // r3
  _DWORD *msg_control; // r10
  int v17; // r1
  signed int v18; // r3
  int v19; // r5
  signed int v20; // r2
  bool v21; // cc
  int v22; // r5
  __int64 v23; // r0
  int v24; // r6
  int v25; // r0
  double v26; // d0
  double v27; // r0
  int v28; // r2
  __int64 v29; // r0
  bool v30; // cf
  int v31; // r5
  int v32; // r3
  const char *v33; // r0
  socklen_t addr_len; // [sp+28h] [bp-654h] BYREF
  _DWORD v35[2]; // [sp+2Ch] [bp-650h] BYREF
  int v36; // [sp+34h] [bp-648h]
  int v37; // [sp+38h] [bp-644h]
  struct msghdr message; // [sp+3Ch] [bp-640h] BYREF
  struct sockaddr addr; // [sp+58h] [bp-624h] BYREF
  _BYTE buf[1536]; // [sp+74h] [bp-608h] BYREF

  v8 = sub_69D38();
  v10 = v8;
  if ( !v8 )
    goto LABEL_4;
  if ( *(_DWORD *)(a2 + 180) )
  {
    sub_69BD8(v8, v9);
LABEL_4:
    addr_len = 28;
    v11 = recvfrom(a1, buf, 0x4B0u, 0, &addr, &addr_len);
    if ( *(_DWORD *)(a2 + 180) )
      ++packets_ignored;
    else
      ++packets_dropped;
    return v11;
  }
  message.msg_flags = 0;
  message.msg_iov = (struct iovec *)v35;
  addr_len = 28;
  message.msg_namelen = 28;
  v35[0] = v8 + 88;
  v35[1] = 2120;
  message.msg_name = (void *)(v8 + 4);
  message.msg_iovlen = 1;
  message.msg_control = buf;
  message.msg_controllen = 1536;
  LODWORD(v13) = recvmsg(a1, &message, 0);
  v11 = v13;
  *(_DWORD *)(v10 + 84) = v13;
  if ( !(_DWORD)v13 )
    goto LABEL_24;
  if ( (_DWORD)v13 == -1 )
  {
    if ( *_errno_location() != 11 )
      goto LABEL_23;
LABEL_24:
    sub_69BD8(v10, HIDWORD(v13));
    return v11;
  }
  if ( (int)v13 < 0 )
  {
LABEL_23:
    v14 = (const char *)sub_6BF44(v10 + 4);
    v13 = sub_64A18(3, "recvfrom(%s) fd=%d: %m", v14, a1);
    goto LABEL_24;
  }
  if ( *(_WORD *)(v10 + 4) == 2 && *(_WORD *)(v10 + 8) == 32639 )
  {
    v33 = (const char *)sub_6BF44(v10 + 4);
    v13 = sub_64A18(3, "recvfrom(%s) fd=%d: refclock srcadr on a network interface!", v33, a1);
LABEL_21:
    ++packets_dropped;
    sub_69BD8(v10, HIDWORD(v13));
    return v11;
  }
  if ( *(_WORD *)(a2 + 140) == 10
    && !*(_DWORD *)(v10 + 12)
    && !*(_DWORD *)(v10 + 16)
    && !*(_DWORD *)(v10 + 20)
    && *(_DWORD *)(v10 + 24) == 0x1000000
    && (*(_DWORD *)(a2 + 32) || *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 40) || *(_DWORD *)(a2 + 44) != 0x1000000) )
  {
    goto LABEL_21;
  }
  msg_controllen = message.msg_controllen;
  *(_DWORD *)(v10 + 60) = a2;
  *(_DWORD *)(v10 + 64) = a1;
  if ( msg_controllen > 0xB )
  {
    msg_control = message.msg_control;
    if ( message.msg_control )
    {
      do
      {
        if ( msg_control[2] == 35 )
        {
          v17 = msg_control[4];
          v36 = msg_control[3];
          v37 = v17;
          if ( sys_tick > measured_tick )
          {
            v18 = v37;
            if ( sys_tick > 0.000000001 )
              v18 = (int)((double)(unsigned int)((double)v37 * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
          }
          else
          {
            v18 = v37;
          }
          v19 = v36;
          if ( v18 < 0 )
          {
            do
            {
              v18 += 1000000000;
              --v19;
            }
            while ( v18 < 0 );
          }
          else if ( v18 > 999999999 )
          {
            v20 = v18 - 1000000000;
            v21 = v18 - 1000000000 <= 999999999;
            if ( v18 - 1000000000 <= 999999999 )
              v19 = v36 + 1;
            else
              v18 -= 2013265920;
            if ( v21 )
            {
              v18 = v20;
            }
            else
            {
              v19 += 2;
              v18 += 13265920;
            }
          }
          v22 = v19 - 2085978496;
          v23 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v18).n64_i64[0], 0x20u), 0x20u) + 500000000;
          v24 = sub_8BB68(v23, HIDWORD(v23), 1000000000, 0);
          v25 = sub_686F8();
          v26 = ((double)v25 + (double)v25) * 2.32830644e-10 * sys_fuzz;
          LODWORD(v27) = 32;
          ldexp(v27, v28);
          if ( v26 < 0.0 )
            v29 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v26), HIDWORD(COERCE_UNSIGNED_INT64(-v26)));
          else
            v29 = sub_8BBA8(LODWORD(v26), HIDWORD(v26));
          v30 = __CFADD__(v24, (_DWORD)v29);
          a4 = v24 + v29;
          v31 = v22 + HIDWORD(v29);
          v32 = v30;
          a3 = v31 + v32;
        }
        if ( *msg_control <= 0xBu )
          break;
        msg_control = (_DWORD *)((char *)msg_control + ((*msg_control + 3) & 0xFFFFFFFC));
        if ( (char *)message.msg_control + message.msg_controllen < (char *)(msg_control + 3) )
          break;
      }
      while ( (char *)message.msg_control + message.msg_controllen >= (char *)msg_control
                                                                    + ((*msg_control + 3) & 0xFFFFFFFC) );
    }
  }
  *(_DWORD *)(v10 + 72) = a3;
  *(_DWORD *)(v10 + 76) = a4;
  *(_DWORD *)(v10 + 80) = receive;
  sub_69C74(v10);
  ++*(_DWORD *)(a2 + 164);
  ++packets_received;
  return v11;
}
