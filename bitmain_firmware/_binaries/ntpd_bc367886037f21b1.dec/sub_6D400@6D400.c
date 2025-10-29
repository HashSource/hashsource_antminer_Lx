int __fastcall sub_6D400(int (__fastcall *a1)(_DWORD, _DWORD))
{
  int result; // r0

  if ( a1 )
  {
    off_106228 = a1;
    return sub_6D340(2, (void (*)(int))sigint_handler);
  }
  else
  {
    result = sub_6D340(2, 0);
    off_106228 = 0;
  }
  return result;
}
