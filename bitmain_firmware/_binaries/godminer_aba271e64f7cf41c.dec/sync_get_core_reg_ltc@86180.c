int __fastcall sync_get_core_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  char v15[48]; // [sp+34h] [bp-1030h] BYREF
  _DWORD v16[2]; // [sp+1034h] [bp-30h] BYREF
  char v17[2]; // [sp+103Ch] [bp-28h] BYREF
  char v18; // [sp+103Eh] [bp-26h] BYREF
  unsigned __int8 v19; // [sp+103Fh] [bp-25h]
  unsigned int v20; // [sp+1040h] [bp-24h]
  unsigned __int8 v21; // [sp+1044h] [bp-20h]
  unsigned __int8 v22; // [sp+1045h] [bp-1Fh]
  char v23; // [sp+1046h] [bp-1Eh]
  __int64 v24; // [sp+1048h] [bp-1Ch] BYREF
  int v25; // [sp+1050h] [bp-14h]
  int v26; // [sp+1054h] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  chip_setting_core_command_ltc(a1, *(unsigned __int8 *)(a2 + 13));
  v24 = 371285;
  BYTE2(v24) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  BYTE2(v24) = BYTE2(v24) & 0x1F | 0x40;
  BYTE3(v24) = 6;
  BYTE4(v24) = *(_BYTE *)(a2 + 9);
  BYTE5(v24) = *(_WORD *)(a2 + 10) & 0xF;
  BYTE6(v24) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5((_BYTE *)&v24 + 2, 0x28u);
  HIBYTE(v24) = HIBYTE(v24) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = *(unsigned __int8 *)(a2 + 13);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, (unsigned __int8 *)&v24, 8u);
  v26 = 0;
  v25 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v16[1] = (_DWORD)&unk_F4240 * v8;
  v16[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v26 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v17, 0xBu, v16) == 110 )
    {
      v25 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(
      v15,
      0x1000u,
      0,
      "get core reg: chip addr %02x core id %02x reg addr %02x reg value %02x%02x%02x%02x",
      v21,
      v19,
      v22,
      (unsigned __int8)v20,
      BYTE1(v20),
      BYTE2(v20),
      HIBYTE(v20));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_reg_io_ltc_1491.c",
      185,
      "sync_get_core_reg_ltc",
      21,
      381,
      20,
      v15);
    if ( (unsigned __int8)v17[0] != 170 || v17[1] != 85 || (v23 & 0x40) == 0 || v23 < 0 )
    {
      v25 = 1;
      break;
    }
    v9 = v23 & 0x1F;
    if ( v9 == BM_CRC5(&v18, 0x43u) )
    {
      *(_BYTE *)(a4 + 12 * v26 + 4) = v21;
      *(_WORD *)(a4 + 12 * v26 + 6) = v22;
      *(_BYTE *)(a4 + 12 * v26 + 8) = v19;
      *(_DWORD *)(a4 + 12 * v26++) = _byteswap_ulong(v20);
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
