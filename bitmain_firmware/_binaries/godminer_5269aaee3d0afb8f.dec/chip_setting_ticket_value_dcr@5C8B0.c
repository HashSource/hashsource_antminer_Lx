int __fastcall chip_setting_ticket_value_dcr(int a1, int a2)
{
  int v2; // r5
  _DWORD *v5; // r8
  int v6; // r7
  int v7; // r3
  int v8; // r2
  int v9; // r11
  int v10; // r3
  int v12; // [sp+0h] [bp-1024h]
  int v13; // [sp+Ch] [bp-1018h]
  _DWORD v14[3]; // [sp+10h] [bp-1014h] BYREF
  char v15; // [sp+1Ch] [bp-1008h]
  char v16; // [sp+1Dh] [bp-1007h]
  char v17; // [sp+1Eh] [bp-1006h]
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = -30912;
  HIWORD(v2) = (unsigned int)&unk_1371C8 >> 16;
  LOWORD(v5) = -14756;
  LOWORD(v6) = -30796;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v6) = (unsigned int)"pace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb/backend_ckb.c" >> 16;
  V_LOCK();
  LOWORD(v7) = 30900;
  v12 = v2 + 52;
  HIWORD(v7) = (unsigned int)"orkspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/chip_reg_io_interface.c" >> 16;
  v2 += 84;
  logfmt_raw(v18, 0x1000u, 0, v7, v12, 3, a2, v13, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(*v5, v6, 159, v2, 29, 103, 60, v18);
  v8 = *(_DWORD *)(a1 + 200);
  v15 = -1;
  v16 = v8;
  v14[0] = (unsigned __int8)a2;
  v14[2] = 196609;
  v17 = 1;
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v14);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = (unsigned __int8)a2;
  V_LOCK();
  LOWORD(v10) = 30932;
  HIWORD(v10) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/chip_reg_io_interface.c" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v10, a2);
  V_UNLOCK();
  zlog(*v5, v6, 159, v2, 29, 117, 60, v18);
  return v9;
}
