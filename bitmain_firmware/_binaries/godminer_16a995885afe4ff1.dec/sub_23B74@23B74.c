int sub_23B74()
{
  int result; // r0

  if ( !byte_164EAC )
  {
    result = deregister_tm_clones();
    byte_164EAC = 1;
  }
  return result;
}
