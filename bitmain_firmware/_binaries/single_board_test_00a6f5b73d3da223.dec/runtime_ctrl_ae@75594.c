void *runtime_ctrl_ae()
{
  void *dest; // [sp+32Ch] [bp+32Ch]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1EEBB0, 0x310u);
  return dest;
}
