int __fastcall set_sensor_extern_mode_dcr(int a1)
{
  if ( !sub_5F6D4(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
