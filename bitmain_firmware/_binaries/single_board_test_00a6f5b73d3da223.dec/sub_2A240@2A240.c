int __fastcall sub_2A240(int a1)
{
  int result; // r0
  int v2; // r3
  int v4; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+20h] [bp+10h] BYREF
  int v6; // [sp+24h] [bp+14h] BYREF
  int v7; // [sp+28h] [bp+18h] BYREF
  int v8; // [sp+2Ch] [bp+1Ch] BYREF
  _DWORD v9[2]; // [sp+30h] [bp+20h] BYREF
  int i; // [sp+38h] [bp+28h]
  int v11; // [sp+3Ch] [bp+2Ch]

  v11 = 0;
  i = 0;
  result = (*(int (__fastcall **)(int))(a1 + 96))(a1);
  for ( i = 0; i <= 3; ++i )
  {
    sleep(1u);
    v9[0] = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    result = off_47BE9C(a1, v9, &v8, &v7, &v6, &v5, &v4);
    v9[1] = result;
    if ( result )
    {
      v2 = v11++;
      if ( v2 > 1 )
      {
        result = puts("tempture error: can't read all sensor");
        g_pcba_info = 0;
        *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) = 0;
        return result;
      }
    }
    else
    {
      v11 = 0;
      result = printf("board temp %d - %d, chip temp %d - %d\n", v8, v9[0], v6, v7);
      if ( *(_DWORD *)(g_config_info + 80) < v7 )
      {
        result = printf("tempture error: max pcb = %d, min pcb = %d, max chip = %d, min chip = %d\n", v9[0], v8, v7, v6);
        g_pcba_info = 0;
        *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) = 0;
        return result;
      }
    }
  }
  return result;
}
