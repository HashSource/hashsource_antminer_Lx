int __fastcall check_cmn_lock_status(int a1, int a2, _BYTE *a3, int a4, int a5)
{
  int v5; // r8
  _DWORD *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r2
  _BYTE *v14; // r3
  int v15; // r4
  unsigned __int8 *v16; // r5
  char v17; // r1
  int result; // r0
  int v20; // [sp+0h] [bp-10ECh]
  int back; // [sp+34h] [bp-10B8h]
  int v23; // [sp+38h] [bp-10B4h]
  int v24; // [sp+3Ch] [bp-10B0h]
  char *s; // [sp+48h] [bp-10A4h]
  int v27; // [sp+50h] [bp-109Ch]
  _BYTE v29[16]; // [sp+58h] [bp-1094h] BYREF
  _DWORD v30[7]; // [sp+68h] [bp-1084h] BYREF
  int v31; // [sp+84h] [bp-1068h]
  _DWORD v32[7]; // [sp+88h] [bp-1064h] BYREF
  int v33; // [sp+A4h] [bp-1048h]
  unsigned __int8 v34[64]; // [sp+A8h] [bp-1044h] BYREF
  char var1004[4120]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v30, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    var1004,
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
    "%s...",
    "check_cmn_lock_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_cmn_lock_status",
    21,
    8669,
    60,
    var1004);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_1387B8;
    v27 = 14;
    v8 = v29;
  }
  else
  {
    v9 = 1;
    v27 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)(v9 + 12);
    *v8 = v10;
    v8[1] = v11;
    v8[2] = v12;
    v8 += 3;
  }
  LOWORD(v13) = (unsigned __int16)"chain";
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v8 = v9;
  HIWORD(v13) = (unsigned int)"chain" >> 16;
  v23 = 0;
  v24 = 0;
  s = (char *)v13;
  do
  {
    v14 = a3;
    if ( a3 == (_BYTE *)255 )
    {
      v13 = v24;
      v14 = v29;
    }
    else
    {
      v5 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v5 = (unsigned __int8)v14[v13];
    if ( v5 != 3 )
    {
      back = serdes_apb_read_back(a1, a2, v5, 0x801Du, (int)v34);
      if ( back > 0 )
      {
        v15 = 0;
        do
        {
          while ( 1 )
          {
            v16 = &v34[8 * v15];
            if ( (*((_DWORD *)v16 + 1) & 0x20000000) != 0 )
              break;
            if ( a5 )
              *(_BYTE *)(a5 + v5 + 16 * v15) = 1;
            ++v23;
            V_LOCK();
            V_INT((int)v32, s, *(int *)(a1 + 140));
            logfmt_raw(
              var1004,
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
              "chip_id %02x core_id %02x %08x cmn lock failed!",
              v34[8 * v15],
              v16[1],
              *((_DWORD *)v16 + 1));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
              169,
              "check_cmn_lock_status",
              21,
              8700,
              100,
              var1004);
            v17 = v34[8 * v15++];
            ajust_retry_param(a1, v17, v5);
            if ( back == v15 )
              goto LABEL_24;
          }
          if ( a5 )
            *(_BYTE *)(a5 + v5 + 16 * v15) = 0;
          V_LOCK();
          v20 = v34[8 * v15++];
          logfmt_raw(var1004, 0x1000u, 0, "chip_id %02x core_id %02x cmn locked", v20, v16[1]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/backend/backend_eth/backend_eth.c",
            169,
            "check_cmn_lock_status",
            21,
            8694,
            20,
            var1004);
        }
        while ( back != v15 );
      }
    }
LABEL_24:
    v13 = v27;
  }
  while ( v27 != ++v24 );
  result = v23;
  if ( byte_163778 )
    byte_163778 = 0;
  return result;
}
