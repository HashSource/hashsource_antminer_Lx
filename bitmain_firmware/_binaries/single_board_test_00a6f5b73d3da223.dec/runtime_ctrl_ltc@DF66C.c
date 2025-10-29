void *runtime_ctrl_ltc()
{
  void *dest; // [sp+74h] [bp+74h]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1EF330, 0x310u);
  return dest;
}
