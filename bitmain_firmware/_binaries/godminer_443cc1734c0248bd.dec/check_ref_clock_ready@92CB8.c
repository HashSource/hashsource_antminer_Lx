int __fastcall check_ref_clock_ready(int a1, int a2, int a3)
{
  bool v5; // zf
  int v6; // r7
  int v7; // r1
  unsigned __int16 v8; // r3
  _DWORD *v9; // r4
  int v10; // r0
  _DWORD *v11; // r6
  int v12; // r0
  int v13; // r12
  int v14; // r2
  _DWORD *v15; // r4
  int v16; // r0
  _DWORD *v17; // r6
  int v18; // r0
  int v19; // r12
  int v20; // r2
  char *v21; // r4
  int v22; // r0
  char *v23; // r4
  int v24; // r0
  char *v25; // r4
  int v26; // r0
  char *v27; // r4
  int v28; // r0
  unsigned int v29; // r3
  char *v31; // [sp+3Ch] [bp-10E8h]
  char *v32; // [sp+3Ch] [bp-10E8h]
  char *v33; // [sp+3Ch] [bp-10E8h]
  char *v34; // [sp+3Ch] [bp-10E8h]
  _DWORD *ptr; // [sp+40h] [bp-10E4h]
  int v36; // [sp+44h] [bp-10E0h]
  unsigned __int16 v37; // [sp+48h] [bp-10DCh]
  char v38; // [sp+48h] [bp-10DCh]
  unsigned int v39; // [sp+50h] [bp-10D4h]
  int i; // [sp+58h] [bp-10CCh]
  _DWORD v42[7]; // [sp+60h] [bp-10C4h] BYREF
  int v43; // [sp+7Ch] [bp-10A8h]
  _DWORD v44[7]; // [sp+80h] [bp-10A4h] BYREF
  int v45; // [sp+9Ch] [bp-1088h]
  _DWORD v46[7]; // [sp+A0h] [bp-1084h] BYREF
  int v47; // [sp+BCh] [bp-1068h]
  _DWORD v48[7]; // [sp+C0h] [bp-1064h] BYREF
  int v49; // [sp+DCh] [bp-1048h]
  _DWORD v50[7]; // [sp+E0h] [bp-1044h] BYREF
  int v51; // [sp+FCh] [bp-1028h]
  _DWORD v52[7]; // [sp+100h] [bp-1024h] BYREF
  int v53; // [sp+11Ch] [bp-1008h]
  char v54[4100]; // [sp+120h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v54, 0x1000u, 0, "write 0x70: 0 to clear debug_cmnlockstatus_cnt");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready",
    21,
    8385,
    60,
    v54);
  sub_5BD10(a1, 112, 0);
  v5 = a3 == 255;
  v6 = a1;
  if ( v5 )
    v7 = 16;
  else
    v7 = 1;
  v39 = v7;
  for ( i = 0; i != 3; ++i )
  {
    V_LOCK();
    logfmt_raw(v54, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready", i);
    V_UNLOCK();
    v37 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready",
      21,
      8392,
      60,
      v54);
    ptr = malloc(0x600u);
    do
    {
      v8 = v37;
      v9 = ptr;
      if ( a3 != 255 )
        v8 = a3;
      v38 = v8;
      v36 = v8;
      v10 = sub_5BFD4(v6, v8, 112, ptr);
      if ( v10 > 0 )
      {
        v11 = &ptr[3 * v10];
        do
        {
          if ( (*v9 & 0x9000000) == 0x9000000 )
          {
            V_LOCK();
            logfmt_raw(
              v54,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v9 + 4),
              *((unsigned __int8 *)v9 + 8),
              112,
              *v9);
            V_UNLOCK();
            v12 = g_zc;
            v13 = 20;
            v14 = 8400;
          }
          else
          {
            V_LOCK();
            V_INT((int)v42, "chain", *(int *)(v6 + 140));
            logfmt_raw(
              v54,
              0x1000u,
              0,
              v43,
              v42[0],
              v42[1],
              v42[2],
              v42[3],
              v42[4],
              v42[5],
              v42[6],
              v43,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              *((unsigned __int8 *)v9 + 4),
              *((unsigned __int8 *)v9 + 8),
              112,
              *v9);
            V_UNLOCK();
            v12 = g_zc;
            v13 = 100;
            v14 = 8403;
          }
          v9 += 3;
          zlog(
            v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v14,
            v13,
            v54);
        }
        while ( v9 != v11 );
      }
      v15 = ptr;
      v16 = sub_5BFD4(v6, v36, 113, ptr);
      if ( v16 > 0 )
      {
        v17 = &ptr[3 * v16];
        do
        {
          if ( *v15 == -1 )
          {
            V_LOCK();
            logfmt_raw(
              v54,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              *((unsigned __int8 *)v15 + 4),
              *((unsigned __int8 *)v15 + 8),
              113,
              *v15);
            V_UNLOCK();
            v18 = g_zc;
            v19 = 20;
            v20 = 8413;
          }
          else
          {
            V_LOCK();
            V_INT((int)v44, "chain", *(int *)(v6 + 140));
            logfmt_raw(
              v54,
              0x1000u,
              0,
              v45,
              v44[0],
              v44[1],
              v44[2],
              v44[3],
              v44[4],
              v44[5],
              v44[6],
              v45,
              "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
              *((unsigned __int8 *)v15 + 4),
              *((unsigned __int8 *)v15 + 8),
              113,
              *v15);
            V_UNLOCK();
            v18 = g_zc;
            v19 = 100;
            v20 = 8411;
          }
          v15 += 3;
          zlog(
            v18,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v20,
            v19,
            v54);
        }
        while ( v15 != v17 );
      }
      v21 = (char *)ptr;
      v22 = sub_5BFD4(v6, v36, 114, ptr);
      if ( v22 > 0 )
      {
        v31 = (char *)&ptr[3 * v22];
        do
        {
          V_LOCK();
          v21 += 12;
          V_INT((int)v46, "chain", *(int *)(v6 + 140));
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v47,
            v46[0],
            v46[1],
            v46[2],
            v46[3],
            v46[4],
            v46[5],
            v46[6],
            v47,
            "chip %02x core %02x addr %04x, %08x",
            (unsigned __int8)*(v21 - 8),
            (unsigned __int8)*(v21 - 4),
            114,
            *((_DWORD *)v21 - 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8420,
            100,
            v54);
        }
        while ( v31 != v21 );
      }
      v23 = (char *)ptr;
      v24 = sub_5BFD4(v6, v36, 115, ptr);
      if ( v24 > 0 )
      {
        v32 = (char *)&ptr[3 * v24];
        do
        {
          V_LOCK();
          v23 += 12;
          V_INT((int)v48, "chain", *(int *)(v6 + 140));
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v49,
            v48[0],
            v48[1],
            v48[2],
            v48[3],
            v48[4],
            v48[5],
            v48[6],
            v49,
            "chip %02x core %02x addr %04x, %08x",
            (unsigned __int8)*(v23 - 8),
            (unsigned __int8)*(v23 - 4),
            115,
            *((_DWORD *)v23 - 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8426,
            100,
            v54);
        }
        while ( v32 != v23 );
      }
      v25 = (char *)ptr;
      v26 = sub_5BFD4(v6, v36, 116, ptr);
      if ( v26 > 0 )
      {
        v33 = (char *)&ptr[3 * v26];
        do
        {
          V_LOCK();
          v25 += 12;
          V_INT((int)v50, "chain", *(int *)(v6 + 140));
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v51,
            v50[0],
            v50[1],
            v50[2],
            v50[3],
            v50[4],
            v50[5],
            v50[6],
            v51,
            "chip %02x core %02x addr %04x, %08x",
            (unsigned __int8)*(v25 - 8),
            (unsigned __int8)*(v25 - 4),
            116,
            *((_DWORD *)v25 - 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8432,
            100,
            v54);
        }
        while ( v33 != v25 );
      }
      v27 = (char *)ptr;
      v28 = sub_5BFD4(v6, v36, 117, ptr);
      if ( v28 > 0 )
      {
        v34 = (char *)&ptr[3 * v28];
        do
        {
          V_LOCK();
          v27 += 12;
          V_INT((int)v52, "chain", *(int *)(v6 + 140));
          logfmt_raw(
            v54,
            0x1000u,
            0,
            v53,
            v52[0],
            v52[1],
            v52[2],
            v52[3],
            v52[4],
            v52[5],
            v52[6],
            v53,
            "chip %02x core %02x addr %04x, %08x",
            (unsigned __int8)*(v27 - 8),
            (unsigned __int8)*(v27 - 4),
            117,
            *((_DWORD *)v27 - 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8438,
            100,
            v54);
        }
        while ( v34 != v27 );
      }
      v29 = (unsigned __int8)(v38 + 1);
      v37 = (unsigned __int8)(v38 + 1);
    }
    while ( v39 > v29 );
    free(ptr);
  }
  return 0;
}
