int __fastcall sync_get_core_reg_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+14h] [bp-30h] BYREF
  char v16[2]; // [sp+1Ch] [bp-28h] BYREF
  _BYTE v17[2]; // [sp+1Eh] [bp-26h] BYREF
  int v18; // [sp+20h] [bp-24h]
  char v19; // [sp+24h] [bp-20h]
  unsigned __int8 v20; // [sp+25h] [bp-1Fh]
  char v21; // [sp+26h] [bp-1Eh]
  __int64 v22; // [sp+28h] [bp-1Ch] BYREF
  int v23; // [sp+30h] [bp-14h]
  int v24; // [sp+34h] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v22 = 371285;
  BYTE2(v22) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  BYTE2(v22) = BYTE2(v22) & 0x1F | 0x40;
  BYTE3(v22) = 6;
  BYTE4(v22) = *(_BYTE *)(a2 + 9);
  BYTE5(v22) = *(_WORD *)(a2 + 10);
  BYTE6(v22) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5((_BYTE *)&v22 + 2, 0x28u);
  HIBYTE(v22) = HIBYTE(v22) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, (unsigned __int8 *)&v22, 8u);
  v24 = 0;
  v23 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v15[1] = (_DWORD)&unk_F4240 * v8;
  v15[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v24 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v16, 0xBu, v15) == 110 )
    {
      v23 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || v17[0] != 9 || (v21 & 0x40) == 0 )
    {
      v23 = 1;
      break;
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x43u) )
    {
      *(_BYTE *)(a4 + 12 * v24 + 4) = v19;
      *(_WORD *)(a4 + 12 * v24 + 6) = v20;
      *(_BYTE *)(a4 + 12 * v24 + 8) = v17[1];
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
