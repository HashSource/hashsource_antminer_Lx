int __fastcall scanhash(_DWORD *a1)
{
  int v1; // r0
  unsigned int v2; // r0
  int v3; // r3
  int v4; // r3
  char v6[72]; // [sp+1Ch] [bp-1248h] BYREF
  char v7; // [sp+101Fh] [bp-245h] BYREF
  int v8; // [sp+1020h] [bp-244h] BYREF
  int v9; // [sp+1024h] [bp-240h] BYREF
  char v10[512]; // [sp+1028h] [bp-23Ch] BYREF
  unsigned int v11; // [sp+1228h] [bp-3Ch]
  unsigned int v12; // [sp+122Ch] [bp-38h]
  unsigned int v13; // [sp+1230h] [bp-34h]
  void *v14; // [sp+1234h] [bp-30h]
  void *ptr; // [sp+1238h] [bp-2Ch]
  int v16; // [sp+123Ch] [bp-28h]
  char *s; // [sp+1240h] [bp-24h]
  _DWORD *v18; // [sp+1244h] [bp-20h]
  int v19; // [sp+1248h] [bp-1Ch]
  unsigned int v20; // [sp+124Ch] [bp-18h]
  int v21; // [sp+1250h] [bp-14h]
  unsigned int v22; // [sp+1254h] [bp-10h]

  v18 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "scanhash", v18[62]);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v6, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_base.c",
    160,
    "scanhash",
    8,
    110,
    40,
    v6);
  prctl(15, s);
  v16 = v18[215];
  memset(v10, 0, sizeof(v10));
  ptr = calloc(1u, v18[208]);
  v14 = calloc(1u, v18[209]);
  v19 = 0;
  v20 = 1;
  v21 = 0;
  v22 = 1;
  while ( 1 )
  {
    memset(v10, 0, sizeof(v10));
    queue_dequeue(v16, v10, 1u);
    if ( *((_BYTE *)v18 + 1020) )
    {
      *((_BYTE *)v18 + 1020) = 0;
      goto LABEL_43;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)v10[0] != 170 )
      {
        queue_dequeue(v16, v10, 1u);
        sub_AB334((int)(v18 + 286), 1, (unsigned __int8 *)v10, v18[63]);
        if ( *((_BYTE *)v18 + 1020) )
        {
          *((_BYTE *)v18 + 1020) = 0;
          goto LABEL_43;
        }
      }
      queue_dequeue(v16, &v10[1], 1u);
      if ( *((_BYTE *)v18 + 1020) )
      {
        *((_BYTE *)v18 + 1020) = 0;
        goto LABEL_43;
      }
      if ( v10[1] == 85 )
        break;
      v10[0] = v10[1];
      sub_AB334((int)(v18 + 286), 2, (unsigned __int8 *)v10, v18[63]);
    }
    queue_dequeue(v16, &v10[2], v18[213] - 2);
    v13 = ((int (__fastcall *)(char *))v18[44])(v10);
    queue_dequeue(v16, &v10[v18[213]], v13);
    sub_AB334((int)(v18 + 286), v18[213] + v13, (unsigned __int8 *)v10, v18[63]);
    if ( *((_BYTE *)v18 + 1020) )
      break;
    memset(ptr, 0, v18[208]);
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v2 = ((int (__fastcall *)(_DWORD *, char *, void *, char *, void *, int *, int *))v18[18])(
           v18,
           v10,
           ptr,
           &v7,
           v14,
           &v9,
           &v8);
    v12 = v2;
    if ( v2 == 100 )
    {
      if ( (unsigned __int8)queue_enqueue(v18[217], v10, v13 + 3) != 1 && ++v19 >= v20 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false", v18[63]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_base.c",
          160,
          "scanhash",
          8,
          220,
          40,
          v6);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d", v19, v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_base.c",
          160,
          "scanhash",
          8,
          221,
          40,
          v6);
        v4 = 10000000;
        if ( 10 * v20 < 0x989680 )
          v4 = 10 * v20;
        v20 = v4;
        v19 = 0;
      }
    }
    else if ( v2 > 0x64 )
    {
      if ( v2 == 101 )
        ++*(_QWORD *)(v18[114] + 40);
    }
    else if ( !v2 && *((_BYTE *)v18 + 258) == 1 )
    {
      if ( *((_BYTE *)v18 + v8 + 536) != 1 && v7 && platform_check_repeat_nonce(v18, v9, (unsigned __int8 *)v14) )
      {
        ++*(_QWORD *)(v18[114] + 48 * v9 + 32);
      }
      else
      {
        v11 = ((int (__fastcall *)(_DWORD *, void *))v18[19])(v18, ptr);
        if ( v11 <= 5 )
        {
          ++*(_QWORD *)(v18[114] + 48 * v9 + 8 * v11);
          if ( v11 <= 1 )
          {
            ++*(_DWORD *)(v18[120] + 4 * v9);
            ++*((_QWORD *)v18 + 56);
            ++*(_QWORD *)&v18[2 * v8 + 142];
            if ( !v11
              && *((_BYTE *)v18 + v8 + 536) != 1
              && (unsigned __int8)queue_enqueue(*(_DWORD *)(v18[251] + 864), (char *)ptr, 1) != 1
              && ++v21 >= v22 )
            {
              V_LOCK();
              logfmt_raw(v6, 0x1000u, 0, "chain[%d], queue_enqueue of __nonce_retrieve_queue is false", v18[63]);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/backend_base.c",
                160,
                "scanhash",
                8,
                195,
                40,
                v6);
              V_LOCK();
              logfmt_raw(v6, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v21, v22);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/backend_base.c",
                160,
                "scanhash",
                8,
                196,
                40,
                v6);
              v3 = 10000000;
              if ( 10 * v22 < 0x989680 )
                v3 = 10 * v22;
              v22 = v3;
              v21 = 0;
            }
          }
        }
      }
    }
  }
  *((_BYTE *)v18 + 1020) = 0;
LABEL_43:
  free(ptr);
  free(v14);
  return 0;
}
