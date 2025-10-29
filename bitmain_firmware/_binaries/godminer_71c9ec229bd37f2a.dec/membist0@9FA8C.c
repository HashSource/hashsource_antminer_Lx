int __fastcall membist0(int a1)
{
  int v2; // r4
  char *v3; // r4
  int v4; // r0
  char *v5; // r5
  char *v6; // r4
  int v7; // r0
  char *v8; // r5
  char *v9; // r4
  int v10; // r0
  char *v11; // r5
  _DWORD *v12; // r4
  int *v13; // r6
  int v14; // r3
  __int64 v15; // r0
  unsigned int v16; // r2
  bool v17; // cc
  int v18; // r2
  int v19; // t1
  char *v20; // r3
  size_t v21; // r0
  char *v22; // r0
  int (**v23)(); // r0
  int v25; // [sp+38h] [bp-2E0h]
  int v26; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  int *v28; // [sp+54h] [bp-2C4h]
  _DWORD v29[5]; // [sp+64h] [bp-2B4h] BYREF
  _DWORD v30[7]; // [sp+78h] [bp-2A0h] BYREF
  int v31; // [sp+94h] [bp-284h]
  _DWORD v32[7]; // [sp+98h] [bp-280h] BYREF
  int v33; // [sp+B4h] [bp-264h]
  _DWORD v34[7]; // [sp+B8h] [bp-260h] BYREF
  int v35; // [sp+D4h] [bp-244h]
  _DWORD v36[7]; // [sp+D8h] [bp-240h] BYREF
  int v37; // [sp+F4h] [bp-224h]
  _DWORD v38[7]; // [sp+F8h] [bp-220h] BYREF
  int v39; // [sp+114h] [bp-204h]
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v41[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v41, 0x1000u, 0, "%s...", "membist0");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "membist0",
    8,
    11471,
    20,
    v41);
  v29[0] = -2023406815;
  v29[1] = 1266163410;
  v29[2] = 2015285835;
  v29[3] = 517098360;
  v29[4] = -766805986;
  memset(s, 0, sizeof(s));
  v28 = v29;
  v25 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    V_LOCK();
    V_INT((int)v30, "chain", *(int *)(a1 + 148));
    v2 = *v28++;
    v26 = 0;
    logfmt_raw(
      v41,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      "membist final pattern %08x",
      v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "membist0",
      8,
      11479,
      60,
      v41);
    sub_5DDB0(a1, 164, v2);
    do
    {
      sub_5DE08(a1, v26, 12, 1);
      sub_5DE08(a1, v26, 160, 3);
      usleep((__useconds_t)&stru_18698.st_size);
      v3 = ptr;
      v4 = sub_5E074(a1, (unsigned __int16)v26, 161, ptr);
      if ( v4 > 0 )
      {
        v5 = &ptr[12 * v4];
        do
        {
          while ( (*(_DWORD *)v3 & 0x80) == 0 )
          {
            V_LOCK();
            v3 += 12;
            V_INT((int)v34, "chain", *(int *)(a1 + 148));
            logfmt_raw(
              v41,
              0x1000u,
              0,
              v35,
              v34[0],
              v34[1],
              v34[2],
              v34[3],
              v34[4],
              v34[5],
              v34[6],
              v35,
              "chip %02x core %02x membist not done!",
              (unsigned __int8)*(v3 - 8),
              (unsigned __int8)*(v3 - 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "membist0",
              8,
              11495,
              100,
              v41);
            if ( v3 == v5 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v3 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v32, "chain", *(int *)(a1 + 148));
            logfmt_raw(
              v41,
              0x1000u,
              0,
              v33,
              v32[0],
              v32[1],
              v32[2],
              v32[3],
              v32[4],
              v32[5],
              v32[6],
              v33,
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v3[4],
              (unsigned __int8)v3[8],
              bswap32(*(_DWORD *)v3));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "membist0",
              8,
              11491,
              100,
              v41);
            s[16 * (unsigned __int8)v3[4] + v25] += bswap32(*(_DWORD *)v3) & 0x7FFFFF;
          }
          v3 += 12;
        }
        while ( v3 != v5 );
      }
LABEL_10:
      v6 = ptr;
      v7 = sub_5E074(a1, (unsigned __int16)v26, 162, ptr);
      if ( v7 > 0 )
      {
        v8 = &ptr[12 * v7];
        do
        {
          while ( (*(_DWORD *)v6 & 0xFFFFFF00) == 0 || (*(_DWORD *)v6 & 0x80) == 0 )
          {
            v6 += 12;
            if ( v6 == v8 )
              goto LABEL_16;
          }
          V_LOCK();
          v6 += 12;
          V_INT((int)v36, "chain", *(int *)(a1 + 148));
          logfmt_raw(
            v41,
            0x1000u,
            0,
            v37,
            v36[0],
            v36[1],
            v36[2],
            v36[3],
            v36[4],
            v36[5],
            v36[6],
            v37,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v6 - 8),
            (unsigned __int8)*(v6 - 4),
            bswap32(*((_DWORD *)v6 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist0",
            8,
            11502,
            100,
            v41);
          s[16 * (unsigned __int8)*(v6 - 8) + v25] += bswap32(*((_DWORD *)v6 - 3)) & 0x7FFFFF;
        }
        while ( v6 != v8 );
      }
LABEL_16:
      v9 = ptr;
      v10 = sub_5E074(a1, (unsigned __int16)v26, 163, ptr);
      if ( v10 > 0 )
      {
        v11 = &ptr[12 * v10];
        do
        {
          while ( (*(_DWORD *)v9 & 0xFFFF00) == 0 || (*(_DWORD *)v9 & 0xC0) == 0 )
          {
            v9 += 12;
            if ( v9 == v11 )
              goto LABEL_22;
          }
          V_LOCK();
          v9 += 12;
          V_INT((int)v38, "chain", *(int *)(a1 + 148));
          logfmt_raw(
            v41,
            0x1000u,
            0,
            v39,
            v38[0],
            v38[1],
            v38[2],
            v38[3],
            v38[4],
            v38[5],
            v38[6],
            v39,
            "chip %02x core %02x ethbist err cnt: %08x",
            (unsigned __int8)*(v9 - 8),
            (unsigned __int8)*(v9 - 4),
            bswap32(*((_DWORD *)v9 - 3)));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist0",
            8,
            11510,
            100,
            v41);
          s[16 * (unsigned __int8)*(v9 - 8) + v25] += bswap32(*((_DWORD *)v9 - 3)) & 0x7FFF;
        }
        while ( v9 != v11 );
      }
LABEL_22:
      ++v26;
    }
    while ( v26 != 8 );
    ++v25;
  }
  while ( v25 != 5 );
  v12 = s;
  free(ptr);
  memset(v41, 0, 0x40u);
  v13 = v29;
  do
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = v12[16 * v14++];
      v15 += v16;
    }
    while ( v14 != 8 );
    v17 = HIDWORD(v15) != 0;
    v19 = *v13++;
    v18 = v19;
    if ( !HIDWORD(v15) )
      v17 = (unsigned int)v15 > 0x800;
    if ( v17 )
      v20 = "failed";
    else
      v20 = "ok";
    sprintf(v41, "<mbist0 %08x> test %s(%llu)", v18, v20, v15);
    ++v12;
    v21 = strlen(v41);
    v22 = sub_5E4E4(v41, v21);
  }
  while ( v12 != &s[5] );
  v23 = dev_ctrl((int)v22);
  ((void (__fastcall *)(_DWORD))v23[18])(*(_DWORD *)(a1 + 144));
  return 0;
}
