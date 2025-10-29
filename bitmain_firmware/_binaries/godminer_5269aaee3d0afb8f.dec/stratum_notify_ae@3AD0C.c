int __fastcall stratum_notify_ae(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r8
  _DWORD *v7; // r0
  unsigned __int8 *v8; // r6
  _DWORD *v9; // r0
  int v10; // r10
  _DWORD *v11; // r0
  unsigned __int8 *v12; // r7
  _DWORD *v13; // r0
  bool v14; // r5
  _BOOL4 v15; // r3
  int v16; // r4
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r1
  void *v21; // r0
  char *v22; // r6
  __int64 v23; // r2
  int v24; // r12
  int v25; // r1
  int v26; // r2
  int v27; // r1
  int v28; // lr
  int v29; // r12
  int v30; // r2
  int v31; // r1
  _DWORD *v32; // r5
  size_t v33; // r0
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  char v38[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (unsigned __int8 *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  v11 = json_array_get(a3, 3u);
  v12 = (unsigned __int8 *)json_string_value(v11);
  v13 = json_array_get(a3, 4u);
  v14 = (char)v13;
  if ( v13 )
    v14 = *json_array_get(a3, 4u) == 5;
  v15 = v8 == 0;
  if ( !v6 )
    v15 = 1;
  if ( v12 )
    v16 = v15;
  else
    v16 = 1;
  if ( !v16 && strlen((const char *)v8) == 64 && strlen((const char *)v12) == 8 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
    v21 = (void *)a2[22];
    if ( v21 )
    {
      free(v21);
      a2[22] = 0;
    }
    a2[22] = (int)_strdup(v6);
    hex2bin((int)(a2 + 23), v8, 32);
    a2[453] = v10;
    hex2bin((int)(a2 + 84), v12, 4);
    v22 = (char *)a2[400];
    v23 = *((_QWORD *)a2 + 247);
    *((_BYTE *)a2 + 436) = v14;
    *((_QWORD *)a2 + 55) = v23;
    if ( v22 )
    {
      if ( !strcmp(v22, v6) )
      {
        V_LOCK();
        LOWORD(v36) = 9128;
        HIWORD(v36) = (unsigned int)"le_method_vbk" >> 16;
        LOWORD(v32) = -14756;
        logfmt_raw(v38, 0x1000u, 0, v36, a2[400], v6);
        HIWORD(v32) = (unsigned int)&unk_16E68C >> 16;
        V_UNLOCK();
        LOWORD(v37) = 8724;
        HIWORD(v37) = (unsigned int)"er-origin_master/frontend/frontend_ltc/frontend_ltc.c" >> 16;
        zlog(*v32, v37, 155, "stratum_notify_ae", 17, 152, 20, v38);
        if ( strlen(v6) <= 0x1F )
        {
LABEL_23:
          v22 = (char *)a2[400];
          if ( !v22 )
            goto LABEL_19;
          goto LABEL_18;
        }
LABEL_22:
        V_LOCK();
        v33 = strlen(v6);
        LOWORD(v34) = 9184;
        HIWORD(v34) = (unsigned int)"le_response_vbk" >> 16;
        logfmt_raw(v38, 0x1000u, 0, v34, v6, v33);
        V_UNLOCK();
        LOWORD(v35) = 8724;
        HIWORD(v35) = (unsigned int)"er-origin_master/frontend/frontend_ltc/frontend_ltc.c" >> 16;
        zlog(*v32, v35, 155, "stratum_notify_ae", 17, 155, 100, v38);
        goto LABEL_23;
      }
      if ( strlen(v6) <= 0x1F )
      {
LABEL_18:
        free(v22);
        a2[400] = 0;
LABEL_19:
        a2[400] = (int)_strdup(v6);
        v24 = a2[24];
        v25 = a2[25];
        v26 = a2[26];
        a2[114] = a2[23];
        a2[115] = v24;
        a2[116] = v25;
        a2[117] = v26;
        v27 = a2[29];
        v28 = a2[27];
        v29 = a2[28];
        a2[121] = a2[30];
        v30 = *a2;
        a2[120] = v27;
        v31 = a2[453];
        a2[118] = v28;
        a2[119] = v29;
        a2[399] = v31;
        *((_QWORD *)a2 + 56) = v30;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
        return 1;
      }
    }
    else if ( strlen(v6) <= 0x1F )
    {
      goto LABEL_19;
    }
    LOWORD(v32) = -14756;
    HIWORD(v32) = (unsigned int)&unk_16E68C >> 16;
    goto LABEL_22;
  }
  V_LOCK();
  LOWORD(v17) = 9092;
  HIWORD(v17) = (unsigned int)"tum_handle_method_vbk" >> 16;
  logfmt_raw(v38, 0x1000u, 0, v17);
  V_UNLOCK();
  LOWORD(v18) = -14756;
  HIWORD(v18) = (unsigned int)&unk_16E68C >> 16;
  LOWORD(v19) = 8724;
  HIWORD(v19) = (unsigned int)"er-origin_master/frontend/frontend_ltc/frontend_ltc.c" >> 16;
  zlog(*v18, v19, 155, "stratum_notify_ae", 17, 137, 100, v38);
  return 0;
}
