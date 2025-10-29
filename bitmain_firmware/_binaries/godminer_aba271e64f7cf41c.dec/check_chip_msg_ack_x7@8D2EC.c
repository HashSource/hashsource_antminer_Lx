int __fastcall check_chip_msg_ack_x7(int a1, _BYTE *a2, int a3)
{
  char v7[56]; // [sp+3Ch] [bp-1038h] BYREF
  pthread_t newthread; // [sp+103Ch] [bp-38h] BYREF
  _DWORD v9[7]; // [sp+1040h] [bp-34h] BYREF
  int v10; // [sp+105Ch] [bp-18h]
  void *arg; // [sp+1064h] [bp-10h]

  arg = malloc(0xE0u);
  if ( !arg )
  {
    V_LOCK();
    sub_89210((int)v9, *(int *)(a1 + 252));
    logfmt_raw(v7, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "malloc failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "check_chip_msg_ack_x7",
      21,
      1163,
      120,
      v7);
    exit(1);
  }
  *(_DWORD *)arg = a1;
  *((_BYTE *)arg + 4) = a2[8];
  memcpy((char *)arg + 5, a2, 0xD6u);
  *((_DWORD *)arg + 55) = a3;
  pthread_create(&newthread, 0, (void *(*)(void *))check_chip_msg_ack_thread, arg);
  return 0;
}
