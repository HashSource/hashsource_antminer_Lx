int __fastcall set_TW_write_command(int result)
{
  int v1; // [sp+4h] [bp+4h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  v1 = result;
  for ( i = 0; i <= 0xC; ++i )
    result = fpga_write(4 * (i + 16), *(_DWORD *)(4 * i + v1));
  return result;
}
