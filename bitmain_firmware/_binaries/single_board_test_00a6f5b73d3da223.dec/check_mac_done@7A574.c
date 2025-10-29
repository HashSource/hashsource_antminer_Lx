int __fastcall check_mac_done(int a1, int a2, char a3, int a4)
{
  _UNKNOWN **v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r6
  unsigned int v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r0
  int v13; // r4
  int v14; // r5
  int v15; // r6
  unsigned int v16; // r0
  int v17; // r4
  int v18; // r5
  int v19; // r6
  unsigned int v20; // r0
  int v21; // r4
  int v22; // r5
  int v23; // r6
  unsigned int v24; // r0
  _BYTE s[64]; // [sp+20h] [bp+10h] BYREF
  _BYTE v30[4080]; // [sp+60h] [bp+50h] BYREF
  _BYTE v31[16]; // [sp+1060h] [bp+1050h] BYREF
  int v32; // [sp+1070h] [bp+1060h]
  int v33; // [sp+1074h] [bp+1064h]
  int v34; // [sp+1078h] [bp+1068h]
  int v35; // [sp+107Ch] [bp+106Ch]
  unsigned __int8 v36; // [sp+1083h] [bp+1073h]
  int v37; // [sp+1084h] [bp+1074h]
  int v38; // [sp+1088h] [bp+1078h]
  unsigned __int8 *v39; // [sp+108Ch] [bp+107Ch]
  int j; // [sp+1090h] [bp+1080h]
  int i; // [sp+1094h] [bp+1084h]
  unsigned __int8 v42; // [sp+109Bh] [bp+108Bh]
  int v43; // [sp+109Ch] [bp+108Ch]

  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, "%s...", "check_mac_done");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_mac_done",
    14,
    409,
    60,
    v30);
  sub_789C4(a1, a3, 149, 0);
  sub_789C4(a1, a3, 151, 0);
  sub_789C4(a1, a3, 153, 0);
  sub_789C4(a1, a3, 87, 255);
  sub_789C4(a1, a3, 159, 0);
  sub_789C4(a1, a3, 133, 805306367);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      sub_789C4(a1, a3, 134, 0xFFFFFFF);
      sub_789C4(a1, a3, 132, -2147483647);
    }
  }
  else
  {
    sub_789C4(a1, a3, 134, 0xFFFFFFF);
    sub_789C4(a1, a3, 132, 17);
  }
  sleep(8u);
  v39 = (unsigned __int8 *)malloc(0x600u);
  v43 = 1;
  memset(v31, 0, sizeof(v31));
  if ( (unsigned __int8)a3 == 255 )
    v43 = sub_7936C(v31);
  v42 = 0;
  for ( i = 0; i < v43; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v42 = v31[i];
    else
      v42 = a3;
    v4 = dev_ctrl();
    ((void (__fastcall *)(_DWORD))v4[18])(*(_DWORD *)(a1 + 136));
    memset(s, 0, sizeof(s));
    v38 = 0;
    v37 = sub_78A20(a1, v42, 139, v39);
    for ( j = 0; j < v37; ++j )
    {
      v36 = v39[12 * j + 4];
      if ( (*(_DWORD *)&v39[12 * j] & 0xFF000000) == 0xFF000000 )
      {
        v34 = 0;
        v35 = 0;
        v32 = 0;
        v33 = 0;
        if ( (unsigned __int8)*(_DWORD *)&v39[12 * j] == 255 || v42 == 3 )
        {
          if ( (*(_DWORD *)&v39[12 * j] & 0xF0) != 0xF0 && v42 == 3 )
          {
            V_LOCK();
            logfmt_raw(
              v30,
              0x1000u,
              0,
              "chain %d chip %02x core %02x mac bist status %02x",
              *(_DWORD *)(a1 + 136),
              v39[12 * j + 4],
              v39[12 * j + 8],
              *(_DWORD *)&v39[12 * j] & 0xF0);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_mac_done",
              14,
              473,
              100,
              v30);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v30,
            0x1000u,
            0,
            "chain %d chip %02x core %02x mac bist status %02x",
            *(_DWORD *)(a1 + 136),
            v39[12 * j + 4],
            v39[12 * j + 8],
            (unsigned __int8)*(_DWORD *)&v39[12 * j]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_mac_done",
            14,
            470,
            100,
            v30);
        }
        v38 = sub_78DA0(a1, v36, v42, 135, v39);
        if ( v38 && *(_DWORD *)v39 && v42 != 3 )
        {
          V_LOCK();
          v5 = *(_DWORD *)(a1 + 136);
          v6 = v39[4];
          v7 = v39[8];
          v8 = sub_79338(*(_DWORD *)v39);
          logfmt_raw(
            v30,
            0x1000u,
            0,
            "chain %d channel[0~3] chip %02x core %02x reg 0x87 mac bist err cnt %08x",
            v5,
            v6,
            v7,
            v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_mac_done",
            14,
            479,
            100,
            v30);
        }
        v38 = sub_78DA0(a1, v36, v42, 136, v39);
        if ( v38 && *(_DWORD *)v39 )
        {
          V_LOCK();
          v9 = *(_DWORD *)(a1 + 136);
          v10 = v39[4];
          v11 = v39[8];
          v12 = sub_79338(*(_DWORD *)v39);
          logfmt_raw(
            v30,
            0x1000u,
            0,
            "chain %d channel[4~7] chip %02x core %02x reg 0x88 mac bist err cnt %08x",
            v9,
            v10,
            v11,
            v12);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_mac_done",
            14,
            488,
            100,
            v30);
        }
        v38 = sub_78DA0(a1, v36, v42, 137, v39);
        if ( v38 && *(_DWORD *)v39 && v42 != 3 )
        {
          V_LOCK();
          v13 = *(_DWORD *)(a1 + 136);
          v14 = v39[4];
          v15 = v39[8];
          v16 = sub_79338(*(_DWORD *)v39);
          logfmt_raw(
            v30,
            0x1000u,
            0,
            "chain %d channel[0~3] chip %02x core %02x reg 0x89 mac bist lost cnt %08x",
            v13,
            v14,
            v15,
            v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_mac_done",
            14,
            497,
            100,
            v30);
        }
        v38 = sub_78DA0(a1, v36, v42, 138, v39);
        if ( v38 && *(_DWORD *)v39 )
        {
          V_LOCK();
          v17 = *(_DWORD *)(a1 + 136);
          v18 = v39[4];
          v19 = v39[8];
          v20 = sub_79338(*(_DWORD *)v39);
          logfmt_raw(
            v30,
            0x1000u,
            0,
            "chain %d channel[4~7] chip %02x core %02x reg 0x8a mac bist lost cnt %08x",
            v17,
            v18,
            v19,
            v20);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_mac_done",
            14,
            506,
            100,
            v30);
        }
      }
      else
      {
        V_LOCK();
        v21 = *(_DWORD *)(a1 + 136);
        v22 = v36;
        v23 = v39[12 * j + 8];
        v24 = sub_79338(*(_DWORD *)&v39[12 * j]);
        logfmt_raw(
          v30,
          0x1000u,
          0,
          "chain %d xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx",
          v21,
          v22,
          v23,
          v24);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_mac_done",
          14,
          514,
          60,
          v30);
      }
    }
  }
  free(v39);
  return 0;
}
