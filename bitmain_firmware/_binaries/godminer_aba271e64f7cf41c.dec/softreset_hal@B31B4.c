int __fastcall softreset_hal(int a1)
{
  _BYTE v3[16]; // [sp+8h] [bp-14h] BYREF

  while ( dev_read_nonce_reg_data_hal(a1, v3, 0x10u) != -1 )
    ;
  sleep(1u);
  while ( dev_read_nonce_reg_data_hal(a1, v3, 0x10u) != -1 )
    ;
  return 0;
}
