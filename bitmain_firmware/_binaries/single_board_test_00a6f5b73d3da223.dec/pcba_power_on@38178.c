int __fastcall pcba_power_on(unsigned int a1, int a2)
{
  unsigned __int16 v6; // [sp+16h] [bp+Eh]
  __int16 v7; // [sp+16h] [bp+Eh]

  if ( a1 <= 9 )
  {
    if ( all_algo_system_info[68 * a1 + 4] != 1 )
    {
      printf("%s, algo %s donot use adjustable power!\n", "pcba_power_on", off_1ED170[a1]);
      return 0;
    }
    else
    {
      v6 = bitmain_power_version();
      printf("power type version: 0x%04x\n", v6);
      if ( (unsigned __int8)find_APW_power_version(v6) != 1 )
      {
        printf(
          "power version error, expect %04x, actual %04x\n",
          *(unsigned __int16 *)&all_algo_system_info[68 * a1 + 6],
          v6);
        return -1;
      }
      else
      {
        puts("Power init:");
        printf("check_asic_voltage      = %d\n", *(_DWORD *)&all_algo_system_info[68 * a1 + 20]);
        printf("working_voltage_raw     = %d\n", a2);
        if ( all_algo_system_info[68 * a1 + 4] && all_algo_system_info[68 * a1 + 16] )
        {
          printf("Set check asic voltage %d\n", *(_DWORD *)&all_algo_system_info[68 * a1 + 20]);
          v7 = set_voltage(*(_DWORD *)&all_algo_system_info[68 * a1 + 20], 1);
        }
        else
        {
          printf("Set working voltage %d\n", a2);
          v7 = set_voltage(a2, 1);
        }
        if ( v7 )
        {
          puts("set_voltage_by_steps error!");
          return -1;
        }
        else
        {
          power_info_init(
            *(_DWORD *)&all_algo_system_info[68 * a1 + 4],
            *(_DWORD *)&all_algo_system_info[68 * a1 + 8],
            *(_DWORD *)&all_algo_system_info[68 * a1 + 12],
            *(_DWORD *)&all_algo_system_info[68 * a1 + 16],
            *(_DWORD *)&all_algo_system_info[68 * a1 + 20]);
          set_power_init_status(1);
          power_on();
          return 0;
        }
      }
    }
  }
  else
  {
    printf("%s, unknow algo %d!\n", "pcba_power_on", a1);
    return -1;
  }
}
