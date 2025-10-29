int __fastcall sync_get_core_reg_base3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+14h] [bp+14h] BYREF
  char v16[2]; // [sp+1Ch] [bp+1Ch] BYREF
  _BYTE v17[7]; // [sp+1Eh] [bp+1Eh] BYREF
  char v18; // [sp+25h] [bp+25h]
  __int16 v19; // [sp+28h] [bp+28h] BYREF
  int v20; // [sp+2Ah] [bp+2Ah] BYREF
  __int16 v21; // [sp+2Eh] [bp+2Eh]
  int v22; // [sp+30h] [bp+30h]
  int v23; // [sp+34h] [bp+34h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v19 = -21931;
  v21 = 0;
  v20 = 5;
  LOBYTE(v20) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  LOBYTE(v20) = v20 & 0x1F | 0x40;
  BYTE1(v20) = 6;
  BYTE2(v20) = *(_BYTE *)(a2 + 9);
  HIBYTE(v20) = *(_WORD *)(a2 + 10);
  LOBYTE(v21) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5(&v20, 0x28u);
  HIBYTE(v21) = HIBYTE(v21) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, (int)&v19, 8u);
  v23 = 0;
  v22 = 0;
  sub_1A3E94(a6, 0x3E8u);
  v15[1] = 1000000 * v8;
  v15[0] = sub_1A3E94(a6, 0x3E8u);
  while ( v23 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v16, 0xAu, v15) == 110 )
    {
      v22 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || v17[0] != 8 || (v18 & 0x40) == 0 || v18 < 0 )
    {
      v22 = 1;
      break;
    }
    v9 = v18 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x3Bu) )
    {
      *(_BYTE *)(a4 + 12 * v23 + 4) = v17[5];
      *(_WORD *)(a4 + 12 * v23 + 6) = v17[6];
      *(_BYTE *)(a4 + 12 * v23 + 8) = v17[1];
      *(_DWORD *)(a4 + 12 * v23++) = (v17[3] << 8) | (v17[2] << 16) | v17[4];
    }
    else
    {
      v22 = 2;
    }
  }
  *a5 = v23;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v22;
}
