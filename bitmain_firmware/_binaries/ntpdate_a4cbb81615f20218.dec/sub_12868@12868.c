int __fastcall sub_12868(int result, _DWORD *a2)
{
  if ( *a2 != 10 )
    sub_10788();
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    sub_10788();
  *(_QWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)result = 2;
  *(_DWORD *)(result + 4) = a2[4];
  return result;
}
