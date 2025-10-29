int __fastcall pcba_setup_all_chip_ltc(int a1)
{
  int v4; // [sp+Ch] [bp+Ch]
  int v5; // [sp+10h] [bp+10h]
  float v6; // [sp+14h] [bp+14h]

  v4 = *(_DWORD *)(a1 + 196);
  v6 = 900.0;
  v5 = 1;
  while ( v6 > 200.0 )
  {
    v6 = v6 - 50.0;
    chip_setting_freq_ltc(a1, 1, 0);
    usleep(0x30D40u);
    ++v5;
  }
  printf("set frequency to %.02f\n", v6);
  if ( !sub_23D10((_DWORD *)a1, 0) )
    return 3;
  *(_DWORD *)(a1 + 240) = sub_23DD8(*(_DWORD *)(a1 + 296), v4);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), v4);
  sub_222CC(a1, 0);
  return 0;
}
