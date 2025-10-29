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
  void *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1

  v0 = (int *)&unk_168450;
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
  while ( v0 != &dword_168790 );
  dword_1687A0 = (int)new_observable_subject();
  dword_168794 = (int)new_observable_subject();
  dword_16879C = (int)new_observable_subject();
  dword_168798 = (int)new_observable_subject();
  dword_168790 = (int)new_observable_subject();
  v3 = new_task_timer();
  LOWORD(v4) = -856;
  HIWORD(v4) = (unsigned int)&loc_4E7B8 >> 16;
  dword_1687A4 = (int)v3;
  add_new_task((int)v3, v4, 1000);
  LOWORD(v5) = -1680;
  HIWORD(v5) = (unsigned int)&loc_4E480 >> 16;
  add_new_task(dword_1687A4, v5, 1000);
  LOWORD(v6) = -1048;
  HIWORD(v6) = (unsigned int)&loc_4E6F8 >> 16;
  add_new_task(dword_1687A4, v6, (int)"Server");
  LOWORD(v7) = -1240;
  HIWORD(v7) = (unsigned int)&loc_4E638 >> 16;
  add_new_task(dword_1687A4, v7, 10000);
  add_new_task(dword_1687A4, 328180, 60000);
  v8 = new_task_timer();
  LOWORD(v9) = -1432;
  HIWORD(v9) = (unsigned int)&loc_4E578 >> 16;
  dword_1687A8 = (int)v8;
  add_new_task((int)v8, v9, 5000);
  LOWORD(v10) = -1624;
  HIWORD(v10) = (unsigned int)&loc_4E4B8 >> 16;
  add_new_task(dword_1687A8, v10, 1000);
  LOWORD(v11) = -8588;
  HIWORD(v11) = (unsigned int)&loc_4C9AC >> 16;
  return add_new_task(dword_1687A8, v11, 1000);
}
