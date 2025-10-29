int bitmain_power_close()
{
  if ( dword_16E580 && dword_16E584 )
    return 0;
  sub_BA610();
  return 0;
}
