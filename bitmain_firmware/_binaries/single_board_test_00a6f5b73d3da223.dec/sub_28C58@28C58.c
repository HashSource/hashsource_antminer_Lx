int sub_28C58()
{
  sprintf(dest, "NAME:%s", *(const char **)(g_config_info + 28));
  sprintf(byte_47BEB9, "CHIP:%2d", *(_DWORD *)(g_config_info + 40));
  sprintf(&byte_47BEB9[17], "FREQ: %dMHz", **(_DWORD **)(*(_DWORD *)(g_config_info + 8) + 24));
  return sprintf(dword_47BEDB, "Voltage: %3dmV", **(_DWORD **)(g_config_info + 48));
}
