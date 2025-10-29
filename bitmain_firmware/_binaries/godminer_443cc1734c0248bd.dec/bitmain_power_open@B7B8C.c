int bitmain_power_open()
{
  int result; // r0

  result = dword_16B450;
  if ( !dword_16B450 || !dword_16B454 )
    return sub_B79C4();
  return result;
}
