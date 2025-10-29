char *__fastcall parse_arg(char *result, char *a2)
{
  size_t v2; // r2
  int v4[4]; // [sp+1Ch] [bp-1110h] BYREF
  _BYTE v5[160]; // [sp+78h] [bp-10B4h] BYREF
  char v6[20]; // [sp+118h] [bp-1014h] BYREF
  const json_t *file; // [sp+1118h] [bp-14h]
  int i; // [sp+111Ch] [bp-10h]
  size_t n; // [sp+1120h] [bp-Ch]
  char *v10; // [sp+1124h] [bp-8h]

  if ( result == (char *)118 )
  {
    opt_version_path = (int)a2;
    return result;
  }
  if ( (int)result > 118 )
  {
    if ( result == (char *)1033 )
      return result;
    if ( (int)result > 1033 )
    {
      if ( result == (char *)1035 )
      {
        n = atoi(a2);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "1035 v: %d!", n);
        V_UNLOCK();
        result = (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/re"
                           "lease/build/godminer-origin_godminer-branch1/god-miner.c",
                           149,
                           "parse_arg",
                           9,
                           483,
                           40,
                           v6);
        if ( n < 2 )
        {
          opt_custom_power_mode = n;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "power mode value error!");
          V_UNLOCK();
          return (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/re"
                           "lease/build/godminer-origin_godminer-branch1/god-miner.c",
                           149,
                           "parse_arg",
                           9,
                           485,
                           100,
                           v6);
        }
        return result;
      }
      if ( (int)result < 1035 )
      {
        result = (char *)atoi(a2);
        n = (size_t)result;
        if ( (int)result < 0 || (int)n > 100 )
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "fan_pwm value error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/god-miner.c",
            149,
            "parse_arg",
            9,
            474,
            100,
            v6);
          exit(1);
        }
        if ( (int)n < 30 )
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "fan-pwm shouldn't be set to %d, reset it to %d!", n, 30);
          V_UNLOCK();
          result = (char *)zlog(
                             g_zc,
                             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/"
                             "release/build/godminer-origin_godminer-branch1/god-miner.c",
                             149,
                             "parse_arg",
                             9,
                             478,
                             80,
                             v6);
        }
        v2 = 30;
        if ( (int)n > 30 )
          v2 = n;
        fan_pwm = v2;
        return result;
      }
      if ( result == (char *)1036 )
        return result;
      if ( result == (char *)2030 )
      {
        result = (char *)strcmp(a2, "app");
        if ( result )
        {
          result = (char *)strcmp(a2, "fir");
          if ( result )
          {
            V_LOCK();
            logfmt_raw(v6, 0x1000u, 0, "invalid input!\n");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/god-miner.c",
              149,
              "parse_arg",
              9,
              512,
              100,
              v6);
            exit(1);
          }
          chip_update_param = 0;
        }
        else
        {
          chip_update_param = 1;
        }
        opt_chip_update = 1;
        return result;
      }
    }
    else
    {
      if ( result == (char *)1030 )
      {
        opt_api_remote = 1;
        return result;
      }
      if ( result == (char *)1032 )
        return result;
      if ( result == (char *)122 )
      {
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = strdup(a2);
        opt_zlog_conf_file = (int)result;
        return result;
      }
    }
LABEL_77:
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "unknow config parameter!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "parse_arg",
      9,
      518,
      100,
      v6);
    exit(1);
  }
  if ( result == (char *)99 )
  {
    file = json_load_file(a2, 0, (json_error_t *)v4);
    if ( file && !*(_DWORD *)file )
    {
      parse_config(file, (int)a2);
      sub_2A4D0((int)file);
    }
    else if ( v4[0] >= 0 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "%s:%d: %s", a2, v4[0], v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "parse_arg",
        9,
        401,
        100,
        v6);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "%s", v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "parse_arg",
        9,
        399,
        100,
        v6);
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = strdup(a2);
    default_config = (int)result;
    return result;
  }
  if ( (int)result > 99 )
  {
    if ( result == (char *)111 )
    {
      result = (char *)set_url(a2);
      v10 = result;
      if ( result )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "%s", v10);
        V_UNLOCK();
        return (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rele"
                         "ase/build/godminer-origin_godminer-branch1/god-miner.c",
                         149,
                         "parse_arg",
                         9,
                         439,
                         100,
                         v6);
      }
      return result;
    }
    if ( (int)result > 111 )
    {
      if ( result == (char *)112 )
      {
        v10 = (char *)set_pass(a2);
        if ( !v10 )
          return sub_2A99C(a2);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "%s", v10);
        V_UNLOCK();
        return (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rele"
                         "ase/build/godminer-origin_godminer-branch1/god-miner.c",
                         149,
                         "parse_arg",
                         9,
                         418,
                         100,
                         v6);
      }
      if ( result == (char *)117 )
      {
        result = (char *)set_user(a2);
        v10 = result;
        if ( result )
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "%s", v10);
          V_UNLOCK();
          return (char *)zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/re"
                           "lease/build/godminer-origin_godminer-branch1/god-miner.c",
                           149,
                           "parse_arg",
                           9,
                           431,
                           100,
                           v6);
        }
        return result;
      }
    }
    else if ( result == (char *)104 )
    {
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "Usage: GODMINER [OPTIONS]\n"
        "Options:\n"
        "  -a, --algo=ALGO       specify the algorithm to use\n"
        "                          eth_1798         ethash\n"
        "                          ckb_2040         eaglesong\n"
        "                          ckb_2042         eaglesong\n"
        "                          kda_2110         blake2s\n"
        "                          dcr_1727         blaker14\n"
        "                          hns_2130         blake2s\n"
        "                          dash_1766        x11\n"
        "                          xmr_2042         xmr\n"
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
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "parse_arg",
        9,
        493,
        40,
        v6);
      exit(0);
    }
    goto LABEL_77;
  }
  if ( result == (char *)80 )
  {
    opt_protocol = 1;
  }
  else if ( result == (char *)97 )
  {
    for ( i = 0; i <= 13; ++i )
    {
      result = (char *)strlen(off_14D568[i]);
      n = (size_t)result;
      if ( result )
      {
        result = (char *)strncasecmp(a2, off_14D568[i], n);
        if ( !result && !a2[n] )
        {
          opt_algo = i;
          break;
        }
      }
    }
    if ( i == 14 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "Unknown algo parameter '%s'", a2);
      V_UNLOCK();
      return (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/releas"
                       "e/build/godminer-origin_godminer-branch1/god-miner.c",
                       149,
                       "parse_arg",
                       9,
                       382,
                       100,
                       v6);
    }
  }
  else
  {
    if ( result != (char *)70 )
      goto LABEL_77;
    fan_pwm_fixed = 1;
  }
  return result;
}
