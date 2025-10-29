int __fastcall set_sensor_extern_mode_grin32(int a1)
{
  if ( !sub_4E774(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
