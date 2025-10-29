void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_164DDC = (int)stratum_connect;
  dword_164DE0 = (int)stratum_disconnect;
  dword_164DE4 = (int)stratum_recv_line;
  dword_164DE8 = (int)stratum_send_line;
  dword_164DEC = (int)stratum_login_base;
  dword_164DF0 = (int)stratum_handle_method_base;
  dword_164DF4 = (int)stratum_handle_response_base;
  dword_164DFC = (int)sub_3C4A0;
  dword_164E00 = (int)sub_3C508;
  dword_164E04 = (int)sub_3BEB4;
  dword_164DF8 = (int)sub_3C3EC;
  dword_164E08 = (int)sub_3C26C;
  dword_164E0C = (int)stratum_subscribe_base;
  dword_164E10 = (int)stratum_authorize_base;
  dword_164E14 = (int)sub_3BEEC;
  dword_164E18 = (int)sub_3BB0C;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_164E1C = (int)stratum_set_diff_or_target_base;
  dword_164E20 = (int)target_to_diff_ckb;
  dword_164E24 = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_164E28 = v0;
  dword_164E30 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_164DD8, 0x60u);
}
