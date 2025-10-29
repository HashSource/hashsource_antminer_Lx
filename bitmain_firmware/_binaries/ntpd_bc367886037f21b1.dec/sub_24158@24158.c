int __fastcall sub_24158(unsigned int *a1, int a2, __int16 a3)
{
  unsigned int v4; // r4
  unsigned int v7; // r5
  int v8; // r4
  int result; // r0
  unsigned int v10; // r1
  _DWORD *v11; // lr

  v4 = *a1;
  v7 = sub_1F6FC(*a1);
  v8 = sub_637E4(v4, 8 * (v7 + 2), 0, 0);
  *a1 = v8;
  result = sub_637E4(0, a2, 0, 0);
  v10 = v8 + 8 * v7;
  *(_WORD *)v10 = v7;
  *(_WORD *)(v10 + 2) = a3;
  v11 = (_DWORD *)(v8 + 8 * v7 + 8);
  *(_DWORD *)(v10 + 4) = result;
  *v11 = 0x800000;
  v11[1] = 0;
  return result;
}
