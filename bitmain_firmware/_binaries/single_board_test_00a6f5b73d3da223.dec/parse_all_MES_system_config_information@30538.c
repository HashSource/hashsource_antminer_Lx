int parse_all_MES_system_config_information()
{
  char *v0; // r4
  const char *v1; // r0
  char *v2; // r4
  const char *v3; // r0
  char *v4; // r4
  const char *v5; // r0
  char *v6; // r4
  const char *v7; // r0
  json_t *v8; // r0
  int v9; // r0
  char *v10; // r4
  json_t *v11; // r0
  const char *v12; // r0
  char *v13; // r4
  json_t *v14; // r0
  const char *v15; // r0
  json_t *v16; // r0
  int v17; // r0
  json_t *v18; // r0
  int v19; // r0
  json_t *v20; // r0
  int v21; // r0
  int v22; // r0
  json_t *v23; // r0
  int v24; // r0
  json_t *v25; // r0
  int v26; // r0
  json_t *v27; // r0
  int v28; // r0
  json_t *v29; // r0
  int v30; // r0
  json_t *v31; // r0
  int v32; // r0
  json_t *v33; // r0
  int v34; // r0
  json_t *v35; // r0
  int v36; // r0
  json_t *v37; // r0
  int v38; // r0
  json_t *v39; // r0
  int v40; // r0
  json_t *v41; // r0
  int v42; // r0
  json_t *v43; // r0
  int v44; // r0
  json_t *v45; // r0
  int v46; // r0
  json_t *v47; // r0
  int v48; // r0
  json_t *v49; // r0
  int v50; // r0
  json_t *v51; // r0
  int v52; // r0
  json_t *v53; // r0
  int v54; // r0
  json_t *v55; // r0
  int v56; // r0
  json_t *v57; // r0
  int v58; // r0
  char *v59; // r4
  json_t *v60; // r0
  const char *v61; // r0
  json_t *v62; // r0
  int v63; // r0
  json_t *v64; // r0
  int v65; // r0
  json_t *v66; // r0
  int v67; // r0
  char *v68; // r4
  json_t *v69; // r0
  const char *v70; // r0
  char *v71; // r4
  json_t *v72; // r0
  const char *v73; // r0
  char *v74; // r4
  json_t *v75; // r0
  const char *v76; // r0
  char *v77; // r4
  json_t *v78; // r0
  const char *v79; // r0
  json_t *v80; // r0
  int v81; // r0
  char *v82; // r4
  json_t *v83; // r0
  const char *v84; // r0
  json_t *v85; // r0
  int v86; // r0
  json_t *v87; // r0
  int v88; // r0
  json_t *v89; // r0
  int v90; // r0
  json_t *v91; // r0
  int v92; // r0
  json_t *v93; // r0
  int v94; // r0
  json_t *v95; // r0
  int v96; // r0
  int v97; // r0
  _BYTE v99[256]; // [sp+Ch] [bp+4h] BYREF
  size_t v100; // [sp+10Ch] [bp+104h]
  _DWORD *v101; // [sp+110h] [bp+108h]
  const json_t *v102; // [sp+114h] [bp+10Ch]
  const json_t *v103; // [sp+118h] [bp+110h]
  const json_t *v104; // [sp+11Ch] [bp+114h]
  const json_t *v105; // [sp+120h] [bp+118h]
  const json_t *v106; // [sp+124h] [bp+11Ch]
  const json_t *v107; // [sp+128h] [bp+120h]
  _DWORD *v108; // [sp+12Ch] [bp+124h]
  const json_t *v109; // [sp+130h] [bp+128h]
  const json_t *v110; // [sp+134h] [bp+12Ch]
  char *v111; // [sp+138h] [bp+130h]
  char *v112; // [sp+13Ch] [bp+134h]
  _DWORD *v113; // [sp+140h] [bp+138h]
  _DWORD *v114; // [sp+144h] [bp+13Ch]
  _DWORD *v115; // [sp+148h] [bp+140h]
  _DWORD *v116; // [sp+14Ch] [bp+144h]
  _DWORD *v117; // [sp+150h] [bp+148h]
  char *v118; // [sp+154h] [bp+14Ch]
  json_t *v119; // [sp+158h] [bp+150h]
  json_t *v120; // [sp+15Ch] [bp+154h]
  json_t *v121; // [sp+160h] [bp+158h]
  json_t *v122; // [sp+164h] [bp+15Ch]
  json_t *v123; // [sp+168h] [bp+160h]
  json_t *v124; // [sp+16Ch] [bp+164h]
  const json_t *v125; // [sp+170h] [bp+168h]
  json_t *v126; // [sp+174h] [bp+16Ch]
  json_t *v127; // [sp+178h] [bp+170h]
  json_t *v128; // [sp+17Ch] [bp+174h]
  const json_t *v129; // [sp+180h] [bp+178h]
  json_t *v130; // [sp+184h] [bp+17Ch]
  const json_t *v131; // [sp+188h] [bp+180h]
  const json_t *v132; // [sp+18Ch] [bp+184h]
  const json_t *v133; // [sp+190h] [bp+188h]
  const json_t *v134; // [sp+194h] [bp+18Ch]
  int v135; // [sp+198h] [bp+190h]
  unsigned __int8 v136; // [sp+19Fh] [bp+197h]
  size_t i8; // [sp+1A0h] [bp+198h]
  unsigned int i2; // [sp+1A4h] [bp+19Ch]
  unsigned int i6; // [sp+1A8h] [bp+1A0h]
  unsigned int i4; // [sp+1ACh] [bp+1A4h]
  unsigned int nn; // [sp+1B0h] [bp+1A8h]
  unsigned int kk; // [sp+1B4h] [bp+1ACh]
  unsigned int ii; // [sp+1B8h] [bp+1B0h]
  unsigned int n; // [sp+1BCh] [bp+1B4h]
  unsigned int k; // [sp+1C0h] [bp+1B8h]
  unsigned int i; // [sp+1C4h] [bp+1BCh]
  int i7; // [sp+1C8h] [bp+1C0h]
  int i5; // [sp+1CCh] [bp+1C4h]
  int i3; // [sp+1D0h] [bp+1C8h]
  int i1; // [sp+1D4h] [bp+1CCh]
  int mm; // [sp+1D8h] [bp+1D0h]
  int jj; // [sp+1DCh] [bp+1D4h]
  int m; // [sp+1E0h] [bp+1D8h]
  int j; // [sp+1E4h] [bp+1DCh]

  v135 = 0;
  v134 = 0;
  v133 = 0;
  v132 = 0;
  v131 = 0;
  v130 = 0;
  v129 = 0;
  v128 = 0;
  v127 = 0;
  v126 = 0;
  v125 = 0;
  v124 = 0;
  v123 = 0;
  v122 = 0;
  v121 = 0;
  v120 = 0;
  v119 = 0;
  v118 = 0;
  j = 0;
  v117 = 0;
  m = 0;
  v116 = 0;
  jj = 0;
  v115 = 0;
  mm = 0;
  v114 = 0;
  i1 = 0;
  v113 = 0;
  i3 = 0;
  v112 = 0;
  i5 = 0;
  v111 = 0;
  i7 = 0;
  v110 = 0;
  v109 = 0;
  v108 = 0;
  v107 = 0;
  v106 = 0;
  v105 = 0;
  v104 = 0;
  v103 = 0;
  v102 = 0;
  v101 = 0;
  i = 0;
  k = 0;
  n = 0;
  ii = 0;
  kk = 0;
  nn = 0;
  i4 = 0;
  i6 = 0;
  i2 = 0;
  i8 = 0;
  v100 = 0;
  v136 = 1;
  v99[255] = 0;
  puts("begin");
  MES_system_config_File = (int)json_loadb(
                                  MES_system_Config_information,
                                  mes_system_config_file_length - 1,
                                  0,
                                  (json_error_t *)v99);
  if ( MES_system_config_File && !*(_DWORD *)MES_system_config_File )
  {
    v134 = json_object_get((const json_t *)MES_system_config_File, "result");
    if ( v134 && !*(_DWORD *)v134 )
    {
      v133 = json_object_get(v134, "version");
      if ( v133 && *(_DWORD *)v133 == 2 )
      {
        v0 = (char *)(Mes_System_Config_File_Information + 28);
        v1 = json_string_value(v133);
        strcpy(v0, v1);
        printf(
          "MES system paticular config information version is: %s\n",
          (const char *)(Mes_System_Config_File_Information + 28));
        v132 = json_object_get(v134, "code");
        if ( v132 && *(_DWORD *)v132 == 2 )
        {
          v2 = (char *)(Mes_System_Config_File_Information + 52);
          v3 = json_string_value(v132);
          strcpy(v2, v3);
          printf(
            "MES system paticular config information code is: %s\n",
            (const char *)(Mes_System_Config_File_Information + 52));
          if ( !strcmp((const char *)(Mes_System_Config_File_Information + 52), "000000") )
          {
            v131 = json_object_get(v134, "msg");
            if ( v131 && *(_DWORD *)v131 == 2 )
            {
              v4 = (char *)(Mes_System_Config_File_Information + 76);
              v5 = json_string_value(v131);
              strcpy(v4, v5);
              printf(
                "MES system paticular config information msg is: %s\n",
                (const char *)(Mes_System_Config_File_Information + 76));
              if ( !strcmp((const char *)(Mes_System_Config_File_Information + 76), "ok") )
              {
                v130 = json_object_get(v134, "configs");
                if ( v130 && *(_DWORD *)v130 == 1 )
                {
                  gConfigs_array_size = json_array_size(v130);
                  printf("There are %d configs in result\n", gConfigs_array_size);
                  for ( i = 0; i < gConfigs_array_size; ++i )
                  {
                    v110 = (const json_t *)json_array_get(v130, i);
                    if ( !v110 || *(_DWORD *)v110 )
                    {
                      printf("Can't read out configs[%d] in result, error\n", i);
                      v136 = 0;
                      break;
                    }
                    v118 = (char *)malloc(0x34u);
                    if ( !v118 )
                    {
LABEL_28:
                      printf("malloc for configs[%d] in result fail\n", i);
                      v136 = 0;
                      break;
                    }
                    *((_DWORD *)v118 + 12) = 0;
                    if ( *(_DWORD *)(Mes_System_Config_File_Information + 100) )
                    {
                      for ( j = *(_DWORD *)(Mes_System_Config_File_Information + 100);
                            *(_DWORD *)(j + 48);
                            j = *(_DWORD *)(j + 48) )
                      {
                        ;
                      }
                      *(_DWORD *)(j + 48) = v118;
                      j = 0;
                    }
                    else
                    {
                      *(_DWORD *)(Mes_System_Config_File_Information + 100) = v118;
                      *(_DWORD *)(*(_DWORD *)(Mes_System_Config_File_Information + 100) + 48) = 0;
                    }
                    v129 = json_object_get(v110, "miner_type");
                    if ( !v129 || *(_DWORD *)v129 != 2 )
                    {
                      printf("Can't find miner_type in configs[%d] in result\n", i);
                      v136 = 0;
                      break;
                    }
                    v6 = v118;
                    v7 = json_string_value(v129);
                    strcpy(v6, v7);
                    v128 = json_object_get(v110, "hw_info");
                    if ( !v128 || *(_DWORD *)v128 != 1 )
                    {
                      printf("Can't find hw_info in configs[%d] in result\n", i);
                      v136 = 0;
                      break;
                    }
                    gHw_info_array_size = json_array_size(v128);
                    for ( k = 0; k < gHw_info_array_size; ++k )
                    {
                      v109 = (const json_t *)json_array_get(v128, k);
                      if ( !v109 || *(_DWORD *)v109 )
                      {
                        printf("Can't read out hw_info_array[%d] in configs[%d], error\n", k, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v117 = malloc(0x64u);
                      if ( !v117 )
                        goto LABEL_28;
                      v117[24] = 0;
                      if ( *((_DWORD *)v118 + 6) )
                      {
                        for ( m = *((_DWORD *)v118 + 6); *(_DWORD *)(m + 96); m = *(_DWORD *)(m + 96) )
                          ;
                        *(_DWORD *)(m + 96) = v117;
                        m = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 6) = v117;
                        *(_DWORD *)(*((_DWORD *)v118 + 6) + 96) = 0;
                      }
                      v8 = json_object_get(v109, "id");
                      v9 = json_integer_value(v8);
                      *v117 = v9;
                      v10 = (char *)(v117 + 1);
                      v11 = json_object_get(v109, "board_name");
                      v12 = json_string_value(v11);
                      strcpy(v10, v12);
                      v13 = (char *)(v117 + 7);
                      v14 = json_object_get(v109, "asic_type");
                      v15 = json_string_value(v14);
                      strcpy(v13, v15);
                      v16 = json_object_get(v109, "asic_num");
                      v17 = json_integer_value(v16);
                      v117[13] = v17;
                      v18 = json_object_get(v109, "voltage_domain");
                      v19 = json_integer_value(v18);
                      v117[14] = v19;
                      v20 = json_object_get(v109, "asic_num_per_voltage_domain");
                      v21 = json_integer_value(v20);
                      v117[15] = v21;
                      v126 = json_object_get(v109, "power_version");
                      if ( !v126 || *(_DWORD *)v126 != 1 )
                      {
                        printf("Can't find power_version in configs[%d]->hw_info[%d]\n", i, k);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      gPower_version_array_size = json_array_size(v126);
                      for ( n = 0; n < gPower_version_array_size; ++n )
                      {
                        v108 = (_DWORD *)json_array_get(v126, n);
                        if ( !v108 || *v108 != 3 )
                        {
                          printf("Can't find power_version_array[%d] in configs[%d]->hw_info[%d], error\n", n, i, k);
                          v136 = 0;
                          goto LABEL_181;
                        }
                        v22 = json_integer_value(v108);
                        v117[n + 16] = v22;
                        APW_power_version[n] = v117[n + 16];
                      }
                    }
                    v125 = json_object_get(v110, "rule");
                    if ( !v125 || *(_DWORD *)v125 )
                    {
                      printf("Can't find rule configs[%d] in result\n", i);
                      v136 = 0;
                      break;
                    }
                    v124 = json_object_get(v125, "pattern");
                    if ( !v124 || *(_DWORD *)v124 != 1 )
                    {
                      printf("Can't find pattern in configs[%d]->rule\n", i);
                      v136 = 0;
                      break;
                    }
                    gPattern_array_size = json_array_size(v124);
                    for ( ii = 0; ii < gPattern_array_size; ++ii )
                    {
                      v107 = (const json_t *)json_array_get(v124, ii);
                      if ( !v107 || *(_DWORD *)v107 )
                      {
                        printf("Can't find pattern[%d] in configs[%d]->rule, error\n", ii, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v116 = malloc(0x24u);
                      if ( !v116 )
                      {
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v116[8] = 0;
                      if ( *((_DWORD *)v118 + 7) )
                      {
                        for ( jj = *((_DWORD *)v118 + 7); *(_DWORD *)(jj + 32); jj = *(_DWORD *)(jj + 32) )
                          ;
                        *(_DWORD *)(jj + 32) = v116;
                        jj = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 7) = v116;
                        *(_DWORD *)(*((_DWORD *)v118 + 7) + 32) = 0;
                      }
                      v23 = json_object_get(v107, "id");
                      v24 = json_integer_value(v23);
                      *v116 = v24;
                      v25 = json_object_get(v107, "pattern_number");
                      v26 = json_integer_value(v25);
                      v116[1] = v26;
                      v27 = json_object_get(v107, "invalid_core_num");
                      v28 = json_integer_value(v27);
                      v116[2] = v28;
                      v29 = json_object_get(v107, "most_hw_num");
                      v30 = json_integer_value(v29);
                      v116[3] = v30;
                      v31 = json_object_get(v107, "least_nonce_per_core");
                      v32 = json_integer_value(v31);
                      v116[4] = v32;
                      v33 = json_object_get(v107, "nonce_rate");
                      v34 = json_integer_value(v33);
                      v116[5] = v34;
                      v35 = json_object_get(v107, "min_nonce_rate_per_asic");
                      v36 = json_integer_value(v35);
                      v116[6] = v36;
                      v37 = json_object_get(v107, "midstate_number");
                      v38 = json_integer_value(v37);
                      v116[7] = v38;
                    }
                    v127 = json_object_get(v125, "asic_reg");
                    if ( !v127 || *(_DWORD *)v127 != 1 )
                    {
                      printf("Can't find asic_reg in configs[%d]->rule\n", i);
                      v136 = 0;
                      break;
                    }
                    gAsic_reg_array_size = json_array_size(v127);
                    for ( kk = 0; kk < gAsic_reg_array_size; ++kk )
                    {
                      v106 = (const json_t *)json_array_get(v127, kk);
                      if ( !v106 || *(_DWORD *)v106 )
                      {
                        printf("Can't find asic_reg[%d] in configs[%d]->rule, error\n", kk, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v115 = malloc(0x28u);
                      if ( !v115 )
                      {
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v115[9] = 0;
                      if ( *((_DWORD *)v118 + 8) )
                      {
                        for ( mm = *((_DWORD *)v118 + 8); *(_DWORD *)(mm + 36); mm = *(_DWORD *)(mm + 36) )
                          ;
                        *(_DWORD *)(mm + 36) = v115;
                        mm = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 8) = v115;
                        *(_DWORD *)(*((_DWORD *)v118 + 8) + 36) = 0;
                      }
                      v39 = json_object_get(v106, "id");
                      v40 = json_integer_value(v39);
                      *v115 = v40;
                      v41 = json_object_get(v106, "ccdly_sel");
                      v42 = json_integer_value(v41);
                      v115[1] = v42;
                      v43 = json_object_get(v106, "pwth_sel");
                      v44 = json_integer_value(v43);
                      v115[2] = v44;
                      v45 = json_object_get(v106, "swpf_mode");
                      v46 = json_integer_value(v45);
                      v115[3] = v46;
                      v47 = json_object_get(v106, "pulse_mode");
                      v48 = json_integer_value(v47);
                      v115[4] = v48;
                      v49 = json_object_get(v106, "clk_sel");
                      v50 = json_integer_value(v49);
                      v115[5] = v50;
                      v51 = json_object_get(v106, "ro_relay_en");
                      v52 = json_integer_value(v51);
                      v115[6] = v52;
                      v53 = json_object_get(v106, "co_relay_en");
                      v54 = json_integer_value(v53);
                      v115[7] = v54;
                      v55 = json_object_get(v106, "diode_vdd_mux_sel");
                      v56 = json_integer_value(v55);
                      v115[8] = v56;
                    }
                    v122 = json_object_get(v125, "test_method");
                    if ( !v122 || *(_DWORD *)v122 != 1 )
                    {
                      printf("Can't find test_method in configs[%d]->rule\n", i);
                      v136 = 0;
                      break;
                    }
                    gTest_method_array_size = json_array_size(v122);
                    for ( nn = 0; nn < gTest_method_array_size; ++nn )
                    {
                      v105 = (const json_t *)json_array_get(v122, nn);
                      if ( !v105 || *(_DWORD *)v105 )
                      {
                        printf("Can't find test_method[%d] in configs[%d]->rule, error\n", nn, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v114 = malloc(0x20u);
                      if ( !v114 )
                      {
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v114[7] = 0;
                      if ( *((_DWORD *)v118 + 9) )
                      {
                        for ( i1 = *((_DWORD *)v118 + 9); *(_DWORD *)(i1 + 28); i1 = *(_DWORD *)(i1 + 28) )
                          ;
                        *(_DWORD *)(i1 + 28) = v114;
                        i1 = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 9) = v114;
                        *(_DWORD *)(*((_DWORD *)v118 + 9) + 28) = 0;
                      }
                      v57 = json_object_get(v105, "id");
                      v58 = json_integer_value(v57);
                      *v114 = v58;
                      v59 = (char *)(v114 + 1);
                      v60 = json_object_get(v105, "method");
                      v61 = json_string_value(v60);
                      strcpy(v59, v61);
                    }
                    v120 = json_object_get(v125, "test_loop");
                    if ( !v120 || *(_DWORD *)v120 != 1 )
                    {
                      printf("Can't find test_loop in configs[%d]->rule\n", i);
                      v136 = 0;
                      break;
                    }
                    gTest_loop_array_size = json_array_size(v120);
                    for ( i2 = 0; i2 < gTest_loop_array_size; ++i2 )
                    {
                      v102 = (const json_t *)json_array_get(v120, i2);
                      if ( !v102 || *(_DWORD *)v102 )
                      {
                        printf("Can't find test_loop[%d] in configs[%d]->rule, error\n", i2, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v113 = malloc(0x10u);
                      if ( !v113 )
                      {
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v113[3] = 0;
                      if ( *((_DWORD *)v118 + 10) )
                      {
                        for ( i3 = *((_DWORD *)v118 + 10); *(_DWORD *)(i3 + 12); i3 = *(_DWORD *)(i3 + 12) )
                          ;
                        *(_DWORD *)(i3 + 12) = v113;
                        i3 = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 10) = v113;
                        *(_DWORD *)(*((_DWORD *)v118 + 10) + 12) = 0;
                      }
                      v62 = json_object_get(v102, "id");
                      v63 = json_integer_value(v62);
                      *v113 = v63;
                      v64 = json_object_get(v102, "frequency");
                      v65 = json_integer_value(v64);
                      v113[1] = v65;
                      v66 = json_object_get(v102, "voltage");
                      v67 = json_integer_value(v66);
                      v113[2] = v67;
                    }
                    v123 = json_object_get(v110, "test_config");
                    if ( !v123 || *(_DWORD *)v123 != 1 )
                    {
                      printf("Can't find test_config in configs[%d] in result\n", i);
                      v136 = 0;
                      break;
                    }
                    gTest_config_array_size = json_array_size(v123);
                    for ( i4 = 0; i4 < gTest_config_array_size; ++i4 )
                    {
                      v104 = (const json_t *)json_array_get(v123, i4);
                      if ( !v104 || *(_DWORD *)v104 )
                      {
                        printf("Can't find test_config[%d] in configs[%d], error\n", i4, i);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      v112 = (char *)malloc(0x6Cu);
                      if ( !v112 )
                      {
                        v136 = 0;
                        goto LABEL_181;
                      }
                      *((_DWORD *)v112 + 26) = 0;
                      if ( *((_DWORD *)v118 + 11) )
                      {
                        for ( i5 = *((_DWORD *)v118 + 11); *(_DWORD *)(i5 + 104); i5 = *(_DWORD *)(i5 + 104) )
                          ;
                        *(_DWORD *)(i5 + 104) = v112;
                        i5 = 0;
                      }
                      else
                      {
                        *((_DWORD *)v118 + 11) = v112;
                        *(_DWORD *)(*((_DWORD *)v118 + 11) + 104) = 0;
                      }
                      v68 = v112;
                      v69 = json_object_get(v104, "hardware_version");
                      v70 = json_string_value(v69);
                      strcpy(v68, v70);
                      v71 = v112 + 24;
                      v72 = json_object_get(v104, "bom_version");
                      v73 = json_string_value(v72);
                      strcpy(v71, v73);
                      v74 = v112 + 48;
                      v75 = json_object_get(v104, "chip_technology");
                      v76 = json_string_value(v75);
                      strcpy(v74, v76);
                      v77 = v112 + 72;
                      v78 = json_object_get(v104, "ft_vesrion");
                      v79 = json_string_value(v78);
                      strcpy(v77, v79);
                      v80 = json_object_get(v104, "bin");
                      v81 = json_integer_value(v80);
                      *((_DWORD *)v112 + 24) = v81;
                      v121 = json_object_get(v104, "data");
                      if ( !v121 || *(_DWORD *)v121 != 1 )
                      {
                        printf("Can't find data in configs[%d]->test_config[%d]\n", i, i4);
                        v136 = 0;
                        goto LABEL_181;
                      }
                      gData_array_size = json_array_size(v121);
                      for ( i6 = 0; i6 < gData_array_size; ++i6 )
                      {
                        v103 = (const json_t *)json_array_get(v121, i6);
                        if ( !v103 || *(_DWORD *)v103 )
                        {
                          printf("Can't find data[%d] in configs[%d]->test_config[%d], error\n", i6, i, i4);
                          v136 = 0;
                          goto LABEL_181;
                        }
                        v111 = (char *)malloc(0x60u);
                        if ( !v111 )
                        {
                          v136 = 0;
                          goto LABEL_181;
                        }
                        *((_DWORD *)v111 + 23) = 0;
                        if ( *((_DWORD *)v112 + 25) )
                        {
                          for ( i7 = *((_DWORD *)v112 + 25); *(_DWORD *)(i7 + 92); i7 = *(_DWORD *)(i7 + 92) )
                            ;
                          *(_DWORD *)(i7 + 92) = v111;
                          i7 = 0;
                        }
                        else
                        {
                          *((_DWORD *)v112 + 25) = v111;
                          *(_DWORD *)(*((_DWORD *)v112 + 25) + 92) = 0;
                        }
                        v82 = v111;
                        v83 = json_object_get(v103, "version");
                        v84 = json_string_value(v83);
                        strcpy(v82, v84);
                        v85 = json_object_get(v103, "pattern_id");
                        v86 = json_integer_value(v85);
                        *((_DWORD *)v111 + 6) = v86;
                        v87 = json_object_get(v103, "asic_reg_id");
                        v88 = json_integer_value(v87);
                        *((_DWORD *)v111 + 7) = v88;
                        v89 = json_object_get(v103, "test_method_id");
                        v90 = json_integer_value(v89);
                        *((_DWORD *)v111 + 8) = v90;
                        v91 = json_object_get(v103, "voltage_accuracy");
                        v92 = json_integer_value(v91);
                        *((_DWORD *)v111 + 9) = v92;
                        v93 = json_object_get(v103, "fan_speed");
                        v94 = json_integer_value(v93);
                        *((_DWORD *)v111 + 10) = v94;
                        v95 = json_object_get(v103, "pre_open_core_voltage");
                        v96 = json_integer_value(v95);
                        *((_DWORD *)v111 + 22) = v96;
                        v119 = json_object_get(v103, "test_loop_id");
                        if ( !v119 || *(_DWORD *)v119 != 1 )
                        {
                          printf("Can't find test_loop_id in configs[%d]->test_config[%d]->data[%d]\n", i, i4, i6);
                          v136 = 0;
                          goto LABEL_181;
                        }
                        v100 = json_array_size(v119);
                        if ( v100 > 0xA )
                        {
                          printf("Test_loop_id_array_size is %d, bigger than %d\n", v100, 10);
                          v136 = 0;
                          goto LABEL_181;
                        }
                        *((_DWORD *)v111 + 21) = v100;
                        for ( i8 = 0; i8 < v100; ++i8 )
                        {
                          v101 = (_DWORD *)json_array_get(v119, i8);
                          if ( !v101 || *v101 != 3 )
                          {
                            printf(
                              "Can't find test_loop_id[%d] in configs[%d]->test_config[%d]->data[%d], error\n",
                              i8,
                              i,
                              i4,
                              i6);
                            v136 = 0;
                            goto LABEL_181;
                          }
                          v97 = json_integer_value(v101);
                          *(_DWORD *)&v111[4 * i8 + 44] = v97;
                        }
                      }
                    }
                  }
                }
                else
                {
                  puts("Can't find configs in result");
                  v136 = 0;
                }
              }
              else
              {
                printf(
                  "Get all config information fail. msg: %s\n",
                  (const char *)(Mes_System_Config_File_Information + 76));
                v136 = 0;
              }
            }
            else
            {
              puts("Can't find msg in result");
              v136 = 0;
            }
          }
          else
          {
            printf(
              "Get all config information fail. code: %s\n",
              (const char *)(Mes_System_Config_File_Information + 52));
            v136 = 0;
          }
        }
        else
        {
          puts("Can't find code in result");
          v136 = 0;
        }
      }
      else
      {
        puts("Can't find version in result");
        v136 = 0;
      }
    }
    else
    {
      puts("Can't find result in MES system paticular config information");
      v136 = 0;
    }
  }
  else
  {
    puts("The received MES system all config information is not in JSON format");
    v136 = 0;
  }
LABEL_181:
  if ( v135 )
    sub_2E8A8(v135);
  puts("done");
  return v136;
}
