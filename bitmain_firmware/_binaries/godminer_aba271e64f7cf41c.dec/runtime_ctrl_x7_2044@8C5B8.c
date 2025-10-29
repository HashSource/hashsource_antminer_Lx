void *runtime_ctrl_x7_2044()
{
  char v1[4]; // [sp+10h] [bp-1604h] BYREF
  _QWORD v2[162]; // [sp+1010h] [bp-604h] BYREF
  void *dest; // [sp+160Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "runtime_ctrl_x7() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "runtime_ctrl_x7_2044",
    20,
    897,
    40,
    v1);
  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = backend_init_base;
  HIDWORD(v2[0]) = reset_base;
  LODWORD(v2[2]) = dhash_mining_start_base;
  HIDWORD(v2[2]) = dhash_mining_stop_base;
  LODWORD(v2[3]) = dhash_mining_reset_x7;
  HIDWORD(v2[3]) = backend_exit_base;
  LODWORD(v2[4]) = push_work_base;
  HIDWORD(v2[4]) = send_fake_work_x7;
  LODWORD(v2[5]) = async_push_work_base;
  HIDWORD(v2[5]) = pop_ans_base;
  LODWORD(v2[6]) = try_pop_ans_base;
  HIDWORD(v2[7]) = softreset_all_chip_x7;
  LODWORD(v2[8]) = setup_all_chip_x7;
  HIDWORD(v2[8]) = work_2_packet_x7;
  LODWORD(v2[9]) = packet_2_nonce_x7;
  HIDWORD(v2[9]) = check_nonce_x7;
  LODWORD(v2[10]) = global_idx_init_x7;
  HIDWORD(v2[10]) = global_idx_free_x7;
  LODWORD(v2[11]) = set_baud_x7;
  HIDWORD(v2[11]) = 570348;
  v2[12] = 0x8B4680008B414LL;
  v2[13] = 0x8B4C00008B490LL;
  v2[14] = 0x8B6D00008B4E4LL;
  v2[15] = 0x8B5080008B6A4LL;
  HIDWORD(v2[16]) = get_chip_status_x7;
  LODWORD(v2[17]) = get_theory_hashrate_x7;
  HIDWORD(v2[17]) = get_sale_hashrate_x7;
  LODWORD(v2[18]) = get_qualify_hashrate_x7;
  HIDWORD(v2[18]) = get_qualify_nonce_num_x7;
  LODWORD(v2[19]) = set_sensor_extern_mode_x7;
  HIDWORD(v2[19]) = read_sensor_temp_local_x7;
  LODWORD(v2[20]) = read_sensor_temp_remote_x7;
  HIDWORD(v2[20]) = parameter_update_x7;
  LODWORD(v2[21]) = overclock_update_x7;
  HIDWORD(v2[21]) = get_pcba_test_level_x7;
  LODWORD(v2[22]) = get_packet_remain_len_x7;
  HIDWORD(v2[23]) = adjust_working_freq_x7;
  LODWORD(v2[24]) = 570428;
  HIDWORD(v2[24]) = set_frequency_by_temp_single_base;
  LODWORD(v2[26]) = get_chip_temperature_str_base;
  HIDWORD(v2[27]) = sub_8AA6C;
  HIDWORD(v2[28]) = 568484;
  LODWORD(v2[29]) = top_init_x7;
  LODWORD(v2[30]) = dhash_start_x7;
  v2[38] = 14168;
  v2[39] = 0;
  v2[40] = 7499128;
  v2[41] = 0x100002044LL;
  v2[42] = 0x100000006LL;
  v2[43] = 0x100000020LL;
  HIDWORD(v2[44]) = 1;
  HIDWORD(v2[46]) = unk_15F7B8;
  LODWORD(v2[47]) = unk_15F7BC;
  HIDWORD(v2[48]) = sensor_info_x7_2044;
  v2[49] = qword_150394;
  v2[50] = qword_15039C;
  v2[51] = qword_1503A4;
  HIDWORD(v2[53]) = 1;
  LODWORD(v2[54]) = 14;
  HIDWORD(v2[103]) = 392;
  v2[104] = 0x4000000E8LL;
  v2[105] = 0x34000000D6LL;
  HIDWORD(v2[106]) = 8;
  LODWORD(v2[125]) = 4;
  HIDWORD(v2[138]) = 1200;
  v2[140] = 0x20000000;
  LODWORD(v2[141]) = 1;
  dest = calloc(1u, 0x510u);
  memcpy(dest, v2, 0x510u);
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "runtime_ctrl_x7() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "runtime_ctrl_x7_2044",
    20,
    1007,
    40,
    v1);
  return dest;
}
