void *machine_runtime_ctrl_ltc_1491()
{
  _DWORD s[33]; // [sp+0h] [bp-8Ch] BYREF
  void *dest; // [sp+84h] [bp-8h]

  memset(s, 0, sizeof(s));
  s[0] = 322980;
  s[1] = 323480;
  s[2] = get_working_voltage_base;
  s[3] = start_voltage_monitor_base;
  s[6] = 323536;
  s[7] = set_voltage_base;
  s[8] = start_freq_compensate_thread_base;
  s[9] = calc_freq_compensate_by_temp_base;
  s[10] = set_baud_base;
  s[11] = set_frequency_with_voltage_1491;
  s[12] = start_mining_base;
  s[14] = stop_mining_base;
  s[15] = reset_mining_base;
  s[16] = check_asic_num_base;
  s[17] = check_bringup_temperature_base;
  s[18] = hot_cold_restart_base;
  s[22] = &word_1C200;
  s[23] = 1500000;
  s[26] = 1500;
  s[27] = 500000;
  s[28] = 1157234688;
  s[30] = 1065353216;
  s[31] = "/config/sn";
  dest = calloc(1u, 0x84u);
  if ( dest )
  {
    memcpy(dest, s, 0x84u);
    return dest;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
    return 0;
  }
}
