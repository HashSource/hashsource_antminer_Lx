void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_164F68 = (int)stratum_connect;
  dword_164F6C = (int)stratum_disconnect;
  dword_164F70 = (int)stratum_recv_line;
  dword_164F74 = (int)stratum_send_line;
  dword_164F78 = (int)stratum_login_base;
  dword_164F7C = (int)stratum_handle_method_grin29;
  dword_164F80 = (int)stratum_handle_response_base;
  dword_164F88 = (int)stratum_prepare_upstream_work_grin29;
  dword_164F8C = (int)nonce_pop_handler_grin29;
  dword_164F90 = (int)check_job_grin29;
  dword_164F84 = (int)push_work_grin29;
  dword_164F94 = (int)pre_push_work_grin29;
  dword_164F98 = (int)stratum_subscribe_base;
  dword_164F9C = (int)stratum_authorize_grin29;
  dword_164FAC = (int)target_to_diff_grin29;
  dword_164FB0 = (int)diff_to_target_grin29;
  dword_164FB4 = (int)target_to_double_diff_grin29;
  dword_164FB8 = (int)"g";
  dword_164FBC = 60;
  dword_164FA0 = 0;
  dword_164FA4 = 0;
  dword_164FA8 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, algn_164F64, 0x60u);
}
