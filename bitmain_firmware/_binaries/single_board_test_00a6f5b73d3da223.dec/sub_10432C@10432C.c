unsigned __int64 __fastcall sub_10432C(int a1, __int64 a2)
{
  int v3; // r2
  int v4; // r4
  __int64 v5; // kr08_8

  v3 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 24) ^= a2;
  *(_DWORD *)(a1 + 28) = HIDWORD(a2) ^ v3;
  sub_1041A8(a1);
  sub_1041A8(a1);
  v4 = HIDWORD(a2) ^ *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 ^= a2;
  *(_DWORD *)(a1 + 4) = v4;
  v5 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v5 ^ 0xFF;
  *(_DWORD *)(a1 + 20) = HIDWORD(v5);
  sub_1041A8(a1);
  sub_1041A8(a1);
  sub_1041A8(a1);
  return sub_1041A8(a1);
}
