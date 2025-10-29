int pcba_chain_check()
{
  int v1; // r2
  unsigned int v3; // [sp+0h] [bp+0h] BYREF
  int i; // [sp+8h] [bp+8h]
  int v6; // [sp+Ch] [bp+Ch]

  v6 = 0;
  v3 = 0;
  fpga_init();
  if ( fpga_read(8u, &v3) )
  {
    puts("read HASH_ON_PLUG failed");
    return 0;
  }
  else
  {
    for ( i = 0; i <= 3; ++i )
    {
      if ( ((v3 >> i) & 1) != 0 )
      {
        v1 = v6++;
        pcba_chain_info[v1] = i;
      }
    }
    return v6;
  }
}
