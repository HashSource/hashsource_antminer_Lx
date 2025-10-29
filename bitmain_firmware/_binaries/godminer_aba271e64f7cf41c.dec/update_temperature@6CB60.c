int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  unsigned __int64 v3; // d17
  int v4; // r3
  _BYTE v10[32]; // [sp+44h] [bp-2120h] BYREF
  char v11[64]; // [sp+FE4h] [bp-1180h] BYREF
  unsigned int v12; // [sp+1FE4h] [bp-180h] BYREF
  int v13; // [sp+1FE8h] [bp-17Ch] BYREF
  int v14; // [sp+1FECh] [bp-178h] BYREF
  int v15; // [sp+1FF0h] [bp-174h] BYREF
  int v16; // [sp+1FF4h] [bp-170h] BYREF
  int v17; // [sp+1FF8h] [bp-16Ch] BYREF
  int v18; // [sp+1FFCh] [bp-168h] BYREF
  _DWORD v19[7]; // [sp+2000h] [bp-164h] BYREF
  int v20; // [sp+201Ch] [bp-148h]
  _DWORD v21[7]; // [sp+2020h] [bp-144h] BYREF
  int v22; // [sp+203Ch] [bp-128h]
  _DWORD v23[7]; // [sp+2040h] [bp-124h] BYREF
  int v24; // [sp+205Ch] [bp-108h]
  _DWORD v25[7]; // [sp+2060h] [bp-104h] BYREF
  int v26; // [sp+207Ch] [bp-E8h]
  _DWORD v27[7]; // [sp+2080h] [bp-E4h] BYREF
  int v28; // [sp+209Ch] [bp-C8h]
  _DWORD v29[7]; // [sp+20A0h] [bp-C4h] BYREF
  int v30; // [sp+20BCh] [bp-A8h]
  _DWORD v31[7]; // [sp+20C0h] [bp-A4h] BYREF
  int v32; // [sp+20DCh] [bp-88h]
  _DWORD v33[7]; // [sp+20E0h] [bp-84h] BYREF
  int v34; // [sp+20FCh] [bp-68h]
  _DWORD v35[7]; // [sp+2100h] [bp-64h] BYREF
  int v36; // [sp+211Ch] [bp-48h]
  int v37; // [sp+2124h] [bp-40h]
  int v38; // [sp+2128h] [bp-3Ch]
  int v39; // [sp+212Ch] [bp-38h]
  int v40; // [sp+2130h] [bp-34h]
  int v41; // [sp+2134h] [bp-30h]
  int v42; // [sp+2138h] [bp-2Ch]
  int v43; // [sp+213Ch] [bp-28h]
  int v44; // [sp+2140h] [bp-24h]
  int v45; // [sp+2144h] [bp-20h]
  int v46; // [sp+2148h] [bp-1Ch]
  int v47; // [sp+214Ch] [bp-18h]
  int v48; // [sp+2150h] [bp-14h]
  int v49; // [sp+2154h] [bp-10h]

  v14 = 0;
  v13 = 0;
  v12 = 0;
  if ( *(_BYTE *)(a1 + 258) )
    v4 = 0;
  else
    v4 = 5;
  v49 = v4;
  if ( *(_BYTE *)(a1 + 258) != 1 )
    return a3 + 16;
  if ( sub_6BFE0((_DWORD *)a1, a2, &v18, &v17, &v16, &v15, &v14, &v13, &v12) && *(_BYTE *)(a1 + 1096) != 1 )
  {
    if ( v49 )
    {
      V_LOCK();
      sub_6BF10((int)v19, *(int *)(a1 + 252));
      logfmt_raw(
        v11,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
        v14,
        v13,
        v12);
      V_UNLOCK();
      switch ( v49 )
      {
        case 5:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            20,
            v11);
          break;
        case 4:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            40,
            v11);
          break;
        case 3:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            60,
            v11);
          break;
        case 2:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            80,
            v11);
          break;
        case 1:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            100,
            v11);
          break;
        case 0:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            203,
            "update_temperature",
            18,
            330,
            120,
            v11);
          break;
      }
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Sweep error string = %s.", "J0:6");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        203,
        "update_temperature",
        18,
        331,
        100,
        v11);
    }
    v48 = a3 + 16;
    v47 = 0;
    LODWORD(v3) = 0;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  if ( v14 )
  {
    dword_15F4D8[*(_DWORD *)(a1 + 248)] = v18;
    a2[6] = v17;
    dword_15F518[*(_DWORD *)(a1 + 248)] = 0;
  }
  else if ( (int)++dword_15F518[*(_DWORD *)(a1 + 248)] > 2 )
  {
    V_LOCK();
    sub_6BF10((int)v21, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
      0x1000u,
      0,
      v22,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v22,
      "read no sensor pcb temp exceed limit! (%d)",
      dword_15F518[*(_DWORD *)(a1 + 248)]);
    V_UNLOCK();
    switch ( v49 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          20,
          v11);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          40,
          v11);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          60,
          v11);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          80,
          v11);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          100,
          v11);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          349,
          120,
          v11);
        break;
    }
    v46 = a3 + 16;
    v45 = 3;
    LODWORD(v3) = 3;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  if ( v13 )
  {
    a2[5] = v16;
    dword_15F558[*(_DWORD *)(a1 + 248)] = v15;
    dword_15F598[*(_DWORD *)(a1 + 248)] = 0;
  }
  else if ( (int)++dword_15F598[*(_DWORD *)(a1 + 248)] > 2 )
  {
    V_LOCK();
    sub_6BF10((int)v23, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      "read no sensor chip temp exceed limit! (%d)",
      dword_15F598[*(_DWORD *)(a1 + 248)]);
    V_UNLOCK();
    switch ( v49 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          20,
          v11);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          40,
          v11);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          60,
          v11);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          80,
          v11);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          100,
          v11);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          366,
          120,
          v11);
        break;
    }
    v44 = a3 + 16;
    v43 = 3;
    LODWORD(v3) = 3;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  if ( *(_DWORD *)(a1 + 412) >= v12 )
  {
    dword_15F5D8[*(_DWORD *)(a1 + 248)] = 0;
  }
  else if ( (int)++dword_15F5D8[*(_DWORD *)(a1 + 248)] > 2 )
  {
    V_LOCK();
    sub_6BF10((int)v25, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
      0x1000u,
      0,
      v26,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v26,
      "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
      dword_15F5D8[*(_DWORD *)(a1 + 248)],
      v12);
    V_UNLOCK();
    switch ( v49 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          20,
          v11);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          40,
          v11);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          60,
          v11);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          80,
          v11);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          100,
          v11);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          377,
          120,
          v11);
        break;
    }
    (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 208))(a1, v10, 4000);
    V_LOCK();
    sub_6BF10((int)v27, *(int *)(a1 + 252));
    logfmt_raw(v11, 0x1000u, 0, v28, v27[0], v27[1], v27[2], v27[3], v27[4], v27[5], v27[6], v28, "%s", v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      203,
      "update_temperature",
      18,
      380,
      60,
      v11);
    v42 = a3 + 16;
    v41 = 4;
    LODWORD(v3) = 4;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  if ( a2[5] <= *(_DWORD *)(a1 + 400) && dword_15F4D8[*(_DWORD *)(a1 + 248)] <= *(_DWORD *)(a1 + 404) )
  {
    dword_15F618[*(_DWORD *)(a1 + 248)] = 0;
  }
  else if ( (int)++dword_15F618[*(_DWORD *)(a1 + 248)] > 2 )
  {
    V_LOCK();
    sub_6BF10((int)v29, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
      dword_15F618[*(_DWORD *)(a1 + 248)],
      a2[5],
      dword_15F4D8[*(_DWORD *)(a1 + 248)]);
    V_UNLOCK();
    switch ( v49 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          20,
          v11);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          40,
          v11);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          60,
          v11);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          80,
          v11);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          100,
          v11);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          395,
          120,
          v11);
        break;
    }
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Sweep error string = %s.", "P:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      203,
      "update_temperature",
      18,
      396,
      100,
      v11);
    (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 208))(a1, v10, 4000);
    V_LOCK();
    sub_6BF10((int)v31, *(int *)(a1 + 252));
    logfmt_raw(v11, 0x1000u, 0, v32, v31[0], v31[1], v31[2], v31[3], v31[4], v31[5], v31[6], v32, "%s", v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      203,
      "update_temperature",
      18,
      399,
      60,
      v11);
    v40 = a3 + 16;
    v39 = 1;
    LODWORD(v3) = 1;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  if ( a2[6] > *(_DWORD *)(a1 + 408) )
  {
    dword_15F658[*(_DWORD *)(a1 + 248)] = 0;
  }
  else if ( (int)++dword_15F658[*(_DWORD *)(a1 + 248)] > 2 )
  {
    V_LOCK();
    sub_6BF10((int)v33, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
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
      "low temp exceed limit (%d), min_pcb_temp = %d!",
      dword_15F658[*(_DWORD *)(a1 + 248)],
      a2[6]);
    V_UNLOCK();
    switch ( v49 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          20,
          v11);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          40,
          v11);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          60,
          v11);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          80,
          v11);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          100,
          v11);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          203,
          "update_temperature",
          18,
          414,
          120,
          v11);
        break;
    }
    (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 208))(a1, v10, 4000);
    V_LOCK();
    sub_6BF10((int)v35, *(int *)(a1 + 252));
    logfmt_raw(v11, 0x1000u, 0, v36, v35[0], v35[1], v35[2], v35[3], v35[4], v35[5], v35[6], v36, "%s", v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      203,
      "update_temperature",
      18,
      417,
      60,
      v11);
    v38 = a3 + 16;
    v37 = 2;
    LODWORD(v3) = 2;
    *(_QWORD *)(a3 + 16) |= vshld_u64(1u, v3);
  }
  return a3 + 16;
}
