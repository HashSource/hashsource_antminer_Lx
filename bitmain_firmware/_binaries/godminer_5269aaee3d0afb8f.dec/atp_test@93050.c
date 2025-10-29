int __fastcall atp_test(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v8; // r3
  _DWORD *v9; // r8
  int v10; // r1
  _IO_FILE **v11; // r5
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v17; // [sp+14h] [bp-4h]
  char v18[4100]; // [sp+18h] [bp+0h] BYREF

  v5 = (unsigned __int16)((_WORD)a4 << 12) | 0x89;
  v17 = (unsigned __int16)((_WORD)a4 << 12) | 1;
  sub_5E2CC(a1, a3, v17, -520093697);
  sub_5E2CC(a1, a3, v5, 251658240);
  V_LOCK();
  LOWORD(v8) = -22052;
  HIWORD(v8) = (unsigned int)"" >> 16;
  LOWORD(v9) = -14756;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v18, 0x1000u, 0, v8, "atp_test", a4, a3);
  V_UNLOCK();
  LOWORD(v10) = -23296;
  LOWORD(v11) = 20136;
  HIWORD(v10) = (unsigned int)"zer_tuning_one_lane" >> 16;
  HIWORD(v11) = (unsigned int)&unk_163E98 >> 16;
  zlog(*v9, v10, 154, "atp_test", 8, 8263, 60, v18);
  while ( IO_getc(*v11) != 10 )
    ;
  sub_5E2CC(a1, a3, v5, 385875968);
  V_LOCK();
  LOWORD(v12) = -22004;
  HIWORD(v12) = (unsigned int)"ial_core_reg" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v12, "atp_test", a4, a3);
  V_UNLOCK();
  LOWORD(v13) = -23296;
  HIWORD(v13) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v9, v13, 154, "atp_test", 8, 8267, 60, v18);
  IO_getc(*v11);
  V_LOCK();
  LOWORD(v14) = -21952;
  HIWORD(v14) = (unsigned int)&unk_1394C8 >> 16;
  logfmt_raw(v18, 0x1000u, 0, v14, "atp_test");
  V_UNLOCK();
  LOWORD(v15) = -23296;
  HIWORD(v15) = (unsigned int)"zer_tuning_one_lane" >> 16;
  zlog(*v9, v15, 154, "atp_test", 8, 8270, 60, v18);
  sub_5E2CC(a1, a3, v5, 0);
  sub_5E2CC(a1, a3, v17, 0);
  return 0;
}
