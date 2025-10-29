int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  float v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  v6 = 108;
  v5 = (float)(*(_DWORD *)(a1 + 464) + a2);
  if ( v5 >= *(float *)(a1 + 1104) )
  {
    v5 = *(float *)(a1 + 1104);
    v6 = 0;
LABEL_5:
    chip_setting_freq_ltc(a1, 1, 0, 0);
    *(_DWORD *)(a1 + 464) = (int)v5;
    return v6;
  }
  if ( v5 >= 900.0 )
    goto LABEL_5;
  return 108;
}
