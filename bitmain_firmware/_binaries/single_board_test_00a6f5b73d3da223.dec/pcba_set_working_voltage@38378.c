int __fastcall pcba_set_working_voltage(int a1, int a2)
{
  int v2; // r3

  v2 = all_algo_system_info[68 * a1 + 4];
  if ( all_algo_system_info[68 * a1 + 4] )
  {
    v2 = all_algo_system_info[68 * a1 + 16];
    if ( all_algo_system_info[68 * a1 + 16] )
    {
      printf("Set voltage to working_voltage %d\n", a2);
      v2 = set_voltage_by_steps(a2, 1);
      if ( v2 )
      {
        puts("set_voltage_by_steps error!");
        return -1;
      }
    }
  }
  return v2;
}
