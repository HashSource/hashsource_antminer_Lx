int __fastcall setup_all_chip_vbk(int a1)
{
  const char *v2; // r0
  _BYTE *v3; // r3
  void (__fastcall *v4)(int, _DWORD, int); // r3
  _DWORD *v5; // r8
  int v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int, _DWORD *); // r3
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int result; // r0
  int v14; // [sp+Ch] [bp-1018h]
  _DWORD v15[3]; // [sp+10h] [bp-1014h] BYREF
  _DWORD v16[1025]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = -9288;
  HIWORD(v2) = (unsigned int)"s" >> 16;
  puts(v2);
  v3 = *(_BYTE **)(a1 + 296);
  v3[2] = 0x80;
  v3[3] = -64;
  *v3 = 0;
  v3[1] = 64;
  v4 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 148);
  *(_DWORD *)(a1 + 240) = 64;
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  v4(a1, *(_DWORD *)(a1 + 296), 4);
  sub_AC5B0(a1);
  V_LOCK();
  LOWORD(v6) = 29160;
  HIWORD(v6) = (unsigned int)"er_status/update_chip_status.c" >> 16;
  logfmt_raw((char *)v16, 0x1000u, 0, v6, "ChipSetting_ticket_mask_VBK", 20, 32, v14, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v7) = 26720;
  HIWORD(v7) = (unsigned int)"enkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/set_baud.c" >> 16;
  zlog(*v5, v7, 143, "ChipSetting_ticket_mask_VBK", 27, 137, 20, v16);
  v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  v15[2] = 1310721;
  v15[0] = 32;
  v8(a1, v15);
  *(_DWORD *)(a1 + 244) = 32;
  V_LOCK();
  LOWORD(v9) = 27352;
  HIWORD(v9) = (unsigned int)"h" >> 16;
  logfmt_raw((char *)v16, 0x1000u, 0, v9, "ChipSetting_open_cores_VBK", 5, 132, 20000);
  V_UNLOCK();
  LOWORD(v10) = 26720;
  HIWORD(v10) = (unsigned int)"enkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/set_baud.c" >> 16;
  zlog(*v5, v10, 143, "ChipSetting_open_cores_VBK", 26, 315, 40, v16);
  v16[1] = 0;
  v16[2] = 8650753;
  v16[0] = 1;
  v16[3] = 1280;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v16, 20000, 0);
  V_LOCK();
  LOWORD(v11) = 29808;
  HIWORD(v11) = (unsigned int)"or pcb temp exceed limit! (%d)" >> 16;
  logfmt_raw((char *)v16, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v12) = -9496;
  HIWORD(v12) = (unsigned int)"n_master/backend/backend_hns/backend_hns.c" >> 16;
  zlog(*v5, v12, 154, "setup_all_chip_vbk", 18, 215, 60, v16);
  sub_AC5B0(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
