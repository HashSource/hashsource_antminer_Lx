int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int v4; // r7
  int v8; // r4
  int v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r2
  bool v13; // nf
  int v14; // r9
  int v15; // r0
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v21; // r12
  bool v22; // zf
  int v23; // r2
  int v24; // r1
  int v25; // r1
  int v26; // [sp+34h] [bp-10E0h] BYREF
  int v27; // [sp+38h] [bp-10DCh] BYREF
  int v28; // [sp+3Ch] [bp-10D8h] BYREF
  int v29; // [sp+40h] [bp-10D4h] BYREF
  int v30; // [sp+44h] [bp-10D0h] BYREF
  int v31; // [sp+48h] [bp-10CCh] BYREF
  unsigned int v32; // [sp+4Ch] [bp-10C8h] BYREF
  _DWORD v33[7]; // [sp+50h] [bp-10C4h] BYREF
  int v34; // [sp+6Ch] [bp-10A8h]
  _DWORD v35[7]; // [sp+70h] [bp-10A4h] BYREF
  int v36; // [sp+8Ch] [bp-1088h]
  _DWORD v37[7]; // [sp+90h] [bp-1084h] BYREF
  int v38; // [sp+ACh] [bp-1068h]
  _DWORD v39[7]; // [sp+B0h] [bp-1064h] BYREF
  int v40; // [sp+CCh] [bp-1048h]
  _DWORD v41[7]; // [sp+D0h] [bp-1044h] BYREF
  int v42; // [sp+ECh] [bp-1028h]
  _DWORD v43[7]; // [sp+F0h] [bp-1024h] BYREF
  int v44; // [sp+10Ch] [bp-1008h]
  char v45[4100]; // [sp+110h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 154);
  v4 = a3 + 16;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( !v3 )
    return v4;
  if ( read_temperature(a1, a2, &v26, &v27, &v28, &v29, &v30, &v31, &v32) )
  {
    V_LOCK();
    V_INT((int)v33, "chain", *(int *)(a1 + 148));
    logfmt_raw(
      v45,
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
      "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
      v30,
      v31,
      v32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      269,
      100,
      v45);
    *(_DWORD *)(a3 + 16) |= 1u;
  }
  LOWORD(v8) = (unsigned __int16)&unk_16C6C8;
  v9 = *(_DWORD *)(a1 + 144);
  if ( v30 )
  {
    v14 = v31;
    v10 = 4 * v9;
    HIWORD(v8) = (unsigned int)&unk_16C6C8 >> 16;
    v21 = v27;
    v22 = v31 == 0;
    *(_DWORD *)(v8 + 4 * v9) = v26;
    a2[5] = v21;
    *(_DWORD *)(v8 + 4 * v9 + 16) = 0;
    if ( !v22 )
    {
LABEL_8:
      v15 = v28;
      *(_DWORD *)(v8 + v10 + 32) = 0;
      a2[4] = v15;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = 4 * v9;
    HIWORD(v8) = (unsigned int)&unk_16C6C8 >> 16;
    v11 = v8 + 4 * v9;
    v12 = *(_DWORD *)(v11 + 16) + 1;
    v13 = *(_DWORD *)(v11 + 16) - 1 < 0;
    *(_DWORD *)(v11 + 16) = v12;
    if ( !(v13 ^ __OFSUB__(v12, 2) | (v12 == 2)) )
    {
      V_LOCK();
      V_INT((int)v35, "chain", *(int *)(a1 + 148));
      logfmt_raw(
        v45,
        0x1000u,
        0,
        v36,
        v35[0],
        v35[1],
        v35[2],
        v35[3],
        v35[4],
        v35[5],
        v35[6],
        v36,
        "read no sensor pcb temp exceed limit! (%d)",
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144) + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        281,
        100,
        v45);
      v9 = *(_DWORD *)(a1 + 144);
      v10 = 4 * v9;
      *(_DWORD *)(a3 + 16) |= 8u;
    }
    v14 = v31;
    if ( v31 )
      goto LABEL_8;
  }
  v23 = *(_DWORD *)(v8 + v10 + 32) + 1;
  v13 = *(_DWORD *)(v8 + v10 + 32) - 1 < 0;
  *(_DWORD *)(v8 + v10 + 32) = v23;
  if ( !(v13 ^ __OFSUB__(v23, 2) | (v23 == 2)) )
  {
    V_LOCK();
    V_INT((int)v37, "chain", *(int *)(a1 + 148));
    logfmt_raw(
      v45,
      0x1000u,
      v14,
      v38,
      v37[0],
      v37[1],
      v37[2],
      v37[3],
      v37[4],
      v37[5],
      v37[6],
      v38,
      "read no sensor chip temp exceed limit! (%d)",
      *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144) + 32));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      294,
      100,
      v45);
    v9 = *(_DWORD *)(a1 + 144);
    v10 = 4 * v9;
    *(_DWORD *)(a3 + 16) |= 8u;
  }
