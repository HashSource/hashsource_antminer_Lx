int __fastcall set_ticket_mask(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x8Cu, a1);
  return fpga_read(0x8Cu, &v2);
}
