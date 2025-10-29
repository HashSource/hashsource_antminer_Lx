unsigned int power_off()
{
  int v0; // r3

  bitmain_power_off();
  LOWORD(v0) = -32196;
  HIWORD(v0) = (unsigned int)&unk_166224 >> 16;
  *(_BYTE *)(v0 + 0x20) = 0;
  return sleep(1u);
}
