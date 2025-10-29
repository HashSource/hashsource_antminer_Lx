void sub_222E8()
{
  int v0; // r0
  bool v1; // cc
  int v2; // r2
  int v3; // r1
  char s[2056]; // [sp+8h] [bp-808h] BYREF

  v0 = (unsigned __int8)byte_241D0A;
  v1 = (unsigned int)dword_9E31C > 3;
  v2 = dword_A0D68 + 12288;
  v3 = ((unsigned __int8)byte_241D04 >> 1) & 1;
  *(_BYTE *)(dword_A0D68 + 12977) = (byte_241D04 & 2) != 0;
  *(_BYTE *)(v2 + 690) = v0;
  if ( v1 )
  {
    snprintf(s, 0x800u, "fan_eft : %d  fan_pwm : %d\n", (unsigned __int8)v3, v0);
    sub_47AB4(3, s, 0);
  }
}
