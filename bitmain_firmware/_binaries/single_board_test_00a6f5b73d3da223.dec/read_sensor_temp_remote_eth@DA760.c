int __fastcall read_sensor_temp_remote_eth(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v10; // [sp+14h] [bp+14h] BYREF

  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v10 = 0;
      sub_77DB8(a1, &v10, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8));
      *a2 = v10 - 6;
    }
  }
  else
  {
    sub_77FF4(a1, a2, a3, a8);
  }
  return 0;
}
