void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_1651AC = (int)stratum_connect;
  dword_1651B0 = (int)stratum_disconnect;
  dword_1651B4 = (int)stratum_recv_line;
  dword_1651B8 = (int)stratum_send_line;
  dword_1651BC = (int)stratum_login_vbk;
  dword_1651C0 = (int)stratum_handle_method_vbk;
  dword_1651C4 = (int)stratum_handle_response_vbk;
  dword_1651CC = (int)stratum_prepare_upstream_work_vbk;
  dword_1651D0 = (int)nonce_pop_handler_vbk;
  dword_1651D4 = (int)check_job_vbk;
  dword_1651C8 = (int)push_work_vbk;
  dword_1651D8 = (int)pre_push_work_vbk;
  dword_1651DC = (int)stratum_subscribe_vbk;
  dword_1651E0 = (int)stratum_authorize_vbk;
  dword_1651F0 = (int)target_to_diff_vbk;
  dword_1651F4 = (int)diff_to_target_vbk;
  dword_1651F8 = (int)target_to_double_diff_vbk;
  dword_1651FC = (int)"H";
  dword_165200 = 60;
  dword_1651E4 = 0;
  dword_1651E8 = 0;
  dword_1651EC = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1651A8, 0x60u);
}
