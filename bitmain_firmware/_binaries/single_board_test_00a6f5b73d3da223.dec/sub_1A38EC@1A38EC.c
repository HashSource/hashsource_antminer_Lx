int __fastcall sub_1A38EC(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x1A3EC4);
  return divsi3_skip_div0_test(a1, a2);
}
