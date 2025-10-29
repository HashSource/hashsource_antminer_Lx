int __fastcall check_ref_clock_ready_ext(int a1, int a2, char *a3, int a4, int a5)
{
  int *v7; // r12
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  unsigned __int8 *v13; // r7
  int v14; // r3
  _DWORD *v15; // r4
  char *v16; // r3
  int k; // r5
  int v18; // r0
  int v19; // r12
  int v20; // r2
  char *v21; // r10
  int result; // r0
  int m; // r3
  int v24; // [sp+38h] [bp-107Ch]
  char *v25; // [sp+3Ch] [bp-1078h]
  int v26; // [sp+48h] [bp-106Ch]
  unsigned __int8 j; // [sp+4Ch] [bp-1068h]
  _DWORD *ptr; // [sp+54h] [bp-1060h]
  int v30; // [sp+58h] [bp-105Ch]
  int i; // [sp+5Ch] [bp-1058h]
  int v32; // [sp+60h] [bp-1054h] BYREF
  _DWORD v33[7]; // [sp+70h] [bp-1044h] BYREF
  int v34; // [sp+8Ch] [bp-1028h]
  _DWORD v35[7]; // [sp+90h] [bp-1024h] BYREF
  int v36; // [sp+ACh] [bp-1008h]
  char v37[4100]; // [sp+B0h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready_ext",
    25,
    8716,
    60,
    v37);
  sub_5DDB0(a1, 112, 0);
  if ( a3 == (char *)255 )
  {
    v8 = (int)&unk_13AA98;
    v30 = 14;
    v7 = &v32;
  }
  else
  {
    v8 = 1;
    v30 = 1;
  }
  if ( a3 == (char *)255 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 8);
    v12 = *(_DWORD *)(v8 + 12);
    *v7 = v9;
    v7[1] = v10;
    v7[2] = v11;
    *((_WORD *)v7 + 6) = v12;
  }
  for ( i = 0; i != 3; ++i )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready_ext", i);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready_ext",
      25,
      8725,
      60,
      v37);
    ptr = malloc(0x600u);
    v13 = (unsigned __int8 *)malloc(0x600u);
    v14 = 0;
    for ( j = 0; j < v30; v14 = ++j )
    {
      v15 = ptr;
      if ( a3 == (char *)255 )
        v16 = &v37[v14];
      else
        v16 = a3;
      if ( a3 == (char *)255 )
        v16 = (char *)(unsigned __int8)*(v16 - 80);
      v25 = v16;
      v26 = (unsigned __int16)v16;
      v24 = sub_5E074(a1, (unsigned __int16)v16, 112, ptr);
      if ( v24 > 0 )
      {
        for ( k = 0; k != v24; ++k )
        {
          if ( (*v15 & 0x9000000) != 0x9000000 )
          {
            if ( a5 )
              v25[16 * k + a5] = 1;
            V_LOCK();
            V_INT((int)v35, "chain", *(int *)(a1 + 148));
            logfmt_raw(
              v37,
              0x1000u,
              0,
              v36,
              v35[0],
              v35[1],
              v35[2],
              v35[3],
              v35[4],
              v35[5],
              v35[6],
              v36,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              *((unsigned __int8 *)v15 + 4),
              *((unsigned __int8 *)v15 + 8),
              112,
              *v15);
            V_UNLOCK();
            v18 = g_zc;
            v19 = 100;
            v20 = 8759;
            goto LABEL_18;
          }
          if ( a5 )
          {
            v21 = &v25[a5];
            v25[16 * k + a5] = 0;
            V_LOCK();
            logfmt_raw(
              v37,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v15 + 4),
              *((unsigned __int8 *)v15 + 8),
              112,
              *v15);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8740,
              20,
              v37);
            if ( !sub_5E294(a1, *((_BYTE *)v15 + 4), v26, 113, v13) || *(_DWORD *)v13 == -1 )
            {
              v21[16 * k] = 0;
LABEL_36:
              V_LOCK();
              logfmt_raw(
                v37,
                0x1000u,
                0,
                "chip %02x core %02x addr %04x, %08x, tx/rx locked",
                v13[4],
                v13[8],
                113,
                *(_DWORD *)v13);
              V_UNLOCK();
              v18 = g_zc;
              v19 = 20;
              v20 = 8752;
              goto LABEL_18;
            }
            v21[16 * k] = 1;
          }
          else
          {
            V_LOCK();
            logfmt_raw(
              v37,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v15 + 4),
              *((unsigned __int8 *)v15 + 8),
              112,
              *v15);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8740,
              20,
              v37);
            if ( !sub_5E294(a1, *((_BYTE *)v15 + 4), v26, 113, v13) || *(_DWORD *)v13 == -1 )
              goto LABEL_36;
          }
          V_LOCK();
          V_INT((int)v33, "chain", *(int *)(a1 + 148));
          logfmt_raw(
            v37,
            0x1000u,
            0,
            v34,
            v33[0],
            v33[1],
            v33[2],
            v33[3],
            v33[4],
            v33[5],
            v33[6],
            v34,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v13[4],
            v13[8],
            113,
            *(_DWORD *)v13);
          V_UNLOCK();
          v18 = g_zc;
          v19 = 100;
          v20 = 8747;
LABEL_18:
          v15 += 3;
          zlog(
            v18,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            v20,
            v19,
            v37);
        }
      }
    }
    free(ptr);
    free(v13);
  }
  result = a5;
  if ( a5 )
  {
    while ( 2 )
    {
      for ( m = 0; m != 16; ++m )
      {
        if ( (m & 0xFFFFFFF7) != 4 && *(_BYTE *)(result + m) )
          return -1;
      }
      result += 16;
      if ( a5 + 128 != result )
        continue;
      break;
    }
    return 0;
  }
  return result;
}
