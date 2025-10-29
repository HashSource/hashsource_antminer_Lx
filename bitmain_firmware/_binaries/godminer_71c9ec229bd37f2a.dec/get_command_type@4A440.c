int __fastcall get_command_type(_DWORD *a1)
{
  _DWORD *v1; // r0
  const char *v2; // r0
  const char *v3; // r4
  int result; // r0
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "command");
  v2 = (const char *)json_string_value(v1);
  v3 = v2;
  if ( v2 )
  {
    result = strcmp(v2, "CAPABILITIES");
    if ( result )
    {
      if ( !strcmp(v3, "MINING_AUTH_FAILURE") )
      {
        return 1;
      }
      else if ( !strcmp(v3, "MINING_AUTH_SUCCESS") )
      {
        return 2;
      }
      else if ( !strcmp(v3, "MINING_SUBSCRIBE_FAILURE") )
      {
        return 3;
      }
      else if ( !strcmp(v3, "MINING_SUBSCRIBE_SUCCESS") )
      {
        return 4;
      }
      else if ( !strcmp(v3, "MINING_SUBMIT_FAILURE") )
      {
        return 5;
      }
      else if ( !strcmp(v3, "MINING_SUBMIT_SUCCESS") )
      {
        return 6;
      }
      else if ( !strcmp(v3, "MINING_JOB") )
      {
        return 7;
      }
      else if ( !strcmp(v3, "MINING_MEMPOOL_UPDATE") )
      {
        return 8;
      }
      else
      {
        return 9;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "JSON does not have 'command' object");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "get_command_type",
      16,
      48,
      100,
      v5);
    return 10;
  }
  return result;
}
