char *__fastcall sub_1FA74(const char *a1, _DWORD *a2)
{
  unsigned int v3; // r0
  _BYTE v5[24]; // [sp+Ch] [bp-1Ch] BYREF

  v3 = sub_6BCB0(v5, 24, "0x%08lx.%08lx", *a2, a2[1]);
  if ( v3 > 0x17 )
    sub_6E8F0("ntp_control.c", 1789, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
  return sub_1EE84(a1, (int)v5, v3);
}
