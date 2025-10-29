int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1633EC = a1;
  dword_1633F0 = a2;
  dword_1633F4 = a3;
  dword_1633F8 = a4;
  dword_1633FC = a5;
  dword_163400 = a6;
  flt_163404 = a7;
  dword_163408 = a8;
  dword_16340C = a9;
  memset(&flt_166270, 0, 0x2Cu);
  if ( dword_1633EC == 2 )
  {
    flt_166280 = -8.0;
    flt_166278 = (float)SLODWORD(flt_163404);
    flt_166274 = (float)dword_1633F0;
    flt_166270 = (float)dword_1633F4;
    flt_166284 = -1.0;
    flt_166288 = -0.75;
  }
  return 0;
}
