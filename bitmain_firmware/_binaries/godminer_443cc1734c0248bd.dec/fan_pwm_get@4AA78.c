int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_165208 )
  {
    v0 = dword_16520C;
  }
  else
  {
    v0 = pwm_init(0, 1);
    dword_16520C = v0;
    byte_165208 = 1;
  }
  pwm_get(v0, (int)&v2);
  return v2;
}
