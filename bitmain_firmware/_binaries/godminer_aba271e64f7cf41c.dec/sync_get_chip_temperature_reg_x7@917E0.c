int __fastcall sync_get_chip_temperature_reg_x7(
        int a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int *a5,
        unsigned __int64 a6)
{
  int v12; // [sp+24h] [bp-8h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  wait_x7_chip_setting_not_pending(a1);
  if ( a3[2] != 9 )
    return 1;
  queue_clear(*(_DWORD *)(a1 + 872));
  v12 = set_chip_reg_x7(a1, a3);
  if ( v12 )
    return v12;
  else
    return sync_get_temperature_status_x7(a1, a3[2], a2, a4, 16, a5, a6);
}
