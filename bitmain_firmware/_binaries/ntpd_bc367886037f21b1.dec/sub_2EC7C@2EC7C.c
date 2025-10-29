__int16 *sub_2EC7C()
{
  __int16 *result; // r0
  __int16 v1; // r1
  int v2; // r5
  int *v3; // r0

  pll_control = 1;
  memset(&flt_B8CC0, 0, 0x7Cu);
  dword_B8CBC = 61;
  dword_B8CD0 = 65;
  dword_B8CC8 = 16000000;
  dword_B8CCC = 16000000;
  dword_B8DC0 = 0;
  dword_B8D3C = (int)sub_2E5B8;
  dword_B8CD4 = (unsigned __int8)sys_poll;
  if ( sigaction(31, (const struct sigaction *)&dword_B8D3C, &stru_B8DC8) )
  {
    result = (__int16 *)sub_64A18(3, "sigaction() trap SIGSYS: %m");
    pll_control = 0;
    pll_status = dword_B8CD0;
  }
  else
  {
    if ( !_sigsetjmp((struct __jmp_buf_tag *)&unk_B8B30, 1) )
    {
      v2 = adjtimex((struct timex *)&dword_B8CBC);
      if ( v2 )
      {
        v3 = _errno_location();
        sub_2E71C("start_kern_loop", v2, *v3, 0, 0, 1127);
      }
    }
    if ( sigaction(31, &stru_B8DC8, 0) )
    {
      sub_64A18(3, "sigaction() restore SIGSYS: %m");
      pll_control = 0;
      pll_status = dword_B8CD0;
      return 0;
    }
    else
    {
      result = (__int16 *)&GLOBAL_OFFSET_TABLE_;
      v1 = dword_B8CD0;
      pll_status = dword_B8CD0;
      if ( pll_control )
      {
        if ( !dword_B8E54 )
        {
          dword_B8E54 = 1;
          sub_8BD40(sub_2F060);
          v1 = pll_status;
        }
        if ( v1 < 0 )
          ext_enable = 1;
        return sub_25C8C((__int16 *)&byte_9[4], 0, "kernel time sync enabled");
      }
    }
  }
  return result;
}
