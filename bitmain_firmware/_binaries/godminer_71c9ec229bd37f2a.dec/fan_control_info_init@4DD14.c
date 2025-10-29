int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1653F0 = a1;
  dword_1653F4 = a2;
  dword_1653F8 = a3;
  dword_1653FC = a4;
  dword_165400 = a5;
  dword_165404 = a6;
  flt_165408 = a7;
  dword_16540C = a8;
  dword_165410 = a9;
  memset(&flt_168268, 0, 0x2Cu);
  if ( dword_1653F0 == 2 )
  {
    flt_168278 = -8.0;
    flt_168270 = (float)SLODWORD(flt_165408);
    flt_16826C = (float)dword_1653F4;
    flt_168268 = (float)dword_1653F8;
    flt_16827C = -1.0;
    flt_168280 = -0.75;
  }
  return 0;
}
