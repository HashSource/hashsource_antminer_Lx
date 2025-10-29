int bitmain_power_open()
{
  int result; // r0

  result = dword_16E580;
  if ( !dword_16E580 || !dword_16E584 )
    return sub_BA8BC();
  return result;
}
