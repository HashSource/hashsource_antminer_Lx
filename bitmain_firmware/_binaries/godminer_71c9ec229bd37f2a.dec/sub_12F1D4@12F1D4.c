int __fastcall sub_12F1D4(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x12F854);
  return divsi3_skip_div0_test(a1, a2);
}
