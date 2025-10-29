void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166154 = (int)stratum_connect;
  dword_166158 = (int)stratum_disconnect;
  dword_16615C = (int)stratum_recv_line;
  dword_166160 = (int)stratum_send_line;
  dword_166164 = (int)stratum_login_base;
  dword_166168 = (int)stratum_handle_method_base;
  dword_16616C = (int)stratum_handle_response_base;
  dword_166174 = (int)sub_490BC;
  dword_166178 = (int)sub_49154;
  dword_16617C = (int)sub_48648;
  dword_166170 = (int)sub_49008;
  dword_166180 = (int)sub_48DD4;
  dword_166184 = (int)stratum_subscribe_base;
  dword_166188 = (int)stratum_authorize_base;
  dword_16618C = (int)sub_48680;
  dword_166190 = (int)sub_48380;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_166194 = (int)stratum_set_diff_or_target_base;
  dword_166198 = (int)target_to_diff_ltc;
  dword_16619C = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_1661A0 = v0;
  dword_1661A8 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166150, 0x60u);
}
