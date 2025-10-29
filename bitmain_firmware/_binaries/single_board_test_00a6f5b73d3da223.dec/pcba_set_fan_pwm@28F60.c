int __fastcall pcba_set_fan_pwm(int a1)
{
  int v1; // r3
  int v3; // [sp+Ch] [bp+Ch]

  if ( a1 <= 2 || a1 > 100 )
  {
    puts("warning: fan speed range only support [3, 100], otherwise set default value 50");
    v3 = 3276850;
    fpga_write(0x84u, 3276850);
  }
  else
  {
    v3 = (unsigned __int16)(100 - a1) | (a1 << 16);
    fpga_write(0x84u, v3);
  }
  fpga_write(0xA0u, v3);
  return v1;
}
