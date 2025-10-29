void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_16816C = (int)stratum_connect;
  dword_168170 = (int)stratum_disconnect;
  dword_168174 = (int)stratum_recv_line;
  dword_168178 = (int)stratum_send_line;
  dword_16817C = (int)stratum_login_base;
  dword_168180 = (int)stratum_handle_method_base;
  dword_168184 = (int)stratum_handle_response_base;
  dword_16818C = (int)sub_49EFC;
  dword_168190 = (int)sub_49F94;
  dword_168194 = (int)sub_49488;
  dword_168188 = (int)sub_49E48;
  dword_168198 = (int)sub_49C14;
  dword_16819C = (int)stratum_subscribe_base;
  dword_1681A0 = (int)stratum_authorize_base;
  dword_1681A4 = (int)sub_494C0;
  dword_1681A8 = (int)sub_491C0;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_1681AC = (int)stratum_set_diff_or_target_base;
  dword_1681B0 = (int)target_to_diff_ltc;
  dword_1681B4 = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_1681B8 = v0;
  dword_1681C0 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_168168, 0x60u);
}
