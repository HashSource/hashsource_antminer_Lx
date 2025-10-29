void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_164F04 = (int)stratum_connect;
  dword_164F08 = (int)stratum_disconnect;
  dword_164F0C = (int)stratum_recv_line;
  dword_164F10 = (int)stratum_send_line;
  dword_164F14 = (int)stratum_login_base;
  dword_164F18 = (int)stratum_handle_method_eth;
  dword_164F1C = (int)stratum_handle_response_base;
  dword_164F24 = (int)sub_3EF1C;
  dword_164F28 = (int)sub_3F528;
  dword_164F2C = (int)sub_3EEBC;
  dword_164F20 = (int)sub_3EDE8;
  dword_164F30 = (int)sub_3EDA4;
  dword_164F34 = (int)stratum_subscribe_base;
  dword_164F38 = (int)stratum_authorize_eth;
  dword_164F40 = (int)sub_3EDE0;
  dword_164F48 = (int)target_to_diff_eth;
  dword_164F4C = (int)diff_to_target_eth;
  dword_164F50 = (int)target_to_double_diff_eth;
  dword_164F54 = (int)"H";
  dword_164F58 = 120;
  dword_164F3C = 0;
  dword_164F44 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_164F00, 0x60u);
}
