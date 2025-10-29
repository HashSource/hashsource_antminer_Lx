int __fastcall sync_get_core_reg_rvn(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+10h] [bp-34h] BYREF
  char v16[2]; // [sp+18h] [bp-2Ch] BYREF
  _BYTE v17[2]; // [sp+1Ah] [bp-2Ah] BYREF
  int v18; // [sp+1Ch] [bp-28h]
  char v19; // [sp+20h] [bp-24h]
  __int16 v20; // [sp+21h] [bp-23h]
  char v21; // [sp+23h] [bp-21h]
  unsigned __int8 v22[2]; // [sp+24h] [bp-20h] BYREF
  __int64 v23; // [sp+26h] [bp-1Eh] BYREF
  int v24; // [sp+30h] [bp-14h]
  int v25; // [sp+34h] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v23 = 5;
  v22[0] = 85;
  v22[1] = -86;
  LOBYTE(v23) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1A | 0x45;
  BYTE1(v23) = 8;
  BYTE2(v23) = *(_BYTE *)(a2 + 9);
  *(_WORD *)((char *)&v23 + 3) = reverse_byte_order_16(*(_WORD *)(a2 + 10) & 0xFFF);
  BYTE5(v23) = *(_BYTE *)(a2 + 12);
  BYTE6(v23) = 63;
  v7 = BM_CRC5(&v23, 0x38u);
  HIBYTE(v23) = HIBYTE(v23) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, v22, 0xAu);
  v25 = 0;
  v24 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v15[1] = (_DWORD)&unk_F4240 * v8;
  v15[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v25 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v16, 0xCu, v15) == 110 )
    {
      v24 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || v17[0] != 10 || (v21 & 0x40) != 0 )
    {
      v24 = 1;
      break;
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x4Bu) )
    {
      *(_BYTE *)(a4 + 12 * v25 + 4) = v19;
      *(_WORD *)(a4 + 12 * v25 + 6) = v20;
      *(_BYTE *)(a4 + 12 * v25 + 8) = v17[1];
      *(_DWORD *)(a4 + 12 * v25++) = v18;
    }
    else
    {
      v24 = 2;
    }
  }
  *a5 = v25;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1024));
  return v24;
}
