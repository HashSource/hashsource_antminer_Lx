int sub_112A4()
{
  fd_set *p_tv_usec; // r3
  int v1; // r5
  int v2; // r3
  int v3; // r12
  int v4; // r3
  void *v5; // r8
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r3
  size_t v11; // r0
  socklen_t addr_len; // [sp+Ch] [bp-8Ch] BYREF
  struct timeval timeout; // [sp+10h] [bp-88h] BYREF
  fd_set readfds; // [sp+18h] [bp-80h] BYREF

  timeout.tv_usec = 0;
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  timeout.tv_sec = 2;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
  v1 = dword_220A4;
  v2 = dword_220A4 + 31;
  LOBYTE(v3) = dword_220A4 & 0x1F;
  if ( dword_220A4 >= 0 )
    v2 = dword_220A4;
  v4 = v2 >> 5;
  if ( dword_220A4 <= 0 )
    v3 = -(-dword_220A4 & 0x1F);
  readfds.__fds_bits[v4] |= 1 << v3;
  v5 = calloc(0x1Eu, 1u);
  v6 = select(v1 + 1, &readfds, 0, 0, &timeout);
  if ( v6 == -1 )
    exit(-1);
  if ( !v6 )
  {
LABEL_17:
    if ( ++dword_220CC == 5 )
      goto LABEL_15;
LABEL_18:
    free(v5);
    return 0;
  }
  v7 = dword_220A4 + 31;
  LOBYTE(v8) = dword_220A4 & 0x1F;
  if ( dword_220A4 >= 0 )
    v7 = dword_220A4;
  v9 = v7 >> 5;
  if ( dword_220A4 <= 0 )
    v8 = -(-dword_220A4 & 0x1F);
  if ( (readfds.__fds_bits[v9] & (1 << v8)) == 0 )
  {
    if ( dword_220CC == 5 )
    {
LABEL_15:
      dword_220CC = 0;
      puts("Time Out");
      free(v5);
      return 1;
    }
    goto LABEL_18;
  }
  addr_len = 16;
  if ( recvfrom(dword_220A4, v5, 0x1Eu, 0, (struct sockaddr *)&dword_220D4, &addr_len) <= 0 )
  {
    printf("read error....");
    goto LABEL_17;
  }
  printf("rev:\n%s\t", (const char *)v5);
  dword_220CC = 0;
  v11 = strlen(byte_220AC);
  if ( !strncmp((const char *)v5, byte_220AC, v11) )
  {
    printf("send_ack(\"1\");");
    sub_10F78(1);
    sub_1124C("OK");
    free(v5);
    return 1;
  }
  else
  {
    printf("send_ack(\"0\");");
    sub_10F78(0);
    sub_1124C("FAILD");
    free(v5);
    return 0;
  }
}
