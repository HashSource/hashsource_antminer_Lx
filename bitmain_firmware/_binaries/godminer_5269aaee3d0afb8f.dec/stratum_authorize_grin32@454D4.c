int __fastcall stratum_authorize_grin32(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r12
  const char *v10; // r1
  char *v11; // r7
  int v12; // r8
  size_t v13; // r6
  size_t v14; // r0
  const void *v15; // r1
  void *v16; // r6
  char *v18; // r0
  const char *v19; // r1
  double *v20; // r9
  char *v21; // r1
  int v22; // r0
  char *v23; // r1
  _DWORD *v24; // r6
  int v25; // r0
  char *v26; // r1
  _DWORD *v27; // r10
  int v28; // r0
  char *v29; // r1
  _DWORD *v30; // r0
  void *v31; // r10
  _BYTE *v32; // r0
  _BYTE *v33; // r11
  int v34; // r3
  _DWORD *v35; // r5
  int v36; // r1
  int v37; // r3
  int v38; // r1
  unsigned int *v39; // r3
  unsigned int v40; // r2
  unsigned int v41; // r2
  int v42; // r3
  _DWORD *v43; // r3
  int v44; // r1
  char *v45; // r1
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r10
  int *v49; // r1
  int v50; // r3
  int *v51; // r2
  int v52; // r11
  int v53; // lr
  int v54; // r12
  int v55; // r0
  int v56; // r3
  _DWORD *v57; // r3
  int v58; // r1
  char *v59; // r1
  _DWORD *v60; // r6
  const void *v61; // r1
  int v62; // r6
  int v63; // r10
  int v64; // r0
  void *v65; // r6
  double *v66; // r0
  double *v67; // r8
  int v68; // r0
  int v69; // r3
  _DWORD *v70; // r3
  int v71; // r1
  unsigned int *v72; // r3
  unsigned int v73; // r2
  unsigned int v74; // r2
  int v75; // r3
  int v76; // r0
  int v77; // r2
  int v78; // r1
  int v79; // r3
  _DWORD *v80; // r5
  int v81; // r1
  int v82; // r3
  int v83; // r1
  int v84; // r3
  int v85; // r3
  int v86; // r3
  int v87; // r3
  _DWORD *v88; // r3
  int v89; // r1
  int v90; // r3
  _DWORD *v91; // r3
  int v92; // r1
  _DWORD v93[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v94[160]; // [sp+70h] [bp-10A4h] BYREF
  char v95[4100]; // [sp+110h] [bp-1004h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = v6 + strlen(v5);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v8 = (char *)malloc(v7 + 300);
    LOWORD(v9) = 14172;
    LOWORD(v10) = 14064;
    HIWORD(v9) = (unsigned int)" no temp %d, uneffective temp %d, lost connection too long %d" >> 16;
    HIWORD(v10) = (unsigned int)"" >> 16;
    v11 = v8;
    sprintf(v8, v10, v2, v5, v9);
  }
  else
  {
    v18 = (char *)malloc(v7 + 80);
    LOWORD(v19) = 14188;
    HIWORD(v19) = (unsigned int)"ffective temp %d, lost connection too long %d" >> 16;
    v11 = v18;
    sprintf(v18, v19, v2, v5);
  }
  v12 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( !v12 )
  {
LABEL_11:
    free(v11);
    return v12;
  }
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v13 = strlen(*(const char **)(a2 + 12));
    v14 = strlen(*(const char **)(a2 + 16));
    memset(v11, 0, v13 + v14 + 300);
    LOWORD(v15) = 14252;
    HIWORD(v15) = (unsigned int)"age_strategy1" >> 16;
    memcpy(v11, v15, 0x4Au);
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11) )
    {
      v12 = 0;
      free(v11);
      return v12;
    }
  }
  while ( 1 )
  {
    v16 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v16 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v16);
  }
  v20 = json_loads((int)v16, 0, (char *)v93);
  free(v16);
  if ( !v20 )
  {
    v12 = 0;
    V_LOCK();
    LOWORD(v42) = 9784;
    HIWORD(v42) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    logfmt_raw(v95, 0x1000u, 0, v42, v93[0], v94);
    V_UNLOCK();
    LOWORD(v43) = -14756;
    HIWORD(v43) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v44) = 15312;
    HIWORD(v44) = (unsigned int)"artbeat_on_device.c" >> 16;
    zlog(*v43, v44, 163, "stratum_authorize_grin32", 24, 868, 100, v95);
    free(v11);
    return v12;
  }
  LOWORD(v21) = 9820;
  HIWORD(v21) = (unsigned int)"RIBE_SUCCESS" >> 16;
  v22 = json_object_get(v20, v21);
  LOWORD(v23) = -20764;
  v24 = (_DWORD *)v22;
  HIWORD(v23) = (unsigned int)&unk_13CFAC >> 16;
  v25 = json_object_get(v20, v23);
  LOWORD(v26) = 13888;
  v27 = (_DWORD *)v25;
  HIWORD(v26) = (unsigned int)"e last_30min: %f" >> 16;
  v28 = json_object_get(v20, v26);
  if ( (unsigned int)json_integer_value(v28) == 2 && (!v24 || *v24 == 6 || v27 && *v27 != 7) )
  {
    V_LOCK();
    LOWORD(v79) = 14328;
    HIWORD(v79) = (unsigned int)"3" >> 16;
    LOWORD(v80) = -14756;
    logfmt_raw(v95, 0x1000u, 0, v79);
    HIWORD(v80) = (unsigned int)&unk_16E68C >> 16;
    V_UNLOCK();
    LOWORD(v81) = 15312;
    HIWORD(v81) = (unsigned int)"artbeat_on_device.c" >> 16;
    v12 = 0;
    zlog(*v80, v81, 163, "stratum_authorize_grin32", 24, 878, 100, v95);
    V_LOCK();
    LOWORD(v82) = 15476;
    HIWORD(v82) = (unsigned int)"er-origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    logfmt_raw(v95, 0x1000u, 0, v82);
    V_UNLOCK();
    LOWORD(v83) = 15312;
    HIWORD(v83) = (unsigned int)"artbeat_on_device.c" >> 16;
    zlog(*v80, v83, 163, "stratum_authorize_grin32", 24, 879, 100, v95);
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a2 + 1824) )
    goto LABEL_37;
  LOWORD(v29) = 9820;
  HIWORD(v29) = (unsigned int)"RIBE_SUCCESS" >> 16;
  v30 = (_DWORD *)json_object_get(v20, v29);
  v31 = v30;
  if ( !v30 )
  {
    V_LOCK();
    LOWORD(v75) = 13700;
    LOWORD(v35) = -14756;
    HIWORD(v75) = (unsigned int)"atus.c" >> 16;
    HIWORD(v35) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v95, 0x1000u, 0, v75);
    V_UNLOCK();
    v76 = *v35;
    v77 = 89;
