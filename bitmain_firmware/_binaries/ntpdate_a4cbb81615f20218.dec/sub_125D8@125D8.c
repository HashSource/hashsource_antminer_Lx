int __fastcall sub_125D8(int result)
{
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)result = 2;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
