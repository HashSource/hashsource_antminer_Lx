int __fastcall get_return_nonce(_DWORD *a1)
{
  int result; // r0
  int v3; // [sp+8h] [bp+8h] BYREF
  int v4; // [sp+Ch] [bp+Ch] BYREF

  fpga_read(0x10u, &v4);
  result = fpga_read(0x14u, &v3);
  *a1 = v4;
  a1[1] = v3;
  return result;
}
