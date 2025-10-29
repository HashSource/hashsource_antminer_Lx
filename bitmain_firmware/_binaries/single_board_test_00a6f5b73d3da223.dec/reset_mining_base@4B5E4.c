int __fastcall reset_mining_base(int a1)
{
  __int64 v1; // r0
  int v2; // r2
  int v3; // r2
  _UNKNOWN **v4; // r0
  _UNKNOWN **v5; // r0
  _UNKNOWN **v6; // r0
  _UNKNOWN **v7; // r0
  _UNKNOWN **v8; // r0
  _UNKNOWN **v9; // r0
  int v10; // r3
  int v12; // [sp+14h] [bp+4h]
  _BYTE v13[4100]; // [sp+18h] [bp+8h] BYREF

  v12 = a1;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "chain %d reset mining!", *(_DWORD *)(v12 + 140));
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c",
         72,
         "reset_mining_base",
         17,
         387,
         100,
         v13);
  (*(void (__fastcall **)(int, _DWORD))(v12 + 8))(v12, HIDWORD(v1));
  *(_BYTE *)(v12 + 145) = 0;
  *(_BYTE *)(v12 + 146) = 0;
  v2 = v12;
  *(_DWORD *)(v12 + 248) = 0;
  *(_DWORD *)(v2 + 252) = 0;
  v3 = v12 + 256;
  *(_DWORD *)(v12 + 256) = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v12 + 328) = 0;
  memset(*(void **)(v12 + 324), 0, *(_DWORD *)(v12 + 648) * *(_DWORD *)(v12 + 196));
  v4 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v4[7])(*(_DWORD *)(v12 + 136));
  sleep(0xAu);
  v5 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5[6])(
    *(_DWORD *)(v12 + 136),
    *(_DWORD *)(v12 + 764),
    *(_DWORD *)(v12 + 776));
  sleep(1u);
  v6 = dev_ctrl();
  ((void (__fastcall *)(int))v6[4])(115200);
  usleep(0x2710u);
  (*(void (__fastcall **)(int, char *))(v12 + 76))(v12, byte_2FAF08);
  usleep(0x2710u);
  v7 = dev_ctrl();
  ((void (__fastcall *)(char *))v7[4])(byte_2FAF08);
  usleep(0x2710u);
  v8 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v8[9])(*(_DWORD *)(v12 + 136));
  v9 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v9[1])(*(_DWORD *)(v12 + 136));
  (*(void (__fastcall **)(int))(v12 + 4))(v12);
  return v10;
}
