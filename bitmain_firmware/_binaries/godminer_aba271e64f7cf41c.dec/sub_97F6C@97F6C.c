int __fastcall sub_97F6C(int a1)
{
  if ( hal_fan_addr(a1) < 0 )
    return 0;
  else
    return hal_fan_addr(a1);
}
