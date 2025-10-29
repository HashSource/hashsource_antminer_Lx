int sub_13BCC()
{
  int result; // r0

  if ( !byte_9F7D8 )
  {
    result = deregister_tm_clones();
    byte_9F7D8 = 1;
  }
  return result;
}
