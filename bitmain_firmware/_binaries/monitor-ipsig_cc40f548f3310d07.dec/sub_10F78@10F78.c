int __fastcall sub_10F78(int a1)
{
  int v1; // r6
  int v2; // r4
  int result; // r0
  double v4[8]; // [sp+0h] [bp-40h] BYREF

  v1 = 435;
  v2 = 3;
  if ( !a1 )
    v1 = 434;
  memset(v4, 0, sizeof(v4));
  do
  {
    sprintf((char *)v4, "echo %d > /sys/class/gpio/gpio%d/value", 1, v1);
    system((const char *)v4);
    usleep(0xC350u);
    sprintf((char *)v4, "echo %d > /sys/class/gpio/gpio%d/value", 0, v1);
    system((const char *)v4);
    result = usleep(0xC350u);
    --v2;
  }
  while ( v2 );
  return result;
}
