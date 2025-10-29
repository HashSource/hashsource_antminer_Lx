int __fastcall judge_load_config(char *a1)
{
  _DWORD *v2; // r5
  double *file; // r0
  double *v4; // r6
  unsigned int v5; // r7
  int v6; // r8
  int v7; // r0
  int v8; // r12
  int v9; // r2
  _DWORD *v11; // r0
  _DWORD *v12; // r10
  _DWORD *v13; // r0
  _BYTE *v14; // r2
  int v15; // r3
  _DWORD *v16; // r0
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  const char *v20; // r0
  int v21; // r0
  char *v22; // r9
  _DWORD *v23; // r0
  char *v24; // r3
  char *v25; // r2
  char *v26; // r1
  _DWORD *v27; // r0
  _DWORD *v28; // r8
  unsigned int v29; // r6
  int v30; // r6
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  const char *v37; // r11
  int v38; // r9
  int v39; // r8
  int v40; // r10
  int v41; // r0
  const char *v42; // r1
  int v43; // r7
  int v44; // t1
  char *v45; // [sp+4h] [bp-1130h]
  char *format; // [sp+10h] [bp-1124h]
  char *v47; // [sp+18h] [bp-111Ch]
  char *v48; // [sp+20h] [bp-1114h]
  double *v49; // [sp+28h] [bp-110Ch]
  char v50[92]; // [sp+34h] [bp-1100h] BYREF
  char v51[160]; // [sp+90h] [bp-10A4h] BYREF
  char v52[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -14756;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v52, 0x1000u, 0, 1247928, "judge_load_config");
  V_UNLOCK();
  zlog(
    *v2,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "judge_load_config",
    17,
    536,
    20,
    v52);
  if ( a1 )
  {
    file = json_load_file(a1, 0, v50);
    v4 = file;
    if ( !file || (v5 = *(_DWORD *)file) != 0 )
    {
      V_LOCK();
      v45 = a1;
      v6 = 0;
      logfmt_raw(v52, 0x1000u, 0, 1247956, "judge_load_config", v45, v51);
      V_UNLOCK();
      v7 = *v2;
      v8 = 100;
      v9 = 551;
LABEL_5:
      zlog(
        v7,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "judge_load_config",
        17,
        v9,
        v8,
        v52);
      return v6;
    }
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, 1247996, "judge_load_config");
    V_UNLOCK();
    zlog(
      *v2,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "judge_load_config",
      17,
      554,
      20,
      v52);
    v11 = (_DWORD *)json_object_get(v4, "pools");
    v12 = v11;
    if ( !v11 || *v11 != 1 )
      goto LABEL_8;
    v22 = (char *)&unk_16546C;
    v23 = json_array_size(v11);
    LOWORD(v24) = -6072;
    LOWORD(v25) = -21260;
    LOWORD(v26) = -6068;
    HIWORD(v24) = ((unsigned int)&loc_12D5A6 + 2) >> 16;
    HIWORD(v25) = (unsigned int)"e_lane" >> 16;
    HIWORD(v26) = ((unsigned int)&loc_12D5AA + 2) >> 16;
    dword_165468 = (int)v23;
    v47 = v24;
    format = v25;
    v48 = v26;
    v49 = v4;
    while ( (unsigned int)json_array_size(v12) > v5 )
    {
      v27 = json_array_get(v12, v5);
      v28 = v27;
      if ( !v27 )
        break;
      v29 = __clz(v5 - 3);
      ++v5;
      v30 = v29 >> 5;
      if ( *v27 )
        v30 = 1;
      if ( v30 )
        break;
      v31 = (_DWORD *)json_object_get(v27, v47);
      if ( !v31 )
        break;
      if ( *v31 != 2 )
        break;
      v32 = json_string_value(v31);
      snprintf(v22, 0x100u, format, v32);
      v33 = (_DWORD *)json_object_get(v28, v48);
      if ( !v33 )
        break;
      if ( *v33 != 2 )
        break;
      v34 = json_string_value(v33);
      snprintf(v22 + 256, 0x100u, format, v34);
      v35 = (_DWORD *)json_object_get(v28, "pass");
      if ( !v35 || *v35 != 2 )
        break;
      v36 = json_string_value(v35);
      snprintf(v22 + 512, 0x100u, format, v36);
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, 1248024, v22, v22 + 256, v22 + 512);
      V_UNLOCK();
      v22 += 768;
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "judge_load_config",
        17,
        578,
        20,
        v52);
    }
    v4 = v49;
    v37 = (const char *)&unk_16546C;
    v38 = total_pools;
    if ( total_pools == dword_165468 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v6 = 0;
        goto LABEL_9;
      }
      v39 = 0;
      v40 = pools - 4;
      while ( 1 )
      {
        v44 = *(_DWORD *)(v40 + 4);
        v40 += 4;
        v43 = v44;
        ++v39;
        if ( strcmp(*(const char **)(v44 + 8), v37) )
          break;
        v41 = strcmp(*(const char **)(v43 + 12), v37 + 256);
        v42 = v37 + 512;
        v37 += 768;
        if ( v41 || strcmp(*(const char **)(v43 + 16), v42) )
          break;
        if ( v38 == v39 )
          goto LABEL_8;
      }
    }
    v6 = 1;
LABEL_9:
    json_object_get(v4, "bitmain-freq-level");
    v13 = (_DWORD *)json_object_get(v4, "bitmain-fan-ctrl");
    if ( v13 )
    {
      if ( (unsigned int)(*v13 - 5) <= 1 )
      {
        LOWORD(v14) = 25120;
        HIWORD(v14) = (unsigned int)&g_miner_version[72] >> 16;
        v15 = *v13 == 5;
        if ( (unsigned __int8)*v14 != v15 )
        {
          v6 |= 4u;
          *v14 = v15;
        }
      }
    }
    v16 = (_DWORD *)json_object_get(v4, "bitmain-fan-pwm");
    if ( v16 )
    {
      if ( *v16 == 2 )
      {
        v20 = (const char *)json_string_value(v16);
        v21 = strtol(v20, 0, 10);
        if ( fan_pwm != v21 )
        {
          v6 |= 8u;
          fan_pwm = v21;
        }
      }
    }
    if ( *((_DWORD *)v4 + 1) != -1 )
    {
      v17 = (unsigned int *)v4 + 1;
      __dmb(0xBu);
      do
      {
        v18 = __ldrex(v17);
        v19 = v18 - 1;
      }
      while ( __strex(v19, v17) );
      if ( !v19 )
        json_delete(v4);
    }
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, 1248036, v6);
    V_UNLOCK();
    v7 = *v2;
    v8 = 20;
    v9 = 637;
    goto LABEL_5;
  }
  V_LOCK();
  logfmt_raw(v52, 0x1000u, 0, 1247940, "judge_load_config");
  V_UNLOCK();
  zlog(
    *v2,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "judge_load_config",
    17,
    545,
    100,
    v52);
  return 0;
}
