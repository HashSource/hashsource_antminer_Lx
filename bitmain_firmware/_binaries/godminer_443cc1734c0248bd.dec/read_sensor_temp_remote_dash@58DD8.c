int __fastcall read_sensor_temp_remote_dash(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r3
  int v13; // r2
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h] BYREF

  if ( a5 )
  {
    if ( a5 == 1 )
    {
      if ( sub_58CC4((_DWORD *)a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8), 256, &v14, &v15) == 1 )
      {
        v13 = HIBYTE(v14);
        v12 = v15;
        if ( *(_DWORD *)(a1 + 320) == 1 )
          v13 = HIBYTE(v14) - 64;
        *a2 = v13;
        *a3 = v12;
      }
      else
      {
        v12 = *a3;
      }
      if ( v12 )
        *a2 -= 15;
    }
  }
  else
  {
    sub_58B80((char *)(a1 + 140), a2, a3, a8);
  }
  return 0;
}
