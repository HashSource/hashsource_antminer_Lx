int bitmain_power_close()
{
  if ( dword_16C550 && dword_16C554 )
    return 0;
  sub_B8900();
  return 0;
}
