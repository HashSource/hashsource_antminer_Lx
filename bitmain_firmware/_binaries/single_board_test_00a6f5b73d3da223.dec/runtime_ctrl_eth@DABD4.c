void *runtime_ctrl_eth()
{
  void *dest; // [sp+84h] [bp+84h]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1EEFA0, 0x310u);
  return dest;
}
