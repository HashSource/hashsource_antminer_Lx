int __fastcall prepare_MES_system_submit_information(int a1)
{
  int v1; // r0
  json_t_0 *v2; // r0
  json_t_0 *v3; // r0
  const char *v4; // r3
  int v5; // r0
  int v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  int v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  int v14; // r0
  int v15; // r0
  size_t v16; // r2
  int v17; // r0
  int v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  char v24[12]; // [sp+8h] [bp+8h] BYREF
  _BYTE v25[252]; // [sp+14h] [bp+14h] BYREF
  int v26[256]; // [sp+110h] [bp+110h] BYREF
  int v27[8]; // [sp+510h] [bp+510h] BYREF
  _DWORD v28[8]; // [sp+530h] [bp+530h] BYREF
  _DWORD v29[16]; // [sp+550h] [bp+550h] BYREF
  _DWORD v30[8]; // [sp+590h] [bp+590h] BYREF
  _DWORD s[8]; // [sp+5B0h] [bp+5B0h] BYREF
  unsigned int v32; // [sp+5D0h] [bp+5D0h]
  int chip_bin; // [sp+5D4h] [bp+5D4h]
  char *v34; // [sp+5D8h] [bp+5D8h]
  int v35; // [sp+5DCh] [bp+5DCh]
  int v36; // [sp+5E0h] [bp+5E0h]
  int v37; // [sp+5E4h] [bp+5E4h]
  int v38; // [sp+5E8h] [bp+5E8h]
  size_t v39; // [sp+5ECh] [bp+5ECh]
  size_t v40; // [sp+5F0h] [bp+5F0h]
  size_t v41; // [sp+5F4h] [bp+5F4h]
  size_t v42; // [sp+5F8h] [bp+5F8h]
  int v43; // [sp+5FCh] [bp+5FCh]
  size_t v44; // [sp+600h] [bp+600h]
  size_t v45; // [sp+604h] [bp+604h]
  json_t *v46; // [sp+608h] [bp+608h]
  json_t *v47; // [sp+60Ch] [bp+60Ch]
  const json_t *v48; // [sp+610h] [bp+610h]
  json_t *v49; // [sp+614h] [bp+614h]
  json_t *v50; // [sp+618h] [bp+618h]
  json_t *v51; // [sp+61Ch] [bp+61Ch]
  json_t *v52; // [sp+620h] [bp+620h]
  json_t *v53; // [sp+624h] [bp+624h]
  json_t *v54; // [sp+628h] [bp+628h]
  json_t *v55; // [sp+62Ch] [bp+62Ch]
  json_t *v56; // [sp+630h] [bp+630h]
  json_t *v57; // [sp+634h] [bp+634h]
  json_t *v58; // [sp+638h] [bp+638h]
  json_t *v59; // [sp+63Ch] [bp+63Ch]
  const json_t *v60; // [sp+640h] [bp+640h]
  json_t *v61; // [sp+644h] [bp+644h]
  const json_t *v62; // [sp+648h] [bp+648h]
  json_t *v63; // [sp+64Ch] [bp+64Ch]
  json_t *v64; // [sp+650h] [bp+650h]
  json_t_0 *v65; // [sp+654h] [bp+654h]
  json_t *v66; // [sp+658h] [bp+658h]
  json_t *v67; // [sp+65Ch] [bp+65Ch]
  json_t *v68; // [sp+660h] [bp+660h]
  json_t *v69; // [sp+664h] [bp+664h]
  json_t *v70; // [sp+668h] [bp+668h]
  json_t *v71; // [sp+66Ch] [bp+66Ch]
  json_t *v72; // [sp+670h] [bp+670h]
  json_t *v73; // [sp+674h] [bp+674h]
  json_t *v74; // [sp+678h] [bp+678h]
  json_t *v75; // [sp+67Ch] [bp+67Ch]
  json_t *v76; // [sp+680h] [bp+680h]
  json_t *v77; // [sp+684h] [bp+684h]
  json_t *v78; // [sp+688h] [bp+688h]
  const json_t *v79; // [sp+68Ch] [bp+68Ch]
  const json_t *file; // [sp+690h] [bp+690h]
  char v81; // [sp+696h] [bp+696h]
  unsigned __int8 v82; // [sp+697h] [bp+697h]
  int v83; // [sp+698h] [bp+698h]
  size_t ii; // [sp+69Ch] [bp+69Ch]
  size_t jj; // [sp+6A0h] [bp+6A0h]
  size_t n; // [sp+6A4h] [bp+6A4h]
  size_t m; // [sp+6A8h] [bp+6A8h]
  size_t j; // [sp+6ACh] [bp+6ACh]
  size_t i; // [sp+6B0h] [bp+6B0h]
  size_t k; // [sp+6B4h] [bp+6B4h]

  file = 0;
  v79 = 0;
  v78 = 0;
  v77 = 0;
  v76 = 0;
  v75 = 0;
  v74 = 0;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v68 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  memset(s, 0, sizeof(s));
  memset(v30, 0, sizeof(v30));
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  memset(v26, 0, sizeof(v26));
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  k = 0;
  i = 0;
  j = 0;
  m = 0;
  n = 0;
  jj = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  ii = 0;
  chip_bin = 0;
  memset(v24, 0, 10);
  v32 = 0;
  v83 = 31;
  v82 = 1;
  v81 = 1;
  memset((void *)" ", 0, 0x800u);
  file = (const json_t *)json_load_file("/mnt/card/MES_system_submit_result_template.ini", 0, (json_error_t *)v25);
  if ( file && !*(_DWORD *)file )
  {
    v34 = json_dumps(file, 0);
    v79 = json_object_get(file, "params");
    if ( v79 && !*(_DWORD *)v79 )
    {
      v78 = json_object_get(v79, "software_commit_id");
      if ( v78 && *(_DWORD *)v78 == 2 )
      {
        json_string_set((int)v78, "d39c5dcea203932a2bf416a5fc01c34eaa1f13d7");
        v77 = json_object_get(v79, "datas");
        if ( v77 && *(_DWORD *)v77 == 1 )
        {
          v45 = json_array_size(v77);
          for ( i = 0; i < v45; ++i )
          {
            v1 = json_array_get(v77, i);
            s[i] = v1;
            if ( !s[i] || *(_DWORD *)s[i] )
            {
              printf("Can't read out datas_array[%d] in datas\n", i);
              v82 = 0;
              goto LABEL_223;
            }
            v76 = json_object_get((const json_t *)s[i], "miner_type");
            if ( !v76 || *(_DWORD *)v76 != 2 )
            {
              printf("Can't read out miner_type in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v76, (const char *)(MES2Local_Config_Information + 16));
            v75 = json_object_get((const json_t *)s[i], "board_name");
            if ( !v75 || *(_DWORD *)v75 != 2 )
            {
              printf("Can't read out board_name in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v75, (const char *)(MES2Local_Config_Information + 32));
            v74 = json_object_get((const json_t *)s[i], "sn");
            if ( !v74 || *(_DWORD *)v74 != 2 )
            {
              printf("Can't read out sn in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v74, ::s);
            v73 = json_object_get((const json_t *)s[i], "order_id");
            if ( !v73 || *(_DWORD *)v73 != 2 )
            {
              printf("Can't read out order_id in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v73, qr_code);
            v72 = json_object_get((const json_t *)s[i], "hardware_version");
            if ( !v72 || *(_DWORD *)v72 != 2 )
            {
              printf("Can't read out hardware_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            memset(v24, 48, 0xAu);
            substr(byte_47BF64, 0, 3u, (int)v24);
            json_string_set((int)v72, v24);
            v71 = json_object_get((const json_t *)s[i], "bom_version");
            if ( !v71 || *(_DWORD *)v71 != 2 )
            {
              printf("Can't read out bom_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            memset(v24, 48, 0xAu);
            substr(byte_47BF64, 3, 2u, (int)v24);
            json_string_set((int)v71, v24);
            v70 = json_object_get((const json_t *)s[i], "chip_technology");
            if ( !v70 || *(_DWORD *)v70 != 2 )
            {
              printf("Can't read out chip_technology in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            memset(v24, 48, 0xAu);
            substr(byte_47BF64, 5, 2u, (int)v24);
            json_string_set((int)v70, v24);
            v69 = json_object_get((const json_t *)s[i], "ft_version");
            if ( !v69 || *(_DWORD *)v69 != 2 )
            {
              printf("Can't read out ft_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v69, src);
            v68 = json_object_get((const json_t *)s[i], "bin");
            if ( !v68 || *(_DWORD *)v68 != 3 )
            {
              printf("Can't read out bin in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            chip_bin = get_chip_bin((int)qr_code);
            if ( chip_bin == 255 )
            {
              printf("chip bin is BIN%d, error\n", 255);
              v82 = 0;
              goto LABEL_223;
            }
            json_integer_set((int)v68, (unsigned int)chip_bin);
            v67 = json_object_get((const json_t *)s[i], "rule_version");
            if ( !v67 || *(_DWORD *)v67 != 2 )
            {
              printf("Can't read out rule_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v67, (const char *)(MES2Local_Config_Information + 442));
            v66 = json_object_get((const json_t *)s[i], "rule_level");
            if ( !v66 || *(_DWORD *)v66 != 3 )
            {
              printf("Can't read out rule_level in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            if ( *((unsigned __int8 *)&gHistory_Result + 265800 * a1 + 265796) == 240 )
              json_integer_set((int)v66, (unsigned int)(*((_DWORD *)&gHistory_Result + 66450 * a1 + 4) + 100));
            else
              json_integer_set(
                (int)v66,
                100 * (unsigned int)*((unsigned __int8 *)&gHistory_Result + 265800 * a1 + 265796)
              + *((_DWORD *)&gHistory_Result + 66450 * a1 + 4));
            v65 = json_object_get((const json_t *)s[i], "rule_result");
            if ( !v65 || *(_DWORD *)v65 )
            {
              printf("Can't read out rule_result in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            v64 = json_object_get(v65, "result");
            if ( (!v64 || *(_DWORD *)v64 != 5) && (!v64 || *(_DWORD *)v64 != 6) )
              goto LABEL_62;
            v81 = 1;
            if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796) )
            {
              if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796) == 1 )
              {
                v83 &= ~1u;
                puts("LOOSE_STANDARD: ASIC_OK, fail");
              }
              else
              {
                v81 = 0;
                v83 &= ~1u;
                v83 &= ~2u;
                puts("PATTERN NG: ASIC_OK, NONCE_RATE_OK, fail");
              }
            }
            else
            {
              puts("STRICT_STANDARD: ASIC_OK, NONCE_RATE_OK");
            }
            if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) != 1 )
            {
              v81 = 0;
              v83 &= ~4u;
              puts("EEPROM_OK, fail");
            }
            if ( *(_BYTE *)(MES2Local_Config_Information + 88) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) != 1 )
            {
              v81 = 0;
              v83 &= ~8u;
              puts("PIC_SENSOR_OK, fail");
            }
            if ( *(_BYTE *)(MES2Local_Config_Information + 89) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) != 1 )
            {
              v81 = 0;
              v83 &= ~0x10u;
              puts("ASIC_SENSOR_OK, fail");
            }
            if ( v81 )
            {
              v2 = (json_t_0 *)json_true();
              json_object_set(v65, "result", v2);
              puts("set result as true");
            }
            else
            {
              v3 = (json_t_0 *)json_false();
              json_object_set(v65, "result", v3);
              puts("set result as false");
            }
            printf("test_result: 0x%08x\n", v83);
            v64 = json_object_get(v65, "result");
            if ( (!v64 || *(_DWORD *)v64 != 5) && (!v64 || *(_DWORD *)v64 != 6) )
            {
LABEL_62:
              printf("Can't read out result in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            if ( *(_DWORD *)v64 == 5 )
              v4 = "true";
            else
              v4 = "false";
            printf("result: %s\n", v4);
            v63 = json_object_get(v65, "sensors");
            if ( !v63 || *(_DWORD *)v63 != 1 )
            {
              printf("Can't read out sensors in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            v44 = json_array_size(v63);
            if ( *(_BYTE *)(MES2Local_Config_Information + 88) != 1 && json_array_remove(v63, 0) )
            {
              printf("Can't remove pic sensors template %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            if ( *(_BYTE *)(MES2Local_Config_Information + 89) != 1 && json_array_remove(v63, 1u) )
            {
              printf("Can't remove asic sensors template %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            v44 = json_array_size(v63);
            for ( j = 0; j < v44; ++j )
            {
              v5 = json_array_get(v63, j);
              v30[j] = v5;
              if ( !v30[j] || *(_DWORD *)v30[j] )
              {
                printf("Can't read out sensors[%d] in sensor\n", j);
                v82 = 0;
                goto LABEL_223;
              }
              v60 = json_object_get((const json_t *)v30[j], "name");
              if ( !v60 || *(_DWORD *)v60 != 2 )
              {
                printf("Can't read out name in sensors[%d]\n", j);
                v82 = 0;
                goto LABEL_223;
              }
              v59 = json_object_get((const json_t *)v30[j], "datas");
              if ( !v59 || *(_DWORD *)v59 != 1 )
              {
                printf("Can't read out datas in sensors_array[%d]\n", j);
                v82 = 0;
                goto LABEL_223;
              }
              v41 = json_array_size(v59);
              for ( k = 0; k < v41; ++k )
              {
                v6 = json_array_get(v59, k);
                v28[k] = v6;
                if ( !v28[k] || *(_DWORD *)v28[k] )
                {
                  printf("Can't read out sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                v58 = json_object_get((const json_t *)v28[k], "id");
                if ( !v58 || *(_DWORD *)v58 != 3 )
                {
                  printf("Can't read out id in sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                json_integer_set((int)v58, k);
                v57 = json_object_get((const json_t *)v28[k], "type");
                if ( !v57 || *(_DWORD *)v57 != 2 )
                {
                  printf("Can't read out type in sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                v7 = json_string_value(v60);
                if ( !strcmp(v7, "PIC") )
                  json_string_set((int)v57, byte_47BF54);
                v8 = json_string_value(v60);
                if ( !strcmp(v8, "CHIP") )
                  json_string_set((int)v57, byte_47BF54);
                v56 = json_object_get((const json_t *)v28[k], "code");
                if ( !v56 || *(_DWORD *)v56 != 2 )
                {
                  printf("Can't read out code in sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                json_string_set((int)v56, "0");
                v55 = json_object_get((const json_t *)v28[k], "msg");
                if ( !v55 || *(_DWORD *)v55 != 2 )
                {
                  printf("Can't read out msg in sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                v9 = json_string_value(v60);
                if ( !strcmp(v9, "PIC") )
                {
                  if ( (v83 & 8) != 0 )
                    json_string_set((int)v55, "ok");
                  else
                    json_string_set((int)v55, "ng");
                }
                v10 = json_string_value(v60);
                if ( !strcmp(v10, "ASIC") )
                {
                  if ( (v83 & 0x10) != 0 )
                    json_string_set((int)v55, "ok");
                  else
                    json_string_set((int)v55, "ng");
                }
                v54 = json_object_get((const json_t *)v28[k], "values");
                if ( !v54 || *(_DWORD *)v54 != 1 )
                {
                  printf("Can't read out values in sensors[%d]->datas[%d]\n", j, k);
                  v82 = 0;
                  goto LABEL_223;
                }
                v40 = json_array_size(v54);
                for ( m = 0; m < v40; ++m )
                {
                  v11 = json_array_get(v54, m);
                  v27[m] = v11;
                  if ( !v27[m] || *(_DWORD *)v27[m] != 3 )
                  {
                    printf("Can't find values[%d] in sensors[%d]->datas[%d]\n", m, j, k);
                    v82 = 0;
                    goto LABEL_223;
                  }
                  v12 = json_string_value(v60);
                  if ( !strcmp(v12, "PIC") )
                    json_integer_set(v27[m], *((char *)&gHistory_Result + 265800 * a1 + k + 265792));
                  v13 = json_string_value(v60);
                  if ( !strcmp(v13, "CHIP") )
                  {
                    if ( !m )
                      json_integer_set(v27[0], *((char *)&gHistory_Result + 265800 * a1 + k + 265784));
                    if ( m == 1 )
                      json_integer_set(v27[1], *((char *)&gHistory_Result + 265800 * a1 + k + 265788));
                  }
                }
              }
            }
            v62 = json_object_get(v65, "pattern");
            if ( !v62 || *(_DWORD *)v62 )
            {
              printf("Can't read out pattern in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            v53 = json_object_get(v62, "nonce_rate");
            if ( !v53 || *(_DWORD *)v53 != 3 )
            {
              puts("Can't read out nonce_rate in pattern");
              v82 = 0;
              goto LABEL_223;
            }
            v32 = (unsigned int)(*((double *)&gHistory_Result + 33225 * a1 + 1) * 100.0);
            json_integer_set((int)v53, v32);
            v52 = json_object_get(v62, "code");
            if ( !v52 || *(_DWORD *)v52 != 2 )
            {
              puts("Can't read out code in pattern");
              v82 = 0;
              goto LABEL_223;
            }
            json_string_set((int)v52, "0");
            v51 = json_object_get(v62, "msg");
            if ( !v51 || *(_DWORD *)v51 != 2 )
            {
              puts("Can't read out msg in pattern");
              v82 = 0;
              goto LABEL_223;
            }
            if ( *((unsigned __int8 *)&gHistory_Result + 265800 * a1 + 265796) == 240 )
              json_string_set((int)v51, "ng");
            else
              json_string_set((int)v51, "ok");
            v50 = json_object_get(v62, "asic_number");
            if ( !v50 || *(_DWORD *)v50 != 3 )
            {
              puts("Can't read out asic_number in pattern");
              v82 = 0;
              goto LABEL_223;
            }
            json_integer_set((int)v50, *(unsigned int *)(MES2Local_Config_Information + 64));
            v49 = json_object_get(v62, "asic_nonces");
            if ( !v49 || *(_DWORD *)v49 != 1 )
            {
              puts("Can't read out asic_nonces in pattern");
              v82 = 0;
              goto LABEL_223;
            }
            v39 = json_array_size(v49);
            for ( n = 0; n < v39; ++n )
            {
              v14 = json_array_get(v49, n);
              v26[n] = v14;
              if ( !v26[n] || *(_DWORD *)v26[n] != 3 )
              {
LABEL_178:
                printf("Can't find asic_nonces[%d] in pattern\n", n);
                v82 = 0;
                goto LABEL_223;
              }
            }
            for ( ii = v39; ; ++ii )
            {
              v16 = json_integer_value(v50);
              if ( v16 <= ii )
                break;
              v15 = json_integer(ii, 0);
              v26[ii] = v15;
              json_array_append(v49, (json_t_0 *)v26[ii]);
            }
            v39 = json_array_size(v49);
            for ( n = 0; n < v39; ++n )
            {
              v17 = json_array_get(v49, n);
              v26[n] = v17;
              if ( !v26[n] || *(_DWORD *)v26[n] != 3 )
                goto LABEL_178;
              json_integer_set(v26[n], *((unsigned int *)&gHistory_Result + 66450 * a1 + n + 65546));
            }
            v61 = json_object_get(v65, "commons");
            if ( !v61 || *(_DWORD *)v61 != 1 )
            {
              printf("Can't read out commons in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
              v82 = 0;
              goto LABEL_223;
            }
            v42 = json_array_size(v61);
            for ( jj = 0; jj < v42; ++jj )
            {
              v18 = json_array_get(v61, jj);
              v29[jj] = v18;
              if ( !v29[jj] || *(_DWORD *)v29[jj] )
              {
                printf("Can't read out commons[%d]\n", jj);
                v82 = 0;
                goto LABEL_223;
              }
              v48 = json_object_get((const json_t *)v29[jj], "name");
              if ( !v48 || *(_DWORD *)v48 != 2 )
              {
                printf("Can't read out name in commons[%d]\n", jj);
                v82 = 0;
                goto LABEL_223;
              }
              v47 = json_object_get((const json_t *)v29[jj], "code");
              if ( !v47 || *(_DWORD *)v47 != 2 )
              {
                printf("Can't read out code in commons[%d]\n", jj);
                v82 = 0;
                goto LABEL_223;
              }
              json_string_set((int)v47, "0");
              v46 = json_object_get((const json_t *)v29[jj], "msg");
              if ( !v46 || *(_DWORD *)v46 != 2 )
              {
                printf("Can't read out msg in commons[%d]\n", jj);
                v82 = 0;
                goto LABEL_223;
              }
              v19 = json_string_value(v48);
              if ( !strcmp(v19, "eeprom") )
              {
                if ( (v83 & 4) != 0 )
                  json_string_set((int)v46, "ok");
                else
                  json_string_set((int)v46, "ng");
              }
              v20 = json_string_value(v48);
              if ( !strcmp(v20, "pic") )
              {
                if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 6) )
                  json_string_set((int)v46, "ok");
                else
                  json_string_set((int)v46, "ng");
              }
              v21 = json_string_value(v48);
              if ( !strcmp(v21, "power") )
              {
                if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 5) )
                  json_string_set((int)v46, "ok");
                else
                  json_string_set((int)v46, "ng");
              }
            }
          }
          v34 = json_dumps(file, 0);
          mes_system_submit_result_file_length = strlen(v34);
          memcpy((void *)" ", v34, mes_system_submit_result_file_length);
          printf("size: %d, content: %s\n", mes_system_submit_result_file_length, " ");
        }
        else
        {
          printf("Can't read out datas in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
          v82 = 0;
        }
      }
      else
      {
        printf("Can't read out software_commit_id in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
        v82 = 0;
      }
    }
    else
    {
      printf("Can't read out params in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      v82 = 0;
    }
  }
  else
  {
    printf("Can't read out %s file.\n", "/mnt/card/MES_system_submit_result_template.ini");
    v82 = 0;
  }
LABEL_223:
  if ( file )
    sub_2E8A8((int)file);
  return v82;
}
