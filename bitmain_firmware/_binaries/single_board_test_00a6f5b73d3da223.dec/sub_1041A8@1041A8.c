unsigned __int64 __fastcall sub_1041A8(int a1)
{
  int v1; // r4
  int v2; // r2
  __int64 v3; // kr20_8
  int v4; // r2
  __int64 v5; // kr38_8
  int v6; // r4
  unsigned __int64 result; // r0

  *(_QWORD *)a1 += *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) += *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = sub_104120(*(_QWORD *)(a1 + 8), 13);
  *(_QWORD *)(a1 + 24) = sub_104120(*(_QWORD *)(a1 + 24), 16);
  v1 = *(_DWORD *)(a1 + 4) ^ *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) ^= *(_DWORD *)a1;
  *(_DWORD *)(a1 + 12) = v1;
  v2 = *(_DWORD *)(a1 + 28);
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) ^= v3;
  *(_DWORD *)(a1 + 28) = HIDWORD(v3) ^ v2;
  *(_QWORD *)a1 = sub_104120(*(_QWORD *)a1, 32);
  *(_QWORD *)(a1 + 16) += *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 += *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = sub_104120(*(_QWORD *)(a1 + 8), 17);
  *(_QWORD *)(a1 + 24) = sub_104120(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) ^= v5;
  *(_DWORD *)(a1 + 12) = HIDWORD(v5) ^ v4;
  v6 = *(_DWORD *)(a1 + 4) ^ *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 24) ^= *(_DWORD *)a1;
  *(_DWORD *)(a1 + 28) = v6;
  result = sub_104120(*(_QWORD *)(a1 + 16), 32);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
