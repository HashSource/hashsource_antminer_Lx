unsigned int sub_66FF0()
{
  unsigned int result; // r0

  if ( worker_per_query )
    return sub_66F2C();
  result = dword_B6CEC;
  if ( dword_B6CEC == -1 )
  {
    result = sub_66F2C();
    dword_B6CEC = result;
  }
  return result;
}
