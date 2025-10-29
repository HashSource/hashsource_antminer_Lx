void *runtime_ctrl_dcr()
{
  void *dest; // [sp+54h] [bp+54h]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1EDEB0, 0x310u);
  return dest;
}
