int pcba_calc_dash_core_num()
{
  return *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
}
