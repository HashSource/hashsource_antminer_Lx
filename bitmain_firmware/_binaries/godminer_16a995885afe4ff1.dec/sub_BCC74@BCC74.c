unsigned int sub_BCC74()
{
  int v0; // r4
  int v2; // [sp+4h] [bp-8h] BYREF

  v0 = 601;
  v2 = 0;
  do
  {
    fpga_read(48, &v2);
    if ( v2 < 0 )
      return (unsigned int)v2 >> 31;
    usleep(0x1388u);
    --v0;
  }
  while ( v0 );
  return 0;
}
