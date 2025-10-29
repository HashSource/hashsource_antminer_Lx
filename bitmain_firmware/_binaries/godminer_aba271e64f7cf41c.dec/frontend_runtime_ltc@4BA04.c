void *frontend_runtime_ltc()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_152338 = (int)stratum_connect;
  dword_15233C = (int)stratum_disconnect;
  dword_152340 = (int)stratum_recv_line;
  dword_152344 = (int)stratum_send_line;
  dword_152348 = (int)stratum_login_base;
  dword_15234C = (int)stratum_handle_method_base;
  dword_152350 = (int)pre_stratum_handle_method_base;
  dword_152354 = (int)stratum_handle_response_base;
  dword_152358 = 309500;
  dword_15235C = 309160;
  dword_152360 = (int)stratum_subscribe_base;
  dword_152364 = (int)stratum_authorize_base;
  dword_152368 = 304372;
  dword_15236C = 307856;
  dword_152370 = (int)stratum_set_diff_or_target_base;
  dword_152374 = (int)target_to_diff_ltc;
  dword_152378 = (int)diff_to_target_ltc;
  dword_15237C = (int)target_to_double_diff_ltc;
  dest = calloc(1u, 0x50u);
  memcpy(dest, &dword_152338, 0x50u);
  return dest;
}
