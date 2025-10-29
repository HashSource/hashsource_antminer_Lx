int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_166218 )
  {
    v0 = dword_16621C;
  }
  else
  {
    v0 = pwm_init(0, 1);
    dword_16621C = v0;
    byte_166218 = 1;
  }
  pwm_get(v0, (int)&v2);
  return v2;
}
