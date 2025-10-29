const char *__fastcall sub_1B6E0(const char *a1)
{
  int v2; // r4
  int v3; // r3
  const char *result; // r0
  double v5; // [sp+0h] [bp-18h] BYREF
  char s[12]; // [sp+Ch] [bp-Ch] BYREF

  v2 = 0;
  v5 = (double)sub_30578();
  do
  {
    sprintf(s, "freq_avg%d", ++v2, v3, v5);
    v5 = (double)(int)(v5 * 100.0) / 100.0;
    result = sub_43F2C((int)a1, s, (const char *)&v5, 1);
    a1 = result;
  }
  while ( v2 != 16 );
  return result;
}
