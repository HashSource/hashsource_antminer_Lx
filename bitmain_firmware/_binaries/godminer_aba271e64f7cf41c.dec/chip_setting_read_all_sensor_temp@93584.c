int __fastcall chip_setting_read_all_sensor_temp(int a1, void *a2, int a3, _DWORD *a4)
{
  int v9; // [sp+20h] [bp-21Ch] BYREF
  unsigned __int8 v10[6]; // [sp+24h] [bp-218h] BYREF
  __int16 v11; // [sp+2Ah] [bp-212h]
  void *s; // [sp+22Ch] [bp-10h]
  int chip_temperature_reg_x7; // [sp+230h] [bp-Ch]
  int i; // [sp+234h] [bp-8h]

  chip_temperature_reg_x7 = 0;
  v10[0] = 85;
  v10[1] = -86;
  v10[2] = 9;
  v10[3] = -1;
  v10[4] = -1;
  v10[5] = 0;
  v11 = 0;
  v11 = BM_CRC16((char *)v10, 8);
  s = malloc(524 * a3);
  memset(s, 0, 524 * a3);
  memset(a2, 0, 12 * a3);
  *a4 = 0;
  chip_temperature_reg_x7 = sync_get_chip_temperature_reg_x7(a1, a3, v10, (int)s, &v9, 0x3E8u);
  for ( i = 0; i < v9; ++i )
  {
    if ( *((_BYTE *)s + 524 * i + 2) == 9 )
    {
      *((_DWORD *)a2 + 3 * *a4) = *((unsigned __int8 *)s + 524 * i + 3);
      *((_DWORD *)a2 + 3 * *a4 + 1) = *((_DWORD *)s + 131 * i + 3);
      *((_DWORD *)a2 + 3 * (*a4)++ + 2) = 1;
    }
  }
  free(s);
  return chip_temperature_reg_x7;
}
