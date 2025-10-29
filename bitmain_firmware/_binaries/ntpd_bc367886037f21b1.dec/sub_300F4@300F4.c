__int16 *__fastcall sub_300F4(__int16 *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  if ( (__int16 *)kern_enable != result )
  {
    v1 = pll_control;
    v2 = pll_control;
    if ( pll_control )
      v2 = 1;
    if ( kern_enable )
      v3 = v2;
    else
      v3 = 0;
    if ( result )
      v3 = 0;
    if ( v3 )
    {
      result = sub_25C8C((__int16 *)&byte_9[4], 0, "kernel time sync disabled");
      v1 = pll_control;
      kern_enable = 0;
    }
    else
    {
      kern_enable = (int)result;
      if ( !result )
        v2 = 0;
      if ( v2 )
      {
        result = sub_2EC7C();
        v1 = pll_control;
      }
    }
    if ( v1 )
    {
      if ( dword_B8E6C )
        return (__int16 *)sub_2EEE0();
    }
  }
  return result;
}
