void __fastcall sub_16F14(const char *a1, int a2, int a3, int a4)
{
  const char *v7; // r9
  size_t v8; // r0
  size_t v9; // r2
  __int16 *v10; // r3
  signed int v11; // r5
  int v12; // r2
  int v13; // r7
  int v14; // r10
  _BOOL4 v15; // r3
  fd_set *p_tv_usec; // r3
  int v17; // r0
  ssize_t v18; // r0
  ssize_t v19; // r8
  int v20; // r0
  char *v21; // r0
  int v22; // [sp+Ch] [bp-898h]
  signed int v23; // [sp+10h] [bp-894h]
  struct timeval timeout; // [sp+18h] [bp-88Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-884h] BYREF
  char s[2048]; // [sp+A0h] [bp-804h] BYREF

  v7 = a1;
  v8 = strlen(a1);
  v9 = v8;
  if ( a2 )
  {
    v9 = v8 + 1;
    *(_WORD *)&v7[v8] = 93;
  }
  if ( a4 )
  {
    strcpy((char *)&v7[v9], ",\"id\":1}");
    v9 = strlen(v7);
  }
  v23 = v9 + 1;
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    v10 = (__int16 *)"";
    if ( v9 > 0xA )
      v10 = &word_4A834;
    snprintf(s, 0x800u, "API: send reply: (%d) '%.10s%s'", v23, v7, v10);
    sub_20F58(7, s, 0);
  }
  v11 = v23;
  LOBYTE(v12) = a3 & 0x1F;
  if ( a3 <= 0 )
    v12 = -(-a3 & 0x1F);
  v13 = 0;
  v14 = 0;
  v22 = 1 << v12;
  while ( 1 )
  {
    v15 = v14 <= 4;
    if ( v11 <= 0 )
      v15 = 0;
    if ( !v15 )
      break;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
    writefds.__fds_bits[a3 / 32] |= v22;
    v17 = select(a3 + 1, 0, &writefds, 0, &timeout);
    if ( v17 <= 0 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
      {
        snprintf(s, 0x800u, "API: send select failed (%d)", v17);
        sub_20F58(4, s, 0);
      }
      return;
    }
    v18 = send(a3, v7, v11, 0);
    v19 = v18;
    ++v13;
    if ( v18 < 0 )
    {
      v20 = *_errno_location();
      if ( v20 != 11 )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
        {
          v21 = strerror(v20);
          snprintf(s, 0x800u, "API: send (%d:%d) failed: %s", v23, v23 - v11, v21);
          sub_20F58(4, s, 0);
        }
        return;
      }
LABEL_27:
      ++v14;
    }
    else if ( v13 == 1 )
    {
      if ( v11 != v18 )
      {
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          snprintf(s, 0x800u, "API: sent %d of %d first go", v18, v11);
          sub_20F58(7, s, 0);
        }
        goto LABEL_26;
      }
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        snprintf(s, 0x800u, "API: sent all of %d first go", v11);
        sub_20F58(7, s, 0);
      }
LABEL_47:
      v11 -= v19;
      v7 += v19;
    }
    else if ( v11 == v18 )
    {
      if ( !byte_68BD5 || !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
        goto LABEL_47;
      snprintf(s, 0x800u, "API: sent all of remaining %d (sendc=%d)", v11, v13);
      v11 -= v19;
      sub_20F58(7, s, 0);
      v7 += v19;
    }
    else
    {
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        snprintf(s, 0x800u, "API: sent %d of remaining %d (sendc=%d)", v18, v11, v13);
        sub_20F58(7, s, 0);
      }
LABEL_26:
      v11 -= v19;
      v7 += v19;
      if ( !v19 )
        goto LABEL_27;
    }
  }
}
