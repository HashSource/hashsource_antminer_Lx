int __fastcall check_d54(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5)
{
  _BYTE *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r3
  int v16; // r6
  int v17; // r7
  unsigned int v18; // r3
  int v19; // r4
  unsigned __int8 *v20; // r5
  int back; // r8
  int v22; // r3
  int v25; // r0
  int v26; // t1
  unsigned int v27; // [sp+48h] [bp-10BCh]
  unsigned int v29; // [sp+50h] [bp-10B4h]
  int v31; // [sp+58h] [bp-10ACh]
  int v32; // [sp+60h] [bp-10A4h]
  int v33; // [sp+64h] [bp-10A0h]
  int v35; // [sp+6Ch] [bp-1098h]
  _BYTE v36[16]; // [sp+70h] [bp-1094h] BYREF
  _DWORD v37[7]; // [sp+80h] [bp-1084h] BYREF
  int v38; // [sp+9Ch] [bp-1068h]
  _DWORD v39[7]; // [sp+A0h] [bp-1064h] BYREF
  int v40; // [sp+BCh] [bp-1048h]
  _BYTE v41[64]; // [sp+C0h] [bp-1044h] BYREF
  char v42[4096]; // [sp+100h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v37, "chain", *(int *)(a1 + 148));
  logfmt_raw(v42, 0x1000u, 0, v38, v37[0], v37[1], v37[2], v37[3], v37[4], v37[5], v37[6], v38, "%s...", "check_d54");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54",
    9,
    3375,
    60,
    v42);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_13AA98;
    v35 = 14;
    v8 = v36;
  }
  else
  {
    v9 = 1;
    v35 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)v8 = v10;
    *((_DWORD *)v8 + 1) = v11;
    *((_DWORD *)v8 + 2) = v12;
    *((_WORD *)v8 + 6) = v13;
  }
  v32 = 8 * a4;
  v14 = (unsigned __int16)a4;
  v27 = (unsigned __int16)a4;
  v33 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v14 = v33;
      v15 = (unsigned int)v36;
    }
    else
    {
      v15 = (unsigned int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v15 = *(unsigned __int8 *)(v14 + v15);
    v29 = v15;
    v31 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)&stru_18698.st_size);
      if ( !v27 )
        break;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = v18 <= 3 && v29 == 3;
        if ( !v19 )
          break;
        ++v16;
LABEL_15:
        v18 = (unsigned __int16)v16;
        if ( v27 <= (unsigned __int16)v16 )
          goto LABEL_26;
      }
      v20 = v41;
      back = serdes_apb_read_back(a1, a2, v29, (unsigned __int16)((_WORD)v18 << 12) | 0x36, (int)v41);
      if ( back <= 0 )
        goto LABEL_25;
      while ( 1 )
      {
        v22 = *((_DWORD *)v20 + 1);
        if ( !a5 )
          break;
        if ( (a5 & ~v22) != 0 )
          goto LABEL_24;
LABEL_32:
        V_LOCK();
        v25 = v20[1];
        v26 = *v20;
        v20 += 8;
        ++v19;
        ++v17;
        logfmt_raw(
          v42,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
          v16,
          v26,
          v25,
          a5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_d54",
          9,
          3405,
          20,
          v42);
        if ( back == v19 )
          goto LABEL_25;
      }
      if ( (v22 & 8) == 0 )
        goto LABEL_32;
LABEL_24:
      V_LOCK();
      v17 >>= 3;
      V_INT((int)v39, "chain", *(int *)(a1 + 148));
      logfmt_raw(
        v42,
        0x1000u,
        0,
        v40,
        v39[0],
        v39[1],
        v39[2],
        v39[3],
        v39[4],
        v39[5],
        v39[6],
        v40,
        "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
        v16,
        (unsigned __int8)v41[8 * v19],
        (unsigned __int8)v41[8 * v19 + 1],
        bswap32(*(_DWORD *)&v41[8 * v19 + 4]),
        a5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_d54",
        9,
        3409,
        100,
        v42);
LABEL_25:
      ++v16;
      if ( v17 >= 8 * v16 )
        goto LABEL_15;
LABEL_26:
      if ( v17 >= v32 )
        break;
      if ( !--v31 )
        goto LABEL_28;
    }
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", a5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3418,
      20,
      v42);
LABEL_28:
    v14 = v35;
  }
  while ( v35 != ++v33 );
  return 0;
}
