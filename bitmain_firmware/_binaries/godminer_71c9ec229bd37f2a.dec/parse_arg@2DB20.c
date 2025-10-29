int __fastcall parse_arg(int result, char *s)
{
  int v3; // lr
  double *file; // r0
  double *v5; // r5
  int v6; // r2
  int v7; // r5
  int v8; // r12
  int v9; // r2
  int v10; // r0
  int v11; // r1
  const char *v12; // r7
  char **v13; // r8
  size_t v14; // r6
  int v15; // r5
  const char *v16; // t1
  int v17; // r5
  int v18; // r3
  char *v19; // r4
  int v20; // r5
  unsigned int v21; // r0
  bool v22; // cc
  int v23; // r6
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v28[160]; // [sp+70h] [bp-10A0h] BYREF
  char v29[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v20 = result;
    if ( !result )
      return result;
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "%s", v20);
    V_UNLOCK();
    v8 = 100;
    v9 = 625;
    v10 = g_zc;
    LOWORD(v11) = 4956;
    goto LABEL_49;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = json_load_file(s, 0, (char *)v27);
      v5 = file;
      if ( file && !*(_DWORD *)file )
      {
        parse_config(file);
        if ( *((_DWORD *)v5 + 1) != -1 )
        {
          v24 = (unsigned int *)v5 + 1;
          __dmb(0xBu);
          do
          {
            v25 = __ldrex(v24);
            v26 = v25 - 1;
          }
          while ( __strex(v26, v24) );
          if ( !v26 )
            json_delete(v5);
        }
      }
      else
      {
        if ( v27[0] < 0 )
        {
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "%s", v28);
          V_UNLOCK();
          v6 = 593;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "%s:%d: %s", s, v27[0], v28);
          V_UNLOCK();
          v6 = 595;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v6,
          100,
          v29);
      }
      if ( default_config )
      {
        free((void *)default_config);
        default_config = 0;
      }
      result = (int)_strdup(s);
      default_config = result;
      return result;
    }
    if ( result <= 99 )
    {
      switch ( result )
      {
        case 'P':
          opt_protocol = 1;
          break;
        case 'a':
          v12 = "grin29";
          v13 = off_130D08;
          v14 = 6;
          v15 = 0;
          while ( 1 )
          {
            if ( v14 )
            {
              result = strncasecmp(s, v12, v14);
              if ( !result && !s[v14] )
                break;
            }
            if ( ++v15 == 12 )
            {
              V_LOCK();
              logfmt_raw(v29, 0x1000u, 0, "Unknown algo parameter '%s'", s);
              V_UNLOCK();
              v8 = 100;
              v9 = 576;
              goto LABEL_48;
            }
            v16 = v13[1];
            ++v13;
            v12 = v16;
            v14 = strlen(v16);
          }
          opt_algo = v15;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "unknow config parameter!");
          V_UNLOCK();
          v3 = 698;
          goto LABEL_9;
      }
      return result;
    }
    if ( result == 111 )
    {
      result = set_url(s);
      v7 = result;
      if ( !result )
        return result;
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "%s", v7);
      V_UNLOCK();
      v8 = 100;
      v9 = 633;
      v10 = g_zc;
      LOWORD(v11) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/god-miner.c";
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK();
          logfmt_raw(
            v29,
            0x1000u,
            0,
            "Usage: GODMINER [OPTIONS]\n"
            "Options:\n"
            "  -a, --algo=ALGO       specify the algorithm to use\n"
            "                          beam         Equihash(150,5)\n"
            "                          grin29       Cuckaroo29\n"
            "                          vbk          VBlake2\n"
            "  -o, --url=URL         URL of mining server\n"
            "  -u, --user=USERNAME   username for mining server\n"
            "  -p, --pass=PASSWORD   password for mining server\n"
            "  -P, --protocol        verbose dump of protocol-level activities\n"
            "      --api-remote      Allow remote control\n"
            "  -c, --config=FILE     load a JSON-format configuration file\n"
            "  -v, --version         display version information and exit\n"
            "  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n"
            "      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n"
            "      --bitmain-freq=N  set working freq\n"
            "      --bitmain-voltage=N  set working power voltage\n"
            "  -z, --zlog=FILE       load a zlog configuration file\n"
            "  -h, --help            display this help text and exit\n");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "parse_arg",
            9,
            685,
            40,
            v29);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      v17 = result;
      if ( !result )
      {
        if ( *s )
        {
          v18 = (unsigned __int8)s[1];
          *s = 120;
          v19 = s + 1;
          if ( v18 )
          {
            do
              *v19++ = 0;
            while ( *v19 );
          }
        }
        return result;
      }
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "%s", v17);
      V_UNLOCK();
      v8 = 100;
      v9 = 612;
      v10 = g_zc;
      LOWORD(v11) = 4956;
    }
LABEL_49:
    HIWORD(v11) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    return zlog(v10, v11, 132, "parse_arg", 9, v9, v8, v29);
  }
  if ( result > 1033 )
  {
    if ( result == 1035 )
    {
      v21 = strtol(s, 0, 10);
      v22 = v21 > 3;
      if ( v21 != 3 )
        v22 = v21 > 1;
      v23 = v22;
      if ( !v22 )
      {
        opt_custom_power_mode = v21;
        V_LOCK();
        logfmt_raw(v29, 0x1000u, v23, "power mode: %d!", (unsigned __int8)opt_custom_power_mode);
        V_UNLOCK();
        v8 = 60;
        v9 = 680;
LABEL_48:
        v10 = g_zc;
        LOWORD(v11) = 4956;
        goto LABEL_49;
      }
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "power mode value error!");
      V_UNLOCK();
      v3 = 676;
    }
    else
    {
      if ( result >= 1035 )
      {
        if ( result != 1036 )
          goto LABEL_8;
        return result;
      }
      result = strtol(s, 0, 10);
      if ( (unsigned int)result <= 0x64 )
      {
        fan_pwm = result;
        return result;
      }
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "fan_pwm value error!");
      V_UNLOCK();
      v3 = 668;
    }
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_arg",
      9,
      v3,
      100,
      v29);
    exit(1);
  }
  if ( result < 1032 )
  {
    switch ( result )
    {
      case 122:
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = (int)_strdup(s);
        opt_zlog_conf_file = result;
        break;
      case 1030:
        opt_api_remote = 1;
        break;
      case 118:
        opt_version_path = (int)s;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
