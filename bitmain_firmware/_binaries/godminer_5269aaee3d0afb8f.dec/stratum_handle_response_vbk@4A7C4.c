int __fastcall stratum_handle_response_vbk(int a1, int a2, int a3)
{
  double *v5; // r0
  double *v6; // r4
  int command_type; // r0
  int v8; // r5
  char *v9; // r7
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v14; // r3
  _DWORD *v15; // r3
  int v16; // r1
  char *v17; // r1
  _DWORD *v18; // r0
  char *v19; // r1
  _DWORD *v20; // r0
  _DWORD *v21; // r9
  int v22; // r3
  int v23; // r1
  const char *v24; // r1
  int v25; // r0
  int v26; // r3
  int v27; // r1
  char v28[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v29[160]; // [sp+70h] [bp-10A4h] BYREF
  char v30[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = json_loads(a2, 0, v28);
  v6 = v5;
  if ( v5 )
  {
    command_type = get_command_type(v5);
    if ( command_type == 6 )
    {
      v8 = 1;
      v9 = 0;
    }
    else if ( command_type == 5 )
    {
      LOWORD(v17) = 18336;
      HIWORD(v17) = (unsigned int)&unk_136768 >> 16;
      v18 = (_DWORD *)json_object_get(v6, v17);
      LOWORD(v19) = -7764;
      HIWORD(v19) = (unsigned int)"adjust freq to %d" >> 16;
      LOWORD(v21) = -14756;
      v20 = (_DWORD *)json_object_get(v18, v19);
      v9 = (char *)json_string_value(v20);
      HIWORD(v21) = (unsigned int)&unk_16E68C >> 16;
      V_LOCK();
      LOWORD(v22) = 18932;
      HIWORD(v22) = (unsigned int)"/backend_ae/backend_ae.c" >> 16;
      logfmt_raw(v30, 0x1000u, 0, v22, "stratum_handle_response_vbk", v9);
      V_UNLOCK();
      LOWORD(v23) = 17664;
      HIWORD(v23) = (unsigned int)"Setting_open_cores_AE" >> 16;
      zlog(*v21, v23, 157, "stratum_handle_response_vbk", 27, 484, 20, v30);
      LOWORD(v24) = 18992;
      HIWORD(v24) = (unsigned int)"%d iic_addr %d" >> 16;
      v25 = strcmp(v9, v24);
      v8 = v25;
      if ( v25 )
      {
        v8 = 0;
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 8))(a3);
        pool_tclear(a3, (_BYTE *)(a3 + 2084), 0);
        V_LOCK();
        LOWORD(v26) = 19008;
        HIWORD(v26) = (unsigned int)"fail to read pic temp for chain %d iic_addr %d" >> 16;
        logfmt_raw(v30, 0x1000u, 0, v26);
        V_UNLOCK();
        LOWORD(v27) = 17664;
        HIWORD(v27) = (unsigned int)"Setting_open_cores_AE" >> 16;
        zlog(*v21, v27, 157, "stratum_handle_response_vbk", 27, 488, 20, v30);
      }
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    share_result(v8, 0, v9, (double *)a3);
    if ( *((_DWORD *)v6 + 1) != -1 )
    {
      v10 = (unsigned int *)v6 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v6);
    }
    return 1;
  }
  else
  {
    V_LOCK();
    LOWORD(v14) = 9784;
    HIWORD(v14) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v14, *(_DWORD *)v28, v29);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v16) = 17664;
    HIWORD(v16) = (unsigned int)"Setting_open_cores_AE" >> 16;
    zlog(*v15, v16, 157, "stratum_handle_response_vbk", 27, 474, 100, v30);
    return 0;
  }
}
