int __fastcall sub_12CE18(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x12D72C);
  return divsi3_skip_div0_test(a1, a2);
}
