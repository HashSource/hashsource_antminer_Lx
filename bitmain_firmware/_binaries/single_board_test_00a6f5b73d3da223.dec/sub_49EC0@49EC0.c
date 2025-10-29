int __fastcall sub_49EC0(int a1, int a2)
{
  _WORD v3[18]; // [sp+10h] [bp+8h] BYREF

  v3[0] = *(unsigned __int8 *)(a2 + 1) | (*(unsigned __int8 *)(a2 + 2) << 8);
  return sub_49E40(a1, 0, *(_BYTE *)a2, 3, (int)v3);
}
