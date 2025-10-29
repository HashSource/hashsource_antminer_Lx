int do_miner_monitor_start()
{
  int v0; // r3
  int v2; // [sp+Ch] [bp-10h] BYREF
  _DWORD *all_created_runtime; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v2 = 0;
  all_created_runtime = get_all_created_runtime(&v2);
  for ( i = 0; i < v2; ++i )
  {
    while ( *(_BYTE *)(all_created_runtime[i] + 258) != 1 )
      sleep(1u);
  }
  force_exec_all_task(dword_153C04);
  force_exec_all_task(dword_153C00);
  start_task_timer(dword_153C04);
  start_task_timer(dword_153C00);
  return v0;
}
