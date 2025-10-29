int __fastcall dev_config_hal(int a1)
{
  int v2; // [sp+8h] [bp+8h] BYREF
  int v3; // [sp+Ch] [bp+Ch]

  if ( a1 == 1562500 )
    goto LABEL_21;
  if ( a1 <= 1562500 )
  {
    if ( a1 == 460800 )
    {
      v3 = 6;
      goto LABEL_26;
    }
    if ( a1 <= 460800 )
    {
      if ( a1 != 115200 )
        goto LABEL_25;
      v3 = 26;
      goto LABEL_26;
    }
    if ( a1 == 921600 )
    {
      v3 = 2;
      goto LABEL_26;
    }
    if ( a1 != 1500000 )
      goto LABEL_25;
LABEL_21:
    v3 = 1;
    goto LABEL_26;
  }
  if ( a1 == 6250000 )
  {
    v3 = 3;
  }
  else if ( a1 > 6250000 )
  {
    if ( a1 == 12500000 )
    {
      v3 = 4;
    }
    else
    {
      if ( a1 != 25000000 )
      {
LABEL_25:
        v3 = 26;
        goto LABEL_26;
      }
      v3 = 5;
    }
  }
  else
  {
    if ( (_UNKNOWN *)a1 != &unk_2DC6C0 && (char *)a1 != byte_2FAF08 )
      goto LABEL_25;
    v3 = 0;
  }
LABEL_26:
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", v3);
  v2 = v3 | (v3 << 24) | (v3 << 16) | (v3 << 8);
  uart_set_config(0, 0, &v2);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
