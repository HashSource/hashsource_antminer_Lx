int __fastcall sub_140E58(int result, unsigned int a2)
{
  *(_BYTE *)result = a2;
  *(_WORD *)(result + 1) = a2 >> 8;
  *(_BYTE *)(result + 3) = HIBYTE(a2);
  return result;
}
