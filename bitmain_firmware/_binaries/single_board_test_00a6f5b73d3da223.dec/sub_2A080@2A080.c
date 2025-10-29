int __fastcall sub_2A080(int a1)
{
  pthread_t v1; // r0
  int v2; // r3
  int v5; // [sp+1Ch] [bp+Ch] BYREF
  int v6; // [sp+20h] [bp+10h] BYREF
  int v7; // [sp+24h] [bp+14h] BYREF
  int v8; // [sp+28h] [bp+18h] BYREF
  int v9; // [sp+2Ch] [bp+1Ch] BYREF
  int v10; // [sp+30h] [bp+20h] BYREF
  int v12; // [sp+38h] [bp+28h]
  int v13; // [sp+3Ch] [bp+2Ch]

  v1 = pthread_self();
  pthread_detach(v1);
  v12 = a1;
  v13 = 0;
  (*(void (__fastcall **)(int))(a1 + 96))(a1);
  while ( g_pcba_info )
  {
    sleep(1u);
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    if ( off_47BE9C(v12, &v10, &v9, &v8, &v7, &v6, &v5) )
    {
      v2 = v13++;
      if ( v2 > 1 )
      {
        puts("tempture error: can't read all sensor");
        g_lcd_result_with_data = 12;
        strcpy(dest, "Sensor error    ");
        g_pcba_info = 0;
        *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) = 0;
        break;
      }
    }
    else
    {
      v13 = 0;
      dword_47BE54 = v10;
      dword_47BE58 = v9;
      dword_47BE5C = v8;
      dword_47BE60 = v7;
      if ( *(_DWORD *)(g_config_info + 80) < v8 )
      {
        printf("tempture error: max pcb = %d, min pcb = %d, max chip = %d, min chip = %d\n", v10, v9, v8, v7);
        g_lcd_result_with_data = 13;
        g_pcba_info = 0;
        *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) = 0;
        break;
      }
    }
  }
  printf("%s[%d] quit\n", "pcba_read_temp_func", 834);
  return 0;
}
