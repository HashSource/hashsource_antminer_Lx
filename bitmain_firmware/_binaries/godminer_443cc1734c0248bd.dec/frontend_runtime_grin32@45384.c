void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_164FCC = (int)stratum_connect;
  dword_164FD0 = (int)stratum_disconnect;
  dword_164FD4 = (int)stratum_recv_line;
  dword_164FD8 = (int)stratum_send_line;
  dword_164FDC = (int)stratum_login_base;
  dword_164FE0 = (int)stratum_handle_method_grin32;
  dword_164FE4 = (int)stratum_handle_response_base;
  dword_164FEC = (int)stratum_prepare_upstream_work_grin32;
  dword_164FF0 = (int)nonce_pop_handler_grin32;
  dword_164FF4 = (int)check_job_grin32;
  dword_164FE8 = (int)push_work_grin32;
  dword_164FF8 = (int)pre_push_work_grin32;
  dword_164FFC = (int)stratum_subscribe_base;
  dword_165000 = (int)stratum_authorize_grin32;
  dword_165010 = (int)target_to_diff_grin32;
  dword_165014 = (int)diff_to_target_grin32;
  dword_165018 = (int)target_to_double_diff_grin32;
  dword_16501C = (int)"g";
  dword_165020 = 60;
  dword_165004 = 0;
  dword_165008 = 0;
  dword_16500C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_164FC8, 0x60u);
}
