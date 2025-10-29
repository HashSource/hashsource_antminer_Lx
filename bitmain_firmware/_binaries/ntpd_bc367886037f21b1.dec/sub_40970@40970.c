int sub_40970()
{
  *(_QWORD *)&itimer = 0;
  *(_QWORD *)&dword_107C9C = 0;
  getitimer(0, (struct itimerval *)&itimer);
  if ( (unsigned int)dword_107C9C <= 1 )
  {
    if ( dword_107CA0 < 0 )
    {
      dword_107CA0 = 0;
      if ( !dword_107C9C )
        dword_107C9C = 1;
    }
    else if ( !dword_107C9C )
    {
      dword_107C9C = dword_107CA0 == 0;
    }
  }
  else
  {
    dword_107C9C = 1;
    if ( dword_107CA0 < 0 )
      dword_107CA0 = 0;
  }
  itimer = 1;
  dword_107C98 = 0;
  return sub_408E4();
}
