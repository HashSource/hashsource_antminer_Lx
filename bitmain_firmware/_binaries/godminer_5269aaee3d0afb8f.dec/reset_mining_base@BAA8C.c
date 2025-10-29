int __fastcall reset_mining_base(int a1)
{
  int v2; // lr
  int v3; // r2
  void *v4; // r0
  int (**v5)(); // r0
  unsigned int v6; // r0
  int (**v7)(); // r0
  unsigned int v8; // r0
  int (**v9)(); // r0
  int v10; // r0
  int (**v11)(); // r0
  int v12; // r0
  int (**v13)(); // r0
  int v14; // r0
  int (**v15)(); // r0
  char v17[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "chain %d reset mining!", *(_DWORD *)(a1 + 140));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "reset_mining_base",
    17,
    389,
    100,
    v17);
  (*(void (__fastcall **)(int))(a1 + 8))(a1);
  v2 = *(_DWORD *)(a1 + 648);
  v3 = *(_DWORD *)(a1 + 196);
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  v4 = memset(*(void **)(a1 + 324), 0, v2 * v3);
  v5 = dev_ctrl((int)v4);
  ((void (__fastcall *)(_DWORD))v5[7])(*(_DWORD *)(a1 + 136));
  v6 = sleep(0xAu);
  v7 = dev_ctrl(v6);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v7[6])(
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a1 + 764),
    *(_DWORD *)(a1 + 776));
  v8 = sleep(1u);
  v9 = dev_ctrl(v8);
  ((void (__fastcall *)(char *))v9[4])("re_version");
  usleep(0x2710u);
  (*(void (__fastcall **)(int, int))(a1 + 76))(a1, 3125000);
  v10 = usleep(0x2710u);
  v11 = dev_ctrl(v10);
  ((void (__fastcall *)(int))v11[4])(3125000);
  v12 = usleep(0x2710u);
  v13 = dev_ctrl(v12);
  v14 = ((int (__fastcall *)(_DWORD))v13[9])(*(_DWORD *)(a1 + 136));
  v15 = dev_ctrl(v14);
  ((void (__fastcall *)(_DWORD))v15[1])(*(_DWORD *)(a1 + 136));
  return (*(int (__fastcall **)(int))(a1 + 4))(a1);
}
