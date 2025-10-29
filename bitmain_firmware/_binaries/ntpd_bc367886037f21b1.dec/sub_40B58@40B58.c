int __fastcall sub_40B58(int result)
{
  if ( result )
  {
    result += current_time;
    dword_BBBD8 = result;
  }
  else
  {
    dword_BBBD8 = 0;
  }
  return result;
}
