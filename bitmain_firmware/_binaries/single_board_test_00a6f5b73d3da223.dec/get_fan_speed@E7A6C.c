int __fastcall get_fan_speed(_BYTE *a1, _DWORD *a2)
{
  int v5; // [sp+Ch] [bp+Ch] BYREF

  fpga_read(4u, &v5);
  *a2 = (unsigned __int8)v5;
  *a1 = BYTE1(v5) & 7;
  return v5;
}
