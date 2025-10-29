void *runtime_ctrl_grin32()
{
  void *dest; // [sp+CCh] [bp+CCh]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1ED4A0, 0x310u);
  return dest;
}
