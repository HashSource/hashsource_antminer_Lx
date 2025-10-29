int __fastcall prepare_MES_system_handshake_information(int a1)
{
  json_t *v1; // r0
  json_t *v2; // r0
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r5
  unsigned __int8 chip_bin; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  char v16[12]; // [sp+Ch] [bp+Ch] BYREF
  _BYTE v17[252]; // [sp+18h] [bp+18h] BYREF
  const json_t *v18; // [sp+114h] [bp+114h]
  char *s; // [sp+118h] [bp+118h]
  json_t *v20; // [sp+11Ch] [bp+11Ch]
  json_t *v21; // [sp+120h] [bp+120h]
  const json_t *v22; // [sp+124h] [bp+124h]
  unsigned __int8 v23; // [sp+12Bh] [bp+12Bh]
  const json_t *file; // [sp+12Ch] [bp+12Ch]

  file = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v18 = 0;
  memset(v16, 0, 10);
  s = 0;
  v23 = 0;
  memset((void *)" ", 0, 0xC8u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      file = (const json_t *)json_load_file(
                               "/mnt/card/MES_system_get_particular_config_template.ini",
                               0,
                               (json_error_t *)v17);
      if ( file && !*(_DWORD *)file )
      {
        s = json_dumps(file, 0);
        printf("content: %s\n", s);
        v22 = json_object_get(file, "params");
        if ( v22 && !*(_DWORD *)v22 )
        {
          v20 = json_object_get(v22, "config_ids");
          if ( v20 && *(_DWORD *)v20 == 1 )
          {
            v18 = (const json_t *)json_array_get(v20, 0);
            if ( v18 && !*(_DWORD *)v18 )
            {
              v3 = json_object_get(v18, "miner_type");
              json_string_set((int)v3, (const char *)(MES2Local_Config_Information + 16));
              v4 = json_object_get(v18, "board_name");
              json_string_set((int)v4, (const char *)(MES2Local_Config_Information + 32));
              v5 = json_object_get(v18, "sn");
              json_string_set((int)v5, ::s);
              memset(v16, 48, 0xAu);
              substr(byte_47BF64, 5, 2u, (int)v16);
              v6 = json_object_get(v18, "chip_technology");
              json_string_set((int)v6, v16);
              v7 = json_object_get(v18, "ft_version");
              json_string_set((int)v7, src);
              v8 = json_object_get(v18, "bin");
              chip_bin = get_chip_bin((int)qr_code);
              json_integer_set((int)v8, chip_bin);
              memset(v16, 48, 0xAu);
              substr(byte_47BF64, 0, 3u, (int)v16);
              v10 = json_object_get(v18, "hardware_version");
              json_string_set((int)v10, v16);
              memset(v16, 48, 0xAu);
              substr(byte_47BF64, 3, 2u, (int)v16);
              v11 = json_object_get(v18, "bom_version");
              json_string_set((int)v11, v16);
              s = json_dumps(file, 0);
              mes_system_handshake_file_length = strlen(s);
              memcpy((void *)" ", s, mes_system_handshake_file_length);
              printf("size: %d, content: %s\n", mes_system_handshake_file_length, " ");
              v23 = 1;
            }
            else
            {
              printf(
                "Can't read out array_table in config_ids in %s\n",
                "/mnt/card/MES_system_get_particular_config_template.ini");
              v23 = 0;
            }
          }
          else
          {
            printf("Can't read out config_ids in %s\n", "/mnt/card/MES_system_get_particular_config_template.ini");
            v23 = 0;
          }
        }
        else
        {
          printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_particular_config_template.ini");
          v23 = 0;
        }
      }
      else
      {
        printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_particular_config_template.ini");
        v23 = 0;
      }
    }
    else if ( a1 == 2 )
    {
      file = (const json_t *)json_load_file("/mnt/card/MES_system_get_version_template.ini", 0, (json_error_t *)v17);
      if ( file && !*(_DWORD *)file )
      {
        s = json_dumps(file, 0);
        printf("content: %s\n", s);
        v22 = json_object_get(file, "params");
        if ( v22 && !*(_DWORD *)v22 )
        {
          v20 = json_object_get(v22, "config_ids");
          if ( v20 && *(_DWORD *)v20 == 1 )
          {
            v18 = (const json_t *)json_array_get(v20, 0);
            if ( v18 && !*(_DWORD *)v18 )
            {
              v12 = json_object_get(v18, "miner_type");
              json_string_set((int)v12, (const char *)(MES2Local_Config_Information + 16));
              v13 = json_object_get(v18, "board_name");
              json_string_set((int)v13, (const char *)(MES2Local_Config_Information + 32));
              s = json_dumps(file, 0);
              mes_system_handshake_file_length = strlen(s);
              memcpy((void *)" ", s, mes_system_handshake_file_length);
              printf("size: %d, content: %s\n", mes_system_handshake_file_length, " ");
              v23 = 1;
            }
            else
            {
              printf("Can't read out array_table in configIds in %s\n", "/mnt/card/MES_system_get_version_template.ini");
              v23 = 0;
            }
          }
          else
          {
            printf("Can't read out configIds in %s\n", "/mnt/card/MES_system_get_version_template.ini");
            v23 = 0;
          }
        }
        else
        {
          printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_version_template.ini");
          v23 = 0;
        }
      }
      else
      {
        printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_version_template.ini");
        v23 = 0;
      }
    }
    else
    {
      printf("Do not support get information type %d from MES system\n", a1);
      v23 = 0;
    }
  }
  else
  {
    file = (const json_t *)json_load_file("/mnt/card/MES_system_get_all_config_template.ini", 0, (json_error_t *)v17);
    if ( file && !*(_DWORD *)file )
    {
      s = json_dumps(file, 0);
      v22 = json_object_get(file, "params");
      if ( v22 && !*(_DWORD *)v22 )
      {
        v21 = json_object_get(v22, "software_commit_id");
        if ( v21 && *(_DWORD *)v21 == 2 )
        {
          json_string_set((int)v21, "d39c5dcea203932a2bf416a5fc01c34eaa1f13d7");
          v20 = json_object_get(v22, "config_ids");
          if ( v20 && *(_DWORD *)v20 == 1 )
          {
            v18 = (const json_t *)json_array_get(v20, 0);
            if ( v18 && !*(_DWORD *)v18 )
            {
              v1 = json_object_get(v18, "miner_type");
              json_string_set((int)v1, (const char *)(MES2Local_Config_Information + 16));
              v2 = json_object_get(v18, "board_name");
              json_string_set((int)v2, (const char *)(MES2Local_Config_Information + 32));
              s = json_dumps(file, 0);
              mes_system_handshake_file_length = strlen(s);
              memcpy((void *)" ", s, mes_system_handshake_file_length);
              v23 = 1;
            }
            else
            {
              printf(
                "Can't read out array_table in config_ids in %s\n",
                "/mnt/card/MES_system_get_all_config_template.ini");
              v23 = 0;
            }
          }
          else
          {
            printf("Can't read out config_ids in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
            v23 = 0;
          }
        }
        else
        {
          printf("Can't read out software_commit_id in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
          v23 = 0;
        }
      }
      else
      {
        printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
        v23 = 0;
      }
    }
    else
    {
      printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_all_config_template.ini");
      v23 = 0;
    }
  }
  if ( file )
    sub_2E8A8((int)file);
  if ( v23 != 1 )
    puts("prepare MES system handshake information fail");
  return v23;
}
