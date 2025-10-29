void *frontend_runtime_x7()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_152388 = (int)stratum_connect;
  dword_15238C = (int)stratum_disconnect;
  dword_152390 = (int)stratum_recv_line;
  dword_152394 = (int)stratum_send_line;
  dword_152398 = (int)stratum_login_x7;
  dword_15239C = (int)stratum_handle_method_x7;
  dword_1523A0 = (int)pre_stratum_handle_method_x7;
  dword_1523A4 = (int)stratum_handle_response_x7;
  dword_1523A8 = 320016;
  dword_1523AC = 319888;
  dword_1523B0 = (int)stratum_subscribe_base;
  dword_1523B4 = (int)stratum_authorize_base;
  dword_1523B8 = 315268;
  dword_1523BC = 0;
  dword_1523C0 = 0;
  dword_1523C4 = 0;
  dword_1523C8 = 0;
  dword_1523CC = 0;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_152388, 0x54u);
  return dest;
}
