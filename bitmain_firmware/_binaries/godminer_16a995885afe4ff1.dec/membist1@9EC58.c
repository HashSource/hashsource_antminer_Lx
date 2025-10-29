int __fastcall membist1(int a1)
{
  int v2; // r10
  char *v3; // r4
  int v4; // r0
  char *v5; // r6
  char *v6; // r4
  int v7; // r0
  char *v8; // r6
  char *v9; // r2
  __int64 v10; // r6
  _DWORD *v11; // r3
  unsigned int v12; // t1
  bool v13; // cc
  char *v14; // r3
  char *v15; // r2
  size_t v16; // r0
  char *v17; // r0
  int (**v18)(); // r0
  char *v20; // r2
  char *ptr; // [sp+38h] [bp-10BCh]
  _DWORD v22[7]; // [sp+50h] [bp-10A4h] BYREF
  int v23; // [sp+6Ch] [bp-1088h]
  _DWORD v24[7]; // [sp+70h] [bp-1084h] BYREF
  int v25; // [sp+8Ch] [bp-1068h]
  _DWORD v26[7]; // [sp+90h] [bp-1064h] BYREF
  int v27; // [sp+ACh] [bp-1048h]
  _DWORD v28[7]; // [sp+B0h] [bp-1044h] BYREF
  _DWORD v29[9]; // [sp+CCh] [bp-1028h] BYREF
  char v30[4100]; // [sp+F0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 140));
  logfmt_raw(v30, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, "%s...", "membist1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "membist1",
    8,
    11537,
    60,
    v30);
  memset(&v29[1], 0, 0x20u);
  v2 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    sub_5C8F0(a1, v2, 12, 1);
    usleep(0x2710u);
    sub_5C8F0(a1, v2, 160, -2147483647);
    usleep((__useconds_t)&stru_1869C.st_value);
    v3 = ptr;
    v4 = sub_5CB5C(a1, (unsigned __int16)v2, 161, ptr);
    if ( v4 > 0 )
    {
      v5 = &ptr[12 * v4];
      do
      {
        while ( (*(_DWORD *)v3 & 0x80) == 0 )
        {
          V_LOCK();
          v3 += 12;
          V_INT((int)v26, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "chip %02x core %02x membist not done!",
            (unsigned __int8)*(v3 - 8),
            (unsigned __int8)*(v3 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/backend/backend_eth/backend_eth.c",
            169,
            "membist1",
            8,
            11560,
            100,
            v30);
          if ( v3 == v5 )
            goto LABEL_9;
        }
        if ( (*(_DWORD *)v3 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v24, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "chip %02x core %02x membist err cnt: %08x",
            (unsigned __int8)v3[4],
            (unsigned __int8)v3[8],
            bswap32(*(_DWORD *)v3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/backend/backend_eth/backend_eth.c",
            169,
            "membist1",
            8,
            11555,
            100,
            v30);
          v20 = &v30[4 * (unsigned __int8)v3[4]];
          *((_DWORD *)v20 - 8) += bswap32(*(_DWORD *)v3) & 0x7FFFFF;
        }
        v3 += 12;
      }
      while ( v3 != v5 );
    }
LABEL_9:
    v6 = ptr;
    v7 = sub_5CB5C(a1, (unsigned __int16)v2, 162, ptr);
    if ( v7 > 0 )
    {
      v8 = &ptr[12 * v7];
      do
      {
        while ( (*(_DWORD *)v6 & 0xFFFFFF00) == 0 || (*(_DWORD *)v6 & 0x80) == 0 )
        {
          v6 += 12;
          if ( v6 == v8 )
            goto LABEL_15;
        }
        V_LOCK();
        v6 += 12;
        V_INT((int)v28, "chain", *(int *)(a1 + 140));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v29[0],
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v29[0],
          "chip %02x core %02x membist lost cnt: %08x",
          (unsigned __int8)*(v6 - 8),
          (unsigned __int8)*(v6 - 4),
          bswap32(*((_DWORD *)v6 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/backend_eth/backend_eth.c",
          169,
          "membist1",
          8,
          11568,
          100,
          v30);
        v9 = &v30[4 * (unsigned __int8)*(v6 - 8)];
        *((_DWORD *)v9 - 8) += bswap32(*((_DWORD *)v6 - 3)) & 0x7FFFFF;
      }
      while ( v6 != v8 );
    }
LABEL_15:
    ++v2;
  }
  while ( v2 != 8 );
  v10 = 0;
  free(ptr);
  memset(v30, 0, 0x40u);
  v11 = v29;
  do
  {
    v12 = v11[1];
    ++v11;
    v10 += v12;
  }
  while ( &v29[8] != v11 );
  v13 = HIDWORD(v10) != 0;
  LOWORD(v14) = (unsigned __int16)"ok";
  if ( !HIDWORD(v10) )
    v13 = (unsigned int)v10 > 0x800;
  HIWORD(v14) = (unsigned int)"ok" >> 16;
  v15 = "failed";
  if ( !v13 )
    v15 = v14;
  sprintf(v30, "<mbist1> test %s(%llu)", v15, v14, v10);
  v16 = strlen(v30);
  v17 = sub_5CFCC(v30, v16);
  v18 = dev_ctrl((int)v17);
  ((void (__fastcall *)(_DWORD))v18[18])(*(_DWORD *)(a1 + 136));
  unk_16AF20 = v29[1];
  unk_16AF24 = v29[2];
  unk_16AF28 = v29[3];
  unk_16AF2C = v29[4];
  unk_16AF30 = v29[5];
  unk_16AF34 = v29[6];
  unk_16AF38 = v29[7];
  unk_16AF3C = v29[8];
  return 0;
}
