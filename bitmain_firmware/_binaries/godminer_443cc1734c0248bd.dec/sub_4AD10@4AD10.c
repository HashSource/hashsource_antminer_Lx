int __fastcall sub_4AD10(int a1)
{
  if ( bitmain_set_voltage() < 0 )
    return sub_4AB88();
  usleep(0x7A120u);
  dword_165230 = a1;
  dword_165234 = a1;
  return 0;
}
