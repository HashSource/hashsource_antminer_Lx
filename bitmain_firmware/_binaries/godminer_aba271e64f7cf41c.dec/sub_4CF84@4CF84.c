int __fastcall sub_4CF84(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  json_t *v14; // r0
  __int64 v15; // r0
  int v16; // r0
  __int64 v17; // r2
  int v18; // r1
  char *v19; // r0
  double v21; // r0
  char v25[32]; // [sp+3Ch] [bp-10E0h] BYREF
  char v26; // [sp+103Fh] [bp-DDh]
  __int64 v27; // [sp+1040h] [bp-DCh] BYREF
  unsigned int v28; // [sp+104Ch] [bp-D0h] BYREF
  _DWORD v29[7]; // [sp+1050h] [bp-CCh] BYREF
  int v30; // [sp+106Ch] [bp-B0h]
  _DWORD v31[7]; // [sp+1070h] [bp-ACh] BYREF
  int v32; // [sp+108Ch] [bp-90h]
  _DWORD v33[7]; // [sp+1090h] [bp-8Ch] BYREF
  int v34; // [sp+10ACh] [bp-70h]
  _DWORD v35[7]; // [sp+10B0h] [bp-6Ch] BYREF
  int v36; // [sp+10CCh] [bp-50h]
  char *dest; // [sp+10D0h] [bp-4Ch]
  int *v38; // [sp+10D4h] [bp-48h]
  unsigned int v39; // [sp+10D8h] [bp-44h]
  unsigned int v40; // [sp+10DCh] [bp-40h]
  size_t v41; // [sp+10E0h] [bp-3Ch]
  char *src; // [sp+10E4h] [bp-38h]
  char *s1; // [sp+10E8h] [bp-34h]
  unsigned __int8 v44; // [sp+10EFh] [bp-2Dh]
  int *v45; // [sp+10F0h] [bp-2Ch]
  char *s2; // [sp+10F4h] [bp-28h]
  char *s; // [sp+10F8h] [bp-24h]
  char *v48; // [sp+10FCh] [bp-20h]
  __int64 v49; // [sp+1100h] [bp-1Ch]
  char *v50; // [sp+110Ch] [bp-10h]

  v50 = 0;
  s2 = 0;
  v48 = 0;
  src = 0;
  s = 0;
  s1 = 0;
  v44 = 0;
  v45 = a2 + 114;
  if ( a3 && *(_DWORD *)a3 == 1 )
  {
    v3 = json_array_get(a3, 0);
    s2 = (char *)json_string_value(v3);
    v4 = json_array_get(a3, 1u);
    v50 = (char *)json_string_value(v4);
    v5 = json_array_get(a3, 2u);
    s = (char *)json_string_value(v5);
    v6 = json_array_get(a3, 3u);
    v48 = (char *)json_string_value(v6);
    v7 = json_array_get(a3, 5u);
    v49 = json_integer_value((int)v7);
  }
  else
  {
    v8 = json_object_get(a3, "blob");
    v50 = (char *)json_string_value(v8);
    v9 = json_object_get(a3, "job_id");
    s2 = (char *)json_string_value(v9);
    v10 = json_object_get(a3, "target");
    v48 = (char *)json_string_value(v10);
    v11 = json_object_get(a3, "seed_hash");
    s = (char *)json_string_value(v11);
    v12 = json_object_get(a3, "height");
    v49 = json_integer_value((int)v12);
  }
  v13 = json_object_get(a3, "id");
  src = (char *)json_string_value(v13);
  v14 = json_object_get(a3, "algo");
  s1 = (char *)json_string_value(v14);
  if ( (unsigned __int8)valid_ascii(s2) != 1
    || (unsigned __int8)valid_hex(v50) != 1
    || (unsigned __int8)valid_hex(v48) != 1
    || (unsigned __int8)valid_hex(s) != 1
    || strlen(s) - 64 > 1 )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      211,
      100,
      v25);
    return v44;
  }
  if ( s1 && valid_ascii(s1) && strcasecmp(s1, "rx/0") )
  {
    V_LOCK();
    sub_4BC40((int)v29, *a2);
    logfmt_raw(
      v25,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "Stratum notify: algo type is not rx/0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      217,
      100,
      v25);
    return v44;
  }
  if ( src && valid_ascii(src) )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 415));
    strcpy((char *)a2 + 1684, src);
    if ( strlen(src) > 0x3F )
    {
      V_LOCK();
      sub_4BC40((int)v31, *a2);
      logfmt_raw(
        v25,
        0x1000u,
        0,
        v32,
        v31[0],
        v31[1],
        v31[2],
        v31[3],
        v31[4],
        v31[5],
        v31[6],
        v32,
        "rpc id len larger than 64!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
        172,
        "stratum_notify_x7",
        17,
        226,
        80,
        v25);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 415));
  }
  if ( a2[444] && !strcmp((const char *)a2[444], s2) && a2 == (int *)get_current_pool() )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[444], s2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      233,
      80,
      v25);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 445));
  if ( a2[444] )
  {
    free((void *)a2[444]);
    a2[444] = 0;
  }
  a2[444] = (int)strdup(s2);
  if ( a2[437] )
  {
    free((void *)a2[437]);
    a2[437] = 0;
  }
  a2[439] = strlen(v50) >> 1;
  a2[437] = (int)calloc(a2[439], 1u);
  if ( !a2[437] )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "Failed to calloc pool rpc2_blob");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      244,
      100,
      v25);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 445));
    return v44;
  }
  if ( (unsigned int)a2[439] <= 0x2A || (unsigned int)a2[439] > 0xC6 )
  {
    V_LOCK();
    sub_4BC40((int)v33, *a2);
    logfmt_raw(
      v25,
      0x1000u,
      0,
      v34,
      v33[0],
      v33[1],
      v33[2],
      v33[3],
      v33[4],
      v33[5],
      v33[6],
      v34,
      "rpc blob len (%d) error!",
      a2[439]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      250,
      100,
      v25);
    V_LOCK();
    sub_4BC40((int)v35, *a2);
    logfmt_raw(v25, 0x1000u, 0, v36, v35[0], v35[1], v35[2], v35[3], v35[4], v35[5], v35[6], v36, "blob %s", v50);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      251,
      100,
      v25);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 445));
    return v44;
  }
  hex2bin((_BYTE *)a2[437], v50, a2[439]);
  v41 = strlen(v48) >> 1;
  if ( v41 != 4 && v41 != 8 && v41 != 32 )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "Stratum notify target len larger than 32");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      260,
      80,
      v25);
  }
  switch ( v41 )
  {
    case 4u:
      hex2bin(&v28, v48, 4);
      if ( v28 )
      {
        LODWORD(v15) = sub_CCDFC(0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFF / v28);
        *((_QWORD *)a2 + 221) = v15;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "Stratum notify target is zero!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
          172,
          "stratum_notify_x7",
          17,
          267,
          100,
          v25);
      }
      break;
    case 0x20u:
      v40 = sub_4BBB0((unsigned __int8)*v48);
      v39 = v40;
      if ( v40 )
      {
        v16 = sub_CCDFC(0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFF / v39);
        LODWORD(v17) = v16 + 0x80000000;
        HIDWORD(v17) = v18 - !__CFADD__(v16, 0x80000000);
        *((_QWORD *)a2 + 221) = v17;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "Stratum notify target is zero!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
          172,
          "stratum_notify_x7",
          17,
          282,
          100,
          v25);
      }
      break;
    case 8u:
      hex2bin(&v27, v48, 8);
      *((_QWORD *)a2 + 221) = v27;
      break;
  }
  if ( a2[438] )
  {
    free((void *)a2[438]);
    a2[438] = 0;
  }
  if ( a2[440] )
  {
    free((void *)a2[440]);
    a2[440] = 0;
  }
  a2[440] = (int)calloc(1u, 4u);
  *(_DWORD *)a2[440] = 32;
  a2[438] = (int)calloc(*(_DWORD *)a2[440], 1u);
  if ( !a2[438] )
  {
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "Failed to calloc pool rpc2_blob2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_notify_x7",
      17,
      301,
      100,
      v25);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 445));
    return v44;
  }
  hex2bin((_BYTE *)a2[438], s, *(_DWORD *)a2[440]);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 445));
  if ( !v45 )
    return v44;
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  *(_QWORD *)v45 = *a2;
  if ( v45[281] )
  {
    free((void *)v45[281]);
    v45[281] = 0;
  }
  v19 = strdup(s2);
  v45[281] = (int)v19;
  v26 = a2[439];
  *((_BYTE *)v45 + 8) = v26;
  memcpy((char *)v45 + 9, (const void *)a2[437], a2[439]);
  v38 = v45 + 12;
  v45[12] = -1;
  if ( v45[283] )
  {
    free((void *)v45[283]);
    v45[283] = 0;
  }
  v45[283] = (int)calloc(1u, 0x90u);
  if ( v45[283] )
  {
    dest = (char *)v45[283];
    strcpy(dest, (const char *)a2 + 1684);
    memcpy(dest + 64, (const void *)a2[438], 0x20u);
    *((_QWORD *)dest + 12) = v49;
    *((_QWORD *)dest + 13) = *((_QWORD *)a2 + 221);
    LODWORD(v21) = sub_CCAD4(*((_QWORD *)a2 + 221));
    *((double *)v45 + 133) = 1.84467441e19 / v21;
    *((_QWORD *)a2 + 226) = *((_QWORD *)v45 + 133);
    sprintf((char *)a2 + 1976, "%13.2f", *((double *)a2 + 226));
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 1;
  }
  printf("invalid pointer(%s)!\n", "work->private");
  return 0;
}
