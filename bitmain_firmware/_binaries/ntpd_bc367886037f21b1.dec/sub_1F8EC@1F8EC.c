char *__fastcall sub_1F8EC(const char *a1, int a2)
{
  unsigned int v3; // r0
  _BYTE v5[24]; // [sp+4h] [bp-1Ch] BYREF

  v3 = sub_6BCB0(v5, 24, "%lu", a2);
  if ( v3 > 0x17 )
    sub_6E8F0("ntp_control.c", 1682, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
  return sub_1EE84(a1, (int)v5, v3);
}
