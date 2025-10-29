int pcba_calc_ltc_core_num()
{
  return *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
}
