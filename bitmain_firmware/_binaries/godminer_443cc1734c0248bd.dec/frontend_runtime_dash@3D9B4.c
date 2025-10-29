void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_164E3C = (int)stratum_connect;
  dword_164E40 = (int)stratum_disconnect;
  dword_164E44 = (int)stratum_recv_line;
  dword_164E48 = (int)stratum_send_line;
  dword_164E4C = (int)stratum_login_base;
  dword_164E50 = (int)stratum_handle_method_base;
  dword_164E54 = (int)stratum_handle_response_base;
  dword_164E5C = (int)sub_3D8A0;
  dword_164E60 = (int)sub_3D94C;
  dword_164E64 = (int)sub_3C9AC;
  dword_164E58 = (int)sub_3D7F0;
  dword_164E68 = (int)sub_3D5F4;
  dword_164E6C = (int)stratum_subscribe_base;
  dword_164E70 = (int)stratum_authorize_base;
  dword_164E74 = (int)sub_3C9E4;
  dword_164E78 = (int)sub_3C684;
  LODWORD(v0) = target_to_double_diff_dash;
  HIDWORD(v0) = "H";
  dword_164E7C = (int)stratum_set_diff_or_target_base;
  dword_164E80 = (int)target_to_diff_dash;
  dword_164E84 = (int)diff_to_target_dash;
  *(_QWORD *)&dword_164E88 = v0;
  dword_164E90 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_164E38, 0x60u);
}
