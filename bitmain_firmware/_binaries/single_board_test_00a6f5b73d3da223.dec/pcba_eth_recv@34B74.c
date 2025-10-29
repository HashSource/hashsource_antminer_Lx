int __fastcall pcba_eth_recv(int a1)
{
  _WORD s[66]; // [sp+8h] [bp+8h] BYREF
  int v5; // [sp+8Ch] [bp+8Ch]
  unsigned __int64 v6; // [sp+90h] [bp+90h]

  v6 = 0;
  memset(s, 0, 0x82u);
  (*(void (__fastcall **)(int, _WORD *))(a1 + 32))(a1, s);
  pthread_mutex_lock(&stru_1F0D6C);
  v5 = dword_1F0D68;
  pthread_mutex_unlock(&stru_1F0D6C);
  if ( !v5 )
    return 0;
  v6 = sub_34A64((unsigned __int64 *)(v5 + 56));
  if ( *(_QWORD *)&s[13] != v6 || memcmp((const void *)(v5 + 64), &s[49], 0x20u) )
    return 0;
  *(_BYTE *)(v5 + 96) = 1;
  need_pattern = 1;
  return 1;
}
