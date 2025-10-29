int __fastcall set_sensor_extern_mode_ltc(int a1)
{
  if ( !sub_DCBBC(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
