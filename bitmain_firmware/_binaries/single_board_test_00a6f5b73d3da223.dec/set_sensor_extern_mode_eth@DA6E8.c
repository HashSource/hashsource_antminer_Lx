int __fastcall set_sensor_extern_mode_eth(int a1)
{
  if ( !sub_781D0(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
