int sub_23C88()
{
  int result; // r0

  if ( !byte_164EAC )
  {
    result = deregister_tm_clones();
    byte_164EAC = 1;
  }
  return result;
}
