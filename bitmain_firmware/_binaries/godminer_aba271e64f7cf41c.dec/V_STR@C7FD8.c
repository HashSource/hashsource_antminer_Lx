int __fastcall V_STR(int a1, const char *a2, const char *a3)
{
  size_t v3; // r4
  size_t v4; // r1

  ++dword_160988;
  v3 = strlen(a2);
  v4 = strlen(a3);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = v4;
  return a1;
}
