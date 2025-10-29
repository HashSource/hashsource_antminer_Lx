int __fastcall pcba_ltc_recv(int a1)
{
  _DWORD s[29]; // [sp+8h] [bp+8h] BYREF
  unsigned __int8 v5; // [sp+7Eh] [bp+7Eh]
  unsigned __int8 v6; // [sp+7Fh] [bp+7Fh]
  size_t *v7; // [sp+80h] [bp+80h]
  char v8; // [sp+87h] [bp+87h]

  memset(s, 0, 0x70u);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 32))(a1, s);
  v8 = s[3];
  v7 = (size_t *)(104 * g_patten_offset + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8));
  v6 = ((unsigned __int8)(*((_BYTE *)v7 + 84) << 7) | (unsigned int)(*((_BYTE *)v7 + 85) >> 1)) / *(_DWORD *)(a1 + 240);
  v5 = *((_BYTE *)v7 + 84) >> 1;
  if ( s[3] != v5 || s[2] != v6 || memcmp(&s[20], v7 + 21, v7[23]) )
    return 0;
  ++v7[25];
  need_pattern = 1;
  return 1;
}
