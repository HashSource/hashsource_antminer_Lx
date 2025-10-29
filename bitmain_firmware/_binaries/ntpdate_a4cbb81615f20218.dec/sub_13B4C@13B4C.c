_DWORD *__fastcall sub_13B4C(_DWORD *result, _QWORD *a2)
{
  __int64 v2; // r2

  if ( !result || *result != 1114990113 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  LODWORD(v2) = result[1];
  HIDWORD(v2) = result[4];
  *a2 = v2;
  return result;
}
