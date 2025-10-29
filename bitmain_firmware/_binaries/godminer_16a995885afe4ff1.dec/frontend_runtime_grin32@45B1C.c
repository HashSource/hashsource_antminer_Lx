void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_165FDC = (int)stratum_connect;
  dword_165FE0 = (int)stratum_disconnect;
  dword_165FE4 = (int)stratum_recv_line;
  dword_165FE8 = (int)stratum_send_line;
  dword_165FEC = (int)stratum_login_base;
  dword_165FF0 = (int)stratum_handle_method_grin32;
  dword_165FF4 = (int)stratum_handle_response_base;
  dword_165FFC = (int)stratum_prepare_upstream_work_grin32;
  dword_166000 = (int)nonce_pop_handler_grin32;
  dword_166004 = (int)check_job_grin32;
  dword_165FF8 = (int)push_work_grin32;
  dword_166008 = (int)pre_push_work_grin32;
  dword_16600C = (int)stratum_subscribe_base;
  dword_166010 = (int)stratum_authorize_grin32;
  dword_166020 = (int)target_to_diff_grin32;
  dword_166024 = (int)diff_to_target_grin32;
  dword_166028 = (int)target_to_double_diff_grin32;
  dword_16602C = (int)"g";
  dword_166030 = 60;
  dword_166014 = 0;
  dword_166018 = 0;
  dword_16601C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_165FD8, 0x60u);
}
