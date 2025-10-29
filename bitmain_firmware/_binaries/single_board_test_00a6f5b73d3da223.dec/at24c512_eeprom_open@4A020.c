int __fastcall at24c512_eeprom_open(const char *a1, int a2)
{
  int fd; // [sp+Ch] [bp+Ch]

  fd = open(a1, 2);
  if ( fd > 0 )
  {
    if ( ioctl(fd, 0x703u, a2) >= 0 )
    {
      return fd;
    }
    else
    {
      perror("failed to get i2c_slave ioctl");
      return -1;
    }
  }
  else
  {
    perror("failed to open i2c dev");
    return -1;
  }
}
