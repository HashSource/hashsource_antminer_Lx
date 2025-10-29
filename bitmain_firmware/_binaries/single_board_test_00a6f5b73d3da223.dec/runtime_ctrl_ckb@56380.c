void *runtime_ctrl_ckb()
{
  void *dest; // [sp+4Ch] [bp+4Ch]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1ED7E0, 0x310u);
  return dest;
}
