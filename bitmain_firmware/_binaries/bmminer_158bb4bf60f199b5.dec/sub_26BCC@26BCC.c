const char *__fastcall sub_26BCC(const char *a1)
{
  int v2; // r4
  int v3; // r0
  const char *result; // r0
  int v5; // [sp+0h] [bp-14h] BYREF
  char s[16]; // [sp+4h] [bp-10h] BYREF

  v2 = 0;
  do
  {
    sprintf(s, "freq%d", v2 + 1);
    v3 = v2++;
    v5 = sub_30580(v3);
    result = sub_43DCC((int)a1, s, (const char *)&v5, 1);
    a1 = result;
  }
  while ( v2 != 16 );
  return result;
}
