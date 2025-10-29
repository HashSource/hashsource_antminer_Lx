int __fastcall sub_638DC(int a1, char a2)
{
  unsigned __int64 v2; // d17
  int v3; // r1
  __int64 v4; // r2
  char v8[40]; // [sp+54h] [bp-11E8h] BYREF
  int v9; // [sp+1054h] [bp-1E8h] BYREF
  _QWORD s[2]; // [sp+1058h] [bp-1E4h] BYREF
  _DWORD v11[7]; // [sp+1068h] [bp-1D4h] BYREF
  int v12; // [sp+1084h] [bp-1B8h]
  _DWORD v13[8]; // [sp+1088h] [bp-1B4h] BYREF
  _DWORD v14[7]; // [sp+10A8h] [bp-194h] BYREF
  int v15; // [sp+10C4h] [bp-178h]
  _DWORD v16[8]; // [sp+10C8h] [bp-174h] BYREF
  _DWORD v17[7]; // [sp+10E8h] [bp-154h] BYREF
  int v18; // [sp+1104h] [bp-138h]
  _DWORD v19[8]; // [sp+1108h] [bp-134h] BYREF
  _DWORD v20[7]; // [sp+1128h] [bp-114h] BYREF
  int v21; // [sp+1144h] [bp-F8h]
  _DWORD v22[8]; // [sp+1148h] [bp-F4h] BYREF
  _DWORD v23[7]; // [sp+1168h] [bp-D4h] BYREF
  int v24; // [sp+1184h] [bp-B8h]
  _DWORD v25[39]; // [sp+1188h] [bp-B4h] BYREF
  _DWORD *all_created_runtime; // [sp+1224h] [bp-18h]
  int i; // [sp+1228h] [bp-14h]
  char *flag_from_monitor; // [sp+122Ch] [bp-10h]

  v9 = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  memset(s, 0, sizeof(s));
  for ( i = 0; i < v9; ++i )
  {
    flag_from_monitor = get_flag_from_monitor(all_created_runtime[i]);
    v25[38] = flag_from_monitor + 16;
    v25[37] = 0;
    LODWORD(v2) = 0;
    if ( (vshld_u64(1u, v2) & *((_QWORD *)flag_from_monitor + 2)) != 0 )
    {
      v25[36] = flag_from_monitor + 16;
      v25[35] = 0;
      LODWORD(v2) = 0;
      *((_QWORD *)flag_from_monitor + 3) |= vshld_u64(1u, v2);
      if ( a2 )
      {
        V_LOCK();
        sub_63550((int)v11, *(int *)(all_created_runtime[i] + 252));
        sub_63518((int)v13, "temp lost");
        logfmt_raw(
          v8,
          0x1000u,
          0,
          v12,
          v11[0],
          v11[1],
          v11[2],
          v11[3],
          v11[4],
          v11[5],
          v11[6],
          v12,
          v13[0],
          v13[1],
          v13[2],
          v13[3],
          v13[4],
          v13[5],
          v13[6],
          v13[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_temp",
          10,
          36,
          100,
          v8);
        v25[34] = s;
        v25[33] = 0;
        LODWORD(v2) = 0;
        s[0] |= vshld_u64(1u, v2);
      }
    }
    v25[32] = flag_from_monitor + 16;
    v25[31] = 1;
    LODWORD(v2) = 1;
    if ( (vshld_u64(1u, v2) & *((_QWORD *)flag_from_monitor + 2)) != 0 )
    {
      v25[30] = flag_from_monitor + 16;
      v25[29] = 1;
      LODWORD(v2) = 1;
      *((_QWORD *)flag_from_monitor + 3) |= vshld_u64(1u, v2);
      if ( a2 )
      {
        V_LOCK();
        sub_63550((int)v14, *(int *)(all_created_runtime[i] + 252));
        sub_63518((int)v16, "temp too high");
        logfmt_raw(
          v8,
          0x1000u,
          0,
          v15,
          v14[0],
          v14[1],
          v14[2],
          v14[3],
          v14[4],
          v14[5],
          v14[6],
          v15,
          v16[0],
          v16[1],
          v16[2],
          v16[3],
          v16[4],
          v16[5],
          v16[6],
          v16[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_temp",
          10,
          44,
          100,
          v8);
        v25[28] = s;
        v25[27] = 1;
        LODWORD(v2) = 1;
        s[0] |= vshld_u64(1u, v2);
      }
    }
    v25[26] = flag_from_monitor + 16;
    v25[25] = 2;
    LODWORD(v2) = 2;
    if ( (vshld_u64(1u, v2) & *((_QWORD *)flag_from_monitor + 2)) != 0 )
    {
      v25[24] = flag_from_monitor + 16;
      v25[23] = 2;
      LODWORD(v2) = 2;
      *((_QWORD *)flag_from_monitor + 3) |= vshld_u64(1u, v2);
      if ( a2 )
      {
        V_LOCK();
        sub_63550((int)v17, *(int *)(all_created_runtime[i] + 252));
        sub_63518((int)v19, "temp too low");
        logfmt_raw(
          v8,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v19[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_temp",
          10,
          52,
          100,
          v8);
        v25[22] = s;
        v25[21] = 2;
        LODWORD(v2) = 2;
        s[0] |= vshld_u64(1u, v2);
      }
    }
    v25[20] = flag_from_monitor + 16;
    v25[19] = 3;
    LODWORD(v2) = 3;
    if ( (vshld_u64(1u, v2) & *((_QWORD *)flag_from_monitor + 2)) != 0 )
    {
      v25[18] = flag_from_monitor + 16;
      v25[17] = 3;
      LODWORD(v2) = 3;
      *((_QWORD *)flag_from_monitor + 3) |= vshld_u64(1u, v2);
      if ( a2 )
      {
        V_LOCK();
        sub_63550((int)v20, *(int *)(all_created_runtime[i] + 252));
        sub_63518((int)v22, "read no temp");
        logfmt_raw(
          v8,
          0x1000u,
          0,
          v21,
          v20[0],
          v20[1],
          v20[2],
          v20[3],
          v20[4],
          v20[5],
          v20[6],
          v21,
          v22[0],
          v22[1],
          v22[2],
          v22[3],
          v22[4],
          v22[5],
          v22[6],
          v22[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_temp",
          10,
          60,
          100,
          v8);
        v25[16] = s;
        v25[15] = 3;
        LODWORD(v2) = 3;
        s[0] |= vshld_u64(1u, v2);
      }
    }
    v25[14] = flag_from_monitor + 16;
    v25[13] = 4;
    LODWORD(v2) = 4;
    if ( (vshld_u64(1u, v2) & *((_QWORD *)flag_from_monitor + 2)) != 0 )
    {
      v25[12] = flag_from_monitor + 16;
      v25[11] = 4;
      LODWORD(v2) = 4;
      *((_QWORD *)flag_from_monitor + 3) |= vshld_u64(1u, v2);
      if ( a2 )
      {
        V_LOCK();
        sub_63550((int)v23, *(int *)(all_created_runtime[i] + 252));
        sub_63518((int)v25, "uneffective temp exceed limit");
        logfmt_raw(
          v8,
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
          v25[0],
          v25[1],
          v25[2],
          v25[3],
          v25[4],
          v25[5],
          v25[6],
          v25[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_temp",
          10,
          68,
          100,
          v8);
        v25[10] = s;
        v25[9] = 4;
        LODWORD(v2) = 4;
        s[0] |= vshld_u64(1u, v2);
      }
    }
  }
  v3 = HIDWORD(s[0]);
  v4 = s[1];
  *(_DWORD *)a1 = s[0];
  *(_DWORD *)(a1 + 4) = v3;
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}
