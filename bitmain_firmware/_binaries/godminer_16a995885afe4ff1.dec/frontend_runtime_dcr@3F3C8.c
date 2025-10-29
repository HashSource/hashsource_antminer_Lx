void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165EB0 = (int)stratum_connect;
  dword_165EB4 = (int)stratum_disconnect;
  dword_165EB8 = (int)stratum_recv_line;
  dword_165EBC = (int)stratum_send_line;
  dword_165EC0 = (int)stratum_login_base;
  dword_165EC4 = (int)stratum_handle_method_base;
  dword_165EC8 = (int)stratum_handle_response_base;
  dword_165ED0 = (int)sub_3F2F8;
  dword_165ED4 = (int)sub_3E254;
  dword_165ED8 = (int)sub_3E60C;
  dword_165ECC = (int)sub_3F150;
  dword_165EDC = (int)sub_3E230;
  dword_165EE0 = (int)stratum_subscribe_base;
  dword_165EE4 = (int)stratum_authorize_base;
  dword_165EE8 = (int)sub_3E644;
  dword_165EEC = (int)sub_3E288;
  LODWORD(v0) = target_to_double_diff_dcr;
  HIDWORD(v0) = "";
  dword_165EF0 = (int)stratum_set_diff_or_target_base;
  dword_165EF4 = (int)target_to_diff_dcr;
  dword_165EF8 = (int)diff_to_target_dcr;
  *(_QWORD *)&dword_165EFC = v0;
  dword_165F04 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, algn_165EAC, 0x60u);
}