LABEL_51:
    LOWORD(v78) = 15312;
    HIWORD(v78) = (unsigned int)"artbeat_on_device.c" >> 16;
    zlog(v76, v78, 163, "rpc2_login_decode", 17, v77, 100, v95);
    goto LABEL_21;
  }
  v32 = json_string_value(v30);
  v33 = v32;
  if ( v32 )
  {
    if ( *v32 != 111 || v32[1] != 107 || v32[2] )
    {
      V_LOCK();
      LOWORD(v34) = 13748;
      HIWORD(v34) = (unsigned int)"temp" >> 16;
      LOWORD(v35) = -14756;
      logfmt_raw(v95, 0x1000u, 0, v34, v33);
      HIWORD(v35) = (unsigned int)&unk_16E68C >> 16;
      V_UNLOCK();
      LOWORD(v36) = 15312;
      HIWORD(v36) = (unsigned int)"artbeat_on_device.c" >> 16;
      zlog(*v35, v36, 163, "rpc2_login_decode", 17, 100, 100, v95);
LABEL_21:
      v12 = 0;
      V_LOCK();
      LOWORD(v37) = 13828;
      HIWORD(v37) = (unsigned int)"happened!" >> 16;
      logfmt_raw(v95, 0x1000u, 0, v37, "rpc2_login_decode");
      V_UNLOCK();
      LOWORD(v38) = 15312;
      HIWORD(v38) = (unsigned int)"artbeat_on_device.c" >> 16;
      zlog(*v35, v38, 163, "rpc2_login_decode", 17, 141, 80, v95);
      goto LABEL_22;
    }
  }
  else if ( v31 != json_true() )
  {
    V_LOCK();
    LOWORD(v85) = 13720;
    LOWORD(v35) = -14756;
    HIWORD(v85) = (unsigned int)"h" >> 16;
    HIWORD(v35) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v95, 0x1000u, 0, v85);
    V_UNLOCK();
    v76 = *v35;
    v77 = 95;
    goto LABEL_51;
  }
  LOWORD(v45) = 13888;
  HIWORD(v45) = (unsigned int)"e last_30min: %f" >> 16;
  v46 = (_DWORD *)json_object_get(v20, v45);
  if ( !v46 )
  {
    V_LOCK();
    LOWORD(v84) = 13776;
    LOWORD(v35) = -14756;
    HIWORD(v84) = (unsigned int)"eed limit" >> 16;
    HIWORD(v35) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v95, 0x1000u, 0, v84);
    V_UNLOCK();
    v76 = *v35;
    v77 = 108;
    goto LABEL_51;
  }
  v47 = json_string_value(v46);
  v48 = v47;
  if ( !v47 )
  {
    V_LOCK();
    LOWORD(v86) = 13792;
    LOWORD(v35) = -14756;
    HIWORD(v86) = (unsigned int)"error exceed limit" >> 16;
    HIWORD(v35) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v95, 0x1000u, 0, v86);
    V_UNLOCK();
    v76 = *v35;
    v77 = 113;
    goto LABEL_51;
  }
  v49 = v47;
  v50 = a2 + 1852;
  v51 = v47 + 16;
  do
  {
    v52 = *v49;
    v49 += 4;
    v53 = *(v49 - 3);
    v50 += 16;
    v54 = *(v49 - 2);
    v55 = *(v49 - 1);
    *(_DWORD *)(v50 - 16) = v52;
    *(_DWORD *)(v50 - 12) = v53;
    *(_DWORD *)(v50 - 8) = v54;
    *(_DWORD *)(v50 - 4) = v55;
  }
  while ( v49 != v51 );
  V_LOCK();
  LOWORD(v56) = 13816;
  HIWORD(v56) = (unsigned int)"ow hashrate happened!" >> 16;
  logfmt_raw(v95, 0x1000u, 0, v56, v48);
  V_UNLOCK();
  LOWORD(v57) = -14756;
  HIWORD(v57) = (unsigned int)&unk_16E68C >> 16;
  LOWORD(v58) = 15312;
  HIWORD(v58) = (unsigned int)"artbeat_on_device.c" >> 16;
  zlog(*v57, v58, 163, "rpc2_login_decode", 17, 119, 20, v95);
  LOWORD(v59) = 14360;
  HIWORD(v59) = (unsigned int)" working_voltage = %d, compensate_voltage = %d, abs = %d" >> 16;
  v60 = (_DWORD *)json_object_get(v24, v59);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  if ( v60 )
    sub_43354(v60, a2);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
