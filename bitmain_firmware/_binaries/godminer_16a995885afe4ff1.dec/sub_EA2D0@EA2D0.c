int __fastcall sub_EA2D0(int a1, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r12
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0

  v6 = *(_DWORD *)(a1 + 28) ^ a4;
  *(_DWORD *)(a1 + 24) ^= a3;
  *(_DWORD *)(a1 + 28) = v6;
  v7 = sub_EA1C8(a1);
  v8 = (_DWORD *)sub_EA1C8(v7);
  v9 = v8[1];
  v10 = v8[4];
  *v8 ^= a3;
  v8[1] = v9 ^ a4;
  v8[4] = v10 ^ 0xFF;
  v11 = sub_EA1C8((int)v8);
  v12 = sub_EA1C8(v11);
  v13 = sub_EA1C8(v12);
  return sub_EA1C8(v13);
}
