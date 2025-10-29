void *machine_runtime_ctrl_x7_2044()
{
  _DWORD s[33]; // [sp+0h] [bp-8Ch] BYREF
  void *dest; // [sp+84h] [bp-8h]

  memset(s, 0, sizeof(s));
  s[0] = 357392;
  s[1] = 358096;
  s[2] = get_working_voltage_base;
  s[3] = start_voltage_monitor_base;
  s[5] = stop_voltage_monitor_base;
  s[6] = 358412;
  s[7] = 357156;
  s[10] = set_baud_base;
  s[11] = set_frequency_with_voltage_x7_2044;
  s[12] = start_mining_x7;
  s[14] = stop_mining_base;
  s[15] = reset_mining_base;
  s[16] = check_asic_num_x7;
  s[17] = check_bringup_temperature_base;
  s[21] = 35;
  s[22] = &word_1C200;
  s[23] = &word_1C200;
  s[24] = 23;
  s[26] = 1500;
  s[27] = sub_30D40;
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
