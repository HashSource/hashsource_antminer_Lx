int __fastcall set_pre_header_hash(int result)
{
  int v1; // [sp+4h] [bp+4h]
  int i; // [sp+Ch] [bp+Ch]

  v1 = result;
  for ( i = 0; i <= 7; ++i )
    result = fpga_write(4 * (i + 80), *(_DWORD *)(4 * i + v1));
  return result;
}
