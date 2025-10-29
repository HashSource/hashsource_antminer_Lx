int __fastcall sub_29414(int a1)
{
  pthread_t v1; // r0
  int v2; // r3
  _BYTE *v3; // r3
  float v4; // s15
  float v5; // s15
  int v6; // r4
  int v7; // r1
  float v8; // s15
  char src[32]; // [sp+10h] [bp+8h] BYREF
  char s[256]; // [sp+30h] [bp+28h] BYREF
  int i; // [sp+130h] [bp+128h] BYREF
  struct timespec v14[2]; // [sp+134h] [bp+12Ch] BYREF
  struct timespec *tp; // [sp+144h] [bp+13Ch]
  int v16; // [sp+148h] [bp+140h]
  int v17; // [sp+14Ch] [bp+144h]
  int v18; // [sp+150h] [bp+148h]
  float v19; // [sp+154h] [bp+14Ch]
  float v20; // [sp+158h] [bp+150h]
  struct timespec *v21; // [sp+15Ch] [bp+154h]
  int v22; // [sp+160h] [bp+158h]
  int v23; // [sp+164h] [bp+15Ch]
  int v24; // [sp+168h] [bp+160h]
  void *ptr; // [sp+16Ch] [bp+164h]
  int v26; // [sp+170h] [bp+168h]
  int v27; // [sp+174h] [bp+16Ch]
  int v28; // [sp+178h] [bp+170h]
  int v29; // [sp+17Ch] [bp+174h]
  int v30; // [sp+180h] [bp+178h]
  int v31; // [sp+184h] [bp+17Ch]
  int ii; // [sp+188h] [bp+180h]
  int n; // [sp+18Ch] [bp+184h]
  int v34; // [sp+190h] [bp+188h]
  int m; // [sp+194h] [bp+18Ch]
  int v36; // [sp+198h] [bp+190h]
  int k; // [sp+19Ch] [bp+194h]
  int j; // [sp+1A0h] [bp+198h]
  float v39; // [sp+1A4h] [bp+19Ch]

  v1 = pthread_self();
  pthread_detach(v1);
  v31 = 0;
  v30 = 0;
  v29 = a1;
  v28 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 8);
  v27 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16)
      * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12)
      * *(_DWORD *)(g_config_info + 40);
  v26 = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
  ptr = calloc(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12) * *(_DWORD *)(g_config_info + 40), 1u);
  pcba_set_fan_pwm(5);
  while ( dword_47BE54 < *(_DWORD *)(g_config_info + 76) )
  {
    printf("Wait for temp to start temp :%d, board max %d \n", *(_DWORD *)(g_config_info + 76), dword_47BE54);
    sleep(2u);
  }
  pcba_set_fan_pwm(*(_DWORD *)(g_config_info + 100));
  puts("Reach start temp, start test");
  for ( i = 0; *(_DWORD *)(g_config_info + 40) > i; ++i )
  {
    if ( (unsigned __int8)off_47BE90(&i) == 1 )
    {
      v24 = off_47BE94(&i);
      for ( j = 0; j < v24; ++j )
      {
        for ( k = 0; *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) > k; ++k )
        {
          if ( g_pcba_info != 1 )
          {
            puts("stop send work by other errors");
            goto LABEL_54;
          }
          g_patten_offset = *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 16) * (v24 * i + j) + k;
          v23 = 104 * g_patten_offset + v28;
          off_47BE8C(v29, v23);
          ++dword_47BE78;
          need_pattern = 0;
          v22 = 1000 * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 20);
          v36 = 0;
          tp = v14;
          clock_gettime(1, v14);
          do
          {
            usleep(v22 / 100);
            v21 = v14;
            clock_gettime(1, &v14[1]);
            v20 = (float)((v21[1].tv_nsec - v21->tv_nsec) / 1000 + 1000000LL * (v21[1].tv_sec - v21->tv_sec));
            if ( (float)v22 < v20 )
              break;
            if ( need_pattern == 1 )
              break;
            v2 = v36++;
          }
          while ( v2 <= 99 );
          if ( *(_DWORD *)(v23 + 100) )
          {
            v3 = (char *)ptr + j + i * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12);
            ++*v3;
            ++dword_47BE74;
          }
        }
        v4 = (double)dword_47BE74 * 100.0 / (double)v27;
        flt_47BE70 = v4;
      }
    }
  }
  puts("------------------------------------------------------------------------------------------------");
  puts("                                     Result");
  for ( m = 0; *(_DWORD *)(g_config_info + 40) > m; ++m )
  {
    v19 = 0.0;
    v34 = 0;
    v18 = 0;
    memset(s, 0, sizeof(s));
    sprintf(s, "ASIC-%03d ", m);
    for ( n = 0; *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12) > n; ++n )
    {
      memset(src, 0, sizeof(src));
      v17 = *((unsigned __int8 *)ptr + n + m * *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 12));
      sprintf(src, "%d ", v17);
      strcat(s, src);
      v34 += v17;
    }
    v5 = (double)v34 * 100.0 / (double)v26;
    v19 = v5;
    if ( v5 >= *(float *)(*(_DWORD *)(g_config_info + 8) + 76) / 100.0 * flt_47BE70 )
    {
      if ( *(float *)(*(_DWORD *)(g_config_info + 8) + 72) > v19 )
        ++*((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65802);
    }
    else
    {
      *((float *)&gHistory_Result
      + 66450 * dword_47BE7C
      + *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803)
      + 66060) = v19;
      v6 = dword_47BE7C;
      v7 = *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803);
      *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803) = v7 + 1;
      *((_DWORD *)&gHistory_Result + 66450 * v6 + v7 + 65804) = m;
    }
    printf("%s   %d\n", s, v34);
    *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + m + 65546) = v34;
  }
  if ( *((int *)&gHistory_Result + 66450 * dword_47BE7C + 65803) > 0 )
  {
    puts("------------------------------------------------------------------------------------------------");
    puts("Bad ASIC list:");
    for ( ii = 0; *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803) > ii; ++ii )
    {
      v16 = *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + ii + 65804);
      printf(
        "ASIC[%02d] get nonce %d, nonce rate %0.2f\n",
        v16,
        *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + v16 + 65546),
        (double)*((unsigned int *)&gHistory_Result + 66450 * dword_47BE7C + v16 + 65546) * 100.0 / (double)v26);
    }
  }
  *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 5) = *(_DWORD *)(4 * dword_47BE7C
                                                                       + *(_DWORD *)(g_config_info + 48));
  *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 7) = *(_DWORD *)(4 * dword_47BE7C
                                                                       + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 24));
  *((double *)&gHistory_Result + 33225 * dword_47BE7C + 1) = flt_47BE70;
  if ( *(_DWORD *)(g_config_info + 32) )
    v8 = (double)*(unsigned int *)(MES2Local_Config_Information + 212) / 100.0;
  else
    v8 = *(double *)(8 * dword_47BE7C + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 36));
  v39 = v8;
  if ( flt_47BE70 >= v8 && *((int *)&gHistory_Result + 66450 * dword_47BE7C + 65803) <= 0 )
  {
    printf("\nPattern Test Success %0.4f match nocnes %d total nonces %d\n", flt_47BE70, dword_47BE74, v27);
    printf("patten test pass level %d is done %d\n", dword_47BE7C, (unsigned __int8)byte_47BE80);
    *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 265796) = *((int *)&gHistory_Result
                                                                    + 66450 * dword_47BE7C
                                                                    + 65802) > 0;
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6 || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7 )
    {
      g_lcd_result_with_data = 1;
      strcpy(dest, "Wait for submit");
    }
    else if ( pcba_save_config_to_pic(dword_47BE7C) >= 0 )
    {
      g_lcd_result_with_data = 1;
      sub_28CE8();
    }
    else
    {
      g_lcd_result_with_data = 21;
    }
  }
  else
  {
    printf("\nPattern Test Failed %0.4f match nocnes %d total nonces %d\n", flt_47BE70, dword_47BE74, v27);
    printf("patten test fail level %d\n", dword_47BE7C + 1);
    *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 265796) = -16;
    if ( dword_47BE7C < *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 28) - 1 )
    {
      byte_47BE80 = 0;
      sub_28CE8();
    }
    else
    {
      strcpy(dest, "Wait for submit");
    }
  }
  g_pcba_info = 0;
  puts("send test pattern done");
LABEL_54:
  free(ptr);
  printf("%s[%d] quit\n", "pcba_send_func", 788);
  return 0;
}
