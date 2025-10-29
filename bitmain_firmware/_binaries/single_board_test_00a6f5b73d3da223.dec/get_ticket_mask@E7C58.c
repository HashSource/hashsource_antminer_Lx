int get_ticket_mask()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x8Cu, &v1);
  return v1;
}
