int print_MES_system_information()
{
  int result; // r0
  int v1; // [sp+10h] [bp+8h]
  int v2; // [sp+14h] [bp+Ch]
  _DWORD *v3; // [sp+18h] [bp+10h]
  int v4; // [sp+1Ch] [bp+14h]
  _DWORD *v5; // [sp+20h] [bp+18h]
  _DWORD *v6; // [sp+24h] [bp+1Ch]
  int v7; // [sp+28h] [bp+20h]
  int v8; // [sp+2Ch] [bp+24h]
  unsigned int j; // [sp+30h] [bp+28h]
  int v10; // [sp+34h] [bp+2Ch]
  int v11; // [sp+38h] [bp+30h]
  int v12; // [sp+3Ch] [bp+34h]
  int v13; // [sp+40h] [bp+38h]
  int v14; // [sp+44h] [bp+3Ch]
  int v15; // [sp+48h] [bp+40h]
  unsigned int i; // [sp+4Ch] [bp+44h]
  int v17; // [sp+50h] [bp+48h]
  int v18; // [sp+54h] [bp+4Ch]

  v18 = 0;
  v17 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  printf(
    "MES system paticular config information version is: %s\n",
    (const char *)(Mes_System_Config_File_Information + 28));
  printf(
    "MES system paticular config information code is: %s\n",
    (const char *)(Mes_System_Config_File_Information + 52));
  result = printf(
             "MES system paticular config information msg is: %s\n",
             (const char *)(Mes_System_Config_File_Information + 76));
  v8 = *(_DWORD *)(Mes_System_Config_File_Information + 100);
  while ( v8 )
  {
    result = printf("configs[%d]->miner_type: %s\n", v18, (const char *)v8);
    v7 = *(_DWORD *)(v8 + 24);
    while ( v7 )
    {
      printf("configs[%d]->hw_info[%d]->id: %d\n", v18, v17, *(_DWORD *)v7);
      printf("configs[%d]->hw_info[%d]->board_name: %s\n", v18, v17, (const char *)(v7 + 4));
      printf("configs[%d]->hw_info[%d]->asic_type: %s\n", v18, v17, (const char *)(v7 + 28));
      printf("configs[%d]->hw_info[%d]->asic_num: %d\n", v18, v17, *(_DWORD *)(v7 + 52));
      printf("configs[%d]->hw_info[%d]->voltage_domain: %d\n", v18, v17, *(_DWORD *)(v7 + 56));
      result = printf("configs[%d]->hw_info[%d]->asic_num_per_voltage_domain: %d\n", v18, v17, *(_DWORD *)(v7 + 60));
      for ( i = 0; i < gPower_version_array_size; ++i )
        result = printf(
                   "configs[%d]->hw_info[%d]->power_version[%d]: %d\n",
                   v18,
                   v17,
                   i,
                   *(_DWORD *)(v7 + 4 * (i + 16)));
      v7 = *(_DWORD *)(v7 + 96);
      ++v17;
    }
    v6 = *(_DWORD **)(v8 + 28);
    while ( v6 )
    {
      printf("configs[%d]->rule->pattern[%d]->id: %d\n", v18, v15, *v6);
      printf("configs[%d]->rule->pattern[%d]->pattern_number: %d\n", v18, v15, v6[1]);
      printf("configs[%d]->rule->pattern[%d]->invalid_core_num: %d\n", v18, v15, v6[2]);
      printf("configs[%d]->rule->pattern[%d]->most_hw_num: %d\n", v18, v15, v6[3]);
      printf("configs[%d]->rule->pattern[%d]->least_nonce_per_core: %d\n", v18, v15, v6[4]);
      printf("configs[%d]->rule->pattern[%d]->nonce_rate: %d\n", v18, v15, v6[5]);
      printf("configs[%d]->rule->pattern[%d]->min_nonce_rate_per_asic: %d\n", v18, v15, v6[6]);
      result = printf("configs[%d]->rule->pattern[%d]->midstate_number: %d\n", v18, v15, v6[7]);
      v6 = (_DWORD *)v6[8];
      ++v15;
    }
    v5 = *(_DWORD **)(v8 + 32);
    while ( v5 )
    {
      printf("configs[%d]->rule->asic_reg[%d]->id: %d\n", v18, v14, *v5);
      printf("configs[%d]->rule->asic_reg[%d]->ccdly_sel: %d\n", v18, v14, v5[1]);
      printf("configs[%d]->rule->asic_reg[%d]->pwth_sel: %d\n", v18, v14, v5[2]);
      printf("configs[%d]->rule->asic_reg[%d]->swpf_mode: %d\n", v18, v14, v5[3]);
      printf("configs[%d]->rule->asic_reg[%d]->pulse_mode: %d\n", v18, v14, v5[4]);
      printf("configs[%d]->rule->asic_reg[%d]->clk_sel: %d\n", v18, v14, v5[5]);
      printf("configs[%d]->rule->asic_reg[%d]->ro_relay_en: %d\n", v18, v14, v5[6]);
      printf("configs[%d]->rule->asic_reg[%d]->co_relay_en: %d\n", v18, v14, v5[7]);
      result = printf("configs[%d]->rule->asic_reg[%d]->diode_vdd_mux_sel: %d\n", v18, v14, v5[8]);
      v5 = (_DWORD *)v5[9];
      ++v14;
    }
    v4 = *(_DWORD *)(v8 + 36);
    while ( v4 )
    {
      printf("configs[%d]->rule->test_method[%d]->id: %d\n", v18, v13, *(_DWORD *)v4);
      result = printf("configs[%d]->rule->test_method[%d]->method: %s\n", v18, v13, (const char *)(v4 + 4));
      v4 = *(_DWORD *)(v4 + 28);
      ++v13;
    }
    v3 = *(_DWORD **)(v8 + 40);
    while ( v3 )
    {
      printf("configs[%d]->rule->test_loop[%d]->id: %d\n", v18, v12, *v3);
      printf("configs[%d]->rule->test_loop[%d]->frequency: %d\n", v18, v12, v3[1]);
      result = printf("configs[%d]->rule->test_loop[%d]->voltage: %d\n", v18, v12, v3[2]);
      v3 = (_DWORD *)v3[3];
      ++v12;
    }
    v2 = *(_DWORD *)(v8 + 44);
    while ( v2 )
    {
      printf("configs[%d]->test_config[%d]->hardware_version: %s\n", v18, v11, (const char *)v2);
      printf("configs[%d]->test_config[%d]->bom_version: %s\n", v18, v11, (const char *)(v2 + 24));
      printf("configs[%d]->test_config[%d]->chip_technology: %s\n", v18, v11, (const char *)(v2 + 48));
      printf("configs[%d]->test_config[%d]->ft_vesrion: %s\n", v18, v11, (const char *)(v2 + 72));
      result = printf("configs[%d]->test_config[%d]->bin: %d\n", v18, v11, *(_DWORD *)(v2 + 96));
      v1 = *(_DWORD *)(v2 + 100);
      while ( v1 )
      {
        printf("configs[%d]->test_config[%d]->data[%d]->version: %s\n", v18, v11, v10, (const char *)v1);
        printf("configs[%d]->test_config[%d]->data[%d]->pattern_id: %d\n", v18, v11, v10, *(_DWORD *)(v1 + 24));
        printf("configs[%d]->test_config[%d]->data[%d]->asic_reg_id: %d\n", v18, v11, v10, *(_DWORD *)(v1 + 28));
        printf("configs[%d]->test_config[%d]->data[%d]->test_method_id: %d\n", v18, v11, v10, *(_DWORD *)(v1 + 32));
        printf("configs[%d]->test_config[%d]->data[%d]->voltage_accuracy: %d\n", v18, v11, v10, *(_DWORD *)(v1 + 36));
        printf("configs[%d]->test_config[%d]->data[%d]->fan_speed: %d\n", v18, v11, v10, *(_DWORD *)(v1 + 40));
        result = printf(
                   "configs[%d]->test_config[%d]->data[%d]->pre_open_core_voltage: %d\n",
                   v18,
                   v11,
                   v10,
                   *(_DWORD *)(v1 + 88));
        for ( j = 0; j < gTest_loop_id_array_size; ++j )
          result = printf(
                     "configs[%d]->test_config[%d]->data[%d]->test_loop_id[%d]: %d\n",
                     v18,
                     v11,
                     v10,
                     j,
                     *(_DWORD *)(4 * (j + 10) + v1 + 4));
        v1 = *(_DWORD *)(v1 + 92);
        ++v10;
      }
      v2 = *(_DWORD *)(v2 + 104);
      ++v11;
    }
    v8 = *(_DWORD *)(v8 + 48);
    ++v18;
  }
  return result;
}
