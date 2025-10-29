int __fastcall pcba_calc_vbk_core_num(_DWORD *a1)
{
  if ( fpga_type[*a1] == 1 )
    return 5;
  else
    return 4;
}
