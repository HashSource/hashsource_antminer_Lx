int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  unsigned __int64 v3; // d17
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int fan_max_speed; // r5
  char v13[32]; // [sp+64h] [bp-11A0h] BYREF
  __int64 v14; // [sp+1064h] [bp-1A0h]
  int v15; // [sp+106Ch] [bp-198h] BYREF
  _DWORD v16[7]; // [sp+1070h] [bp-194h] BYREF
  int v17; // [sp+108Ch] [bp-178h]
  _DWORD v18[8]; // [sp+1090h] [bp-174h] BYREF
  _DWORD v19[7]; // [sp+10B0h] [bp-154h] BYREF
  int v20; // [sp+10CCh] [bp-138h]
  _DWORD v21[8]; // [sp+10D0h] [bp-134h] BYREF
  _DWORD v22[7]; // [sp+10F0h] [bp-114h] BYREF
  int v23; // [sp+110Ch] [bp-F8h]
  _DWORD v24[8]; // [sp+1110h] [bp-F4h] BYREF
  _DWORD v25[7]; // [sp+1130h] [bp-D4h] BYREF
  int v26; // [sp+114Ch] [bp-B8h]
  _DWORD v27[8]; // [sp+1150h] [bp-B4h] BYREF
  _DWORD v28[7]; // [sp+1170h] [bp-94h] BYREF
  int v29; // [sp+118Ch] [bp-78h]
  _DWORD v30[18]; // [sp+1190h] [bp-74h] BYREF
  int realtime_speed; // [sp+11D8h] [bp-2Ch]
  int v32; // [sp+11DCh] [bp-28h]
  int fan_num; // [sp+11E0h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+11E4h] [bp-20h]
  int v35; // [sp+11E8h] [bp-1Ch]
  signed int i; // [sp+11ECh] [bp-18h]
  int j; // [sp+11F0h] [bp-14h]
  int k; // [sp+11F4h] [bp-10h]

  v15 = 0;
  all_created_runtime = get_all_created_runtime(&v15);
  if ( a1 != *all_created_runtime )
    return a3 + 32;
  if ( fan_inited != 1 )
  {
    fan_init();
    fan_inited = 1;
  }
  fan_num = platform_get_fan_num();
  v35 = 0;
  v14 = 0;
  for ( i = 0; i < fan_num; ++i )
  {
    realtime_speed = fan_get_realtime_speed(i);
    V_LOCK();
    sub_6A588((int)v16, i);
    sub_6A5BC((int)v18, realtime_speed);
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v17,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17,
      v18[0],
      v18[1],
      v18[2],
      v18[3],
      v18[4],
      v18[5],
      v18[6],
      v18[7],
      "%s",
      "update_fanspeed");
    V_UNLOCK();
    zlog(
      g_fan_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
      200,
      "update_fanspeed",
      15,
      37,
      40,
      v13);
    if ( realtime_speed == -1 )
    {
      V_LOCK();
      sub_6A588((int)v22, i);
      sub_6A5BC((int)v24, realtime_speed & ~(realtime_speed >> 31));
      logfmt_raw(
        v13,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        v24[0],
        v24[1],
        v24[2],
        v24[3],
        v24[4],
        v24[5],
        v24[6],
        v24[7],
        "%2d(corresponding to FAN%s on control board PCB)",
        i,
        fan_name[i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        200,
        "update_fanspeed",
        15,
        45,
        100,
        v13);
      *((_BYTE *)&v14 + i) = 1;
    }
    else
    {
      V_LOCK();
      sub_6A588((int)v19, i);
      sub_6A5BC((int)v21, realtime_speed);
      logfmt_raw(
        v13,
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
        v21[0],
        v21[1],
        v21[2],
        v21[3],
        v21[4],
        v21[5],
        v21[6],
        v21[7],
        "%s",
        "update_fanspeed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        200,
        "update_fanspeed",
        15,
        39,
        20,
        v13);
      *(_DWORD *)(a2[27] + 4 * v35) = i;
      v5 = a2[26];
      v6 = v35++;
      *(_DWORD *)(v5 + 4 * v6) = realtime_speed;
    }
  }
  a2[25] = v35;
  if ( fan_num > a2[25] )
  {
    v30[17] = a3 + 32;
    v30[16] = 1;
    LODWORD(v3) = 1;
    *(_QWORD *)(a3 + 32) |= vshld_u64(1u, v3);
  }
  for ( j = 0; j < a2[25]; ++j )
  {
    if ( *(_DWORD *)(a2[26] + 4 * j) )
    {
      v7 = *(_DWORD *)(a2[26] + 4 * j);
      fan_max_speed = platform_get_fan_max_speed(j);
      if ( v7 >= fan_pwm_get() * fan_max_speed / 150 )
        continue;
    }
    v30[15] = a3 + 32;
    v30[14] = 0;
    LODWORD(v3) = 0;
    *(_QWORD *)(a3 + 32) |= vshld_u64(1u, v3);
    *((_BYTE *)&v14 + j) = 1;
  }
  v30[13] = a3 + 32;
  v30[12] = 1;
  LODWORD(v3) = 1;
  if ( (vshld_u64(1u, v3) & *(_QWORD *)(a3 + 32)) != 0
    || (v30[11] = a3 + 32, v30[10] = 0, LODWORD(v3) = 0, (vshld_u64(1u, v3) & *(_QWORD *)(a3 + 32)) != 0) )
  {
    if ( ++dword_153C30 > dword_14F908 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "fan_error_num: %d fan_num %d", dword_153C30, a2[25]);
      V_UNLOCK();
      if ( !*(_BYTE *)(a1 + 258) )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          200,
          "update_fanspeed",
          15,
          65,
          20,
          v13);
      if ( dword_14F908 + 1 == dword_153C30 )
      {
        v30[9] = a3 + 32;
        v30[8] = 2;
        LODWORD(v3) = 2;
        *(_QWORD *)(a3 + 32) |= vshld_u64(1u, v3);
        for ( k = 0; k < fan_num; ++k )
        {
          v32 = fan_get_realtime_speed(k);
          V_LOCK();
          sub_6A588((int)v25, k);
          sub_6A5BC((int)v27, v32);
          logfmt_raw(
            v13,
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
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v27[7],
            "%s",
            "update_fanspeed");
          V_UNLOCK();
          zlog(
            g_fan_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            200,
            "update_fanspeed",
            15,
            72,
            40,
            v13);
          V_LOCK();
          sub_6A588((int)v28, k);
          sub_6A5BC((int)v30, v32 & ~(v32 >> 31));
          logfmt_raw(
            v13,
            0x1000u,
            0,
            v29,
            v28[0],
            v28[1],
            v28[2],
            v28[3],
            v28[4],
            v28[5],
            v28[6],
            v29,
            v30[0],
            v30[1],
            v30[2],
            v30[3],
            v30[4],
            v30[5],
            v30[6],
            v30[7],
            "%2d(corresponding to FAN%s on control board PCB)",
            k,
            fan_name[k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            200,
            "update_fanspeed",
            15,
            73,
            100,
            v13);
          if ( *((_BYTE *)&v14 + k) )
            set_miner_6060info_status_fan_err(k, 1);
        }
      }
    }
  }
  else
  {
    dword_153C30 = 0;
  }
  return a3 + 32;
}
