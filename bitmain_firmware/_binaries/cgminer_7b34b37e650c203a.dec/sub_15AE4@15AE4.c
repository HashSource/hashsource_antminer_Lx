int sub_15AE4()
{
  int result; // r0

  if ( !byte_68A78 )
  {
    result = deregister_tm_clones();
    byte_68A78 = 1;
  }
  return result;
}
