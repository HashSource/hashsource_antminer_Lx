int sub_2F104()
{
  double v0; // r0

  HIDWORD(v0) = (unsigned __int8)ntp_minpoll;
  sys_poll = ntp_minpoll;
  LODWORD(v0) = sys_precision;
  ldexp(v0, (int)&sys_poll);
  clock_jitter = 1.0;
  LODWORD(freq_cnt) = (int)clock_minstep;
  return _stack_chk_guard;
}
