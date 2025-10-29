int __fastcall send_command_packet(int a1, unsigned __int8 *a2, unsigned int a3)
{
  int (**v3)(); // r0
  int (**v4)(); // r0
  char v9[8]; // [sp+24h] [bp-1008h] BYREF
  int v10; // [sp+1024h] [bp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1048));
  v10 = 0;
  while ( 1 )
  {
    v3 = dev_ctrl();
    if ( ((int (__fastcall *)(_DWORD))v3[16])(*(_DWORD *)(a1 + 248)) >= a3 )
      break;
    usleep(0x2710u);
  }
  v4 = dev_ctrl();
  v10 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v4[14])(*(_DWORD *)(a1 + 248), a2, a3);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1048));
  sub_B18F0(a1 + 1216, a3, a2, *(_DWORD *)(a1 + 252));
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "device %d send cmd failed, errcode %d ", *(_DWORD *)(a1 + 248), v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/chip_reg_io_interface.c",
      169,
      "send_command_packet",
      19,
      46,
      100,
      v9);
  }
  return v10;
}
