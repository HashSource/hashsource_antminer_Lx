int __fastcall setup_serdes_phy(int a1)
{
  int result; // r0
  int v2; // r10
  _WORD *v3; // r5
  int v4; // r4
  int v5; // t1
  __int16 *v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // t1
  char *v10; // r0
  int v11; // r12
  unsigned int v12; // r6
  _BOOL4 v13; // r3
  int v14; // [sp+34h] [bp-5Ch]
  int v16; // [sp+44h] [bp-4Ch]
  char *v17; // [sp+48h] [bp-48h]
  int v18; // [sp+54h] [bp-3Ch]
  __int16 v19; // [sp+5Ah] [bp-36h] BYREF
  _DWORD v20[4]; // [sp+5Ch] [bp-34h] BYREF
  __int16 v21; // [sp+6Ch] [bp-24h] BYREF
  _DWORD v22[7]; // [sp+70h] [bp-20h] BYREF
  int v23; // [sp+8Ch] [bp-4h]
  _BYTE v24[128]; // [sp+90h] [bp+0h] BYREF
  _BYTE s[1024]; // [sp+110h] [bp+80h] BYREF
  _DWORD v26[1025]; // [sp+510h] [bp+480h] BYREF

  v18 = 0;
  do
  {
    V_LOCK();
    logfmt_raw((char *)v26, 0x1000u, 0, "%s try cmn lock times %d", "setup_serdes_phy", ++v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "setup_serdes_phy",
      16,
      12224,
      60,
      v26);
    serdes_initial_seq_1_by_vendor(a1, 0, 0xFFu, 8u);
    SOC_24G_seq1_20210922_update(a1, 0, 0xFFu, 8);
    memset(v24, 0, sizeof(v24));
    result = serdes_phy_bist(a1, (unsigned __int8 *)0xFF, 8, (int)v24);
    if ( !result )
      break;
    v2 = 0;
    memset(s, 0, sizeof(s));
    v16 = 0;
    v17 = s;
    v20[1] = 100991489;
    v20[2] = 235735561;
    v20[3] = 134677248;
    v21 = 3851;
    do
    {
      v3 = (_WORD *)((char *)v20 + 3);
      v14 = 16 * v2;
      do
      {
        while ( 1 )
        {
          v5 = *((unsigned __int8 *)v3 + 1);
          v3 = (_WORD *)((char *)v3 + 1);
          v4 = v5;
          V_LOCK();
          logfmt_raw(
            (char *)v26,
            0x1000u,
            0,
            "%s chip %x core %x cmn status %x",
            "check_cmn_lock_and_reset_worse_phy",
            v2,
            v4,
            (unsigned __int8)v24[v4 + v14]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_cmn_lock_and_reset_worse_phy",
            34,
            603,
            20,
            v26);
          if ( v24[v5 + v14] )
            break;
          if ( (__int16 *)((char *)&v21 + 1) == v3 )
            goto LABEL_15;
        }
        v19 = 1541;
        v20[0] = 235735561;
        v26[0] = 50462721;
        v26[1] = 117834757;
        v26[2] = 185206793;
        v26[3] = 252578829;
        if ( v4 == 1 )
        {
          v11 = 1;
        }
        else
        {
          v6 = &v19;
          v7 = 2;
          v8 = 1;
          while ( v4 != v7 )
          {
            if ( ++v8 == 8 )
            {
              sub_5DE5C(a1, v2, v4, 80, 0);
              usleep((__useconds_t)&stru_18698.st_size);
              sub_5DE5C(a1, v2, v4, 80, 0x10000);
              usleep((__useconds_t)&stru_18698.st_size);
              goto LABEL_13;
            }
            v9 = *(unsigned __int8 *)v6;
            v6 = (__int16 *)((char *)v6 + 1);
            v7 = v9;
          }
          v11 = 2 * v8 + 1;
        }
        v12 = *((unsigned __int8 *)v26 + v11);
        sub_5DE5C(a1, v2, v4, 80, 0);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5DE5C(a1, v2, v4, 80, 0x10000);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5DE5C(a1, v2, v12, 80, 0);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5DE5C(a1, v2, v12, 80, 0x10000);
        usleep((__useconds_t)&stru_18698.st_size);
        v13 = v4 != v12;
        if ( v12 > 0xF )
          v13 = 0;
        if ( v13 )
        {
          sprintf(v17, "%1x-%1x-%1x ", v2, v4, v12);
          v17 += 6;
        }
        else
        {
LABEL_13:
          v10 = v17;
          v17 += 4;
          sprintf(v10, "%1x-%1x ", v2, v4);
        }
        ++v16;
      }
      while ( (__int16 *)((char *)&v21 + 1) != v3 );
LABEL_15:
      ++v2;
    }
    while ( v2 != 8 );
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 148));
    logfmt_raw(
      (char *)v26,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "%s (%d) %s",
      "check_cmn_lock_and_reset_worse_phy",
      v16,
      s);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_cmn_lock_and_reset_worse_phy",
               34,
               617,
               60,
               v26);
  }
  while ( v18 != 3 );
  return result;
}
