int __fastcall read_sensor_temp_local_ckb(int a1, unsigned int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a5 )
  {
    if ( a5 == 1 )
      sub_535E4(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8));
  }
  else
  {
    sub_536AC(a1, a2, a3, a8);
  }
  return 0;
}
