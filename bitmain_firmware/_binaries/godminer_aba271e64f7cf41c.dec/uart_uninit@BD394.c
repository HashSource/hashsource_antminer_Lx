int uart_uninit()
{
  int result; // r0

  if ( dword_1608E0 )
  {
    result = delete_c_map((void ***)dword_1608E0);
    dword_1608E0 = 0;
  }
  return result;
}
