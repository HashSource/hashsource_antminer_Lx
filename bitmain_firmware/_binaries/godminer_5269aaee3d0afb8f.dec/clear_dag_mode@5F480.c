int __fastcall clear_dag_mode(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r1
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = -30632;
  V_LOCK();
  LOWORD(v3) = -6092;
  HIWORD(v3) = ((unsigned int)&loc_12D592 + 2) >> 16;
  HIWORD(v2) = (unsigned int)"dump work: %s" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -20196;
  HIWORD(v4) = (unsigned int)"_one_lane" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 1048);
  V_UNLOCK();
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -23296;
  HIWORD(v6) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v5, v6, 154, v2 + 1064, 14, 341, 60, v10);
  sub_5CB28(a1, 196, 0);
  usleep(0x2710u);
  return 0;
}
