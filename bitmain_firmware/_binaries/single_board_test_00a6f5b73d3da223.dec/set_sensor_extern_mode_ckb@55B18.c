int __fastcall set_sensor_extern_mode_ckb(int a1)
{
  if ( !sub_53A60(a1) )
    *(_DWORD *)(a1 + 320) = 1;
  return 0;
}
