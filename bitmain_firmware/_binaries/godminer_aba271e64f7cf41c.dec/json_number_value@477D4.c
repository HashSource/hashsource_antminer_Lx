void __fastcall json_number_value(_DWORD *a1)
{
  __int64 v1; // r0

  if ( a1 && *a1 == 3 )
  {
    v1 = json_integer_value((int)a1);
    sub_CCAE4(v1);
  }
  else if ( a1 )
  {
    if ( *a1 == 4 )
      json_real_value();
  }
}
