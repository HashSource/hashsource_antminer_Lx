bool __fastcall stratum_capabilities_vbk(int a1, int a2)
{
  int v2; // r0
  void *v3; // r6
  double *v4; // r0
  double *v5; // r4
  int v6; // r3
  _BOOL4 v7; // r5
  _DWORD *v8; // r3
  int v9; // r1
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  char *v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  const char *v17; // r0
  const char *v18; // r8
  size_t v19; // r0
  const char *v20; // r0
  int v21; // r11
  int v22; // r10
  int v23; // r9
  int v24; // r3
  _DWORD *v25; // r6
  int v26; // r1
  int v27; // r3
  _DWORD *v28; // r6
  int v29; // r1
  int v30; // r3
  _DWORD *v31; // r6
  int v32; // r1
  int v33; // r3
  _DWORD *v34; // r3
  int v35; // r1
  int v36; // r3
  _DWORD *v37; // r3
  int v38; // r1
  int v39; // r3
  int *v40; // r3
  int v41; // r1
  int v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r3
  int v46; // r1
  int v47; // r3
  int v48; // r3
  _DWORD *v49; // r3
  int v50; // r1
  int v51; // [sp+4h] [bp-1118h]
  int v52; // [sp+10h] [bp-110Ch]
  int v53; // [sp+14h] [bp-1108h]
  int v54[23]; // [sp+1Ch] [bp-1100h] BYREF
  char v55[160]; // [sp+78h] [bp-10A4h] BYREF
  char v56[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v3 = (void *)v2;
  if ( !v2 )
  {
    V_LOCK();
    LOWORD(v33) = 18264;
    HIWORD(v33) = (unsigned int)"alid blob" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v33, "stratum_capabilities_vbk");
    V_UNLOCK();
    LOWORD(v34) = -14756;
    HIWORD(v34) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v35) = 17664;
    HIWORD(v35) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
    zlog(*v34, v35, 157, "stratum_capabilities_vbk", 24, 86, 100, v56);
    return 0;
  }
  v4 = json_loads(v2, 0, (char *)v54);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v36) = 9784;
    HIWORD(v36) = (unsigned int)"orkspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/system_info.c" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v36, v54[0], v55);
    V_UNLOCK();
    LOWORD(v37) = -14756;
    HIWORD(v37) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v38) = 17664;
    HIWORD(v38) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
    zlog(*v37, v38, 157, "stratum_capabilities_vbk", 24, 92, 100, v56);
    free(v3);
    return 0;
  }
  if ( !get_command_type(v4) )
  {
    free(v3);
    LOWORD(v14) = 19152;
    HIWORD(v14) = (unsigned int)"height" >> 16;
    v15 = (_DWORD *)json_object_get(v5, v14);
    v16 = (_DWORD *)json_object_get(v15, "data");
    v17 = (const char *)json_string_value(v16);
    v18 = v17;
    if ( !v17 || (v19 = strlen(v17), v19 <= 5) )
    {
      V_LOCK();
      LOWORD(v39) = 19168;
      HIWORD(v39) = (unsigned int)"alid height" >> 16;
      logfmt_raw(v56, 0x1000u, 0, v39);
      V_UNLOCK();
      LOWORD(v40) = -14756;
      LOWORD(v41) = 17664;
      HIWORD(v40) = (unsigned int)&unk_16B55C >> 16;
      HIWORD(v41) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
      v42 = *v40;
      v51 = 106;
LABEL_24:
      v7 = 0;
      zlog(v42, v41, 157, "stratum_capabilities_vbk", 24, v51, 100, v56);
      goto LABEL_5;
    }
    v20 = &v18[v19];
    v21 = *((unsigned __int8 *)v20 - 2);
    v22 = *((unsigned __int8 *)v20 - 3);
    v23 = *((unsigned __int8 *)v20 - 4);
    v7 = *((unsigned __int8 *)v20 - 1) == 49;
    v53 = *((unsigned __int8 *)v20 - 5);
    v52 = *((unsigned __int8 *)v20 - 6);
    if ( *(v20 - 1) != 49 )
    {
      V_LOCK();
      LOWORD(v24) = 19224;
      HIWORD(v24) = (unsigned int)"b %s" >> 16;
      LOWORD(v25) = -14756;
      logfmt_raw(v56, 0x1000u, v7, v24, v18);
      V_UNLOCK();
      LOWORD(v26) = 17664;
      HIWORD(v25) = (unsigned int)&unk_16B55C >> 16;
      HIWORD(v26) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
      zlog(*v25, v26, 157, "stratum_capabilities_vbk", 24, 125, 100, v56);
    }
    if ( v21 != 49 )
    {
      V_LOCK();
      LOWORD(v27) = 19304;
      HIWORD(v27) = (unsigned int)"0\", \"jsonrpc\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"agent\": \"%s\"}}" >> 16;
      LOWORD(v28) = -14756;
      logfmt_raw(v56, 0x1000u, 0, v27, v18);
      v7 = 0;
      V_UNLOCK();
      LOWORD(v29) = 17664;
      HIWORD(v28) = (unsigned int)&unk_16B55C >> 16;
      HIWORD(v29) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
      zlog(*v28, v29, 157, "stratum_capabilities_vbk", 24, 130, 100, v56);
    }
    if ( v22 == 49 )
    {
      if ( v23 == 49 )
      {
        if ( v53 == 49 )
        {
          if ( v52 == 49 )
          {
            if ( v7 )
            {
              V_LOCK();
              LOWORD(v48) = 19748;
              HIWORD(v48) = (unsigned int)"mplate" >> 16;
              logfmt_raw(v56, 0x1000u, 0, v48, v18);
              V_UNLOCK();
              LOWORD(v49) = -14756;
              HIWORD(v49) = (unsigned int)&unk_16B55C >> 16;
              LOWORD(v50) = 17664;
              HIWORD(v50) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
              zlog(*v49, v50, 157, "stratum_capabilities_vbk", 24, 155, 20, v56);
              goto LABEL_5;
            }
            goto LABEL_20;
          }
          LOWORD(v31) = -14756;
          HIWORD(v31) = (unsigned int)&unk_16B55C >> 16;
LABEL_30:
          V_LOCK();
          LOWORD(v47) = 19652;
          HIWORD(v47) = (unsigned int)"ms\": []}" >> 16;
          logfmt_raw(v56, 0x1000u, 0, v47, v18);
          V_UNLOCK();
          LOWORD(v41) = 17664;
          v42 = *v31;
          v51 = 150;
          HIWORD(v41) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
          goto LABEL_24;
        }
        LOWORD(v31) = -14756;
        HIWORD(v31) = (unsigned int)&unk_16B55C >> 16;
LABEL_29:
        V_LOCK();
        LOWORD(v45) = 19564;
        HIWORD(v45) = (unsigned int)"tum authentication failed" >> 16;
        logfmt_raw(v56, 0x1000u, 0, v45, v18);
        V_UNLOCK();
        LOWORD(v46) = 17664;
        HIWORD(v46) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
        zlog(*v31, v46, 157, "stratum_capabilities_vbk", 24, 145, 100, v56);
        if ( v52 == 49 )
          goto LABEL_20;
        goto LABEL_30;
      }
      LOWORD(v31) = -14756;
      HIWORD(v31) = (unsigned int)&unk_16B55C >> 16;
    }
    else
    {
      V_LOCK();
      LOWORD(v30) = 19392;
      HIWORD(v30) = (unsigned int)": \"%s\"}}" >> 16;
      LOWORD(v31) = -14756;
      logfmt_raw(v56, 0x1000u, 0, v30, v18);
      HIWORD(v31) = (unsigned int)&unk_16B55C >> 16;
      V_UNLOCK();
      LOWORD(v32) = 17664;
      HIWORD(v32) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
      zlog(*v31, v32, 157, "stratum_capabilities_vbk", 24, 135, 100, v56);
      if ( v23 == 49 )
      {
        if ( v53 == 49 )
          goto LABEL_19;
        goto LABEL_29;
      }
    }
    V_LOCK();
    LOWORD(v43) = 19476;
    HIWORD(v43) = (unsigned int)" \"%s\"]}" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v43, v18);
    V_UNLOCK();
    LOWORD(v44) = 17664;
    HIWORD(v44) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
    zlog(*v31, v44, 157, "stratum_capabilities_vbk", 24, 140, 100, v56);
    if ( v53 == 49 )
    {
LABEL_19:
      if ( v52 == 49 )
      {
LABEL_20:
        v7 = 0;
        goto LABEL_5;
      }
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  V_LOCK();
  LOWORD(v6) = 19040;
  HIWORD(v6) = (unsigned int)" string" >> 16;
  v7 = 0;
  logfmt_raw(v56, 0x1000u, 0, v6, v3);
  V_UNLOCK();
  LOWORD(v8) = -14756;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = 17664;
  HIWORD(v9) = (unsigned int)"s\",\"0x%s\"]}" >> 16;
  zlog(*v8, v9, 157, "stratum_capabilities_vbk", 24, 98, 100, v56);
  free(v3);
LABEL_5:
  if ( *((_DWORD *)v5 + 1) == -1 )
    return v7;
  v10 = (unsigned int *)v5 + 1;
  __dmb(0xBu);
  do
  {
    v11 = __ldrex(v10);
    v12 = v11 - 1;
  }
  while ( __strex(v12, v10) );
  if ( v12 )
    return v7;
  json_delete(v5);
  return v7;
}
