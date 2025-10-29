int __fastcall check_mac_done(int a1, int a2, int a3, int a4)
{
  unsigned __int8 v6; // r6
  int v7; // r0
  int v8; // r2
  int *v9; // r12
  unsigned __int8 *v10; // r9
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int *v14; // r2
  int v15; // r3
  int v16; // r6
  int (**v17)(); // r0
  unsigned __int8 *v18; // r4
  int v19; // r2
  int v20; // r0
  bool v21; // zf
  bool v22; // zf
  int v23; // r5
  int v24; // r12
  int v25; // r2
  int v26; // r0
  _BOOL4 v28; // r3
  int v29; // [sp+30h] [bp-1114h]
  unsigned __int8 *v30; // [sp+34h] [bp-1110h]
  int *v31; // [sp+40h] [bp-1104h]
  int v32; // [sp+44h] [bp-1100h]
  int *v34; // [sp+4Ch] [bp-10F8h]
  _DWORD v35[4]; // [sp+50h] [bp-10F4h] BYREF
  _DWORD v36[7]; // [sp+60h] [bp-10E4h] BYREF
  int v37; // [sp+7Ch] [bp-10C8h]
  _DWORD v38[7]; // [sp+80h] [bp-10C4h] BYREF
  int v39; // [sp+9Ch] [bp-10A8h]
  _DWORD v40[7]; // [sp+A0h] [bp-10A4h] BYREF
  int v41; // [sp+BCh] [bp-1088h]
  _DWORD v42[7]; // [sp+C0h] [bp-1084h] BYREF
  int v43; // [sp+DCh] [bp-1068h]
  _DWORD v44[7]; // [sp+E0h] [bp-1064h] BYREF
  int v45; // [sp+FCh] [bp-1048h]
  _DWORD v46[7]; // [sp+100h] [bp-1044h] BYREF
  int v47; // [sp+11Ch] [bp-1028h]
  _DWORD v48[7]; // [sp+120h] [bp-1024h] BYREF
  int v49; // [sp+13Ch] [bp-1008h]
  char v50[4100]; // [sp+140h] [bp-1004h] BYREF

  v6 = a3;
  V_LOCK();
  logfmt_raw(v50, 0x1000u, 0, "%s...", "check_mac_done");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_mac_done",
    14,
    380,
    20,
    v50);
  sub_5BD68(a1, v6, 149, 0);
  sub_5BD68(a1, v6, 151, 0);
  sub_5BD68(a1, v6, 153, 0);
  sub_5BD68(a1, v6, 87, 255);
  sub_5BD68(a1, v6, 159, 0);
  sub_5BD68(a1, v6, 133, 805306367);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      sub_5BD68(a1, a3, 134, 0xFFFFFFF);
      sub_5BD68(a1, a3, 132, -2147483647);
    }
  }
  else
  {
    sub_5BD68(a1, a3, 134, 0xFFFFFFF);
    sub_5BD68(a1, a3, 132, 17);
  }
  sleep(8u);
  v7 = (int)malloc(0x600u);
  v10 = (unsigned __int8 *)v7;
  v35[1] = 0;
  if ( a3 == 255 )
    v8 = 14;
  v35[2] = 0;
  if ( a3 == 255 )
    v9 = v35;
  v35[3] = 0;
  v35[0] = 0;
  if ( a3 == 255 )
  {
    v11 = (int)&unk_137460;
    v34 = (int *)v8;
  }
  else
  {
    v11 = 1;
  }
  if ( a3 == 255 )
  {
    v7 = *(_DWORD *)v11;
    v12 = *(_DWORD *)(v11 + 4);
    v13 = *(_DWORD *)(v11 + 8);
    v11 = *(_DWORD *)(v11 + 12);
    *v9 = v7;
    v9[1] = v12;
    v9[2] = v13;
    v9 += 3;
  }
  else
  {
    v34 = (int *)v11;
  }
  LOWORD(v14) = (unsigned __int16)"xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx";
  if ( a3 == 255 )
    *(_WORD *)v9 = v11;
  HIWORD(v14) = (unsigned int)"xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx" >> 16;
  v31 = v14;
  v32 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v15 = v32;
      v14 = v35;
    }
    else
    {
      v15 = a3;
    }
    if ( a3 == 255 )
      v15 = *((unsigned __int8 *)v14 + v15);
    v29 = v15;
    v16 = (unsigned __int16)v15;
    v17 = dev_ctrl(v7);
    ((void (__fastcall *)(_DWORD))v17[18])(*(_DWORD *)(a1 + 136));
    v7 = sub_5BFD4(a1, v16, 139, v10);
    if ( v7 > 0 )
    {
      v18 = v10;
      v30 = &v10[12 * v7];
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = v18[4];
          if ( (*(_DWORD *)v18 & 0xFF000000) == 0xFF000000 )
            break;
          V_LOCK();
          V_INT((int)v48, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v50,
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
            v31,
            v23,
            v18[8],
            bswap32(*(_DWORD *)v18));
          V_UNLOCK();
          v24 = 60;
          v25 = 485;
          v26 = g_zc;
LABEL_46:
          v18 += 12;
          v7 = zlog(
                 v26,
                 "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "check_mac_done",
                 14,
                 v25,
                 v24,
                 v50);
          if ( v30 == v18 )
            goto LABEL_47;
        }
        if ( (unsigned __int8)*(_DWORD *)v18 == 255 )
          break;
        if ( v29 == 3 )
        {
          if ( (*(_DWORD *)v18 & 0xF0) == 0xF0 )
          {
            sub_5C1F4(a1, v23, 3, 135, v10);
            goto LABEL_33;
          }
LABEL_53:
          V_LOCK();
          V_INT((int)v38, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v50,
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
            "chip %02x core %02x mac bist status %02x",
            v18[4],
            v18[8],
            *(_DWORD *)v18 & 0xF0);
          V_UNLOCK();
          v19 = 444;
          v20 = g_zc;
          goto LABEL_27;
        }
        V_LOCK();
        V_INT((int)v36, "chain", *(int *)(a1 + 140));
        logfmt_raw(
          v50,
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
          "chip %02x core %02x mac bist status %02x",
          v18[4],
          v18[8],
          *v18);
        V_UNLOCK();
        v19 = 441;
        v20 = g_zc;
