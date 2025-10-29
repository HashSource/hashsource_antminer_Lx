int __fastcall sub_CC7AC(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0xCCE2C);
  return divsi3_skip_div0_test(a1, a2);
}
