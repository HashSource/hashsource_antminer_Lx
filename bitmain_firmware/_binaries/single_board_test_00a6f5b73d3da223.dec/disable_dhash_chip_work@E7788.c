__int64 disable_dhash_chip_work()
{
  int dhash_acc_control; // r0
  int v2; // [sp+4h] [bp+4h] BYREF

  v2 = 0;
  fpga_read(0xC0u, &v2);
  v2 &= ~0x400000u;
  fpga_write(0xC0u, v2);
  dhash_acc_control = get_dhash_acc_control();
  return set_dhash_acc_control(dhash_acc_control & 0xFFFFFFBF);
}
