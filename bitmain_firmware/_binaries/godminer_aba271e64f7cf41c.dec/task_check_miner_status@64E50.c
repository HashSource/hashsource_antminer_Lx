int __fastcall task_check_miner_status(int a1)
{
  unsigned __int64 v1; // d17
  bool v2; // r3
  __int64 v4; // [sp+40h] [bp-1094h] BYREF
  int v5; // [sp+48h] [bp-108Ch]
  int v6; // [sp+4Ch] [bp-1088h]
  int v7; // [sp+54h] [bp-1080h]
  char v8[60]; // [sp+58h] [bp-107Ch] BYREF
  int v9; // [sp+1058h] [bp-7Ch] BYREF
  unsigned __int8 v10; // [sp+105Fh] [bp-75h] BYREF
  __int64 v11; // [sp+1060h] [bp-74h] BYREF
  int v12; // [sp+1068h] [bp-6Ch]
  int v13; // [sp+106Ch] [bp-68h]
  _DWORD v14[7]; // [sp+1070h] [bp-64h] BYREF
  int v15; // [sp+108Ch] [bp-48h]
  int v16; // [sp+1094h] [bp-40h]
  __int64 *v17; // [sp+1098h] [bp-3Ch]
  int v18; // [sp+109Ch] [bp-38h]
  __int64 *v19; // [sp+10A0h] [bp-34h]
  int v20; // [sp+10A4h] [bp-30h]
  __int64 *v21; // [sp+10A8h] [bp-2Ch]
  int v22; // [sp+10ACh] [bp-28h]
  __int64 *v23; // [sp+10B0h] [bp-24h]
  bool v24; // [sp+10B5h] [bp-1Fh]
  char v25; // [sp+10B6h] [bp-1Eh]
  char v26; // [sp+10B7h] [bp-1Dh]
  _DWORD *all_created_runtime; // [sp+10B8h] [bp-1Ch]
  unsigned __int8 v28; // [sp+10BFh] [bp-15h]
  bool v29; // [sp+10C0h] [bp-14h]
  bool v30; // [sp+10C1h] [bp-13h]
  char v31; // [sp+10C2h] [bp-12h]
  unsigned __int8 v32; // [sp+10C3h] [bp-11h]
  int i; // [sp+10C4h] [bp-10h]

  v7 = a1;
  v10 = 0;
  if ( byte_1524AC != 1 )
  {
    sub_64C80();
    byte_1524AC = 1;
  }
  pthread_mutex_lock(&stru_1524B0);
  v31 = byte_1524A0 == 0;
  sub_638DC((int)&v4, byte_1524A0 == 0);
  v11 = v4;
  v12 = v5;
  v13 = v6;
  v23 = &v11;
  v22 = 1;
  LODWORD(v1) = 1;
  v30 = (vshld_u64(1u, v1) & v4) != 0;
  if ( v30 )
    set_miner_6060info_status_high_temp_err(1);
  v21 = &v11;
  v20 = 2;
  LODWORD(v1) = 2;
  v29 = (vshld_u64(1u, v1) & v11) != 0;
  if ( v29 )
    set_miner_6060info_status_low_temp_err(1);
  v28 = sub_64390(v31);
  v9 = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  for ( i = 0; i < v9; ++i )
    v31 = (unsigned __int8)(v31 & *(_BYTE *)(all_created_runtime[i] + 258)) != 0;
  v26 = sub_64568(v31);
  v25 = sub_64668(v31, &v10);
  v17 = &v11;
  v16 = 3;
  LODWORD(v1) = 3;
  v24 = (vshld_u64(1u, v1) & v11) != 0;
  v19 = &v11;
  v18 = 4;
  LODWORD(v1) = 4;
  if ( (vshld_u64(1u, v1) & v11) != 0 )
  {
    v32 = 1;
    set_miner_6060info_uneffective_temp_err(1);
  }
  else
  {
    v32 = 0;
  }
  if ( byte_1524A0 != 1 && (v30 || v29 || v28 || v24 || v32 || v10) )
  {
    byte_1524A0 = 1;
    all_dev_poweroff();
    V_LOCK();
    sub_63584((int)v14, 1);
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
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v30,
      v29,
      v28,
      v24,
      v32,
      v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
      183,
      "task_check_miner_status",
      23,
      317,
      120,
      v8);
  }
  byte_15249F = v30 || v29 || v24 || v32 || v28 || v26 || v25 || byte_1524A0;
  if ( v31 )
  {
    byte_152498 = v30;
    byte_152499 = v29;
    byte_15249C = v28;
    v2 = v26 || byte_1524A0;
    byte_15249D = v2;
    byte_15249E = v25;
    byte_15249A = v24;
    byte_15249B = v32;
  }
  pthread_mutex_unlock(&stru_1524B0);
  sub_64BD0(byte_15249F);
  if ( v30 || v24 || v32 || v10 )
    return fan_pwm_set_max();
  else
    return set_pwm_by_temp();
}
