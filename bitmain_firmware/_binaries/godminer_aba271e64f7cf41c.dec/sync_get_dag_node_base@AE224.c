int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  unsigned __int8 v13[2]; // [sp+1Ch] [bp-18h] BYREF
  __int64 v14; // [sp+1Eh] [bp-16h] BYREF
  void *s; // [sp+28h] [bp-Ch]
  size_t nmemb; // [sp+2Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v14 = 6;
  v13[0] = 85;
  v13[1] = -86;
  LOBYTE(v14) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x19 | 0x46;
  BYTE1(v14) = 8;
  BYTE2(v14) = *(_BYTE *)(a2 + 9);
  *(_DWORD *)((char *)&v14 + 3) = reverse_byte_order_32(*(_DWORD *)(a2 + 4));
  nmemb = 8;
  s = calloc(8u, 1u);
  memset(s, 0, 8u);
  memcpy(s, &v14, 7u);
  v7 = BM_CRC5(s, 8 * nmemb);
  HIBYTE(v14) = HIBYTE(v14) & 0xE0 | v7 & 0x1F;
  free(s);
  send_command_packet(a1, v13, 0xAu);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return sync_get_dag_base(a1, a3, a4, a5, a6);
}
