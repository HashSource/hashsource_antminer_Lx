int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int v2; // r0
  void *v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  void *v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r1

  v0 = (int *)&unk_166428;
  do
  {
    v1 = calloc(0x100u, 1u);
    *v1 = 63;
    v0[15] = (int)v1;
    v0[22] = (int)calloc(0x10u, 4u);
    v0[23] = (int)calloc(0x10u, 4u);
    v0[1] = (int)calloc(0x10u, 4u);
    *v0 = (int)calloc(0x10u, 4u);
    v0[3] = (int)calloc(0x10u, 4u);
    v0[2] = (int)calloc(0x10u, 4u);
    *((_QWORD *)v0 + 25) = 0;
    v2 = (int)v0;
    v0[48] = 0;
    v0 += 52;
    init_temp_senor_info(v2);
  }
  while ( v0 != &dword_166768 );
  dword_166778 = (int)new_observable_subject();
  dword_16676C = (int)new_observable_subject();
  dword_166774 = (int)new_observable_subject();
  dword_166770 = (int)new_observable_subject();
  dword_166768 = (int)new_observable_subject();
  v3 = new_task_timer();
  LOWORD(v4) = -5560;
  HIWORD(v4) = (unsigned int)&loc_4DDE0 >> 16;
  dword_16677C = (int)v3;
  add_new_task((int)v3, v4, 1000);
  LOWORD(v5) = -6384;
  HIWORD(v5) = (unsigned int)&loc_4DAA4 >> 16;
  add_new_task(dword_16677C, v5, 1000);
  LOWORD(v6) = -5752;
  HIWORD(v6) = (unsigned int)&loc_4DD20 >> 16;
  add_new_task(dword_16677C, v6, (int)"_config_hns");
  LOWORD(v7) = -5944;
  HIWORD(v7) = (unsigned int)&loc_4DC60 >> 16;
  add_new_task(dword_16677C, v7, 10000);
  LOWORD(v8) = -4204;
  HIWORD(v8) = (unsigned int)&loc_4E32C >> 16;
  add_new_task(dword_16677C, v8, 60000);
  v9 = new_task_timer();
  LOWORD(v10) = -6136;
  HIWORD(v10) = (unsigned int)&loc_4DBA0 >> 16;
  dword_166780 = (int)v9;
  add_new_task((int)v9, v10, 5000);
  LOWORD(v11) = -6328;
  HIWORD(v11) = (unsigned int)&loc_4DAE0 >> 16;
  add_new_task(dword_166780, v11, 1000);
  LOWORD(v12) = -13252;
  HIWORD(v12) = (unsigned int)&loc_4C234 >> 16;
  return add_new_task(dword_166780, v12, 1000);
}
