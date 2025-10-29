int __fastcall sub_3F068(int *a1)
{
  _BYTE buf[4]; // [sp+Ch] [bp+Ch] BYREF
  _BOOL4 v5; // [sp+10h] [bp+10h]
  int fd; // [sp+14h] [bp+14h]

  fd = open("/dev/urandom", 0);
  if ( fd == -1 )
    return 1;
  v5 = read(fd, buf, 4u) == 4;
  close(fd);
  if ( !v5 )
    return 1;
  *a1 = sub_3F02C((int)buf);
  return 0;
}
