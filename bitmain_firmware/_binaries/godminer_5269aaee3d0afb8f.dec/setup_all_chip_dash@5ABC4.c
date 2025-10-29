int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r3
  _DWORD *v3; // r7
  int v4; // r5
  int v5; // r1
  int v6; // s15
  float v7; // s0
  float v8; // s15
  float v9; // s0
  float v10; // s16
  int v11; // r1
  int v12; // r1
  void *v13; // r0
  char v14; // r8
  int v15; // r5
  char v16; // r0
  int v17; // r3
  int v18; // r1
  int result; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r9
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // [sp+4h] [bp-1018h]
  unsigned __int8 v28; // [sp+16h] [bp-1006h] BYREF
  unsigned __int8 v29; // [sp+17h] [bp-1005h] BYREF
  char v30[4100]; // [sp+18h] [bp-1004h] BYREF

  LOWORD(v3) = -14756;
  V_LOCK();
  LOWORD(v2) = -32580;
  HIWORD(v2) = (unsigned int)"%d reg %d addr %02x" >> 16;
  logfmt_raw(v30, 0x1000u, 0, v2);
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  v4 = 25;
  V_UNLOCK();
  LOWORD(v5) = 32360;
  HIWORD(v5) = (unsigned int)"software_reset %s %02x" >> 16;
  zlog(*v3, v5, 156, "setup_all_chip_dash", 19, 319, 60, v30);
  v28 = 0;
  v29 = 0;
  do
  {
    sub_5A46C(a1);
    usleep(0x61A8u);
    v6 = v4;
    v4 += 25;
    v7 = (float)v6;
    v8 = *(float *)(a1 + 760);
    v9 = v7 + 50.0;
  }
  while ( v9 <= v8 );
  v10 = v9 - 25.0;
  if ( v8 > (float)(v9 - 25.0) )
  {
    sub_5A46C(a1);
    usleep(0x61A8u);
    v10 = *(float *)(a1 + 760);
  }
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, "Set chip final freq=%f", v10);
  V_UNLOCK();
  LOWORD(v11) = 32360;
  HIWORD(v11) = (unsigned int)"software_reset %s %02x" >> 16;
  zlog(*v3, v11, 156, "set_working_freq_by_steps", 25, 313, 60, v30);
  sub_58858(a1);
  usleep(0x4E20u);
  eeprom_read(*(_DWORD *)(a1 + 140), 0xC3u, (int)&v28, 1);
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, "read marker %x", v28);
  V_UNLOCK();
  LOWORD(v12) = 32360;
  HIWORD(v12) = (unsigned int)"software_reset %s %02x" >> 16;
  zlog(*v3, v12, 156, "setup_all_chip_dash", 19, 354, 60, v30);
  if ( v28 == 165 )
  {
    *(_BYTE *)(a1 + 310) = 1;
    eeprom_read(*(_DWORD *)(a1 + 140), 0xC4u, (int)&v29, 1);
    V_LOCK();
    LOWORD(v20) = -32516;
    HIWORD(v20) = (unsigned int)"detected asic num less than design" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v20, v29);
    V_UNLOCK();
    LOWORD(v21) = 32360;
    HIWORD(v21) = (unsigned int)"software_reset %s %02x" >> 16;
    zlog(*v3, v21, 156, "setup_all_chip_dash", 19, 358, 20, v30);
    v22 = v29;
    eeprom_read(*(_DWORD *)(a1 + 140), 0xC5u, (int)&v29, 1);
    V_LOCK();
    LOWORD(v23) = -32484;
    HIWORD(v23) = (unsigned int)"gn" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v23, v29);
    V_UNLOCK();
    LOWORD(v24) = 32360;
    HIWORD(v24) = (unsigned int)"software_reset %s %02x" >> 16;
    zlog(*v3, v24, 156, "setup_all_chip_dash", 19, 361, 20, v30);
    *(double *)(a1 + 312) = (double)(v29 | (v22 << 8)) * 1000.0 * 1000.0 * 1000.0;
    V_LOCK();
    LOWORD(v25) = -32452;
    HIWORD(v25) = (unsigned int)"work poolid %lld jobid %s start_nonce %llx" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v25, *(_DWORD *)(a1 + 140), v27, *(_DWORD *)(a1 + 312), *(_DWORD *)(a1 + 316));
    V_UNLOCK();
    LOWORD(v26) = 32360;
    HIWORD(v26) = (unsigned int)"software_reset %s %02x" >> 16;
    zlog(*v3, v26, 156, "setup_all_chip_dash", 19, 364, 20, v30);
  }
  set_ticket_mask_dash(a1, 255);
  v13 = calloc(1u, 0xB0u);
  v14 = *(_BYTE *)(a1 + 136);
  v15 = (int)v13;
  v16 = rand();
  memset((void *)(v15 + 40), (unsigned __int8)(v14 + v16), 0x50u);
  push_work_base(a1, v15);
  free((void *)v15);
  V_LOCK();
  LOWORD(v17) = 29808;
  HIWORD(v17) = (unsigned int)"or pcb temp exceed limit! (%d)" >> 16;
  logfmt_raw(v30, 0x1000u, 0, v17);
  V_UNLOCK();
  LOWORD(v18) = 32360;
  HIWORD(v18) = (unsigned int)"software_reset %s %02x" >> 16;
  zlog(*v3, v18, 156, "setup_all_chip_dash", 19, 375, 60, v30);
  sub_59D40(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
