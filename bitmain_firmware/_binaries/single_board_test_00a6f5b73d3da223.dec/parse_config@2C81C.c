bool __fastcall parse_config(const json_t *a1, int a2)
{
  bool v3; // r3
  const json_t *v8; // [sp+8h] [bp+8h]
  json_t *v9; // [sp+Ch] [bp+Ch]
  unsigned int i; // [sp+10h] [bp+10h]
  bool v11; // [sp+17h] [bp+17h]

  v11 = 0;
  v9 = json_object_get(a1, "TestCoins");
  if ( v9 && *(_DWORD *)v9 == 1 )
  {
    *(_DWORD *)(a2 + 4) = json_array_size(v9);
    *(_DWORD *)a2 = malloc(80 * *(_DWORD *)(a2 + 4));
    if ( !*(_DWORD *)a2 )
    {
      printf("%s malloc failed!\n", "parse_config");
      return 0;
    }
    memset(*(void **)a2, 0, 80 * *(_DWORD *)(a2 + 4));
    for ( i = 0; *(_DWORD *)(a2 + 4) > i; ++i )
    {
      v8 = (const json_t *)json_array_get(v9, i);
      if ( !v8 )
        break;
      if ( *(_DWORD *)v8 )
      {
        printf("JSON value type error!");
      }
      else
      {
        v3 = get_key_value_string(v8, "Algo", (void **)(80 * i + *(_DWORD *)a2))
          && get_key_value_interger(v8, "CoreNum", (int *)(80 * i + *(_DWORD *)a2 + 12))
          && get_key_value_interger(v8, "PatternNum", (int *)(80 * i + *(_DWORD *)a2 + 16))
          && get_key_value_interger(v8, "Timeout", (int *)(80 * i + *(_DWORD *)a2 + 20))
          && get_key_value_array_interger(
               v8,
               "Frequence",
               (void **)(80 * i + *(_DWORD *)a2 + 24),
               (size_t *)(80 * i + *(_DWORD *)a2 + 28))
          && get_key_value_array_real(
               v8,
               "MinValidPatternPecent",
               (void **)(80 * i + *(_DWORD *)a2 + 36),
               (size_t *)(80 * i + *(_DWORD *)a2 + 40))
          && get_key_value_real(v8, "MaxHWPecent", (_QWORD *)(80 * i + *(_DWORD *)a2 + 48))
          && get_key_value_boolean(v8, "IsTest", (bool *)(80 * i + *(_DWORD *)a2 + 56));
        v11 = v3;
      }
      if ( !v11 )
        break;
    }
  }
  if ( v11 )
    return get_key_value_string(a1, "WorkPathPre", (void **)(a2 + 12))
        && get_key_value_string(a1, "AsicType", (void **)(a2 + 16))
        && get_key_value_interger(a1, "AsicNum", (int *)(a2 + 40))
        && get_key_value_interger(a1, "OpenCoreGap", (int *)(a2 + 44))
        && get_key_value_array_interger(a1, "Voltage", (void **)(a2 + 48), (size_t *)(a2 + 52))
        && get_key_value_array_interger(a1, "TempSensor", (void **)(a2 + 68), (size_t *)(a2 + 72))
        && get_key_value_interger(a1, "StartTemp", (int *)(a2 + 76))
        && get_key_value_interger(a1, "AlarmTemp", (int *)(a2 + 80))
        && get_key_value_interger(a1, "TempWaitingTime", (int *)(a2 + 84))
        && get_key_value_interger(a1, "Baudrate", (int *)(a2 + 96))
        && get_key_value_interger(a1, "TestMode", (int *)(a2 + 92))
        && get_key_value_interger(a1, "FanSpeed", (int *)(a2 + 100))
        && get_key_value_interger(a1, "DelayPowerDown", (int *)(a2 + 104))
        && get_key_value_string(a1, "RepeatCtrl", (void **)(a2 + 116));
  return v11;
}
