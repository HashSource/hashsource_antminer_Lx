int __fastcall sub_4B718(int a1)
{
  if ( bitmain_set_voltage() < 0 )
    return sub_4B590();
  usleep(0x7A120u);
  dword_166248 = a1;
  dword_16624C = a1;
  return 0;
}
