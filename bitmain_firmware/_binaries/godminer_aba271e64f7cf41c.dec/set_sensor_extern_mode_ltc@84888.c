int __fastcall set_sensor_extern_mode_ltc(int a1)
{
  if ( !sub_7E0A4(a1) )
    *(_DWORD *)(a1 + 512) = 1;
  return 0;
}
