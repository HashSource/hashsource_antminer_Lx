int sub_40A4C()
{
  alarm_flag = 0;
  alarm_overflow = 0;
  dword_BBBC8 = 3600;
  dword_BBBC4 = 1;
  dword_BBBCC = (int)&loc_15180;
  dword_BBBD0 = 0;
  dword_BBBD4 = 0;
  current_time = 0;
  timer_overflows = 0;
  timer_xmtcalls = 0;
  timer_timereset = 0;
  sub_6D340(14, sub_40848);
  dword_107C9C = 1;
  itimer = 1;
  dword_107CA0 = 0;
  dword_107C98 = 0;
  return sub_408E4();
}
