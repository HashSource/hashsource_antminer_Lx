int __fastcall init_history_result(int a1)
{
  int result; // r0

  if ( !a1 )
    memset(&gHistory_Result, 0, (size_t)&unk_288ED0);
  *((_BYTE *)&gHistory_Result + 265800 * a1) = 1;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 1) = 1;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) = 1;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) = 1;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 6) = 1;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 5) = 1;
  memset((char *)&gHistory_Result + 265800 * a1 + 265520, -1, 0x100u);
  memset((char *)&gHistory_Result + 265800 * a1 + 263216, -1, 0x400u);
  *((_DWORD *)&gHistory_Result + 66450 * a1 + 65803) = 0;
  *((_DWORD *)&gHistory_Result + 66450 * a1 + 65802) = 0;
  *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796) = -1;
  result = a1;
  if ( *(_DWORD *)(g_config_info + 32) )
    *((_DWORD *)&gHistory_Result + 66450 * a1 + 4) = *(_DWORD *)(16 * (a1 + 2) + MES2Local_Config_Information + 192);
  else
    *((_DWORD *)&gHistory_Result + 66450 * a1 + 4) = a1 + 1;
  return result;
}
