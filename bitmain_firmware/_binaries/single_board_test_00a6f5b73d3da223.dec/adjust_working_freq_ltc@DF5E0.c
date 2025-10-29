int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  float v5; // [sp+8h] [bp+8h]
  int v6; // [sp+Ch] [bp+Ch]

  v6 = 9;
  v5 = (float)(a2 + *(_DWORD *)(a1 + 272));
  if ( *(float *)(a1 + 760) <= v5 )
  {
    v5 = *(float *)(a1 + 760);
    v6 = 0;
LABEL_5:
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 272) = (int)v5;
    return v6;
  }
  if ( v5 >= 900.0 )
    goto LABEL_5;
  return 9;
}
