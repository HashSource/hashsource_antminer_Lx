void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1650DC = (int)stratum_connect;
  dword_1650E0 = (int)stratum_disconnect;
  dword_1650E4 = (int)stratum_recv_line;
  dword_1650E8 = (int)stratum_send_line;
  dword_1650EC = (int)stratum_login_base;
  dword_1650F0 = (int)stratum_handle_method_base;
  dword_1650F4 = (int)stratum_handle_response_base;
  dword_1650FC = (int)sub_47784;
  dword_165100 = (int)sub_477F0;
  dword_165104 = (int)sub_473BC;
  dword_1650F8 = (int)sub_476A4;
  dword_165108 = (int)sub_46FF4;
  dword_16510C = (int)stratum_subscribe_base;
  dword_165110 = (int)stratum_authorize_base;
  dword_165114 = (int)sub_473F4;
  dword_165118 = (int)sub_470EC;
  LODWORD(v0) = target_to_double_diff_kda;
  HIDWORD(v0) = "H";
  dword_16511C = (int)stratum_set_diff_or_target_base;
  dword_165120 = (int)target_to_diff_kda;
  dword_165124 = (int)diff_to_target_kda;
  *(_QWORD *)&dword_165128 = v0;
  dword_165130 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_1650D8, 0x60u);
}
