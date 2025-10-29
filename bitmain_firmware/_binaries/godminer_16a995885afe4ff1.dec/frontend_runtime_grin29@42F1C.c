void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_165F78 = (int)stratum_connect;
  dword_165F7C = (int)stratum_disconnect;
  dword_165F80 = (int)stratum_recv_line;
  dword_165F84 = (int)stratum_send_line;
  dword_165F88 = (int)stratum_login_base;
  dword_165F8C = (int)stratum_handle_method_grin29;
  dword_165F90 = (int)stratum_handle_response_base;
  dword_165F98 = (int)stratum_prepare_upstream_work_grin29;
  dword_165F9C = (int)nonce_pop_handler_grin29;
  dword_165FA0 = (int)check_job_grin29;
  dword_165F94 = (int)push_work_grin29;
  dword_165FA4 = (int)pre_push_work_grin29;
  dword_165FA8 = (int)stratum_subscribe_base;
  dword_165FAC = (int)stratum_authorize_grin29;
  dword_165FBC = (int)target_to_diff_grin29;
  dword_165FC0 = (int)diff_to_target_grin29;
  dword_165FC4 = (int)target_to_double_diff_grin29;
  dword_165FC8 = (int)"g";
  dword_165FCC = 60;
  dword_165FB0 = 0;
  dword_165FB4 = 0;
  dword_165FB8 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, algn_165F74, 0x60u);
}
