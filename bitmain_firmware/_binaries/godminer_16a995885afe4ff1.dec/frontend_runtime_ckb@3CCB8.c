void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165DEC = (int)stratum_connect;
  dword_165DF0 = (int)stratum_disconnect;
  dword_165DF4 = (int)stratum_recv_line;
  dword_165DF8 = (int)stratum_send_line;
  dword_165DFC = (int)stratum_login_base;
  dword_165E00 = (int)stratum_handle_method_base;
  dword_165E04 = (int)stratum_handle_response_base;
  dword_165E0C = (int)sub_3CBFC;
  dword_165E10 = (int)sub_3CC64;
  dword_165E14 = (int)sub_3C614;
  dword_165E08 = (int)sub_3CB48;
  dword_165E18 = (int)sub_3C9C8;
  dword_165E1C = (int)stratum_subscribe_base;
  dword_165E20 = (int)stratum_authorize_base;
  dword_165E24 = (int)sub_3C64C;
  dword_165E28 = (int)sub_3C270;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_165E2C = (int)stratum_set_diff_or_target_base;
  dword_165E30 = (int)target_to_diff_ckb;
  dword_165E34 = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_165E38 = v0;
  dword_165E40 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165DE8, 0x60u);
}
