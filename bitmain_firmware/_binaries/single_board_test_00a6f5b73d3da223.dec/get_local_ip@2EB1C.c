int32_t __cdecl get_local_ip(char *ifname, char *ip)
{
  size_t v2; // r0
  size_t v4; // r0
  _BYTE s[20]; // [sp+8h] [bp+8h] BYREF
  struct in_addr v9; // [sp+1Ch] [bp+1Ch]
  int fd; // [sp+28h] [bp+28h]
  char *v11; // [sp+2Ch] [bp+2Ch]

  v11 = 0;
  fd = socket(2, 2, 0);
  memset(s, 0, 0x10u);
  v2 = strlen(ifname);
  memcpy(s, ifname, v2);
  if ( ioctl(fd, 0x8915u, s) )
    return -1;
  v11 = inet_ntoa(v9);
  v4 = strlen(v11);
  memcpy(ip, v11, v4);
  close(fd);
  return 0;
}
