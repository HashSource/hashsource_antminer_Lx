int __fastcall send_command_packet(int a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // r0
  _UNKNOWN **v4; // r0
  int v9; // [sp+24h] [bp+14h] BYREF
  int v10; // [sp+1024h] [bp+1014h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 712));
  v10 = 0;
  while ( 1 )
  {
    v3 = dev_ctrl();
    if ( ((int (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 136)) >= a3 )
      break;
    usleep(0x2710u);
  }
  v4 = dev_ctrl();
  v10 = ((int (__fastcall *)(_DWORD, int, unsigned int))v4[12])(*(_DWORD *)(a1 + 136), a2, a3);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 712));
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(&v9, 0x1000u, 0, "device %d send cmd failed,errcode %d \n", *(_DWORD *)(a1 + 136), v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_reg_io_interface.c",
      81,
      "send_command_packet",
      19,
      44,
      100,
      &v9);
  }
  return v10;
}
