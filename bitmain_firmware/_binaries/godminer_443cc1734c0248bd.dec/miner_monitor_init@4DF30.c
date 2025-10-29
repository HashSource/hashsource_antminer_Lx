int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int v2; // r0

  v0 = (int *)&unk_165410;
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
  while ( v0 != &dword_165750 );
  dword_165760 = (int)new_observable_subject();
  dword_165754 = (int)new_observable_subject();
  dword_16575C = (int)new_observable_subject();
  dword_165758 = (int)new_observable_subject();
  dword_165750 = (int)new_observable_subject();
  dword_165764 = (int)new_task_timer();
  add_new_task(dword_165764, (int)sub_4DDE0, 1000);
  add_new_task(dword_165764, (int)task_check_system_working_voltage, 1000);
  add_new_task(dword_165764, (int)sub_4DD20, (int)"son_object_update_existing");
  add_new_task(dword_165764, (int)sub_4DC60, 10000);
  add_new_task(dword_165764, (int)sub_4E32C, 60000);
  dword_165768 = (int)new_task_timer();
  add_new_task(dword_165768, (int)sub_4DBA0, 5000);
  add_new_task(dword_165768, (int)sub_4DAE0, 1000);
  return add_new_task(dword_165768, (int)task_check_miner_status, 1000);
}
