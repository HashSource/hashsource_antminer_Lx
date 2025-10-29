int __fastcall sub_F004(int a1)
{
  __int64 v1; // d0
  int result; // r0

  result = sub_637E4(0, 24, 0, 1);
  *(_DWORD *)(result + 4) = a1;
  *(_DWORD *)(result + 8) = 289;
  *(_QWORD *)(result + 16) = v1;
  return result;
}
