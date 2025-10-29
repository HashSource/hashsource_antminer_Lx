int __fastcall rpc2_login_decode(_DWORD *a1, int a2)
{
  char *v3; // r1
  _DWORD *v5; // r0
  void *v6; // r7
  _BYTE *v7; // r0
  _BYTE *v8; // r6
  char *v9; // r1
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  int *v13; // r3
  int v14; // r1
  int *v15; // r2
  int v16; // r4
  int v17; // lr
  int v18; // r12
  int v19; // r0
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  int v24; // r3
  _DWORD *v25; // r5
  int v26; // r0
  int v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // r1
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r3
  char v35[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v3) = 9820;
  HIWORD(v3) = (unsigned int)"RIBE_SUCCESS" >> 16;
  v5 = (_DWORD *)json_object_get(a1, v3);
  v6 = v5;
  if ( !v5 )
  {
    V_LOCK();
    LOWORD(v24) = 13700;
    LOWORD(v25) = -14756;
    HIWORD(v24) = (unsigned int)"atus.c" >> 16;
    HIWORD(v25) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v35, 0x1000u, 0, v24);
    V_UNLOCK();
    v26 = *v25;
    v27 = 96;
    goto LABEL_12;
  }
  v7 = json_string_value(v5);
  v8 = v7;
  if ( v7 )
  {
    if ( *v7 == 111 && v7[1] == 107 && !v7[2] )
      goto LABEL_6;
    V_LOCK();
    LOWORD(v31) = 13748;
    LOWORD(v25) = -14756;
    HIWORD(v31) = (unsigned int)"temp" >> 16;
    HIWORD(v25) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v35, 0x1000u, 0, v31, v8);
    V_UNLOCK();
    v26 = *v25;
    v27 = 107;
LABEL_12:
    LOWORD(v28) = 13488;
    HIWORD(v28) = (unsigned int)"ction_to_pool" >> 16;
    zlog(v26, v28, 163, "rpc2_login_decode", 17, v27, 100, v35);
    V_LOCK();
    LOWORD(v29) = 13828;
    HIWORD(v29) = (unsigned int)"happened!" >> 16;
    logfmt_raw(v35, 0x1000u, 0, v29, "rpc2_login_decode");
    V_UNLOCK();
    LOWORD(v30) = 13488;
    HIWORD(v30) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v25, v30, 163, "rpc2_login_decode", 17, 148, 80, v35);
    return 0;
  }
  if ( v6 != json_true() )
  {
    V_LOCK();
    LOWORD(v33) = 13720;
    LOWORD(v25) = -14756;
    HIWORD(v33) = (unsigned int)"h" >> 16;
    HIWORD(v25) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v35, 0x1000u, 0, v33);
    V_UNLOCK();
    v26 = *v25;
    v27 = 102;
    goto LABEL_12;
  }
LABEL_6:
  LOWORD(v9) = 13888;
  HIWORD(v9) = (unsigned int)"e last_30min: %f" >> 16;
  v10 = (_DWORD *)json_object_get(a1, v9);
  if ( !v10 )
  {
    V_LOCK();
    LOWORD(v32) = 13776;
    LOWORD(v25) = -14756;
    HIWORD(v32) = (unsigned int)"eed limit" >> 16;
    HIWORD(v25) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v35, 0x1000u, 0, v32);
    V_UNLOCK();
    v26 = *v25;
    v27 = 115;
    goto LABEL_12;
  }
  v11 = json_string_value(v10);
  v12 = v11;
  if ( !v11 )
  {
    V_LOCK();
    LOWORD(v34) = 13792;
    LOWORD(v25) = -14756;
    HIWORD(v34) = (unsigned int)"error exceed limit" >> 16;
    HIWORD(v25) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v35, 0x1000u, 0, v34);
    V_UNLOCK();
    v26 = *v25;
    v27 = 120;
    goto LABEL_12;
  }
  v13 = v11;
  v14 = a2 + 1852;
  v15 = v11 + 16;
  do
  {
    v16 = *v13;
    v13 += 4;
    v17 = *(v13 - 3);
    v14 += 16;
    v18 = *(v13 - 2);
    v19 = *(v13 - 1);
    *(_DWORD *)(v14 - 16) = v16;
    *(_DWORD *)(v14 - 12) = v17;
    *(_DWORD *)(v14 - 8) = v18;
    *(_DWORD *)(v14 - 4) = v19;
  }
  while ( v13 != v15 );
  V_LOCK();
  LOWORD(v20) = 13816;
  HIWORD(v20) = (unsigned int)"ow hashrate happened!" >> 16;
  logfmt_raw(v35, 0x1000u, 0, v20, v12);
  V_UNLOCK();
  LOWORD(v21) = -14756;
  HIWORD(v21) = (unsigned int)&unk_16E68C >> 16;
  LOWORD(v22) = 13488;
  HIWORD(v22) = (unsigned int)"ction_to_pool" >> 16;
  zlog(*v21, v22, 163, "rpc2_login_decode", 17, 126, 20, v35);
  return 1;
}
