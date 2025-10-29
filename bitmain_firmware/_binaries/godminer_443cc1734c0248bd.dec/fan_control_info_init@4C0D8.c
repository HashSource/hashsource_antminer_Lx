int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1623DC = a1;
  dword_1623E0 = a2;
  dword_1623E4 = a3;
  dword_1623E8 = a4;
  dword_1623EC = a5;
  dword_1623F0 = a6;
  flt_1623F4 = a7;
  dword_1623F8 = a8;
  dword_1623FC = a9;
  memset(&flt_165258, 0, 0x2Cu);
  if ( dword_1623DC == 2 )
  {
    flt_165268 = -8.0;
    flt_165260 = (float)SLODWORD(flt_1623F4);
    flt_16525C = (float)dword_1623E0;
    flt_165258 = (float)dword_1623E4;
    flt_16526C = -1.0;
    flt_165270 = -0.75;
  }
  return 0;
}
