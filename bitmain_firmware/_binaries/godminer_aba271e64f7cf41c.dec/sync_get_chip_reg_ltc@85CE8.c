int __fastcall sync_get_chip_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+14h] [bp-30h] BYREF
  char v16[2]; // [sp+1Ch] [bp-28h] BYREF
  char v17; // [sp+1Eh] [bp-26h] BYREF
  int v18; // [sp+1Fh] [bp-25h]
  char v19; // [sp+23h] [bp-21h]
  unsigned __int8 v20; // [sp+24h] [bp-20h]
  char v21; // [sp+25h] [bp-1Fh]
  _BYTE v22[7]; // [sp+28h] [bp-1Ch] BYREF
  int v23; // [sp+30h] [bp-14h]
  int v24; // [sp+34h] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  *(_DWORD *)v22 = 174677;
  *(_DWORD *)&v22[3] = 0;
  v22[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  v22[2] = v22[2] & 0x1F | 0x40;
  v22[3] = 5;
  v22[4] = *(_BYTE *)(a2 + 9);
  v22[5] = *(_WORD *)(a2 + 10);
  v7 = BM_CRC5(&v22[2], 0x20u);
  v22[6] = v22[6] & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, v22, 7u);
  v24 = 0;
  v23 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v15[1] = (_DWORD)&unk_F4240 * v8;
  v15[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v24 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v16, 0xAu, v15) == 110 )
    {
      v23 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || (v21 & 0x40) != 0 || v21 < 0 )
    {
      v23 = 1;
      break;
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(&v17, 0x3Bu) )
    {
      *(_BYTE *)(a4 + 12 * v24 + 4) = v19;
      *(_WORD *)(a4 + 12 * v24 + 6) = v20;
      *(_DWORD *)(a4 + 12 * v24++) = v18;
    }
    else
    {
      v23 = 2;
    }
  }
  *a5 = v24;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1024));
  return v23;
}
