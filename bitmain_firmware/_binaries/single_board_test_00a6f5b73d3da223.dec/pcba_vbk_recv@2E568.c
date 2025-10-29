int __fastcall pcba_vbk_recv(int a1)
{
  unsigned int v4; // [sp+14h] [bp+Ch]
  _DWORD s[15]; // [sp+18h] [bp+10h] BYREF
  int v6; // [sp+54h] [bp+4Ch]
  int v7; // [sp+58h] [bp+50h]
  unsigned __int8 v8; // [sp+5Fh] [bp+57h]

  memset(s, 0, 0x38u);
  if ( (*(unsigned __int8 (__fastcall **)(int, _DWORD *))(a1 + 36))(a1, s) != 1 )
    return 0;
  v8 = s[6] & 7;
  v7 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
  v6 = 104
     * (s[4]
      + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * v7 * s[2]
      + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * (s[6] & 7))
     + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8);
  v4 = _byteswap_ulong(*(_DWORD *)(v6 + 84));
  if ( s[6] == v4 )
  {
    printf("can't match: chip%d, coreid%d, nonce_value:%8x, resp.nonce_value=%08x\n", s[2], v8, v4, s[6]);
    ++*(_DWORD *)(v6 + 100);
    return 1;
  }
  else
  {
    printf("can't match: chip%d, coreid%d, nonce_value:%8x, resp.nonce_value=%08x\n", s[2], v8, v4, s[6]);
    return 0;
  }
}
