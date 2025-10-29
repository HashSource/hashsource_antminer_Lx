int __fastcall get_response(int a1)
{
  int v1; // r0
  int (**v2)(); // r0
  int v3; // r3
  __useconds_t v4; // r3
  char v6[40]; // [sp+1Ch] [bp-1128h] BYREF
  char v7[256]; // [sp+101Ch] [bp-128h] BYREF
  size_t n; // [sp+111Ch] [bp-28h]
  int v9; // [sp+1120h] [bp-24h]
  __useconds_t useconds; // [sp+1124h] [bp-20h]
  __useconds_t v11; // [sp+1128h] [bp-1Ch]
  int v12; // [sp+112Ch] [bp-18h]
  int v13; // [sp+1130h] [bp-14h]
  unsigned int v14; // [sp+1134h] [bp-10h]
  int v15; // [sp+1138h] [bp-Ch]
  char *s; // [sp+113Ch] [bp-8h]

  v15 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(v15 + 248));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v6, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_base.c",
    160,
    "get_response",
    12,
    248,
    40,
    v6);
  prctl(15, s);
  memset(v7, 0, sizeof(v7));
  useconds = 64;
  v11 = 64;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1;
  while ( 1 )
  {
    v2 = dev_ctrl();
    n = ((int (__fastcall *)(_DWORD, char *, int))v2[15])(*(_DWORD *)(v15 + 248), v7, 256);
    if ( *(_BYTE *)(v15 + 1021) )
      break;
    if ( (int)n <= 0 )
    {
      usleep(v11);
      v11 *= 2;
      v4 = v11;
      if ( v11 >= 0x3E8 )
        v4 = 1000;
      v11 = v4;
    }
    else
    {
      v9 = queue_element_num(*(_DWORD *)(v15 + 860));
      if ( v9 <= 0x4000 )
      {
        if ( (unsigned __int8)queue_enqueue(*(_DWORD *)(v15 + 860), v7, n) != 1 && ++v13 >= v14 )
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(v15 + 252));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_base.c",
            160,
            "get_response",
            12,
            281,
            40,
            v6);
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v13, v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_base.c",
            160,
            "get_response",
            12,
            282,
            40,
            v6);
          v3 = 10000000;
          if ( 10 * v14 < 0x989680 )
            v3 = 10 * v14;
          v14 = v3;
          v13 = 0;
        }
        v11 = useconds;
        memset(v7, 0, n);
      }
      else
      {
        if ( !v12 )
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "chain[%d], queue_element_num reach limit, pls check runtime->__resp_packet_queue",
            *(_DWORD *)(v15 + 252));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_base.c",
            160,
            "get_response",
            12,
            267,
            40,
            v6);
          v12 = 1;
        }
        usleep(useconds);
      }
    }
  }
  *(_BYTE *)(v15 + 1021) = 0;
  return 0;
}
