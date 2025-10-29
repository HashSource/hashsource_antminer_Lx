int print_local_config_after_parse_MES_system_information()
{
  const char *v0; // r3
  const char *v1; // r3
  const char *v2; // r3
  const char *v3; // r3
  const char *v4; // r3
  const char *v5; // r3
  const char *v6; // r3
  const char *v7; // r3
  const char *v8; // r3
  const char *v9; // r3
  unsigned int i; // [sp+4h] [bp+4h]
  unsigned int j; // [sp+4h] [bp+4h]
  unsigned int k; // [sp+4h] [bp+4h]

  putchar(32);
  printf("Test_Process : %s", (const char *)MES2Local_Config_Information);
  printf("Miner_Type : %s", (const char *)(MES2Local_Config_Information + 16));
  printf("Board_Name : %s", (const char *)(MES2Local_Config_Information + 32));
  printf("Asic_Type : %s", (const char *)(MES2Local_Config_Information + 48));
  printf("Asic_Num : %d", *(_DWORD *)(MES2Local_Config_Information + 64));
  printf("Voltage_Domain : %d", *(_DWORD *)(MES2Local_Config_Information + 80));
  printf("Asic_Num_Per_Voltage_Domain : %d", *(_DWORD *)(MES2Local_Config_Information + 84));
  if ( *(_BYTE *)(MES2Local_Config_Information + 88) )
    v0 = "true";
  else
    v0 = "false";
  printf("Read_Temperature_From_Pic : %s", v0);
  if ( *(_BYTE *)(MES2Local_Config_Information + 89) )
    v1 = "true";
  else
    v1 = "false";
  printf("Read_Temperature_From_Asic : %s", v1);
  printf("Pic_Sensor_Model : %s", (const char *)(MES2Local_Config_Information + 92));
  printf("gPic_sensor_num : %d", gPic_sensor_num);
  for ( i = 0; i < gPic_sensor_num; ++i )
    ;
  printf("Asic_Sensor_Model : %s", (const char *)(MES2Local_Config_Information + 124));
  printf("gAsic_sensor_num : %d", gAsic_sensor_num);
  for ( j = 0; j < gAsic_sensor_num; ++j )
    ;
  if ( *(_BYTE *)(MES2Local_Config_Information + 188) )
    v2 = "true";
  else
    v2 = "false";
  printf("Factory_Mode : %s", v2);
  if ( *(_BYTE *)(MES2Local_Config_Information + 189) )
    v3 = "true";
  else
    v3 = "false";
  printf("Bypass_Scan_Code_Gun : %s", v3);
  if ( *(_BYTE *)(MES2Local_Config_Information + 192) )
    v4 = "true";
  else
    v4 = "false";
  printf("Software_Pattern : %s", v4);
  if ( *(_BYTE *)(MES2Local_Config_Information + 193) )
    v5 = "true";
  else
    v5 = "false";
  printf("Hardware_Pattern : %s", v5);
  if ( *(_BYTE *)(MES2Local_Config_Information + 194) )
    v6 = "true";
  else
    v6 = "false";
  printf("Autogen_Pattern : %s", v6);
  printf("Midstate_Number : %d", *(_DWORD *)(MES2Local_Config_Information + 196));
  printf("Pattern_Number : %d", *(_DWORD *)(MES2Local_Config_Information + 200));
  printf("Invalid_Core_Number : %d", *(_DWORD *)(MES2Local_Config_Information + 204));
  printf("Least_Nonce_Per_Core : %d", *(_DWORD *)(MES2Local_Config_Information + 208));
  printf("Nonce_Rate : %d", *(_DWORD *)(MES2Local_Config_Information + 212));
  printf("Most_HW_Num : %d", *(_DWORD *)(MES2Local_Config_Information + 220));
  printf("In local config file, gTest_loop : %d", gTest_loop);
  for ( k = 0; k < gTest_loop; ++k )
  {
    printf("Test_Loop[%d]->Level : %d", k, *(_DWORD *)(16 * (k + 2) + MES2Local_Config_Information + 192));
    printf(
      "Test_Loop[%d]->Pre_Open_Core_Voltage : %d",
      k,
      *(_DWORD *)(16 * (k + 2) + MES2Local_Config_Information + 196));
    printf("Test_Loop[%d]->Voltage : %d", k, *(_DWORD *)(16 * (k + 14) + MES2Local_Config_Information + 8));
    printf("Test_Loop[%d]->Frequence : %d", k, *(_DWORD *)(16 * (k + 14) + MES2Local_Config_Information + 12));
  }
  printf("Baudrate : %d", *(_DWORD *)(MES2Local_Config_Information + 384));
  printf("Timeout : %d", *(_DWORD *)(MES2Local_Config_Information + 388));
  printf("CCdly_Sel : %d", *(_DWORD *)(MES2Local_Config_Information + 392));
  printf("Pwth_Sel : %d", *(_DWORD *)(MES2Local_Config_Information + 396));
  printf("Swpf_Mode : %d", *(_DWORD *)(MES2Local_Config_Information + 400));
  printf("Pulse_Mode : %d", *(_DWORD *)(MES2Local_Config_Information + 404));
  printf("Clk_Sel : %d", *(_DWORD *)(MES2Local_Config_Information + 408));
  printf("RO_Relay_En : %d", *(_DWORD *)(MES2Local_Config_Information + 412));
  printf("CO_Relay_En : %d", *(_DWORD *)(MES2Local_Config_Information + 416));
  printf("Diode_Vdd_Mux_Sel : %d", *(_DWORD *)(MES2Local_Config_Information + 420));
  printf("Start_Temp_Gap_Pic : %d", *(_DWORD *)(MES2Local_Config_Information + 424));
  printf("Time_For_Cooling_Hashboard : %d", *(_DWORD *)(MES2Local_Config_Information + 432));
  printf("Fan_Speed : %d", *(_DWORD *)(MES2Local_Config_Information + 436));
  if ( *(_BYTE *)(MES2Local_Config_Information + 440) )
    v7 = "true";
  else
    v7 = "false";
  printf("Display_result_Voltage_Domain : %s", v7);
  if ( *(_BYTE *)(MES2Local_Config_Information + 441) )
    v8 = "true";
  else
    v8 = "false";
  printf("Display_result_Every_Core : %s", v8);
  printf("Test_Config_Data_Version : %s", (const char *)(MES2Local_Config_Information + 442));
  printf("Voltage_Accuracy : %d", *(_DWORD *)(MES2Local_Config_Information + 460));
  printf("Close_Power_Delay : %d", *(_DWORD *)(MES2Local_Config_Information + 464));
  if ( *(_BYTE *)(MES2Local_Config_Information + 468) )
    v9 = "true";
  else
    v9 = "false";
  printf("Clear_EEPROM_Data : %s", v9);
  return putchar(32);
}
