int log_init()
{
  _DWORD *v0; // r12
  int v1; // r5
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  const char *v8; // r0
  const char *v9; // r0
  int v10; // r0
  const char *v11; // r0
  int v12; // r0
  const char *v13; // r0
  int v14; // r0
  const char *v15; // r0
  int v16; // r0

  v0 = (_DWORD *)opt_zlog_conf_file;
  if ( !opt_zlog_conf_file )
  {
    v0 = malloc(0xFu);
    if ( v0 )
    {
      LOWORD(v3) = 9020;
      HIWORD(v3) = (unsigned int)"s not supported\n" >> 16;
      v4 = *v3;
      v5 = v3[1];
      v6 = v3[2];
      v7 = v3[3];
      *v0 = v4;
      v0[1] = v5;
      v0[2] = v6;
      *((_WORD *)v0 + 6) = v7;
      *((_BYTE *)v0 + 14) = BYTE2(v7);
    }
    opt_zlog_conf_file = (int)v0;
  }
  v1 = zlog_init(v0);
  if ( v1 )
  {
    LOWORD(v8) = 9036;
    v1 = -1;
    HIWORD(v8) = (unsigned int)"" >> 16;
    puts(v8);
  }
  else
  {
    g_zc = zlog_get_category("miner_zc");
    if ( g_zc )
    {
      g_temp_zc = zlog_get_category("miner_temp_zc");
      if ( g_temp_zc )
      {
        g_fan_zc = zlog_get_category("miner_fan_zc");
        if ( g_fan_zc )
        {
          g_hash_zc = zlog_get_category("miner_hash_zc");
          if ( g_hash_zc )
          {
            puts("zlog init OK!");
          }
          else
          {
            LOWORD(v15) = 9224;
            v1 = -4;
            HIWORD(v15) = (unsigned int)"miner_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_lcd.c" >> 16;
            v16 = puts(v15);
            zlog_fini(v16);
          }
        }
        else
        {
          LOWORD(v13) = 9172;
          v1 = -3;
          HIWORD(v13) = (unsigned int)"lcd_uninit" >> 16;
          v14 = puts(v13);
          zlog_fini(v14);
        }
      }
      else
      {
        LOWORD(v9) = 9116;
        v1 = -3;
        HIWORD(v9) = (unsigned int)"r address to %d\n" >> 16;
        v10 = puts(v9);
        zlog_fini(v10);
      }
    }
    else
    {
      LOWORD(v11) = 9068;
      v1 = -2;
      HIWORD(v11) = (unsigned int)"update the slave address to %d\n" >> 16;
      v12 = puts(v11);
      zlog_fini(v12);
    }
  }
  return v1;
}
