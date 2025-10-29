int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  pthread_mutex_t *v4; // r4
  _DWORD *v5; // r11
  int v6; // r3
  int v7; // r1
  char *v8; // r5
  int v9; // r0
  int v10; // r1
  char *v11; // r0
  int v12; // r3
  int v13; // r12
  int *v14; // lr
  _BYTE *v15; // r5
  int v16; // r6
  int v17; // r8
  unsigned int v18; // r6
  int v19; // r10
  unsigned int v20; // r5
  pthread_mutex_t *v21; // r0
  bool v22; // zf
  pthread_mutex_t *v23; // r1
  signed __int64 v24; // r0
  int v25; // r0
  void *v26; // r5
  unsigned int count; // r8
  _DWORD *current_pool; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r3
  void (__fastcall *v32)(pthread_mutex_t *); // r2
  int v33; // r1
  int v34; // r4
  int v35; // r1
  char *v37; // [sp+30h] [bp-108Ch]
  int lock; // [sp+34h] [bp-1088h]
  int v39; // [sp+38h] [bp-1084h]
  int v40; // [sp+3Ch] [bp-1080h]
  __time_t v41; // [sp+40h] [bp-107Ch]
  _BYTE *v42; // [sp+44h] [bp-1078h]
  int v43; // [sp+48h] [bp-1074h]
  int *v44; // [sp+4Ch] [bp-1070h]
  int v45; // [sp+50h] [bp-106Ch]
  int v46; // [sp+54h] [bp-1068h]
  _DWORD v47[7]; // [sp+58h] [bp-1064h] BYREF
  int v48; // [sp+74h] [bp-1048h]
  _DWORD v49[7]; // [sp+78h] [bp-1044h] BYREF
  int v50; // [sp+94h] [bp-1028h]
  int v51; // [sp+98h] [bp-1024h] BYREF
  int v52; // [sp+9Ch] [bp-1020h]
  int v53; // [sp+A0h] [bp-101Ch]
  int v54; // [sp+A4h] [bp-1018h]
  int v55; // [sp+A8h] [bp-1014h]
  int v56; // [sp+ACh] [bp-1010h]
  int v57; // [sp+B0h] [bp-100Ch]
  int v58; // [sp+B4h] [bp-1008h]
  char v59[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v41 = *(_DWORD *)(v2 + 88);
  v4 = (pthread_mutex_t *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    LOWORD(v6) = 3612;
    HIWORD(v6) = (unsigned int)"0000" >> 16;
    LOWORD(v5) = -14756;
    HIWORD(v5) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v59, 0x1000u, 0, v6, v4->__owner);
    V_UNLOCK();
    LOWORD(v7) = 3068;
    HIWORD(v7) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
    zlog(*v5, v7, 138, "stratum_thread", 14, 236, 20, v59);
    v8 = (char *)calloc(1u, 0x40u);
    snprintf(v8, 0x40u, "%.10s_%d", "stratum_thread", v4->__lock);
    V_LOCK();
    v9 = syscall(224);
    logfmt_raw(v59, 0x1000u, 0, 1243168, v8, v9);
    V_UNLOCK();
    LOWORD(v10) = 3068;
    HIWORD(v10) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
    zlog(*v5, v10, 138, "stratum_thread", 14, 238, 60, v59);
    prctl(15, v8);
    v11 = _strdup((const char *)v4->__owner);
    v4[1].__count = (unsigned int)v11;
    if ( !v11 )
      goto LABEL_23;
    LOWORD(v12) = 3636;
    HIWORD(v12) = (unsigned int)"tranonce_dcr" >> 16;
    LOWORD(v13) = 3724;
    LOWORD(v14) = -14480;
    LOWORD(v15) = 23916;
    LOWORD(v16) = 3752;
    LOWORD(v17) = 3676;
    v39 = v12;
    HIWORD(v13) = (unsigned int)"/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
    HIWORD(v14) = (unsigned int)&unk_16E7A0 >> 16;
    HIWORD(v15) = (unsigned int)&unk_167D84 >> 16;
    HIWORD(v16) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
    HIWORD(v17) = (unsigned int)"_work_dcr" >> 16;
    v37 = &v4[86].__size[20];
    v46 = v13;
    v44 = v14;
    v42 = v15;
    v45 = v16;
    v43 = v17;
    v40 = 1;
    pool_tset((int)v4, &v4[86].__size[8], 0);
    pool_tclear((int)v4, &v4[86].__size[20], 0);
    while ( 1 )
    {
      while ( 1 )
      {
        LOWORD(v19) = 3068;
        v18 = 0;
        HIWORD(v19) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
        v20 = 0;
        while ( 1 )
        {
          v21 = v4;
          if ( v4[1].__owner != -1 )
            break;
          while ( 1 )
          {
            v22 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 4))(v21) == 0;
            v23 = v4;
            if ( !v22 )
            {
              if ( (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 20))(v2, v4) )
                break;
            }
            (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 8))(v4, v23);
            pool_tclear((int)v4, v37, 0);
            pool_died(&v4->__lock);
            v24 = __PAIR64__(v20, v18);
            v20 = (__PAIR64__(v20, v18) + 1) >> 32;
            if ( !(v24 % 50) )
            {
              V_LOCK();
              V_INT((int)v47, "poolno", v4->__lock);
              logfmt_raw(
                v59,
                0x1000u,
                0,
                v48,
                v47[0],
                v47[1],
                v47[2],
                v47[3],
                v47[4],
                v47[5],
                v47[6],
                v48,
                v39,
                30,
                v18 + 1,
                v20);
              V_UNLOCK();
              zlog(*v5, v19, 138, "stratum_thread", 14, 256, 100, v59);
            }
            ++v18;
            sleep(0x1Eu);
            v21 = v4;
            if ( v4[1].__owner != -1 )
              goto LABEL_12;
          }
          V_LOCK();
          count = v4[1].__count;
          lock = v4->__lock;
          current_pool = (_DWORD *)get_current_pool();
          logfmt_raw(v59, 0x1000u, 0, v43, lock, count, *current_pool);
          V_UNLOCK();
          zlog(*v5, v19, 138, "stratum_thread", 14, 260, 20, v59);
          pool_alive(v4);
          if ( v40 )
          {
            v40 = 0;
            switch_pools();
          }
        }
