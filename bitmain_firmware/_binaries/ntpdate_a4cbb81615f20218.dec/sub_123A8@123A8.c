int __fastcall sub_123A8(int a1, int *a2)
{
  _DWORD *v2; // r12
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // t0

  v2 = (_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 10;
  result = *a2;
  v7 = a2 + 1;
  v4 = a2[1];
  v5 = *++v7;
  v6 = v7[1];
  *v2 = result;
  v2[1] = v4;
  v2[2] = v5;
  v2[3] = v6;
  return result;
}
