int submit_result_to_MES_system()
{
  unsigned int v2; // [sp+4h] [bp+4h] BYREF
  _BYTE v3[252]; // [sp+8h] [bp+8h] BYREF
  char *v4; // [sp+104h] [bp+104h]
  unsigned __int8 v5; // [sp+10Bh] [bp+10Bh]
  const json_t *v6; // [sp+10Ch] [bp+10Ch]

  v6 = 0;
  v2 = 0;
  v4 = 0;
  v5 = 1;
  putchar(32);
  if ( (unsigned __int8)create_connection_to_MES_system_by_name(2) != 1 )
    return 0;
  v5 = send_message_to_bitmain_MES_system(" ", mes_system_submit_result_file_length);
  if ( v5 != 1 )
  {
    puts("send submit result information fail");
    return 0;
  }
  v4 = receive_message_from_bitmain_MES_system(&v2);
  if ( !v4 )
    goto LABEL_11;
  printf("length: %d, submit_result_response: %s\n", v2, v4);
  v6 = (const json_t *)json_loadb((int)v4, v2 - 1, 0, (json_error_t *)v3);
  if ( v6 && !*(_DWORD *)v6 )
  {
    if ( check_whether_MES_system_submit_result_is_correct(v6) )
    {
      puts("submit result success");
      v5 = 1;
      goto LABEL_12;
    }
LABEL_11:
    puts("submit result fail");
    v5 = 0;
    goto LABEL_12;
  }
  puts("Don't get all respons after submit result");
  v5 = 0;
LABEL_12:
  if ( v6 )
    sub_2E8A8((int)v6);
  if ( bitmain_MES_system_clientSocket != -1 )
  {
    close(bitmain_MES_system_clientSocket);
    bitmain_MES_system_clientSocket = -1;
    puts("close socket");
  }
  return v5;
}