LABEL_12:
        if ( v4 != (pthread_mutex_t *)get_current_pool() )
          wait_pool_to_be_current_timeout((int)v4);
        if ( stratum_socket_full((int)v4, v41) )
          break;
        V_LOCK();
        V_INT((int)v49, "poolno", v4->__lock);
        logfmt_raw(v59, 0x1000u, 0, v50, v49[0], v49[1], v49[2], v49[3], v49[4], v49[5], v49[6], v50, v46);
        V_UNLOCK();
        LOWORD(v29) = 3068;
        HIWORD(v29) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
        zlog(*v5, v29, 138, "stratum_thread", 14, 292, 100, v59);
LABEL_22:
        v30 = *v44;
        v31 = v4[88].__count + 1;
        *v42 = 0;
        v32 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 8);
        *v44 = v30 + 1;
        v4[88].__count = v31;
        v32(v4);
        pool_tclear((int)v4, v37, 0);
        pool_died(&v4->__lock);
        V_LOCK();
        V_INT((int)&v51, "poolno", v4->__lock);
        logfmt_raw(v59, 0x1000u, 0, v58, v51, v52, v53, v54, v55, v56, v57, v58, v45);
        V_UNLOCK();
        LOWORD(v33) = 3068;
        HIWORD(v33) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
        zlog(*v5, v33, 138, "stratum_thread", 14, 304, 20, v59);
        sleep(0x1Eu);
      }
      v25 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 12))(v4);
      v26 = (void *)v25;
      if ( !v25 )
        goto LABEL_22;
      if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 24))(v2, v4, v25) )
        (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v26, v4);
      free(v26);
      *v42 = 1;
    }
  }
  LOWORD(v5) = -14756;
  HIWORD(v5) = (unsigned int)&unk_16E68C >> 16;
LABEL_23:
  V_LOCK();
  V_INT((int)&v51, "poolno", v4->__lock);
  LOWORD(v34) = 3784;
  HIWORD(v34) = (unsigned int)"d/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
  logfmt_raw(v59, 0x1000u, 0, v58, v51, v52, v53, v54, v55, v56, v57, v58, v34);
  V_UNLOCK();
  LOWORD(v35) = 3068;
  HIWORD(v35) = (unsigned int)"000000000000000000000000000000000000000000000000" >> 16;
  zlog(*v5, v35, 138, "stratum_thread", 14, 317, 60, v59);
  return 0;
}
