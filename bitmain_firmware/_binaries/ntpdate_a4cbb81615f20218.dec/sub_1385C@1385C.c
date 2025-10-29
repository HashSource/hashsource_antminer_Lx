int __fastcall sub_1385C(int result, _DWORD *a2)
{
  int v2; // r12
  __int64 v3; // r2

  if ( !result || *(_DWORD *)result != 1114990113 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  v2 = *(_DWORD *)(result + 12);
  v3 = *(_QWORD *)(result + 4);
  *a2 = v3 + v2;
  a2[1] = HIDWORD(v3) - v2;
  return result;
}
