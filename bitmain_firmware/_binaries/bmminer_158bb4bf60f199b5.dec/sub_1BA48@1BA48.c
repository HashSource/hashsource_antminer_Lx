const char *__fastcall sub_1BA48(const char *a1)
{
  int v2; // r4
  const char *result; // r0
  double v4; // [sp+0h] [bp-2Ch] BYREF
  char s[36]; // [sp+8h] [bp-24h] BYREF

  v2 = 0;
  do
  {
    ++v2;
    v4 = 0.0;
    sprintf(s, "chain_rateideal%d", v2);
    v4 = (double)(int)((double)sub_30578() / 1000.0 * 100.0) / 100.0;
    result = sub_43F2C((int)a1, s, (const char *)&v4, 1);
    a1 = result;
  }
  while ( v2 != 16 );
  return result;
}
