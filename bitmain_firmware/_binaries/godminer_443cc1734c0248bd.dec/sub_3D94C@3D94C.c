int __fastcall sub_3D94C(int a1, int a2, int a3)
{
  int v6; // r3

  if ( *(_DWORD *)(a1 + 1600) && strcmp((const char *)(a3 + 16), *(const char **)(a1 + 1600)) )
    return 1;
  **(_DWORD **)(a2 + 1160) = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 58);
  *(_DWORD *)(a2 + 1276) = *(_DWORD *)(a3 + 54);
  *(_DWORD *)(a2 + 1280) = v6;
  *(_QWORD *)(a2 + 1256) = *(_QWORD *)(a3 + 72);
  return 0;
}
