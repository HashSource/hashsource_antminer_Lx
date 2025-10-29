int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  char v15[48]; // [sp+34h] [bp-1030h] BYREF
  _DWORD v16[2]; // [sp+1034h] [bp-30h] BYREF
  unsigned __int8 v17; // [sp+103Ch] [bp-28h] BYREF
  unsigned __int8 v18; // [sp+103Dh] [bp-27h]
  char v19; // [sp+103Eh] [bp-26h] BYREF
  unsigned __int8 v20; // [sp+103Fh] [bp-25h]
  unsigned __int8 v21; // [sp+1040h] [bp-24h]
  unsigned __int8 v22; // [sp+1041h] [bp-23h]
  unsigned __int8 v23; // [sp+1042h] [bp-22h]
  unsigned __int8 v24; // [sp+1043h] [bp-21h]
  char v25; // [sp+1044h] [bp-20h]
  __int64 v26; // [sp+1048h] [bp-1Ch] BYREF
  int v27; // [sp+1050h] [bp-14h]
  int v28; // [sp+1054h] [bp-10h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v26 = 371285;
  BYTE2(v26) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  BYTE2(v26) = BYTE2(v26) & 0x1F | 0x40;
  BYTE3(v26) = 6;
  BYTE4(v26) = *(_BYTE *)(a2 + 9);
  BYTE5(v26) = *(_WORD *)(a2 + 10);
  BYTE6(v26) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5((_BYTE *)&v26 + 2, 0x28u);
  HIBYTE(v26) = HIBYTE(v26) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1024));
  queue_clear(*(_DWORD *)(a1 + 868));
  send_command_packet(a1, (unsigned __int8 *)&v26, 8u);
  v28 = 0;
  v27 = 0;
  sub_CCDFC(a6, 0x3E8u);
  v16[1] = (_DWORD)&unk_F4240 * v8;
  v16[0] = sub_CCDFC(a6, 0x3E8u);
  while ( v28 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), (char *)&v17, 9u, v16) == 110 )
    {
      v27 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(
      v15,
      0x1000u,
      0,
      "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
      v17,
      v18,
      v23,
      v24,
      v20,
      v21,
      v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/chip_reg_io_base.c",
      164,
      "sync_get_core_reg_base_3",
      24,
      602,
      20,
      v15);
    if ( v17 != 170 || v18 != 85 || (v25 & 0x40) == 0 )
    {
      v27 = 1;
      break;
    }
    v9 = v25 & 0x1F;
    if ( v9 == BM_CRC5(&v19, 0x33u) )
    {
      *(_BYTE *)(a4 + 12 * v28 + 4) = v23;
      *(_WORD *)(a4 + 12 * v28 + 6) = v24;
      *(_BYTE *)(a4 + 12 * v28 + 8) = v19;
      *(_DWORD *)(a4 + 12 * v28++) = (v22 << 24) | (v21 << 16) | v20;
    }
    else
    {
      v27 = 2;
    }
  }
  *a5 = v28;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1024));
  return v27;
}
