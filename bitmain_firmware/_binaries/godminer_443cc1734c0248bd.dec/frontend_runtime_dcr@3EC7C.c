void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_164EA0 = (int)stratum_connect;
  dword_164EA4 = (int)stratum_disconnect;
  dword_164EA8 = (int)stratum_recv_line;
  dword_164EAC = (int)stratum_send_line;
  dword_164EB0 = (int)stratum_login_base;
  dword_164EB4 = (int)stratum_handle_method_base;
  dword_164EB8 = (int)stratum_handle_response_base;
  dword_164EC0 = (int)sub_3EBAC;
  dword_164EC4 = (int)sub_3DB00;
  dword_164EC8 = (int)sub_3DEBC;
  dword_164EBC = (int)sub_3EA04;
  dword_164ECC = (int)sub_3DADC;
  dword_164ED0 = (int)stratum_subscribe_base;
  dword_164ED4 = (int)stratum_authorize_base;
  dword_164ED8 = (int)sub_3DEF4;
  dword_164EDC = (int)sub_3DB34;
  LODWORD(v0) = target_to_double_diff_dcr;
  HIDWORD(v0) = "";
  dword_164EE0 = (int)stratum_set_diff_or_target_base;
  dword_164EE4 = (int)target_to_diff_dcr;
  dword_164EE8 = (int)diff_to_target_dcr;
  *(_QWORD *)&dword_164EEC = v0;
  dword_164EF4 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, algn_164E9C, 0x60u);
}
