int pcba_calc_ckb_core_num()
{
  return *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
}
