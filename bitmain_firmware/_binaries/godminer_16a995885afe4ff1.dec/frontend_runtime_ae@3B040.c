void *frontend_runtime_ae()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165D84 = (int)stratum_connect;
  dword_165D88 = (int)stratum_disconnect;
  dword_165D8C = (int)stratum_recv_line;
  dword_165D90 = (int)stratum_send_line;
  dword_165D94 = (int)stratum_login_base;
  dword_165D98 = (int)stratum_handle_method_base;
  dword_165D9C = (int)stratum_handle_response_base;
  dword_165DA4 = (int)stratum_prepare_upstream_work_ae;
  dword_165DA8 = (int)nonce_pop_handler_ae;
  dword_165DAC = (int)check_job_ae;
  dword_165DA0 = (int)push_work_ae;
  dword_165DB0 = (int)pre_push_work_ae;
  dword_165DB4 = (int)stratum_subscribe_base;
  dword_165DB8 = (int)stratum_authorize_base;
  dword_165DBC = (int)stratum_notify_ae;
  dword_165DC0 = (int)stratum_parse_extranonce_ae;
  LODWORD(v0) = target_to_double_diff_ae;
  HIDWORD(v0) = "H";
  dword_165DC4 = (int)stratum_set_diff_or_target_base;
  dword_165DC8 = (int)target_to_diff_ae;
  dword_165DCC = (int)diff_to_target_ae;
  *(_QWORD *)&dword_165DD0 = v0;
  dword_165DD8 = 120;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165D80, 0x60u);
}
