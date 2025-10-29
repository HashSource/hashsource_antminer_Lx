int i2c_sim_uninit()
{
  int result; // r0

  if ( dword_150C20 > 0 )
    result = close(dword_150C20);
  if ( dword_150C24 > 0 )
    result = close(dword_150C24);
  if ( dword_150C28 > 0 )
    return close(dword_150C28);
  return result;
}
