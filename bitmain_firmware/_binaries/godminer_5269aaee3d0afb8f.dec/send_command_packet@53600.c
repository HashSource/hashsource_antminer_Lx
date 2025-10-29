int __fastcall send_command_packet(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int i; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v12; // r3
  int *v13; // r3
  int v14; // r0
  int v15; // r1
  char v16[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 712);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 712)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( (*(int (__fastcall **)(_DWORD))(v8 + 56))(*(_DWORD *)(a1 + 136)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = (*(int (__fastcall **)(_DWORD, int, unsigned int))(v9 + 48))(*(_DWORD *)(a1 + 136), a2, a3);
  pthread_mutex_unlock(v3);
  if ( v10 <= 0 )
  {
    V_LOCK();
    LOWORD(v12) = 25336;
    HIWORD(v12) = (unsigned int)"n_valiad" >> 16;
    logfmt_raw(v16, 0x1000u, 0, v12, *(_DWORD *)(a1 + 136), v10);
    V_UNLOCK();
    LOWORD(v13) = -14756;
    HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
    v14 = *v13;
    LOWORD(v13) = 25316;
    LOWORD(v15) = 25376;
    HIWORD(v13) = (unsigned int)"n_valiad" >> 16;
    HIWORD(v15) = (unsigned int)"ns/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/check_fan.c" >> 16;
    zlog(v14, v15, 152, v13, 19, 44, 100, v16);
  }
  return v10;
}
