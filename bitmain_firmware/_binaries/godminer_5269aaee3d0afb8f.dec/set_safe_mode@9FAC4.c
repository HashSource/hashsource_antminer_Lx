int __fastcall set_safe_mode(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -22448;
  HIWORD(v2) = (unsigned int)"11" >> 16;
  V_LOCK();
  LOWORD(v5) = -20196;
  HIWORD(v5) = (unsigned int)"_one_lane" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 - 2264);
  V_UNLOCK();
  LOWORD(v6) = -14756;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v7) = -23296;
  HIWORD(v7) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v6, v7, 154, v2 - 2248, 13, 11681, 20, v9);
  sub_5CB28(a1, 158, a2);
  usleep(0x2710u);
  return 0;
}
