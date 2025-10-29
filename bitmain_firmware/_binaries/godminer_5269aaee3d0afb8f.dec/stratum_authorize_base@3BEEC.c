int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v4; // r9
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r0
  const char *v8; // r1
  char *v9; // r7
  int v10; // r8
  void *v12; // r6
  double *v13; // r5
  char *v14; // r1
  int v15; // r0
  char *v16; // r1
  _DWORD *v17; // r10
  int v18; // r0
  char *v19; // r1
  _DWORD *v20; // r6
  int v21; // r0
  int v22; // r0
  _BOOL4 v23; // r3
  int v24; // r9
  int v25; // r3
  _DWORD *v26; // r6
  int v27; // r1
  int v28; // r3
  int v29; // r1
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r2
  int v33; // r3
  _DWORD *v34; // r3
  int v35; // r1
  char v36[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v37[160]; // [sp+70h] [bp-10A0h] BYREF
  char v38[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (const char *)a2[4];
  v5 = strlen((const char *)a2[3]);
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  LOWORD(v8) = 10292;
  v9 = v7;
  HIWORD(v8) = (unsigned int)"uthentication response command!" >> 16;
  ++a2[522];
  sprintf(v7, v8);
  v10 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
LABEL_2:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v12 )
    {
      v10 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v13 = json_loads((int)v12, 0, v36);
  free(v12);
  if ( !v13 )
  {
    v10 = 0;
    V_LOCK();
    LOWORD(v33) = 9784;
    HIWORD(v33) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    logfmt_raw(v38, 0x1000u, 0, v33, *(_DWORD *)v36, v37);
    V_UNLOCK();
    LOWORD(v34) = -14756;
    HIWORD(v34) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v35) = 9536;
    HIWORD(v35) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(*v34, v35, 145, "stratum_authorize_base", 22, 224, 100, v38);
    free(v9);
    return v10;
  }
  LOWORD(v14) = 9820;
  HIWORD(v14) = (unsigned int)"RIBE_SUCCESS" >> 16;
  v15 = json_object_get(v13, v14);
  LOWORD(v16) = -20764;
  v17 = (_DWORD *)v15;
  HIWORD(v16) = (unsigned int)&unk_13CFAC >> 16;
  v18 = json_object_get(v13, v16);
  LOWORD(v19) = 13888;
  v20 = (_DWORD *)v18;
  HIWORD(v19) = (unsigned int)"e last_30min: %f" >> 16;
  v21 = json_object_get(v13, v19);
  v22 = json_integer_value(v21);
  v23 = v17 == 0;
  v24 = v22;
  if ( a2[522] - 1 != v22 )
    v23 = 1;
  if ( v23 || *v17 == 6 || v20 && *v20 != 7 )
  {
    V_LOCK();
    LOWORD(v25) = 10352;
    HIWORD(v25) = (unsigned int)"\",\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"update_frequency_ms\":{\"data\":%d,\"type\":\"FREQUENCY_MS\"}}" >> 16;
    LOWORD(v26) = -14756;
    logfmt_raw(v38, 0x1000u, 0, v25, v24);
    HIWORD(v26) = (unsigned int)&unk_16E68C >> 16;
    V_UNLOCK();
    LOWORD(v27) = 9536;
    HIWORD(v27) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    v10 = 0;
    zlog(*v26, v27, 145, "stratum_authorize_base", 22, 234, 100, v38);
    V_LOCK();
    LOWORD(v28) = 10396;
    HIWORD(v28) = (unsigned int)"\"},\"update_frequency_ms\":{\"data\":%d,\"type\":\"FREQUENCY_MS\"}}" >> 16;
    logfmt_raw(v38, 0x1000u, 0, v28);
    V_UNLOCK();
    LOWORD(v29) = 9536;
    HIWORD(v29) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(*v26, v29, 145, "stratum_authorize_base", 22, 236, 100, v38);
  }
  free(v9);
  if ( *((_DWORD *)v13 + 1) == -1 )
    return v10;
  v30 = (unsigned int *)v13 + 1;
  __dmb(0xBu);
  do
  {
    v31 = __ldrex(v30);
    v32 = v31 - 1;
  }
  while ( __strex(v32, v30) );
  if ( v32 )
    return v10;
  json_delete(v13);
  return v10;
}
