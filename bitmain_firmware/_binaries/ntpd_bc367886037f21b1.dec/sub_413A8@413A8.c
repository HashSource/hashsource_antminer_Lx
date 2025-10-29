int sub_413A8()
{
  timer_overflows = 0;
  timer_xmtcalls = 0;
  timer_timereset = current_time;
  return _stack_chk_guard;
}
