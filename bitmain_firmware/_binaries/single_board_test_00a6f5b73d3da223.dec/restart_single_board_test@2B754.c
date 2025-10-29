void __noreturn restart_single_board_test()
{
  char v0; // [sp+Fh] [bp+Fh] BYREF
  int v1; // [sp+10h] [bp+10h]
  unsigned int v2; // [sp+14h] [bp+14h]

  v2 = 0;
  sleep(3u);
  while ( 1 )
  {
    v0 = 1;
    v1 = gpio_read(943, &v0);
    if ( v1 < 0 || v0 )
      v2 = 0;
    else
      ++v2;
    if ( v2 > 0x18 )
      system("/etc/init.d/cgminer.sh restart");
    usleep(0x30D40u);
  }
}
