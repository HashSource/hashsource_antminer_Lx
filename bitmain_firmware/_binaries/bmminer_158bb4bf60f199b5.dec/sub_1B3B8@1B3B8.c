const char *__fastcall sub_1B3B8(int a1, char a2)
{
  int v3; // r5
  int v4; // r4
  const char *v5; // r6
  const char *v6; // r2
  const char *result; // r0
  char s[16]; // [sp+4h] [bp-10h] BYREF

  v3 = 12822;
  v4 = 0;
  v5 = sub_43D6C(a1, "fan_num", (const char *)(dword_A0D68 + 12936), a2);
  do
  {
    sprintf(s, "fan%d", ++v4);
    v6 = (const char *)(dword_A0D68 + v3);
    v3 += 4;
    result = sub_43DEC((int)v5, s, v6, a2);
    v5 = result;
  }
  while ( v4 != 16 );
  return result;
}
