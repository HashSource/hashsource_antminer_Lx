int __fastcall read_config_ini(void **a1)
{
  double v1; // d0
  _DWORD *v3; // r4
  _DWORD *v4; // r4
  _DWORD *v5; // r4
  float *v6; // r4
  float v7; // s15
  float *v8; // r4
  float v9; // s15
  float *v10; // r4
  float v11; // s15
  double *v12; // r4
  char v15[256]; // [sp+14h] [bp+Ch] BYREF
  int v16; // [sp+114h] [bp+10Ch] BYREF
  char filename[256]; // [sp+118h] [bp+110h] BYREF
  char s[256]; // [sp+218h] [bp+210h] BYREF
  size_t v19; // [sp+318h] [bp+310h]
  size_t v20; // [sp+31Ch] [bp+314h]
  size_t v21; // [sp+320h] [bp+318h]
  size_t v22; // [sp+324h] [bp+31Ch]
  size_t v23; // [sp+328h] [bp+320h]
  size_t n; // [sp+32Ch] [bp+324h]
  size_t size; // [sp+330h] [bp+328h]
  FILE *stream; // [sp+334h] [bp+32Ch]
  char *v27; // [sp+338h] [bp+330h]
  char *nptr; // [sp+33Ch] [bp+334h]

  memset(s, 0, sizeof(s));
  nptr = 0;
  v27 = getenv("PCBA_CONFIG_PATH");
  if ( v27 )
    snprintf(filename, 0x100u, "%s/%s.ini", v27, "Config");
  else
    snprintf(filename, 0x100u, "/mnt/card/%s.ini", "Config");
  stream = fopen(filename, "r");
  if ( stream )
  {
    a1[1] = (void *)1;
    *a1 = malloc(80 * (_DWORD)a1[1]);
    if ( *a1 )
    {
      memset(*a1, 0, 80 * (_DWORD)a1[1]);
      while ( fgets(s, 255, stream) )
      {
        if ( s[0] != 35 && s[1] != 35 )
        {
          nptr = strstr(s, "WorkPathPre=");
          if ( nptr )
          {
            nptr += 12;
            size = strlen(nptr) + 1;
            a1[3] = malloc(size);
            memset(a1[3], 0, size);
            _isoc99_sscanf(nptr, "%s", a1[3]);
          }
          else
          {
            nptr = strstr(s, "Test_Process=");
            if ( nptr )
            {
              nptr += 13;
              n = strlen(nptr) + 1;
              a1[5] = malloc(n);
              memset(a1[5], 0, n);
              _isoc99_sscanf(nptr, "%s", a1[5]);
            }
            else
            {
              nptr = strstr(s, "Miner_Type=");
              if ( nptr )
              {
                nptr += 11;
                v23 = strlen(nptr) + 1;
                a1[6] = malloc(v23);
                memset(a1[6], 0, v23);
                _isoc99_sscanf(nptr, "%s", a1[6]);
              }
              else
              {
                nptr = strstr(s, "Board_Name=");
                if ( nptr )
                {
                  nptr += 11;
                  v22 = strlen(nptr) + 1;
                  a1[7] = malloc(v22);
                  memset(a1[7], 0, v22);
                  _isoc99_sscanf(nptr, "%s", a1[7]);
                }
                else
                {
                  nptr = strstr(s, "AsicType=");
                  if ( nptr )
                  {
                    nptr += 9;
                    v21 = strlen(nptr) + 1;
                    a1[4] = malloc(v21);
                    memset(a1[4], 0, v21);
                    _isoc99_sscanf(nptr, "%s", a1[4]);
                  }
                  else
                  {
                    nptr = strstr(s, "AsicNum=");
                    if ( nptr )
                    {
                      nptr += 8;
                      _isoc99_sscanf(nptr, "%d", a1 + 10);
                    }
                    else
                    {
                      nptr = strstr(s, "Factory_Mode=");
                      if ( nptr )
                      {
                        nptr += 13;
                        _isoc99_sscanf(nptr, "%d", a1 + 8);
                      }
                      else
                      {
                        nptr = strstr(s, "Bypass_Scan_Code_Gun=");
                        if ( nptr )
                        {
                          nptr += 21;
                          _isoc99_sscanf(nptr, "%d", a1 + 9);
                        }
                        else
                        {
                          nptr = strstr(s, "OpenCoreGap=");
                          if ( nptr )
                          {
                            nptr += 12;
                            _isoc99_sscanf(nptr, "%d", a1 + 11);
                          }
                          else
                          {
                            nptr = strstr(s, "Voltage=");
                            if ( nptr )
                            {
                              nptr += 8;
                              memset(v15, 0, sizeof(v15));
                              _isoc99_sscanf(nptr, "%s", v15);
                              a1[13] = (void *)parse_config_ini_array(v15, a1 + 12);
                            }
                            else
                            {
                              nptr = strstr(s, "Power_version=");
                              if ( nptr )
                              {
                                nptr += 14;
                                memset(v15, 0, sizeof(v15));
                                _isoc99_sscanf(nptr, "%s", v15);
                                a1[15] = (void *)parse_config_ini_array(v15, a1 + 14);
                              }
                              else
                              {
                                nptr = strstr(s, "TempSensor=");
                                if ( nptr )
                                {
                                  nptr += 11;
                                  memset(v15, 0, sizeof(v15));
                                  _isoc99_sscanf(nptr, "%s", v15);
                                  a1[18] = (void *)parse_config_ini_array(v15, a1 + 17);
                                }
                                else
                                {
                                  nptr = strstr(s, "StartTemp=");
                                  if ( nptr )
                                  {
                                    nptr += 10;
                                    _isoc99_sscanf(nptr, "%d", a1 + 19);
                                  }
                                  else
                                  {
                                    nptr = strstr(s, "AlarmTemp=");
                                    if ( nptr )
                                    {
                                      nptr += 10;
                                      _isoc99_sscanf(nptr, "%d", a1 + 20);
                                    }
                                    else
                                    {
                                      nptr = strstr(s, "TempWaitingTime=");
                                      if ( nptr )
                                      {
                                        nptr += 16;
                                        _isoc99_sscanf(nptr, "%d", a1 + 21);
                                      }
                                      else
                                      {
                                        nptr = strstr(s, "StartTestTempGap=");
                                        if ( nptr )
                                        {
                                          nptr += 17;
                                          _isoc99_sscanf(nptr, "%d", a1 + 22);
                                        }
                                        else
                                        {
                                          nptr = strstr(s, "TestMode=");
                                          if ( nptr )
                                          {
                                            nptr += 9;
                                            _isoc99_sscanf(nptr, "%d", a1 + 23);
                                          }
                                          else
                                          {
                                            nptr = strstr(s, "Baudrate=");
                                            if ( nptr )
                                            {
                                              nptr += 9;
                                              _isoc99_sscanf(nptr, "%d", a1 + 24);
                                            }
                                            else
                                            {
                                              nptr = strstr(s, "RepeatCtrl=");
                                              if ( nptr )
                                              {
                                                nptr += 11;
                                                v20 = strlen(nptr) + 1;
                                                a1[29] = malloc(v20);
                                                memset(a1[29], 0, v20);
                                                _isoc99_sscanf(nptr, "%s", a1[29]);
                                              }
                                              else
                                              {
                                                nptr = strstr(s, "Algo=");
                                                if ( nptr )
                                                {
                                                  nptr += 5;
                                                  v19 = strlen(nptr) + 1;
                                                  v3 = *a1;
                                                  *v3 = malloc(v19);
                                                  memset(*(void **)*a1, 0, v19);
                                                  _isoc99_sscanf(nptr, "%s", *(_DWORD *)*a1);
                                                }
                                                else
                                                {
                                                  nptr = strstr(s, "CoreNum=");
                                                  if ( nptr )
                                                  {
                                                    nptr += 8;
                                                    _isoc99_sscanf(nptr, "%d", (char *)*a1 + 12);
                                                  }
                                                  else
                                                  {
                                                    nptr = strstr(s, "PatternNum=");
                                                    if ( nptr )
                                                    {
                                                      nptr += 11;
                                                      _isoc99_sscanf(nptr, "%d", (char *)*a1 + 16);
                                                    }
                                                    else
                                                    {
                                                      nptr = strstr(s, "Timeout=");
                                                      if ( nptr )
                                                      {
                                                        nptr += 8;
                                                        _isoc99_sscanf(nptr, "%d", (char *)*a1 + 20);
                                                      }
                                                      else
                                                      {
                                                        nptr = strstr(s, "least_nonce_per_core=");
                                                        if ( nptr )
                                                        {
                                                          nptr += 21;
                                                          _isoc99_sscanf(nptr, "%d", (char *)*a1 + 64);
                                                        }
                                                        else
                                                        {
                                                          nptr = strstr(s, "invalid_core_num=");
                                                          if ( nptr )
                                                          {
                                                            nptr += 17;
                                                            _isoc99_sscanf(nptr, "%d", (char *)*a1 + 60);
                                                          }
                                                          else
                                                          {
                                                            nptr = strstr(s, "Frequence=");
                                                            if ( nptr )
                                                            {
                                                              nptr += 10;
                                                              memset(v15, 0, sizeof(v15));
                                                              _isoc99_sscanf(nptr, "%s", v15);
                                                              v4 = *a1;
                                                              v4[7] = parse_config_ini_array(v15, (void **)*a1 + 6);
                                                            }
                                                            else
                                                            {
                                                              nptr = strstr(s, "MinValidPatternPecent=");
                                                              if ( nptr )
                                                              {
                                                                nptr += 22;
                                                                memset(v15, 0, sizeof(v15));
                                                                _isoc99_sscanf(nptr, "%s", v15);
                                                                v5 = *a1;
                                                                v5[10] = parse_config_ini_array(v15, (void **)*a1 + 9);
                                                              }
                                                              else
                                                              {
                                                                nptr = strstr(s, "SecondPassPercent=");
                                                                if ( nptr )
                                                                {
                                                                  nptr += 18;
                                                                  v6 = (float *)*a1;
                                                                  atof(nptr);
                                                                  v7 = v1;
                                                                  v6[17] = v7;
                                                                }
                                                                else
                                                                {
                                                                  nptr = strstr(s, "LooseStandardPercent=");
                                                                  if ( nptr )
                                                                  {
                                                                    nptr += 21;
                                                                    v8 = (float *)*a1;
                                                                    atof(nptr);
                                                                    v9 = v1;
                                                                    v8[18] = v9;
                                                                  }
                                                                  else
                                                                  {
                                                                    nptr = strstr(s, "FailStandardPercent=");
                                                                    if ( nptr )
                                                                    {
                                                                      nptr += 20;
                                                                      v10 = (float *)*a1;
                                                                      atof(nptr);
                                                                      v11 = v1;
                                                                      v10[19] = v11;
                                                                    }
                                                                    else
                                                                    {
                                                                      nptr = strstr(s, "MaxHWPecent=");
                                                                      if ( nptr )
                                                                      {
                                                                        nptr += 12;
                                                                        v12 = (double *)*a1;
                                                                        atof(nptr);
                                                                        v12[6] = v1;
                                                                      }
                                                                      else
                                                                      {
                                                                        nptr = strstr(s, "FanSpeed=");
                                                                        if ( nptr )
                                                                        {
                                                                          nptr += 9;
                                                                          a1[25] = (void *)atoi(nptr);
                                                                        }
                                                                        else
                                                                        {
                                                                          nptr = strstr(s, "DelayPowerDown=");
                                                                          if ( nptr )
                                                                          {
                                                                            nptr += 15;
                                                                            a1[26] = (void *)atoi(nptr);
                                                                          }
                                                                          else
                                                                          {
                                                                            nptr = strstr(s, "Clear_EEPROM_Data=");
                                                                            if ( nptr )
                                                                            {
                                                                              nptr += 18;
                                                                              a1[27] = (void *)atoi(nptr);
                                                                            }
                                                                            else
                                                                            {
                                                                              nptr = strstr(s, "isUseEEPROM=");
                                                                              if ( nptr )
                                                                              {
                                                                                nptr += 12;
                                                                                a1[28] = (void *)atoi(nptr);
                                                                              }
                                                                              else
                                                                              {
                                                                                nptr = strstr(s, "IsTest=");
                                                                                if ( nptr )
                                                                                {
                                                                                  nptr += 7;
                                                                                  v16 = 0;
                                                                                  _isoc99_sscanf(nptr, "%d", &v16);
                                                                                  *((_BYTE *)*a1 + 56) = v16 == 1;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      fclose(stream);
      printf("%s done=========\n ", "read_config_ini");
      if ( *((void **)*a1 + 10) == a1[13] && a1[13] == *((void **)*a1 + 7) )
      {
        return 1;
      }
      else
      {
        printf(
          "%s the level number is not equal: [%d %d %d]\n ",
          "read_config_ini",
          a1[13],
          *((_DWORD *)*a1 + 7),
          *((_DWORD *)*a1 + 10));
        return 0;
      }
    }
    else
    {
      printf("app_conf->coins malloc failed!\n");
      return 0;
    }
  }
  else
  {
    printf("open %s failed\n", filename);
    return 0;
  }
}
