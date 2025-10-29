int __fastcall print_app_config(int a1)
{
  double v1; // r2
  const char *v2; // r3
  int m; // [sp+8h] [bp+8h]
  int k; // [sp+Ch] [bp+Ch]
  int j; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  printf("%d coins:\n\n", *(_DWORD *)(a1 + 4));
  for ( i = 0; *(_DWORD *)(a1 + 4) > i; ++i )
  {
    printf("coin: %s\n", *(const char **)(80 * i + *(_DWORD *)a1));
    printf("pattern_num: %d\n", *(_DWORD *)(80 * i + *(_DWORD *)a1 + 16));
    printf("timeout: %d\n", *(_DWORD *)(80 * i + *(_DWORD *)a1 + 20));
    printf("%s: \n", "freq");
    for ( j = 0; *(_DWORD *)(80 * i + *(_DWORD *)a1 + 28) > j; ++j )
      printf("%d \n", *(_DWORD *)(4 * j + *(_DWORD *)(80 * i + *(_DWORD *)a1 + 24)));
    putchar(10);
    LODWORD(v1) = i;
    HIDWORD(v1) = *(_DWORD *)(80 * i + *(_DWORD *)a1 + 36);
    printf("min_valid_pattern_pecent: %f\n", v1);
    printf("max_hw_pecent: %f\n", *(double *)(80 * i + *(_DWORD *)a1 + 48));
    if ( *(_BYTE *)(80 * i + *(_DWORD *)a1 + 56) )
      v2 = "true";
    else
      v2 = "false";
    printf("is_test: %s\n", v2);
    putchar(10);
  }
  printf("\nwork_path_pre: %s\n", *(const char **)(a1 + 12));
  printf("asic_type: %s\n", *(const char **)(a1 + 16));
  printf("asic_num: %d\n", *(_DWORD *)(a1 + 40));
  printf("open_core_gap: %d\n", *(_DWORD *)(a1 + 44));
  printf("%s: \n", "voltage");
  for ( k = 0; *(_DWORD *)(a1 + 52) > k; ++k )
    printf("%d \n", *(_DWORD *)(4 * k + *(_DWORD *)(a1 + 48)));
  putchar(10);
  printf("%s: \n", "temp_sensor");
  for ( m = 0; *(_DWORD *)(a1 + 72) > m; ++m )
    printf("%d \n", *(_DWORD *)(4 * m + *(_DWORD *)(a1 + 68)));
  putchar(10);
  printf("start_temp: %d\n", *(_DWORD *)(a1 + 76));
  printf("alarm_temp: %d\n", *(_DWORD *)(a1 + 80));
  printf("temp_waitting_time: %d\n", *(_DWORD *)(a1 + 84));
  printf("test_mode: %d\n", *(_DWORD *)(a1 + 92));
  printf("baud_rate: %d\n", *(_DWORD *)(a1 + 96));
  return printf("repeat_ctrl: %s\n", *(const char **)(a1 + 116));
}
