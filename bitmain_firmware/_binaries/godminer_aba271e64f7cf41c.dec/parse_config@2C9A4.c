void __fastcall parse_config(const json_t *a1, int a2)
{
  double v2; // d0
  const char *v3; // r0
  int v4; // r0
  size_t v5; // r0
  int v6; // [sp+10h] [bp-1044h]
  char v8[56]; // [sp+1Ch] [bp-1038h] BYREF
  char v9[16]; // [sp+101Ch] [bp-38h] BYREF
  char s[16]; // [sp+102Ch] [bp-28h] BYREF
  const json_t *v11; // [sp+103Ch] [bp-18h]
  void *ptr; // [sp+1040h] [bp-14h]
  const json_t *v13; // [sp+1044h] [bp-10h]
  size_t j; // [sp+1048h] [bp-Ch]
  int i; // [sp+104Ch] [bp-8h]

  v6 = a2;
  for ( i = 0; i <= 18 && (&off_D7024)[4 * i]; ++i )
  {
    v13 = json_object_get(a1, (&off_D7024)[4 * i]);
    if ( v13 )
    {
      if ( (&off_D7024)[4 * i + 1] && *(_DWORD *)v13 == 2 )
      {
        v3 = json_string_value(v13);
        ptr = strdup(v3);
        if ( !ptr )
          return;
        parse_arg((&off_D7024)[4 * i + 3], (char *)ptr);
        free(ptr);
      }
      else if ( (&off_D7024)[4 * i + 1] && *(_DWORD *)v13 == 3 )
      {
        v4 = json_integer_value((int)v13);
        sprintf(s, "%d", v4);
        parse_arg((&off_D7024)[4 * i + 3], s);
      }
      else if ( (&off_D7024)[4 * i + 1] && *(_DWORD *)v13 == 4 )
      {
        json_real_value();
        sprintf(v9, "%f", v2);
        parse_arg((&off_D7024)[4 * i + 3], v9);
      }
      else if ( (&off_D7024)[4 * i + 1] && *(_DWORD *)v13 == 1 )
      {
        for ( j = 0; ; ++j )
        {
          v5 = json_array_size(v13);
          if ( j >= v5 )
            break;
          v11 = json_array_get(v13, j);
          if ( !v11 )
            break;
          if ( *(_DWORD *)v11 )
          {
            V_LOCK();
            logfmt_raw(v8, 0x1000u, 0, "JSON %s array value invalid", (&off_D7024)[4 * i]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/god-miner.c",
              149,
              "parse_config",
              12,
              556,
              100,
              v8);
          }
          else
          {
            parse_config(v11, 0);
          }
        }
      }
      else if ( (&off_D7024)[4 * i + 1] )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "JSON option %s invalid", (&off_D7024)[4 * i]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/god-miner.c",
          149,
          "parse_config",
          12,
          564,
          100,
          v8,
          v6);
      }
      else if ( *(_DWORD *)v13 == 5 )
      {
        parse_arg((&off_D7024)[4 * i + 3], byte_D746C);
      }
    }
  }
}
