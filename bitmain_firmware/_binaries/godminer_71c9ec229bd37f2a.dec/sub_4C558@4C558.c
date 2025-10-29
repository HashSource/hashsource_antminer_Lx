int __fastcall sub_4C558(int a1)
{
  if ( bitmain_set_voltage() < 0 )
    return sub_4C3D0();
  usleep(0x7A120u);
  dword_168260 = a1;
  dword_168264 = a1;
  return 0;
}