LABEL_9:
  v16 = *(_DWORD **)(a1 + 220);
  if ( v16[5] >= v32 )
  {
    *(_DWORD *)(v8 + v10 + 48) = 0;
  }
  else
  {
    v17 = *(_DWORD *)(v8 + v10 + 48) + 1;
    v13 = *(_DWORD *)(v8 + v10 + 48) - 5 < 0;
    *(_DWORD *)(v8 + v10 + 48) = v17;
    if ( !(v13 ^ __OFSUB__(v17, 6) | (v17 == 6)) )
    {
      V_LOCK();
      V_INT((int)v39, "chain", *(int *)(a1 + 148));
      logfmt_raw(
        v45,
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
        "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144) + 48),
        v32);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        303,
        100,
        v45);
      v9 = *(_DWORD *)(a1 + 144);
      v16 = *(_DWORD **)(a1 + 220);
      *(_DWORD *)(a3 + 16) |= 0x10u;
      v10 = 4 * v9;
    }
  }
  if ( a2[4] > v16[2] || *(_DWORD *)(v8 + 4 * v9) > v16[3] )
  {
    v24 = *(_DWORD *)(v8 + v10 + 64) + 1;
    v13 = *(_DWORD *)(v8 + v10 + 64) - 1 < 0;
    *(_DWORD *)(v8 + v10 + 64) = v24;
    if ( !(v13 ^ __OFSUB__(v24, 2) | (v24 == 2)) )
    {
      V_LOCK();
      V_INT((int)v41, "chain", *(int *)(a1 + 148));
      logfmt_raw(
        v45,
        0x1000u,
        0,
        v42,
        v41[0],
        v41[1],
        v41[2],
        v41[3],
        v41[4],
        v41[5],
        v41[6],
        v42,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144) + 64),
        a2[4],
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144)));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        314,
        100,
        v45);
      v25 = *(_DWORD *)(a1 + 144);
      v16 = *(_DWORD **)(a1 + 220);
      *(_DWORD *)(a3 + 16) |= 2u;
      v10 = 4 * v25;
    }
  }
  else
  {
    *(_DWORD *)(v8 + v10 + 64) = 0;
  }
  if ( a2[5] <= v16[4] )
  {
    v18 = v8 + v10;
    v19 = *(_DWORD *)(v18 + 80) + 1;
    v13 = *(_DWORD *)(v18 + 80) - 1 < 0;
    *(_DWORD *)(v18 + 80) = v19;
    if ( !(v13 ^ __OFSUB__(v19, 2) | (v19 == 2)) )
    {
      V_LOCK();
      V_INT((int)v43, "chain", *(int *)(a1 + 148));
      logfmt_raw(
        v45,
        0x1000u,
        0,
        v44,
        v43[0],
        v43[1],
        v43[2],
        v43[3],
        v43[4],
        v43[5],
        v43[6],
        v44,
        "low temp exceed limit (%d), min_pcb_temp = %d!",
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 144) + 80),
        a2[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        325,
        100,
        v45);
      *(_DWORD *)(a3 + 16) |= 4u;
    }
    return v4;
  }
  *(_DWORD *)(v8 + v10 + 80) = 0;
  return v4;
}
