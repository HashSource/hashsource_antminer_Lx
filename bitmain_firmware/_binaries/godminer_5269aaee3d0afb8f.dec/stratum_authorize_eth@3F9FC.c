int __fastcall stratum_authorize_eth(int a1, _DWORD *a2)
{
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r3
  int v7; // r1
  char *v8; // r11
  const char *v9; // r10
  size_t v10; // r6
  size_t v11; // r0
  char *v12; // r0
  const char *v13; // r1
  char *v14; // r9
  int v15; // r10
  void *v17; // r6
  int v18; // r3
  int v19; // r3
  int v20; // r1
  int v21; // r0
  time_t *v22; // r3
  time_t v23; // r1
  const char *v24; // r1
  double *v25; // r5
  char *v26; // r1
  int v27; // r0
  char *v28; // r1
  _DWORD *v29; // r6
  int v30; // r0
  char *v31; // r1
  _DWORD *v32; // r11
  int v33; // r0
  int v34; // r0
  int v35; // r3
  int v36; // r1
  unsigned int *v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r2
  int v40; // r3
  int v41; // r3
  int v42; // r1
  int v43; // r3
  int v44; // r3
  int v45; // r1
  const char *v46; // [sp+14h] [bp-1108h]
  int v47; // [sp+14h] [bp-1108h]
  _DWORD s[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v49[160]; // [sp+78h] [bp-10A4h] BYREF
  time_t v50; // [sp+118h] [bp-1004h] BYREF
  char v51; // [sp+11Ch] [bp-1000h]
  unsigned __int8 v52; // [sp+12Ah] [bp-FF2h]
  unsigned __int8 v53; // [sp+12Bh] [bp-FF1h]
  unsigned __int8 v54; // [sp+12Ch] [bp-FF0h]
  unsigned __int8 v55; // [sp+12Dh] [bp-FEFh]
  unsigned __int8 v56; // [sp+12Eh] [bp-FEEh]
  unsigned __int8 v57; // [sp+12Fh] [bp-FEDh]

  if ( a2[5] )
  {
    V_LOCK();
    LOWORD(v4) = 12848;
    HIWORD(v4) = (unsigned int)" %d min_fb_vol %f qualified_vol %f" >> 16;
    logfmt_raw((char *)&v50, 0x1000u, 0, v4, a2[5]);
    LOWORD(v5) = -14756;
    V_UNLOCK();
    HIWORD(v5) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v6) = 12228;
    LOWORD(v7) = 12592;
    HIWORD(v6) = (unsigned int)"bitmain_set_voltage failed" >> 16;
    HIWORD(v7) = (unsigned int)"working_voltage_raw     = %d" >> 16;
    zlog(*v5, v7, 157, v6, 21, 174, 60, &v50);
    v8 = (char *)a2[5];
    goto LABEL_3;
  }
  LOWORD(v5) = -14756;
  V_LOCK();
  LOWORD(v18) = 12548;
  HIWORD(v18) = (unsigned int)"Power init:" >> 16;
  HIWORD(v5) = (unsigned int)&unk_16E68C >> 16;
  logfmt_raw((char *)&v50, 0x1000u, 0, v18);
  V_UNLOCK();
  LOWORD(v19) = 12228;
  LOWORD(v20) = 12592;
  HIWORD(v19) = (unsigned int)"bitmain_set_voltage failed" >> 16;
  HIWORD(v20) = (unsigned int)"working_voltage_raw     = %d" >> 16;
  zlog(*v5, v20, 157, v19, 21, 156, 20, &v50);
  memset(s, 0, 32);
  v21 = socket(2, 1, 0);
  if ( v21 < 0 )
  {
    perror("socket");
  }
  else
  {
    LOWORD(v22) = 12760;
    HIWORD(v22) = (unsigned int)"e = %f\n" >> 16;
    v23 = v22[1];
    v50 = *v22;
    v51 = v23;
    if ( ioctl(v21, 0x8927u, &v50) >= 0 )
    {
      LOWORD(v24) = 12776;
      HIWORD(v24) = (unsigned int)"mal voltage = %.2f" >> 16;
      sprintf((char *)s, v24, v52, v53, v54, v55, v56, v57);
      v8 = _strdup((const char *)s);
      a2[5] = v8;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  LOWORD(v43) = 12804;
  HIWORD(v43) = (unsigned int)"ltage can not meet the target! centi_voltage %d min_fb_vol %f qualified_vol %f" >> 16;
  logfmt_raw((char *)&v50, 0x1000u, 0, v43);
  V_UNLOCK();
  LOWORD(v44) = 12228;
  LOWORD(v45) = 12592;
  HIWORD(v44) = (unsigned int)"bitmain_set_voltage failed" >> 16;
  HIWORD(v45) = (unsigned int)"working_voltage_raw     = %d" >> 16;
  zlog(*v5, v45, 157, v44, 21, 165, 20, &v50);
  time(&v50);
  sprintf((char *)s, "%d", v50);
  v8 = _strdup((const char *)s);
  a2[5] = v8;
LABEL_3:
  v9 = (const char *)a2[3];
  v10 = strlen(v9);
  v46 = (const char *)a2[4];
  v11 = strlen(v46);
  v12 = (char *)malloc(v10 + v11 + 128);
  LOWORD(v13) = 12880;
  v14 = v12;
  HIWORD(v13) = (unsigned int)"%f" >> 16;
  sprintf(v12, v13, v8, v9, v46, 2);
  v15 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v14);
  if ( !v15 )
  {
LABEL_4:
    free(v14);
    return v15;
  }
  while ( 1 )
  {
    v17 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v17 )
    {
      v15 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v17);
  }
  v25 = json_loads((int)v17, 0, (char *)s);
  free(v17);
  if ( !v25 )
  {
    V_LOCK();
    LOWORD(v40) = 9784;
    HIWORD(v40) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    v15 = 0;
    logfmt_raw((char *)&v50, 0x1000u, 0, v40, s[0], v49);
    V_UNLOCK();
    LOWORD(v41) = 12228;
    LOWORD(v42) = 12592;
    HIWORD(v41) = (unsigned int)"bitmain_set_voltage failed" >> 16;
    HIWORD(v42) = (unsigned int)"working_voltage_raw     = %d" >> 16;
    zlog(*v5, v42, 157, v41, 21, 200, 100, &v50);
    free(v14);
    return v15;
  }
  LOWORD(v26) = 9820;
  HIWORD(v26) = (unsigned int)"RIBE_SUCCESS" >> 16;
  v27 = json_object_get(v25, v26);
  LOWORD(v28) = -20764;
  v29 = (_DWORD *)v27;
  HIWORD(v28) = (unsigned int)&unk_13CFAC >> 16;
  v30 = json_object_get(v25, v28);
  LOWORD(v31) = 13888;
  v32 = (_DWORD *)v30;
  HIWORD(v31) = (unsigned int)"e last_30min: %f" >> 16;
  v33 = json_object_get(v25, v31);
  v34 = json_integer_value(v33);
  if ( v29 && *v29 != 6 && (!v32 || *v32 == 7) )
  {
    a2[522] = 40;
  }
  else
  {
    v47 = v34;
    v15 = 0;
    V_LOCK();
    logfmt_raw((char *)&v50, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v47);
    V_UNLOCK();
    LOWORD(v35) = 12228;
    LOWORD(v36) = 12592;
    HIWORD(v35) = (unsigned int)"bitmain_set_voltage failed" >> 16;
    HIWORD(v36) = (unsigned int)"working_voltage_raw     = %d" >> 16;
    zlog(*v5, v36, 157, v35, 21, 210, 100, &v50);
  }
  free(v14);
  if ( *((_DWORD *)v25 + 1) == -1 )
    return v15;
  v37 = (unsigned int *)v25 + 1;
  __dmb(0xBu);
  do
  {
    v38 = __ldrex(v37);
    v39 = v38 - 1;
  }
  while ( __strex(v39, v37) );
  if ( v39 )
    return v15;
  json_delete(v25);
  return v15;
}
