int __fastcall pcba_grin29_recv(int a1)
{
  _DWORD v4[2]; // [sp+8h] [bp+8h] BYREF
  _DWORD v5[42]; // [sp+10h] [bp+10h] BYREF
  int s[189]; // [sp+B8h] [bp+B8h] BYREF
  int v7; // [sp+3ACh] [bp+3ACh]
  int v8; // [sp+3B0h] [bp+3B0h]
  void *s2; // [sp+3B4h] [bp+3B4h]
  _DWORD *v10; // [sp+3B8h] [bp+3B8h]
  int v11; // [sp+3BCh] [bp+3BCh]
  int j; // [sp+3C0h] [bp+3C0h]
  int i; // [sp+3C4h] [bp+3C4h]

  memset(s, 0, 0x2F3u);
  if ( (*(unsigned __int8 (__fastcall **)(int, int *))(a1 + 36))(a1, s) != 1 )
    return 0;
  v11 = 0;
  v10 = (_DWORD *)(104 * g_patten_offset + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8));
  memset(v5, 0, sizeof(v5));
  for ( i = 0; i <= 41; ++i )
  {
    v5[i] = *(int *)((char *)&s[i + 8] + 3);
    v5[i] = HIBYTE(v5[i]) | ((v5[i] & 0xFF0000u) >> 8) | ((v5[i] & 0xFF00) << 8) | (v5[i] << 24);
  }
  s2 = v5;
  v8 = memcmp(v10 + 22, v5, 0xA8u);
  v4[0] = 0;
  v4[1] = 0;
  sub_3D0F4(v4, (int)v4, *(int *)((char *)&s[6] + 1), *(int *)((char *)&s[7] + 1));
  for ( j = 0; j <= 3; ++j )
    *((_BYTE *)v4 + j) = *((_BYTE *)&v4[1] + j);
  v7 = memcmp(v10 + 21, v4, 4u);
  if ( v8 || v7 )
  {
    puts("receive a nonce not match");
    return 0;
  }
  else
  {
    printf("receive a nonce match total %d\n", ++v10[25]);
    return 1;
  }
}
