int __fastcall sub_10910(int a1)
{
  int v1; // r5
  double v3[8]; // [sp+0h] [bp-44h] BYREF

  v1 = a1;
  if ( a1 )
    v1 = 1;
  memset(v3, 0, sizeof(v3));
  sprintf((char *)v3, "echo %d > /sys/class/gpio/gpio%d/value", v1, 434);
  system((const char *)v3);
  sprintf((char *)v3, "echo %d > /sys/class/gpio/gpio%d/value", v1, 435);
  return system((const char *)v3);
}
