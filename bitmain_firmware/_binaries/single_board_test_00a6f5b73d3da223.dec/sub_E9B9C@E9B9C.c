int __fastcall sub_E9B9C(_BYTE *a1)
{
  unsigned int v2; // r3
  unsigned int v5; // [sp+8h] [bp+8h] BYREF
  unsigned int v6; // [sp+Ch] [bp+Ch]

  v5 = 0;
  v6 = 0;
  do
  {
    fpga_read(0x30u, &v5);
    if ( v5 >> 31 == 1 )
    {
      *a1 = v5;
      return 1;
    }
    usleep(0x1388u);
    v2 = v6++;
  }
  while ( v2 < 0x258 );
  return 0;
}
