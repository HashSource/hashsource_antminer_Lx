int __fastcall V_BOOL(int a1, const char *a2, char a3)
{
  size_t v3; // r1

  ++dword_160988;
  v3 = strlen(a2);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = 2;
  *(_BYTE *)(a1 + 16) = a3;
  return a1;
}
