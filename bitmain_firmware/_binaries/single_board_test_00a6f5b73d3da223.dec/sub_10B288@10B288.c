int __fastcall sub_10B288(int result, int a2, unsigned int a3, int a4)
{
  *(_BYTE *)result = a3;
  *(_WORD *)(result + 1) = a3 >> 8;
  *(_BYTE *)(result + 3) = HIBYTE(a3);
  *(_DWORD *)(result + 4) = a4;
  return result;
}
