int bitmain_power_close()
{
  if ( dword_16B450 && dword_16B454 )
    return 0;
  sub_B7718();
  return 0;
}