LABEL_37:
  LOWORD(v61) = 14364;
  HIWORD(v61) = (unsigned int)"king_voltage = %d, compensate_voltage = %d, abs = %d" >> 16;
  memcpy(v11, v61, 0x41u);
  v62 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( v62 )
  {
    v63 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v63 )
    {
      v64 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v65 = (void *)v64;
      if ( v64 )
      {
        v66 = json_loads(v64, 0, (char *)v93);
        v67 = v66;
        if ( v66 )
        {
          v68 = json_object_get(v66, "id");
          if ( json_integer_value(v68) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v65) )
          {
            V_LOCK();
            LOWORD(v69) = 14472;
            HIWORD(v69) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
            logfmt_raw(v95, 0x1000u, 0, v69);
            V_UNLOCK();
            LOWORD(v70) = -14756;
            HIWORD(v70) = (unsigned int)&unk_16E68C >> 16;
            LOWORD(v71) = 15312;
            HIWORD(v71) = (unsigned int)"artbeat_on_device.c" >> 16;
            zlog(*v70, v71, 163, "stratum_authorize_grin32", 24, 916, 80, v95);
          }
          if ( *((_DWORD *)v67 + 1) != -1 )
          {
            v72 = (unsigned int *)v67 + 1;
            __dmb(0xBu);
            do
            {
              v73 = __ldrex(v72);
              v74 = v73 - 1;
            }
            while ( __strex(v74, v72) );
            if ( !v74 )
              json_delete(v67);
          }
        }
        else
        {
          V_LOCK();
          LOWORD(v87) = 9784;
          HIWORD(v87) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
          logfmt_raw(v95, 0x1000u, 0, v87, v93[0], v94);
          V_UNLOCK();
          LOWORD(v88) = -14756;
          HIWORD(v88) = (unsigned int)&unk_16E68C >> 16;
          LOWORD(v89) = 15312;
          HIWORD(v89) = (unsigned int)"artbeat_on_device.c" >> 16;
          zlog(*v88, v89, 163, "stratum_authorize_grin32", 24, 911, 80, v95);
        }
        v12 = v63;
        free(v65);
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v90) = 14432;
      HIWORD(v90) = (unsigned int)"enkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
      logfmt_raw(v95, 0x1000u, 0, v90);
      V_UNLOCK();
      LOWORD(v91) = -14756;
      HIWORD(v91) = (unsigned int)&unk_16E68C >> 16;
      LOWORD(v92) = 15312;
      HIWORD(v92) = (unsigned int)"artbeat_on_device.c" >> 16;
      v12 = v62;
      zlog(*v91, v92, 163, "stratum_authorize_grin32", 24, 903, 20, v95);
    }
  }
LABEL_22:
  free(v11);
  if ( *((_DWORD *)v20 + 1) == -1 )
    return v12;
  v39 = (unsigned int *)v20 + 1;
  __dmb(0xBu);
  do
  {
    v40 = __ldrex(v39);
    v41 = v40 - 1;
  }
  while ( __strex(v41, v39) );
  if ( v41 )
    return v12;
  json_delete(v20);
  return v12;
}
