int __fastcall set_pll_div(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, char **); // r3
  char *v8; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+14h] [bp-1000h]
  int v10; // [sp+18h] [bp-FFCh]
  int v11; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -30632;
  HIWORD(v1) = (unsigned int)"dump work: %s" >> 16;
  V_LOCK();
  LOWORD(v3) = -20196;
  HIWORD(v3) = (unsigned int)"_one_lane" >> 16;
  logfmt_raw((char *)&v8, 0x1000u, 0, v3, v1 + 608);
  V_UNLOCK();
  LOWORD(v4) = -14756;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -23296;
  HIWORD(v5) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v4, v5, 154, v1 + 620, 11, 224, 20, &v8);
  v10 = 0;
  v8 = "al_seq_2_by_vendor";
  v11 = 0;
  v6 = *(void (__fastcall **)(int, char **))(a1 + 156);
  v9 = 0;
  LOBYTE(v10) = 1;
  HIWORD(v10) = 24;
  v6(a1, &v8);
  usleep(0x2710u);
  v10 = 1572865;
  v11 = 0;
  v9 = 0;
  v8 = "l_seq_2_by_vendor";
  (*(void (__fastcall **)(int, char **))(a1 + 156))(a1, &v8);
  usleep(0x2710u);
  return 0;
}
