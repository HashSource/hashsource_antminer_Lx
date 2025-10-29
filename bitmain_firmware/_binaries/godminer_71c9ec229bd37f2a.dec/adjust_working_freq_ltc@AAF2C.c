int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  float v3; // s16
  int v4; // r5

  if ( a2 )
  {
    v3 = (float)(a2 + *(_DWORD *)(a1 + 280));
    if ( *(float *)(a1 + 768) <= v3 )
    {
      v3 = *(float *)(a1 + 768);
      v4 = 0;
    }
    else
    {
      v4 = 9;
      if ( v3 < 900.0 )
        return v4;
    }
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 280) = (int)v3;
    return v4;
  }
  chip_setting_freq_ltc(a1, 1, 0);
  return 0;
}
