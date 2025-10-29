int __fastcall check_bist_done(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  _DWORD *v7; // r12
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r6
  unsigned int v15; // r3
  unsigned __int8 *v17; // r4
  int back; // r0
  unsigned __int8 *v19; // r7
  int v20; // r3
  int v23; // [sp+38h] [bp-10B4h]
  unsigned int v24; // [sp+3Ch] [bp-10B0h]
  unsigned int v25; // [sp+44h] [bp-10A8h]
  int v26; // [sp+48h] [bp-10A4h]
  int v29; // [sp+54h] [bp-1098h]
  _BYTE v30[16]; // [sp+58h] [bp-1094h] BYREF
  _DWORD v31[7]; // [sp+68h] [bp-1084h] BYREF
  int v32; // [sp+84h] [bp-1068h]
  _DWORD v33[7]; // [sp+88h] [bp-1064h] BYREF
  int v34; // [sp+A4h] [bp-1048h]
  _QWORD v35[8]; // [sp+A8h] [bp-1044h] BYREF
  char v36[4100]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v31, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v36,
    0x1000u,
    0,
    v32,
    v31[0],
    v31[1],
    v31[2],
    v31[3],
    v31[4],
    v31[5],
    v31[6],
    v32,
    "%s...",
    "check_bist_done");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_done",
    15,
    8917,
    60,
    v36);
  if ( a3 == (_BYTE *)255 )
  {
    v8 = (int)&unk_13AA98;
    v29 = 14;
    v7 = v30;
  }
  else
  {
    v8 = 1;
    v29 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 8);
    v8 = *(_DWORD *)(v8 + 12);
    *v7 = v9;
    v7[1] = v10;
    v7[2] = v11;
    v7 += 3;
  }
  LOWORD(v12) = (unsigned __int16)"channel %1x, chip_id %02x core_id %02x bist error";
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v7 = v8;
  HIWORD(v12) = (unsigned int)"channel %1x, chip_id %02x core_id %02x bist error" >> 16;
  v24 = a4;
  v23 = v12;
  v26 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v12 = v26;
      v13 = (unsigned int)v30;
    }
    else
    {
      v13 = (unsigned int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v13 = *(unsigned __int8 *)(v12 + v13);
    v25 = v13;
    if ( v24 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( v15 > 3 || v25 != 3 )
        {
          v17 = (unsigned __int8 *)v35;
          back = serdes_apb_read_back(a1, a2, v25, (unsigned __int16)((_WORD)v15 << 12) | 0x11, (int)v35);
          if ( back > 0 )
          {
            v19 = (unsigned __int8 *)&v35[back];
            do
            {
              v20 = *((_DWORD *)v17 + 1);
              if ( (v20 & 0x20000) != 0 || (v20 & 0x400) == 0 )
              {
                V_LOCK();
                V_INT((int)v33, "chain", *(int *)(a1 + 148));
                logfmt_raw(
                  v36,
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
                  v23,
                  v14,
                  *v17,
                  v17[1]);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_bist_done",
                  15,
                  8939,
                  100,
                  v36);
              }
              v17 += 8;
            }
            while ( v17 != v19 );
          }
        }
        v15 = (unsigned __int16)++v14;
      }
      while ( (unsigned __int16)v14 < v24 );
    }
    v12 = v29;
  }
  while ( v29 != ++v26 );
  return 0;
}
