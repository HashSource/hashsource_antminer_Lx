int __fastcall pcba_dash_recv(int a1)
{
  _DWORD s[20]; // [sp+8h] [bp+8h] BYREF
  unsigned int v5; // [sp+58h] [bp+58h]
  unsigned __int8 v6; // [sp+5Eh] [bp+5Eh]
  unsigned __int8 v7; // [sp+5Fh] [bp+5Fh]
  unsigned int *v8; // [sp+60h] [bp+60h]
  char v9; // [sp+67h] [bp+67h]

  memset(s, 0, sizeof(s));
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 32))(a1, s);
  v9 = s[3];
  v8 = (unsigned int *)(104 * g_patten_offset + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8));
  v7 = (unsigned int)*((unsigned __int8 *)v8 + 84) / *(_DWORD *)(a1 + 240);
  v6 = *((_BYTE *)v8 + 84) >> 1;
  v5 = _byteswap_ulong(v8[21]);
  v6 = (v5 - ((*(_DWORD *)(a1 + 240) * v7) << 24)) % 0xA;
  if ( s[3] != v6 || s[2] != v7 || memcmp(&s[12], v8 + 21, v8[23]) )
    return 0;
  ++v8[25];
  need_pattern = 1;
  return 1;
}
