int __fastcall sync_get_core_reg_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+14h] [bp+14h] BYREF
  char v16[2]; // [sp+1Ch] [bp+1Ch] BYREF
  _BYTE v17[2]; // [sp+1Eh] [bp+1Eh] BYREF
  int v18; // [sp+20h] [bp+20h]
  char v19; // [sp+24h] [bp+24h]
  unsigned __int8 v20; // [sp+25h] [bp+25h]
  char v21; // [sp+26h] [bp+26h]
  __int16 v22; // [sp+28h] [bp+28h] BYREF
  int v23; // [sp+2Ah] [bp+2Ah] BYREF
  __int16 v24; // [sp+2Eh] [bp+2Eh]
  int v25; // [sp+30h] [bp+30h]
  int v26; // [sp+34h] [bp+34h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v22 = -21931;
  v24 = 0;
  v23 = 5;
  LOBYTE(v23) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  LOBYTE(v23) = v23 & 0x1F | 0x40;
  BYTE1(v23) = 6;
  BYTE2(v23) = *(_BYTE *)(a2 + 9);
  HIBYTE(v23) = *(_WORD *)(a2 + 10);
  LOBYTE(v24) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5(&v23, 0x28u);
  HIBYTE(v24) = HIBYTE(v24) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, (int)&v22, 8u);
  v26 = 0;
  v25 = 0;
  sub_1A3E94(a6, 0x3E8u);
  v15[1] = 1000000 * v8;
  v15[0] = sub_1A3E94(a6, 0x3E8u);
  while ( v26 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v16, 0xBu, v15) == 110 )
    {
      v25 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || v17[0] != 9 || (v21 & 0x40) == 0 )
    {
      v25 = 1;
      break;
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x43u) )
    {
      *(_BYTE *)(a4 + 12 * v26 + 4) = v19;
      *(_WORD *)(a4 + 12 * v26 + 6) = v20;
      *(_BYTE *)(a4 + 12 * v26 + 8) = v17[1];
      *(_DWORD *)(a4 + 12 * v26++) = v18;
    }
    else
    {
      v25 = 2;
    }
  }
  *a5 = v26;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v25;
}
