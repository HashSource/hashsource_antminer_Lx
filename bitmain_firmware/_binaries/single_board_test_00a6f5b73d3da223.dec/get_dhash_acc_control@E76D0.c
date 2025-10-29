int get_dhash_acc_control()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  v1 = 0;
  fpga_read(0x100u, &v1);
  return v1;
}
