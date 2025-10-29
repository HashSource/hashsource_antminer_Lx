int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int v2; // r0

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
  dword_16677C = (int)new_task_timer();
  add_new_task(dword_16677C, (int)sub_4E7B8, 1000);
  add_new_task(dword_16677C, (int)task_check_system_working_voltage, 1000);
  add_new_task(dword_16677C, (int)sub_4E6F8, (int)"s");
  add_new_task(dword_16677C, (int)sub_4E638, 10000);
  add_new_task(dword_16677C, (int)sub_4ED04, 60000);
  dword_166780 = (int)new_task_timer();
  add_new_task(dword_166780, (int)sub_4E578, 5000);
  add_new_task(dword_166780, (int)sub_4E4B8, 1000);
  return add_new_task(dword_166780, (int)task_check_miner_status, 1000);
}
