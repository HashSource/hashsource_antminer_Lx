char *set_working_voltage_and_runtime_freq()
{
  char v0; // r9
  int working_voltage; // r8
  int current_voltage; // r6
  char *result; // r0
  char *v4; // r10
  int v5; // r2
  char *v6; // r4
  char *v7; // r5
  int v8; // r3
  int v9; // r8
  char *v10; // r7
  int v11; // t1
  char *v12; // r4
  float *v13; // r5
  float v14; // s16
  int v15; // r1
  int v16; // r1
  float v17; // s15
  int v18; // r3
  int v19; // r2
  int v20; // r5
  char *v21; // r7
  char *v22; // r11
  int v23; // t1
  int i; // r4
  int v25; // t1
  char *all_created_runtime; // [sp+14h] [bp-1220h]
  int v27; // [sp+18h] [bp-121Ch]
  unsigned __int16 v28; // [sp+26h] [bp-120Eh] BYREF
  int v29; // [sp+28h] [bp-120Ch] BYREF
  char v30[4]; // [sp+2Ch] [bp-1208h] BYREF
  float dest; // [sp+30h] [bp-1204h] BYREF
  char v32; // [sp+34h] [bp-1200h] BYREF
  char v33[4100]; // [sp+230h] [bp-1004h] BYREF

  v0 = 0;
  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v29 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v29);
  result = (char *)is_power_init();
  v4 = result;
  if ( !result )
  {
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "%s, power has not init!", "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "set_working_voltage_and_runtime_freq",
      36,
      1170,
      100,
      v33);
    return (char *)-1;
  }
  if ( opt_algo == 6 )
  {
    if ( working_voltage < current_voltage )
      v5 = -7;
    else
      v5 = 7;
    v27 = v5;
    v6 = 0;
    while ( 1 )
    {
      if ( !v6 )
      {
        if ( v29 > 0 )
        {
          v20 = 0;
          v21 = all_created_runtime - 4;
          v22 = all_created_runtime - 4;
          do
          {
            v23 = *((_DWORD *)v22 + 1);
            v22 += 4;
            ++v6;
            v20 |= (*(int (**)(void))(v23 + 132))();
          }
          while ( v29 > (int)v6 );
          v6 = (char *)(v20 == 0);
          if ( v20 )
          {
            usleep((__useconds_t)&loc_30D40);
            if ( v29 > 0 )
            {
              for ( i = 0; i < v29; ++i )
              {
                v25 = *((_DWORD *)v21 + 1);
                v21 += 4;
                v20 |= (*(int (**)(void))(v25 + 132))();
              }
              v6 = (char *)(v20 == 0);
            }
          }
        }
        else
        {
          v6 = v4;
        }
      }
      v8 = current_voltage - working_voltage;
      if ( current_voltage - working_voltage < 0 )
        v8 = working_voltage - current_voltage;
      if ( v8 > 7 )
        break;
      if ( working_voltage == current_voltage )
      {
        current_voltage = working_voltage;
        result = sub_2BCE0();
        v0 = (char)v4;
        if ( v6 )
        {
LABEL_16:
          if ( v29 > 0 )
          {
            v9 = 0;
            v10 = all_created_runtime - 4;
            do
            {
              v11 = *((_DWORD *)v10 + 1);
              v10 += 4;
              result = (char *)api_get_eeprom_fmt_version(*(_DWORD *)(v11 + 144));
              if ( result == (char *)4 )
              {
                result = (char *)api_get_eeprom_sweep_freqs(*(_DWORD *)(*(_DWORD *)v10 + 144), &dest, (int)v30, &v28);
                v12 = result;
                if ( !result )
                {
                  v13 = (float *)&v32;
                  (*(void (**)(void))(*(_DWORD *)v10 + 136))();
                  v14 = dest + 0.0;
                  printf("%-6.1f ", v15, dest);
                  while ( ++v12 != (char *)120 )
                  {
                    while ( 1 )
                    {
                      v17 = *v13++;
                      v14 = v14 + v17;
                      printf("%-6.1f ", v16, v17);
                      if ( ((unsigned __int8)v12 & 0xF) != 0xF )
                        break;
                      ++v12;
                      putchar(10);
                      if ( v12 == (char *)120 )
                        goto LABEL_25;
                    }
                  }
LABEL_25:
                  putchar(10);
                  printf(
                    "[%s] chain-%d, sweep_start_freq = %dMHz, sweep_average_freq = %.2fMHz\n",
                    "set_working_voltage_and_runtime_freq",
                    *(_DWORD *)(*(_DWORD *)v10 + 144),
                    v28,
                    (float)(v14 / 120.0));
                  V_LOCK();
                  logfmt_raw(
                    v33,
                    0x1000u,
                    0,
                    "chain-%d, sweep_start_freq = %dMHz, sweep_average_freq = %.2fMHz",
                    *(_DWORD *)(*(_DWORD *)v10 + 144),
                    v28,
                    (float)(v14 / 120.0));
                  V_UNLOCK();
                  result = (char *)zlog(
                                     g_zc,
                                     "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp"
                                     "/release/build/godminer-origin_master/god-miner.c",
                                     132,
                                     "set_working_voltage_and_runtime_freq",
                                     36,
                                     1231,
                                     40,
                                     v33);
                  v18 = (int)(float)(v14 / 120.0);
                  if ( v18 <= 1849 )
                  {
                    if ( v18 <= 1824 )
                    {
                      if ( v18 <= 1774 )
                      {
                        if ( v18 <= 1724 )
                        {
                          if ( v18 <= 1674 )
                          {
                            if ( v18 >= 1625 )
                              v18 = 1625;
                          }
                          else
                          {
                            v18 = 1675;
                          }
                        }
                        else
                        {
                          v18 = 1725;
                        }
                      }
                      else
                      {
                        v18 = 1775;
                      }
                    }
                    else
                    {
                      v18 = 1825;
                    }
                  }
                  else
                  {
                    v18 = 1850;
                  }
                  v19 = v28;
                  *(_DWORD *)(*(_DWORD *)v10 + 280) = v18;
                  if ( v18 - v19 > 49 )
                  {
                    ++need_change_hashboard;
                    V_LOCK();
                    logfmt_raw(v33, 0x1000u, 0, "need_change_hashboard: %u", (unsigned __int8)need_change_hashboard);
                    V_UNLOCK();
                    result = (char *)zlog(
                                       g_zc,
                                       "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/t"
                                       "mp/release/build/godminer-origin_master/god-miner.c",
                                       132,
                                       "set_working_voltage_and_runtime_freq",
                                       36,
                                       1249,
                                       20,
                                       v33);
                  }
                }
              }
              ++v9;
            }
            while ( v29 > v9 );
          }
          return result;
        }
      }
      else
      {
        v7 = v6;
        current_voltage = working_voltage;
        v0 = (char)v4;
        set_voltage(working_voltage, 1);
LABEL_9:
        result = sub_2BCE0();
        if ( v7 )
          goto LABEL_16;
      }
    }
    current_voltage += v27;
    set_voltage(current_voltage, 1);
    if ( working_voltage == current_voltage )
    {
      v7 = v6;
      v0 = (char)v4;
    }
    else
    {
      v7 = (char *)(unsigned __int8)((unsigned __int8)v6 & v0);
    }
    goto LABEL_9;
  }
  return result;
}
