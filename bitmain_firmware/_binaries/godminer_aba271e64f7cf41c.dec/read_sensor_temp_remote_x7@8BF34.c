int __fastcall read_sensor_temp_remote_x7(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  chip_setting_read_one_sensor_temp_x7(a1, a2, a3, a9);
  if ( *a3 == 1 )
    return 0;
  else
    return 4;
}
