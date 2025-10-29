int sub_23FA4()
{
  int result; // r0

  if ( !byte_166EBC )
  {
    result = deregister_tm_clones();
    byte_166EBC = 1;
  }
  return result;
}
