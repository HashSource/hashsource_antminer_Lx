int __fastcall sub_311F4(int result)
{
  if ( result == 1 )
  {
    freq_scan_status = 1;
  }
  else if ( result == 2 )
  {
    freq_scan_status = 2;
    strcpy((char *)&search_failed_info, "R:1");
    return *(_DWORD *)"R:1";
  }
  else
  {
    freq_scan_status = 0;
    if ( result )
    {
      strcpy((char *)&search_failed_info, "unknown");
      return *(_DWORD *)"unknown";
    }
  }
  return result;
}
