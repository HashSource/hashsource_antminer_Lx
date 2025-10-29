int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+10h] [bp+10h] BYREF
  char v16[2]; // [sp+18h] [bp+18h] BYREF
  _BYTE v17[3]; // [sp+1Ah] [bp+1Ah] BYREF
  __int16 v18; // [sp+1Dh] [bp+1Dh]
  int v19; // [sp+1Fh] [bp+1Fh]
  char v20; // [sp+23h] [bp+23h]
  __int16 v21; // [sp+24h] [bp+24h] BYREF
  _BYTE v22[6]; // [sp+26h] [bp+26h] BYREF
  char v23; // [sp+2Ch] [bp+2Ch]
  void *s; // [sp+30h] [bp+30h]
  size_t nmemb; // [sp+34h] [bp+34h]
  int v26; // [sp+38h] [bp+38h]
  int v27; // [sp+3Ch] [bp+3Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v21 = -21931;
  *(_WORD *)&v22[4] = 0;
  v23 = 0;
  *(_DWORD *)v22 = 5;
  v22[0] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1A | 0x45;
  v22[1] = 7;
  v22[2] = *(_BYTE *)(a2 + 9);
  v22[3] = *(_BYTE *)(a2 + 12);
  *(_WORD *)&v22[4] = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  nmemb = 8;
  s = calloc(8u, 1u);
  memset(s, 0, 4u);
  memcpy(s, v22, 6u);
  v7 = BM_CRC5(s, 8 * nmemb);
  v23 = v23 & 0xE0 | v7 & 0x1F;
  free(s);
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, (int)&v21, 9u);
  v27 = 0;
  v26 = 0;
  sub_1A3E94(a6, 0x3E8u);
  v15[1] = 1000000 * v8;
  v15[0] = sub_1A3E94(a6, 0x3E8u);
  while ( v27 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v16, 0xCu, v15) == 110 )
    {
      v26 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || (v17[0] & 0xF) != 1 || (v17[0] & 0xE0) != 0 )
    {
      v26 = 1;
      break;
    }
    v9 = v20 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x48u) )
    {
      *(_BYTE *)(a4 + 12 * v27 + 4) = v17[1];
      *(_WORD *)(a4 + 12 * v27 + 6) = v18;
      *(_BYTE *)(a4 + 12 * v27 + 8) = v17[2];
      *(_DWORD *)(a4 + 12 * v27++) = v19;
    }
    else
    {
      v26 = 2;
    }
  }
  *a5 = v27;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v26;
}
