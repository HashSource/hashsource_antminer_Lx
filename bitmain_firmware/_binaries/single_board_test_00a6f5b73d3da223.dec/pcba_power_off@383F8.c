int __fastcall pcba_power_off(int a1)
{
  int v1; // r3

  if ( all_algo_system_info[68 * a1 + 4] != 1 )
  {
    printf("%s, algo %s donot use adjustable power!", "pcba_power_off", off_1ED170[a1]);
    return 0;
  }
  else
  {
    power_off();
  }
  return v1;
}
