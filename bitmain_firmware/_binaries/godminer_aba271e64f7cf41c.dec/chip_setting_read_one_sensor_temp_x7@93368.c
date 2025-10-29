int __fastcall chip_setting_read_one_sensor_temp_x7(int a1, _DWORD *a2, _DWORD *a3, char a4)
{
  int v9; // [sp+24h] [bp-220h] BYREF
  unsigned __int8 v10[6]; // [sp+28h] [bp-21Ch] BYREF
  __int16 v11; // [sp+2Eh] [bp-216h]
  int chip_temperature_reg_x7; // [sp+230h] [bp-14h]
  int v13; // [sp+234h] [bp-10h]
  void *s; // [sp+238h] [bp-Ch]
  int i; // [sp+23Ch] [bp-8h]

  s = 0;
  v13 = 6;
  chip_temperature_reg_x7 = 0;
  v10[0] = 85;
  v10[1] = -86;
  v10[2] = 9;
  v10[3] = -1;
  v10[4] = -1;
  v10[5] = 0;
  v11 = 0;
  v11 = BM_CRC16((char *)v10, 8);
  s = malloc(524 * v13);
  memset(s, 0, 524 * v13);
  *a3 = 0;
  *a2 = -64;
  chip_temperature_reg_x7 = sync_get_chip_temperature_reg_x7(a1, v13, v10, (int)s, &v9, 0x3E8u);
  for ( i = 0; i < v9; ++i )
  {
    if ( *((_BYTE *)s + 524 * i + 2) == 9 && a4 == *((_BYTE *)s + 524 * i + 3) )
    {
      *a2 = *((_DWORD *)s + 131 * i + 3);
      *a2 /= 1000;
      *a3 = 1;
      break;
    }
  }
  if ( s )
  {
    free(s);
    s = 0;
  }
  return chip_temperature_reg_x7;
}
