void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_1661BC = (int)stratum_connect;
  dword_1661C0 = (int)stratum_disconnect;
  dword_1661C4 = (int)stratum_recv_line;
  dword_1661C8 = (int)stratum_send_line;
  dword_1661CC = (int)stratum_login_vbk;
  dword_1661D0 = (int)stratum_handle_method_vbk;
  dword_1661D4 = (int)stratum_handle_response_vbk;
  dword_1661DC = (int)stratum_prepare_upstream_work_vbk;
  dword_1661E0 = (int)nonce_pop_handler_vbk;
  dword_1661E4 = (int)check_job_vbk;
  dword_1661D8 = (int)push_work_vbk;
  dword_1661E8 = (int)pre_push_work_vbk;
  dword_1661EC = (int)stratum_subscribe_vbk;
  dword_1661F0 = (int)stratum_authorize_vbk;
  dword_166200 = (int)target_to_diff_vbk;
  dword_166204 = (int)diff_to_target_vbk;
  dword_166208 = (int)target_to_double_diff_vbk;
  dword_16620C = (int)"H";
  dword_166210 = 60;
  dword_1661F4 = 0;
  dword_1661F8 = 0;
  dword_1661FC = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1661B8, 0x60u);
}
