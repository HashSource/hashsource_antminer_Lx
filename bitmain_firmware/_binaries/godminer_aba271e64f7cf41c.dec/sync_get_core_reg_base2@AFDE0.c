int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+10h] [bp-3Ch] BYREF
  char v16[2]; // [sp+18h] [bp-34h] BYREF
  _BYTE v17[3]; // [sp+1Ah] [bp-32h] BYREF
  __int16 v18; // [sp+1Dh] [bp-2Fh]
  int v19; // [sp+1Fh] [bp-2Dh]
  char v20; // [sp+23h] [bp-29h]
  unsigned __int8 v21; // [sp+24h] [bp-28h] BYREF
  __int64 v22; // [sp+25h] [bp-27h] BYREF
  void *s; // [sp+30h] [bp-1Ch]
  size_t nmemb; // [sp+34h] [bp-18h]
  int v25; // [sp+38h] [bp-14h]
  int v26; // [sp+3Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v22 = 1450;
  v21 = 85;
  BYTE1(v22) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1A | 0x45;
  BYTE2(v22) = 7;
  BYTE3(v22) = *(_BYTE *)(a2 + 9);
  BYTE4(v22) = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v22 + 5) = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  nmemb = 8;
  s = calloc(8u, 1u);
  memset(s, 0, 8u);
  memcpy(s, (char *)&v22 + 1, 6u);
  v7 = BM_CRC5(s, 8 * nmemb);
  HIBYTE(v22) = HIBYTE(v22) & 0xE0 | v7 & 0x1F;
  free(s);
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, &v21, 9u);
  v26 = 0;
  v25 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v15[1] = (_DWORD)&unk_F4240 * v8;
  v15[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v26 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v16, 0xCu, v15) == 110 )
    {
      v25 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || (v17[0] & 0xF) != 1 || (v17[0] & 0xE0) != 0 )
    {
      v25 = 1;
      break;
    }
    v9 = v20 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x48u) )
    {
      *(_BYTE *)(a4 + 12 * v26 + 4) = v17[1];
      *(_WORD *)(a4 + 12 * v26 + 6) = v18;
      *(_BYTE *)(a4 + 12 * v26 + 8) = v17[2];
      *(_DWORD *)(a4 + 12 * v26++) = v19;
    }
    else
    {
      v25 = 2;
    }
  }
  *a5 = v26;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1024));
  return v25;
}