LABEL_27:
        zlog(
          v20,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_mac_done",
          14,
          v19,
          100,
          v50);
LABEL_28:
        if ( sub_5C1F4(a1, v23, v16, 135, v10) )
        {
          v21 = *(_DWORD *)v10 == 0;
          if ( *(_DWORD *)v10 )
            v21 = v29 == 3;
          if ( !v21 )
          {
            V_LOCK();
            V_INT((int)v40, "chain", *(int *)(a1 + 140));
            logfmt_raw(
              v50,
              0x1000u,
              0,
              v41,
              v40[0],
              v40[1],
              v40[2],
              v40[3],
              v40[4],
              v40[5],
              v40[6],
              v41,
              "channel[0~3] chip %02x core %02x reg 0x87 mac bist err cnt %08x",
              v10[4],
              v10[8],
              bswap32(*(_DWORD *)v10));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              450,
              100,
              v50);
          }
        }
LABEL_33:
        if ( sub_5C1F4(a1, v23, v16, 136, v10) && *(_DWORD *)v10 )
        {
          V_LOCK();
          V_INT((int)v42, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v50,
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
            "channel[4~7] chip %02x core %02x reg 0x88 mac bist err cnt %08x",
            v10[4],
            v10[8],
            bswap32(*(_DWORD *)v10));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_mac_done",
            14,
            459,
            100,
            v50);
        }
        if ( sub_5C1F4(a1, v23, v16, 137, v10) )
        {
          v22 = *(_DWORD *)v10 == 0;
          if ( *(_DWORD *)v10 )
            v22 = v29 == 3;
          if ( !v22 )
          {
            V_LOCK();
            V_INT((int)v44, "chain", *(int *)(a1 + 140));
            logfmt_raw(
              v50,
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
              "channel[0~3] chip %02x core %02x reg 0x89 mac bist lost cnt %08x",
              v10[4],
              v10[8],
              bswap32(*(_DWORD *)v10));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              468,
              100,
              v50);
          }
        }
        v7 = sub_5C1F4(a1, v23, v16, 138, v10);
        if ( v7 && *(_DWORD *)v10 )
        {
          V_LOCK();
          V_INT((int)v46, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v50,
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
            "channel[4~7] chip %02x core %02x reg 0x8a mac bist lost cnt %08x",
            v10[4],
            v10[8],
            bswap32(*(_DWORD *)v10));
          V_UNLOCK();
          v24 = 100;
          v25 = 477;
          v26 = g_zc;
          goto LABEL_46;
        }
        v18 += 12;
        if ( v30 == v18 )
          goto LABEL_47;
      }
      v28 = (*(_DWORD *)v18 & 0xF0) != 240;
      if ( v29 != 3 )
        v28 = 0;
      if ( !v28 )
        goto LABEL_28;
      goto LABEL_53;
    }
LABEL_47:
    v14 = v34;
    v21 = v34 == (int *)++v32;
  }
  while ( !v21 );
  free(v10);
  return 0;
}
