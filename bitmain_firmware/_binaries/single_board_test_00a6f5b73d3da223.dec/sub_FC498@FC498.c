__int64 __fastcall sub_FC498(int a1, int a2, int a3)
{
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 92) + 84))(*(_DWORD *)(a1 + 92));
  (*(void (__fastcall **)(_DWORD, int, int, int))(*(_DWORD *)(a1 + 92) + 80))(
    *(_DWORD *)(a1 + 92),
    2 * a2,
    a3 | (2 * a2),
    (a3 >> 31) | __CFADD__(a2, a2));
  return *(_QWORD *)(a1 + 32)
       & ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))(*(_DWORD *)(a1 + 92));
}
