void __fastcall sub_1A0F0(int a1)
{
  char v1[2056]; // [sp-808h] [bp-808h] BYREF

  dword_A0620 = a1;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v1, 0x800u, "working_voltage_raw = %d\n", a1);
    sub_47AB4(3, v1, 0);
  }
}
