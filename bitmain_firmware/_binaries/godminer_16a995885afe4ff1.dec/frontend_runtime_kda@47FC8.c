void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1660EC = (int)stratum_connect;
  dword_1660F0 = (int)stratum_disconnect;
  dword_1660F4 = (int)stratum_recv_line;
  dword_1660F8 = (int)stratum_send_line;
  dword_1660FC = (int)stratum_login_base;
  dword_166100 = (int)stratum_handle_method_base;
  dword_166104 = (int)stratum_handle_response_base;
  dword_16610C = (int)sub_47F0C;
  dword_166110 = (int)sub_47F78;
  dword_166114 = (int)sub_47B48;
  dword_166108 = (int)sub_47E2C;
  dword_166118 = (int)sub_47784;
  dword_16611C = (int)stratum_subscribe_base;
  dword_166120 = (int)stratum_authorize_base;
  dword_166124 = (int)sub_47B80;
  dword_166128 = (int)sub_4787C;
  LODWORD(v0) = target_to_double_diff_kda;
  HIDWORD(v0) = "H";
  dword_16612C = (int)stratum_set_diff_or_target_base;
  dword_166130 = (int)target_to_diff_kda;
  dword_166134 = (int)diff_to_target_kda;
  *(_QWORD *)&dword_166138 = v0;
  dword_166140 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_1660E8, 0x60u);
}
