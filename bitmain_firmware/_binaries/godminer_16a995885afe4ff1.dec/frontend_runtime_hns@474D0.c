void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166080 = (int)stratum_connect;
  dword_166084 = (int)stratum_disconnect;
  dword_166088 = (int)stratum_recv_line;
  dword_16608C = (int)stratum_send_line;
  dword_166090 = (int)stratum_login_base;
  dword_166094 = (int)stratum_handle_method_base;
  dword_166098 = (int)stratum_handle_response_hns;
  dword_1660A0 = (int)sub_462B8;
  dword_1660A4 = (int)sub_45C58;
  dword_1660A8 = (int)sub_45C78;
  dword_16609C = (int)sub_46394;
  dword_1660AC = (int)sub_45C34;
  dword_1660B0 = (int)stratum_subscribe_base;
  dword_1660B4 = (int)stratum_authorize_base;
  dword_1660B8 = (int)sub_4654C;
  dword_1660BC = (int)sub_45F78;
  LODWORD(v0) = target_to_double_diff_hns;
  HIDWORD(v0) = "";
  dword_1660C0 = (int)stratum_set_diff_or_target_base;
  dword_1660C4 = (int)target_to_diff_word_hns;
  dword_1660C8 = (int)diff_to_target_hns;
  *(_QWORD *)&dword_1660CC = v0;
  dword_1660D4 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_16607C, 0x60u);
}
