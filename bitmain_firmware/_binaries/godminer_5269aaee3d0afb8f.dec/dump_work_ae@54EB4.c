int __fastcall dump_work_ae(_DWORD *a1)
{
  const char *v2; // r6
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char *v6; // r4
  char *v7; // r5
  int v8; // t1
  int v10; // [sp+Ch] [bp-100Ch]
  char v11[4096]; // [sp+18h] [bp-1000h] BYREF

  LOWORD(v2) = 27632;
  V_LOCK();
  LOWORD(v3) = 27580;
  HIWORD(v3) = (unsigned int)" connection recovered after the system poweroff. Exit and restart mining!" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v3, *a1, a1[1], a1 + 2, v10, a1[31], a1[32]);
  V_UNLOCK();
  LOWORD(v4) = -14756;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = 26940;
  HIWORD(v5) = (unsigned int)"/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/set_pwm_by_temp.c" >> 16;
  v6 = (char *)a1 + 39;
  v7 = (char *)a1 + 119;
  zlog(*v4, v5, 152, "dump_work_ae", 12, 83, 60, v11);
  do
  {
    v8 = (unsigned __int8)*++v6;
    HIWORD(v2) = (unsigned int)"t and restart mining!" >> 16;
    printf(v2, v8);
  }
  while ( v6 != v7 );
  return putchar(10);
}
