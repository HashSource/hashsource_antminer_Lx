void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_167FF4 = (int)stratum_connect;
  dword_167FF8 = (int)stratum_disconnect;
  dword_167FFC = (int)stratum_recv_line;
  dword_168000 = (int)stratum_send_line;
  dword_168004 = (int)stratum_login_base;
  dword_168008 = (int)stratum_handle_method_grin32;
  dword_16800C = (int)stratum_handle_response_base;
  dword_168014 = (int)stratum_prepare_upstream_work_grin32;
  dword_168018 = (int)nonce_pop_handler_grin32;
  dword_16801C = (int)check_job_grin32;
  dword_168010 = (int)push_work_grin32;
  dword_168020 = (int)pre_push_work_grin32;
  dword_168024 = (int)stratum_subscribe_base;
  dword_168028 = (int)stratum_authorize_grin32;
  dword_168038 = (int)target_to_diff_grin32;
  dword_16803C = (int)diff_to_target_grin32;
  dword_168040 = (int)target_to_double_diff_grin32;
  dword_168044 = (int)"g";
  dword_168048 = 60;
  dword_16802C = 0;
  dword_168030 = 0;
  dword_168034 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_167FF0, 0x60u);
}
