void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165E4C = (int)stratum_connect;
  dword_165E50 = (int)stratum_disconnect;
  dword_165E54 = (int)stratum_recv_line;
  dword_165E58 = (int)stratum_send_line;
  dword_165E5C = (int)stratum_login_base;
  dword_165E60 = (int)stratum_handle_method_base;
  dword_165E64 = (int)stratum_handle_response_base;
  dword_165E6C = (int)sub_3DFF4;
  dword_165E70 = (int)sub_3E0A0;
  dword_165E74 = (int)sub_3D104;
  dword_165E68 = (int)sub_3DF44;
  dword_165E78 = (int)sub_3DD48;
  dword_165E7C = (int)stratum_subscribe_base;
  dword_165E80 = (int)stratum_authorize_base;
  dword_165E84 = (int)sub_3D13C;
  dword_165E88 = (int)sub_3CDE0;
  LODWORD(v0) = target_to_double_diff_dash;
  HIDWORD(v0) = "H";
  dword_165E8C = (int)stratum_set_diff_or_target_base;
  dword_165E90 = (int)target_to_diff_dash;
  dword_165E94 = (int)diff_to_target_dash;
  *(_QWORD *)&dword_165E98 = v0;
  dword_165EA0 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165E48, 0x60u);
}
