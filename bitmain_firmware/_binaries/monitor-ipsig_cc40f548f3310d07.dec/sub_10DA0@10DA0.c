int __fastcall sub_10DA0(int a1)
{
  double v3[8]; // [sp+0h] [bp-44h] BYREF

  memset(v3, 0, sizeof(v3));
  sprintf((char *)v3, "echo %d > /sys/class/gpio/gpio%d/value", a1, 434);
  system((const char *)v3);
  sprintf((char *)v3, "echo %d > /sys/class/gpio/gpio%d/value", a1, 435);
  return system((const char *)v3);
}
