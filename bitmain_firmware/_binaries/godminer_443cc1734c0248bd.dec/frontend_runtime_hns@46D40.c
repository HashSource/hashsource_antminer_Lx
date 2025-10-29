void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165070 = (int)stratum_connect;
  dword_165074 = (int)stratum_disconnect;
  dword_165078 = (int)stratum_recv_line;
  dword_16507C = (int)stratum_send_line;
  dword_165080 = (int)stratum_login_base;
  dword_165084 = (int)stratum_handle_method_base;
  dword_165088 = (int)stratum_handle_response_hns;
  dword_165090 = (int)sub_45B24;
  dword_165094 = (int)sub_454C0;
  dword_165098 = (int)sub_454E0;
  dword_16508C = (int)sub_45C00;
  dword_16509C = (int)sub_4549C;
  dword_1650A0 = (int)stratum_subscribe_base;
  dword_1650A4 = (int)stratum_authorize_base;
  dword_1650A8 = (int)sub_45DB8;
  dword_1650AC = (int)sub_457E0;
  LODWORD(v0) = target_to_double_diff_hns;
  HIDWORD(v0) = "";
  dword_1650B0 = (int)stratum_set_diff_or_target_base;
  dword_1650B4 = (int)target_to_diff_word_hns;
  dword_1650B8 = (int)diff_to_target_hns;
  *(_QWORD *)&dword_1650BC = v0;
  dword_1650C4 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_16506C, 0x60u);
}
