int __fastcall json_number_value(int result)
{
  if ( result )
  {
    if ( *(_DWORD *)result == 3 )
      return sub_12D3E4(*(_QWORD *)(result + 8));
  }
  return result;
}
