int __fastcall dev_config_one_chain_baud(int a1, int a2)
{
  _BYTE v5[4]; // [sp+Ch] [bp+Ch] BYREF
  int v6; // [sp+10h] [bp+10h] BYREF
  int v7; // [sp+14h] [bp+14h]

  uart_get_config(0, 0, &v6, (int)v5);
  printf("%s: get zynq bt8d %08x\n", "dev_config_one_chain_baud", v6);
  if ( a2 == 1562500 )
    goto LABEL_21;
  if ( a2 <= 1562500 )
  {
    if ( a2 == 460800 )
    {
      v7 = 6;
      goto LABEL_26;
    }
    if ( a2 <= 460800 )
    {
      if ( a2 != 115200 )
        goto LABEL_25;
      v7 = 26;
      goto LABEL_26;
    }
    if ( a2 == 921600 )
    {
      v7 = 2;
      goto LABEL_26;
    }
    if ( a2 != 1500000 )
      goto LABEL_25;
LABEL_21:
    v7 = 1;
    goto LABEL_26;
  }
  if ( a2 == 6250000 )
  {
    v7 = 3;
  }
  else if ( a2 > 6250000 )
  {
    if ( a2 == 12500000 )
    {
      v7 = 4;
    }
    else
    {
      if ( a2 != 25000000 )
      {
LABEL_25:
        v7 = 26;
        goto LABEL_26;
      }
      v7 = 5;
    }
  }
  else
  {
    if ( (_UNKNOWN *)a2 != &unk_2DC6C0 && (char *)a2 != byte_2FAF08 )
      goto LABEL_25;
    v7 = 0;
  }
LABEL_26:
  printf("%s: set zynq bt8d %d\n", "dev_config_one_chain_baud", v7);
  v6 = v6 & ~(63 << (8 * a1)) | (v7 << (8 * a1));
  uart_set_config(a1, 0, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  uart_get_config(0, 0, &v6, (int)v5);
  printf("%s: after set baud, get zynq bt8d %08x\n", "dev_config_one_chain_baud", v6);
  return 0;
}
