int __fastcall chip_setting_restart_one_chip_x7(int a1, unsigned __int8 a2, int *a3)
{
  unsigned __int8 v6[6]; // [sp+20h] [bp-214h] BYREF
  __int16 v7; // [sp+26h] [bp-20Eh]
  int chip_reg_x7; // [sp+228h] [bp-Ch]
  void *s; // [sp+22Ch] [bp-8h]

  s = 0;
  chip_reg_x7 = 0;
  v6[0] = 85;
  v6[1] = -86;
  v6[2] = 20;
  v6[3] = a2;
  v6[4] = -1;
  v6[5] = 0;
  v7 = 0;
  v7 = BM_CRC16((char *)v6, 8);
  s = malloc(0x20Cu);
  memset(s, 0, 0x20Cu);
  chip_reg_x7 = sync_get_chip_reg_x7(a1, 1, v6, (int)s, a3, 0x9C40u);
  if ( s )
  {
    free(s);
    s = 0;
  }
  return chip_reg_x7;
}
