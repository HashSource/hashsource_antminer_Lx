void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_165F14 = (int)stratum_connect;
  dword_165F18 = (int)stratum_disconnect;
  dword_165F1C = (int)stratum_recv_line;
  dword_165F20 = (int)stratum_send_line;
  dword_165F24 = (int)stratum_login_base;
  dword_165F28 = (int)stratum_handle_method_eth;
  dword_165F2C = (int)stratum_handle_response_base;
  dword_165F34 = (int)sub_3F69C;
  dword_165F38 = (int)sub_3FCA8;
  dword_165F3C = (int)sub_3F630;
  dword_165F30 = (int)sub_3F4F8;
  dword_165F40 = (int)sub_3F5CC;
  dword_165F44 = (int)stratum_subscribe_base;
  dword_165F48 = (int)stratum_authorize_eth;
  dword_165F50 = (int)sub_3F4F0;
  dword_165F58 = (int)target_to_diff_eth;
  dword_165F5C = (int)diff_to_target_eth;
  dword_165F60 = (int)target_to_double_diff_eth;
  dword_165F64 = (int)"H";
  dword_165F68 = 120;
  dword_165F4C = 0;
  dword_165F54 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_165F10, 0x60u);
}
