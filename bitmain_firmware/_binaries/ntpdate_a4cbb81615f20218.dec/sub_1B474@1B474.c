int __fastcall sub_1B474(_BYTE *a1)
{
  bool v1; // zf
  int result; // r0

  if ( !a1 )
    sub_10788();
  v1 = *a1 == 46;
  if ( *a1 == 46 )
    result = (unsigned __int8)a1[1];
  else
    result = 0;
  if ( v1 )
    return result == 0;
  return result;
}
