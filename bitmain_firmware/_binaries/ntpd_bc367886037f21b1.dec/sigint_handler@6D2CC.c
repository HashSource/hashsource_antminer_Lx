int __fastcall sigint_handler(int result)
{
  if ( off_106228 )
    return ((int (__fastcall *)(int))off_106228)(result);
  return result;
}
