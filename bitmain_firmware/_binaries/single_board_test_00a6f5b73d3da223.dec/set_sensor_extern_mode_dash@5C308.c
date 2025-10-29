int __fastcall set_sensor_extern_mode_dash(int a1)
{
  if ( !sub_58E10(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
