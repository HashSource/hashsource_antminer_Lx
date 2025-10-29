int miner_monitor_stop()
{
  stop_task_timer(dword_1687A8);
  return stop_task_timer(dword_1687A4);
}
