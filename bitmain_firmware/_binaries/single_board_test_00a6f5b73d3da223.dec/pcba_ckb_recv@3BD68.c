int __fastcall pcba_ckb_recv(int a1)
{
  _DWORD s[19]; // [sp+8h] [bp+8h] BYREF
  unsigned __int8 v5; // [sp+56h] [bp+56h]
  unsigned __int8 v6; // [sp+57h] [bp+57h]
  int v7; // [sp+58h] [bp+58h]
  unsigned __int8 v8; // [sp+5Fh] [bp+5Fh]

  memset(s, 0, 0x48u);
  if ( (*(unsigned __int8 (__fastcall **)(int, _DWORD *))(a1 + 36))(a1, s) == 1 )
  {
    v8 = s[3];
    v7 = 104 * g_patten_offset + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8);
    v6 = (unsigned int)*(unsigned __int8 *)(v7 + 84) / *(_DWORD *)(a1 + 240);
    v5 = *(_BYTE *)(v7 + 88) & 0x1F;
    if ( s[3] == v5 && s[2] == v6 )
    {
      if ( !memcmp((char *)&s[14] + 3, (const void *)(v7 + 84), *(_DWORD *)(v7 + 92)) )
      {
        ++*(_DWORD *)(v7 + 100);
        need_pattern = 1;
        return 1;
      }
      printf("nonce match failed: chip%d, coreid%d, nonce offset %d\n", s[2], v8, g_patten_offset);
    }
    return 0;
  }
  return 0;
}
