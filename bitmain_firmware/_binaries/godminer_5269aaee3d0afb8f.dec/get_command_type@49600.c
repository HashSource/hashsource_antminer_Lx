int __fastcall get_command_type(_DWORD *a1)
{
  char *v1; // r1
  _DWORD *v2; // r0
  const char *v3; // r0
  const char *v4; // r4
  int result; // r0
  const char *v6; // r1
  const char *v7; // r1
  const char *v8; // r1
  const char *v9; // r1
  const char *v10; // r1
  const char *v11; // r1
  const char *v12; // r1
  const char *v13; // r1
  int v14; // r3
  _DWORD *v15; // r3
  int v16; // r1
  char v17[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -7076;
  HIWORD(v1) = (unsigned int)&loc_12D1BC >> 16;
  v2 = (_DWORD *)json_object_get(a1, v1);
  v3 = (const char *)json_string_value(v2);
  v4 = v3;
  if ( v3 )
  {
    result = strcmp(v3, "CAPABILITIES");
    if ( result )
    {
      LOWORD(v6) = 17876;
      HIWORD(v6) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_eth/frontend_eth.c" >> 16;
      if ( !strcmp(v4, v6) )
      {
        return 1;
      }
      else
      {
        LOWORD(v7) = 17896;
        HIWORD(v7) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/frontend/frontend_eth/frontend_eth.c" >> 16;
        if ( !strcmp(v4, v7) )
        {
          return 2;
        }
        else
        {
          LOWORD(v8) = 17916;
          HIWORD(v8) = (unsigned int)"build/godminer-origin_master/frontend/frontend_eth/frontend_eth.c" >> 16;
          if ( !strcmp(v4, v8) )
          {
            return 3;
          }
          else
          {
            LOWORD(v9) = 17944;
            HIWORD(v9) = (unsigned int)"/frontend/frontend_eth/frontend_eth.c" >> 16;
            if ( !strcmp(v4, v9) )
            {
              return 4;
            }
            else
            {
              LOWORD(v10) = 17972;
              HIWORD(v10) = (unsigned int)"end_eth.c" >> 16;
              if ( !strcmp(v4, v10) )
              {
                return 5;
              }
              else
              {
                LOWORD(v11) = 17996;
                HIWORD(v11) = (unsigned int)"" >> 16;
                if ( !strcmp(v4, v11) )
                {
                  return 6;
                }
                else
                {
                  LOWORD(v12) = 18020;
                  HIWORD(v12) = (unsigned int)"%02X%02X%02X" >> 16;
                  if ( !strcmp(v4, v12) )
                  {
                    return 7;
                  }
                  else
                  {
                    LOWORD(v13) = 18032;
                    HIWORD(v13) = (unsigned int)"" >> 16;
                    if ( !strcmp(v4, v13) )
                      return 8;
                    else
                      return 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v14) = 17824;
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_eth/frontend_eth.c" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v16) = 17664;
    HIWORD(v16) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
    zlog(*v15, v16, 157, "get_command_type", 16, 48, 100, v17);
    return 10;
  }
  return result;
}
