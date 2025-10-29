int bitmain_power_open()
{
  int result; // r0

  result = dword_16C550;
  if ( !dword_16C550 || !dword_16C554 )
    return sub_B8BAC();
  return result;
}
