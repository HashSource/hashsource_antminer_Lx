time_t check_system_working_voltage_ltc()
{
  double v0; // d0
  time_t result; // r0

  result = is_miner_time_start();
  if ( result )
  {
    result = get_miner_elapsed_time();
    if ( (int)v0 > 59 )
    {
      if ( aging_test_exit )
      {
        switch ( dword_168308 )
        {
          case 1:
            return sub_4F1E0();
          case 2:
            return sub_4F440();
          case 3:
            return sub_4F68C();
        }
      }
    }
  }
  return result;
}
