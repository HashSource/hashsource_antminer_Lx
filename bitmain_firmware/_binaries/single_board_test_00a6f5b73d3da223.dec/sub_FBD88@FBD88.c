__int64 __fastcall sub_FBD88(int a1, int a2)
{
  __int64 v2; // r0
  _QWORD s[64]; // [sp+8h] [bp+8h] BYREF
  __int64 v7; // [sp+208h] [bp+208h]
  unsigned int v8; // [sp+210h] [bp+210h]
  unsigned int i; // [sp+214h] [bp+214h]

  memset(s, 0, sizeof(s));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 92) + 84))(*(_DWORD *)(a1 + 92));
  v8 = a2 & 0xFFFFFFC0;
  for ( i = 0; i <= 0x3E; ++i )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int, _DWORD))(*(_DWORD *)(a1 + 92) + 80))(
      *(_DWORD *)(a1 + 92),
      *(_DWORD *)(*(_DWORD *)(a1 + 92) + 80),
      i + v8,
      0);
    v2 = ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))(*(_DWORD *)(a1 + 92));
    s[i] = v2;
  }
  (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int, _DWORD))(*(_DWORD *)(a1 + 92) + 80))(
    *(_DWORD *)(a1 + 92),
    *(_DWORD *)(*(_DWORD *)(a1 + 92) + 80),
    v8 + 63,
    0);
  s[63] = 0;
  v7 = ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))(*(_DWORD *)(a1 + 92));
  return v7 ^ s[a2 & 0x3F];
}
