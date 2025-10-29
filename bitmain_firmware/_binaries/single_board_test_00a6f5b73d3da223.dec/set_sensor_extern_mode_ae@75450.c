int __fastcall set_sensor_extern_mode_ae(int a1)
{
  if ( !sub_730F4(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
