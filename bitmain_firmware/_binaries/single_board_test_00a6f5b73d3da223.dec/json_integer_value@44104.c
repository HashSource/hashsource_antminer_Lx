int __fastcall json_integer_value(_DWORD *a1)
{
  if ( a1 && *a1 == 3 )
    return a1[2];
  else
    return 0;
}
