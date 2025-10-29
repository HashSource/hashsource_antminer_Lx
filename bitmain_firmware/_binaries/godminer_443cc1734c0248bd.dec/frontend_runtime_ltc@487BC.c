void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165144 = (int)stratum_connect;
  dword_165148 = (int)stratum_disconnect;
  dword_16514C = (int)stratum_recv_line;
  dword_165150 = (int)stratum_send_line;
  dword_165154 = (int)stratum_login_base;
  dword_165158 = (int)stratum_handle_method_base;
  dword_16515C = (int)stratum_handle_response_base;
  dword_165164 = (int)sub_486AC;
  dword_165168 = (int)sub_48748;
  dword_16516C = (int)sub_47C34;
  dword_165160 = (int)sub_485F8;
  dword_165170 = (int)sub_483C4;
  dword_165174 = (int)stratum_subscribe_base;
  dword_165178 = (int)stratum_authorize_base;
  dword_16517C = (int)sub_47C6C;
  dword_165180 = (int)sub_47968;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_165184 = (int)stratum_set_diff_or_target_base;
  dword_165188 = (int)target_to_diff_ltc;
  dword_16518C = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_165190 = v0;
  dword_165198 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165140, 0x60u);
}
