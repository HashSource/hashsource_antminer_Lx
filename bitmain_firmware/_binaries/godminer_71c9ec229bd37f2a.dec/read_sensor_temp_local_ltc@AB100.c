int __fastcall read_sensor_temp_local_ltc(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a5 )
  {
    if ( a5 == 1 )
      sub_AAFCC(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 304) + a8));
    return 0;
  }
  else
  {
    sub_AACA8((char *)(a1 + 148), a2, a3, a8);
    return 0;
  }
}
