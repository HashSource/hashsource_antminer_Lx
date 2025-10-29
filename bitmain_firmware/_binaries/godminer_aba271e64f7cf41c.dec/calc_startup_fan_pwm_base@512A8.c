int __fastcall calc_startup_fan_pwm_base(int a1)
{
  if ( a1 == -64 )
    return 40;
  if ( a1 < -10 )
    return 40;
  if ( a1 > 34 )
    return 80;
  return 60;
}
