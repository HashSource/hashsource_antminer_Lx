int __fastcall fpga_read(int a1, _DWORD *a2)
{
  int v2; // r3
  unsigned int v3; // r2

  LOWORD(v2) = -16196;
  v3 = a1 & 0xFFFFFFFC;
  HIWORD(v2) = (unsigned int)&unk_16AFBC >> 16;
  *a2 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + v3);
  return 0;
}
