int miner_monitor_stop()
{
  stop_task_timer(dword_153C00);
  return stop_task_timer(dword_153C04);
}
