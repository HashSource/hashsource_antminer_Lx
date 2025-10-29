int __fastcall check_bist_tx_running(int a1, int a2, _DWORD *a3, int a4)
{
  unsigned __int16 v4; // r5
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r6
  unsigned int v9; // r3
  unsigned __int8 *v11; // r4
  int back; // r0
  unsigned __int8 *v13; // r9
  int v14; // r0
  int v15; // r12
  int v16; // r2
  unsigned int v19; // [sp+4Ch] [bp-1088h]
  int v20; // [sp+50h] [bp-1084h]
  int v23; // [sp+5Ch] [bp-1078h]
  _DWORD v24[3]; // [sp+60h] [bp-1074h] BYREF
  __int16 v25; // [sp+6Ch] [bp-1068h]
  _DWORD v26[7]; // [sp+70h] [bp-1064h] BYREF
  int v27; // [sp+8Ch] [bp-1048h]
  _QWORD v28[8]; // [sp+90h] [bp-1044h] BYREF
  char v29[4100]; // [sp+D0h] [bp-1004h] BYREF

  v4 = a4;
  if ( a3 != (_DWORD *)255 )
    a4 = 1;
  if ( a3 == (_DWORD *)255 )
  {
    v23 = 14;
    v24[0] = 100991489;
    v24[1] = 235735561;
    v24[2] = 134677248;
    v25 = 3851;
  }
  else
  {
    v23 = a4;
  }
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", v23);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_tx_running",
    21,
    8821,
    60,
    v29);
  v20 = 0;
  do
  {
    if ( a3 == (_DWORD *)255 )
    {
      v6 = v20;
      v7 = (unsigned int)v24;
    }
    else
    {
      v7 = (unsigned int)a3;
    }
    if ( a3 == (_DWORD *)255 )
      v7 = *(unsigned __int8 *)(v6 + v7);
    v19 = v7;
    if ( v4 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        if ( v9 > 3 || v19 != 3 )
        {
          v11 = (unsigned __int8 *)v28;
          back = serdes_apb_read_back(a1, a2, v19, (unsigned __int16)((_WORD)v9 << 12) | 0x4A, (int)v28);
          if ( back > 0 )
          {
            v13 = (unsigned __int8 *)&v28[back];
            do
            {
              if ( (*((_DWORD *)v11 + 1) & 0x200) != 0 )
              {
                V_LOCK();
                logfmt_raw(
                  v29,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x tx bist is running",
                  v8,
                  *v11,
                  v11[1]);
                V_UNLOCK();
                v14 = g_zc;
                v15 = 20;
                v16 = 8839;
              }
              else
              {
                V_LOCK();
                V_INT((int)v26, "chain", *(int *)(a1 + 148));
                logfmt_raw(
                  v29,
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
                  "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
                  v8,
                  *v11,
                  v11[1],
                  *((_DWORD *)v11 + 1));
                V_UNLOCK();
                v14 = g_zc;
                v15 = 100;
                v16 = 8842;
              }
              v11 += 8;
              zlog(
                v14,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "check_bist_tx_running",
                21,
                v16,
                v15,
                v29);
            }
            while ( v11 != v13 );
          }
        }
        v9 = (unsigned __int16)++v8;
      }
      while ( v4 > (unsigned int)(unsigned __int16)v8 );
    }
    v6 = v23;
  }
  while ( v23 != ++v20 );
  return 0;
}
