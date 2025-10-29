void *runtime_ctrl_vbk()
{
  void *dest; // [sp+3Ch] [bp+3Ch]

  dest = calloc(1u, 0x310u);
  memcpy(dest, &off_1EE530, 0x310u);
  return dest;
}
