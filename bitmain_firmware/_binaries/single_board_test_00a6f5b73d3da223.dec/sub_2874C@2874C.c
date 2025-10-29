int __fastcall sub_2874C(int a1)
{
  int result; // r0
  int i; // [sp+Ch] [bp+Ch] BYREF
  int v4; // [sp+10h] [bp+10h]
  int v5; // [sp+14h] [bp+14h]
  int v6; // [sp+18h] [bp+18h]
  int v7; // [sp+1Ch] [bp+1Ch]
  int k; // [sp+20h] [bp+20h]
  int j; // [sp+24h] [bp+24h]

  g_patten_offset = 0;
  memset(&g_pcba_info, 0, 0x78u);
  g_pcba_info = 1;
  dword_47BE68 = 0;
  dword_47BE7C = a1;
  byte_47BE80 = 1;
  dword_47BEA0 = 0;
  init_history_result(a1);
  if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 2 )
  {
    off_47BE88 = pcba_ckb_recv;
    off_47BE8C = pcba_ckb_send;
    off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_ckb_asic_valid;
    off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_ckb_core_num;
    dword_47BE98 = (int)pcba_statistic_ckb_pattern_test_results;
    off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_ckb_temperature;
  }
  else if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 1 )
  {
    off_47BE88 = pcba_vbk_recv;
    off_47BE8C = (int (__fastcall *)(_DWORD, _DWORD))pcba_vbk_send;
    off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_vbk_asic_valid;
    off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_vbk_core_num;
    dword_47BE98 = (int)pcba_statistic_vbk_pattern_test_results;
    off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_fpga_temperature;
  }
  else if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6 )
    {
      off_47BE88 = pcba_ltc_recv;
      off_47BE8C = pcba_ltc_send;
      off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_ltc_asic_valid;
      off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_ltc_core_num;
      dword_47BE98 = (int)pcba_statistic_ltc_pattern_test_results;
      off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_ltc_temperature;
      *(_DWORD *)(dword_1F0C8C + 64) = pcba_check_nonce_ltc;
      if ( !strcmp(*(const char **)(g_config_info + 20), "PT1") )
      {
        v7 = dword_1F0C8C + 52;
        *(_DWORD *)(dword_1F0C8C + 52) = pcba_setup_all_chip_ltc;
      }
    }
    else if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7 )
    {
      off_47BE88 = pcba_dash_recv;
      off_47BE8C = pcba_dash_send;
      off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_dash_asic_valid;
      off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_dash_core_num;
      dword_47BE98 = (int)pcba_statistic_dash_pattern_test_results;
      off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_dash_temperature;
      *(_DWORD *)(dword_1F0C8C + 64) = pcba_check_nonce_dash;
    }
    else
    {
      if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) != 5 )
      {
        printf("unknow algo type %d\n", *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
        exit(1);
      }
      off_47BE88 = pcba_eth_recv;
      off_47BE8C = pcba_eth_send;
      off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_eth_asic_valid;
      off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_eth_core_num;
      dword_47BE98 = (int)pcba_statistic_eth_pattern_test_results;
      off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_eth_temperature;
      *(_DWORD *)(dword_1F0C8C + 64) = pcba_check_nonce_eth;
    }
  }
  else
  {
    off_47BE88 = pcba_grin29_recv;
    off_47BE8C = (int (__fastcall *)(_DWORD, _DWORD))pcba_grin29_send;
    off_47BE90 = (int (__fastcall *)(_DWORD))pcba_is_grin29_asic_valid;
    off_47BE94 = (int (__fastcall *)(_DWORD))pcba_calc_grin29_core_num;
    dword_47BE98 = (int)pcba_statistic_grin29_pattern_test_results;
    off_47BE9C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_fpga_temperature;
  }
  result = strcmp(*(const char **)(g_config_info + 20), "PT2");
  if ( !result )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8);
    for ( i = 0; *(_DWORD *)(g_config_info + 40) > i; ++i )
    {
      result = off_47BE90(&i);
      if ( (unsigned __int8)result == 1 )
      {
        result = off_47BE94(&i);
        v5 = result;
        for ( j = 0; j < v5; ++j )
        {
          for ( k = 0; *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) > k; ++k )
          {
            v4 = 104
               * (k
                + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * v5 * i
                + j * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16))
               + v6;
            *(_DWORD *)(v4 + 100) = 0;
          }
        }
      }
    }
  }
  return result;
}
